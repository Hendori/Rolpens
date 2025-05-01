
/* EditorImagePreviewPlugin::generate_small_preview_automatically() const */

undefined8 EditorImagePreviewPlugin::generate_small_preview_automatically(void)

{
  return 1;
}



/* EditorTexturePreviewPlugin::handles(String const&) const */

undefined4 __thiscall
EditorTexturePreviewPlugin::handles(EditorTexturePreviewPlugin *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"Texture",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100096;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_00100096:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorBitmapPreviewPlugin::handles(String const&) const */

undefined4 __thiscall
EditorBitmapPreviewPlugin::handles(EditorBitmapPreviewPlugin *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"BitMap",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100146;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_00100146:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPackedScenePreviewPlugin::handles(String const&) const */

undefined4 __thiscall
EditorPackedScenePreviewPlugin::handles(EditorPackedScenePreviewPlugin *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"PackedScene",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001001f6;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_001001f6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMaterialPreviewPlugin::handles(String const&) const */

undefined4 __thiscall
EditorMaterialPreviewPlugin::handles(EditorMaterialPreviewPlugin *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"Material",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001002a6;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_001002a6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorScriptPreviewPlugin::handles(String const&) const */

undefined4 __thiscall
EditorScriptPreviewPlugin::handles(EditorScriptPreviewPlugin *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"Script",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100356;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_00100356:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioStreamPreviewPlugin::handles(String const&) const */

undefined4 __thiscall
EditorAudioStreamPreviewPlugin::handles(EditorAudioStreamPreviewPlugin *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"AudioStream",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100406;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_00100406:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMeshPreviewPlugin::handles(String const&) const */

undefined4 __thiscall
EditorMeshPreviewPlugin::handles(EditorMeshPreviewPlugin *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"Mesh",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001004b6;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_001004b6:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFontPreviewPlugin::handles(String const&) const */

undefined4 __thiscall
EditorFontPreviewPlugin::handles(EditorFontPreviewPlugin *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"Font",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100566;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_00100566:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorGradientPreviewPlugin::handles(String const&) const */

undefined4 __thiscall
EditorGradientPreviewPlugin::handles(EditorGradientPreviewPlugin *this,String *param_1)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,"Gradient",false);
  StringName::StringName((StringName *)&local_30,param_1,false);
  uVar1 = ClassDB::is_parent_class((StringName *)&local_30,(StringName *)&local_28);
  if (StringName::configured != '\0') {
    if (local_30 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100616;
    }
    if (local_28 != 0) {
      StringName::unref();
    }
  }
LAB_00100616:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImagePreviewPlugin::handles(String const&) const */

void __thiscall EditorImagePreviewPlugin::handles(EditorImagePreviewPlugin *this,String *param_1)

{
  String::operator==(param_1,"Image");
  return;
}



/* EditorMaterialPreviewPlugin::abort() */

void EditorMaterialPreviewPlugin::abort(void)

{
  EditorResourcePreviewGenerator::DrawRequester::abort();
  return;
}



/* EditorMeshPreviewPlugin::abort() */

void EditorMeshPreviewPlugin::abort(void)

{
  EditorResourcePreviewGenerator::DrawRequester::abort();
  return;
}



/* EditorFontPreviewPlugin::abort() */

void EditorFontPreviewPlugin::abort(void)

{
  EditorResourcePreviewGenerator::DrawRequester::abort();
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



/* void Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<ImageTexture> const&) [clone .isra.0] */

void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar1 = *(Object **)this;
  if (param_1 == (Ref *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (pOVar3 == pOVar1) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* EditorPackedScenePreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const
    */

Ref * EditorPackedScenePreviewPlugin::generate(Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*(long *)param_2 + 0x160);
  Resource::get_path();
  (*pcVar2)(param_1,param_2,&local_48);
  lVar3 = local_48;
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_48 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFontPreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const */

Ref * EditorFontPreviewPlugin::generate(Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Resource::get_path();
  cVar3 = FileAccess::exists((String *)&local_38);
  if (cVar3 == '\0') {
    *(undefined8 *)param_1 = 0;
  }
  else {
    (**(code **)(*(long *)param_2 + 0x160))(param_1,param_2,&local_38);
  }
  lVar2 = local_38;
  if (local_38 != 0) {
    LOCK();
    plVar1 = (long *)(local_38 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* post_process_preview(Ref<Image>) */

void post_process_preview(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  Color *pCVar7;
  int iVar8;
  uint uVar9;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = Image::get_format();
  if (iVar2 != 5) {
    Image::convert(*param_1,5);
  }
  iVar3 = Image::get_width();
  iVar4 = Image::get_height();
  iVar2 = iVar4;
  if (iVar3 <= iVar4) {
    iVar2 = iVar3;
  }
  iVar8 = iVar2 + 0x1f;
  if (-1 < iVar2) {
    iVar8 = iVar2;
  }
  iVar8 = iVar8 >> 5;
  if (0x1f < iVar2) {
    iVar2 = 0;
    do {
      pCVar7 = (Color *)0x0;
      iVar5 = (iVar3 + -1) - iVar2;
      do {
        Image::set_pixel((int)*param_1,iVar2,pCVar7);
        Image::set_pixel((int)*param_1,iVar5,pCVar7);
        uVar9 = (iVar4 + -1) - (int)pCVar7;
        uVar6 = (int)pCVar7 + 1;
        pCVar7 = (Color *)(ulong)uVar6;
        Image::set_pixel((int)*param_1,iVar5,(Color *)(ulong)uVar9);
        Image::set_pixel((int)*param_1,iVar2,(Color *)(ulong)uVar9);
        if (iVar8 <= (int)uVar6) break;
      } while (iVar8 * iVar8 <
               (int)((uVar6 - iVar8) * (uVar6 - iVar8) + (iVar2 - iVar8) * (iVar2 - iVar8)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar8);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMaterialPreviewPlugin::~EditorMaterialPreviewPlugin() */

void __thiscall
EditorMaterialPreviewPlugin::~EditorMaterialPreviewPlugin(EditorMaterialPreviewPlugin *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00111da8;
  lVar2 = RenderingServer::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("~EditorMaterialPreviewPlugin","editor/plugins/editor_preview_plugins.cpp",
                     0x1e1,"Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
  }
  else {
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x200));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x208));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x210));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x220));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x228));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x230));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x238));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x240));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x248));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x1f8));
  }
  *(undefined ***)(this + 0x250) = &PTR__initialize_classv_00111608;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x3c8));
  if (iVar1 == 0) {
    if (*(int *)(this + 0x424) != 0) {
      _err_print_error("~Semaphore","./core/os/semaphore.h",0x81,
                       "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup."
                       ,0,1);
      std::condition_variable::condition_variable((condition_variable *)(this + 0x3f0));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3c8));
    std::condition_variable::~condition_variable((condition_variable *)(this + 0x3f0));
    Object::~Object((Object *)(this + 0x250));
    EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator
              ((EditorResourcePreviewGenerator *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* EditorMaterialPreviewPlugin::~EditorMaterialPreviewPlugin() */

void __thiscall
EditorMaterialPreviewPlugin::~EditorMaterialPreviewPlugin(EditorMaterialPreviewPlugin *this)

{
  ~EditorMaterialPreviewPlugin(this);
  operator_delete(this,0x428);
  return;
}



/* EditorMeshPreviewPlugin::~EditorMeshPreviewPlugin() */

void __thiscall EditorMeshPreviewPlugin::~EditorMeshPreviewPlugin(EditorMeshPreviewPlugin *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00112258;
  lVar2 = RenderingServer::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("~EditorMeshPreviewPlugin","editor/plugins/editor_preview_plugins.cpp",0x341,
                     "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
  }
  else {
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x200));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x208));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x218));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x220));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x228));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x230));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x238));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x240));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x1f8));
  }
  *(undefined ***)(this + 0x248) = &PTR__initialize_classv_00111608;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x3c0));
  if (iVar1 == 0) {
    if (*(int *)(this + 0x41c) != 0) {
      _err_print_error("~Semaphore","./core/os/semaphore.h",0x81,
                       "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup."
                       ,0,1);
      std::condition_variable::condition_variable((condition_variable *)(this + 1000));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x3c0));
    std::condition_variable::~condition_variable((condition_variable *)(this + 1000));
    Object::~Object((Object *)(this + 0x248));
    EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator
              ((EditorResourcePreviewGenerator *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* EditorMeshPreviewPlugin::~EditorMeshPreviewPlugin() */

void __thiscall EditorMeshPreviewPlugin::~EditorMeshPreviewPlugin(EditorMeshPreviewPlugin *this)

{
  ~EditorMeshPreviewPlugin(this);
  operator_delete(this,0x420);
  return;
}



/* EditorFontPreviewPlugin::~EditorFontPreviewPlugin() */

void __thiscall EditorFontPreviewPlugin::~EditorFontPreviewPlugin(EditorFontPreviewPlugin *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001123e8;
  lVar2 = RenderingServer::get_singleton();
  if (lVar2 == 0) {
    _err_print_error("~EditorFontPreviewPlugin","editor/plugins/editor_preview_plugins.cpp",0x39e,
                     "Parameter \"RenderingServer::get_singleton()\" is null.",0,0);
  }
  else {
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x210));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x208));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x11b0))(plVar3,*(undefined8 *)(this + 0x1f8));
  }
  *(undefined ***)(this + 0x218) = &PTR__initialize_classv_00111608;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x390));
  if (iVar1 == 0) {
    if (*(int *)(this + 0x3ec) != 0) {
      _err_print_error("~Semaphore","./core/os/semaphore.h",0x81,
                       "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup."
                       ,0,1);
      std::condition_variable::condition_variable((condition_variable *)(this + 0x3b8));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x390));
    std::condition_variable::~condition_variable((condition_variable *)(this + 0x3b8));
    Object::~Object((Object *)(this + 0x218));
    EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator
              ((EditorResourcePreviewGenerator *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* EditorFontPreviewPlugin::~EditorFontPreviewPlugin() */

void __thiscall EditorFontPreviewPlugin::~EditorFontPreviewPlugin(EditorFontPreviewPlugin *this)

{
  ~EditorFontPreviewPlugin(this);
  operator_delete(this,0x3f0);
  return;
}



/* EditorTexturePreviewPlugin::EditorTexturePreviewPlugin() */

void __thiscall
EditorTexturePreviewPlugin::EditorTexturePreviewPlugin(EditorTexturePreviewPlugin *this)

{
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined ***)this = &PTR__initialize_classv_00111768;
  return;
}



/* EditorImagePreviewPlugin::EditorImagePreviewPlugin() */

void __thiscall EditorImagePreviewPlugin::EditorImagePreviewPlugin(EditorImagePreviewPlugin *this)

{
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined ***)this = &PTR__initialize_classv_001118f8;
  return;
}



/* EditorBitmapPreviewPlugin::EditorBitmapPreviewPlugin() */

void __thiscall
EditorBitmapPreviewPlugin::EditorBitmapPreviewPlugin(EditorBitmapPreviewPlugin *this)

{
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined ***)this = &PTR__initialize_classv_00111a88;
  return;
}



/* EditorPackedScenePreviewPlugin::EditorPackedScenePreviewPlugin() */

void __thiscall
EditorPackedScenePreviewPlugin::EditorPackedScenePreviewPlugin(EditorPackedScenePreviewPlugin *this)

{
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined ***)this = &PTR__initialize_classv_00111c18;
  return;
}



/* EditorScriptPreviewPlugin::EditorScriptPreviewPlugin() */

void __thiscall
EditorScriptPreviewPlugin::EditorScriptPreviewPlugin(EditorScriptPreviewPlugin *this)

{
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined ***)this = &PTR__initialize_classv_00111f38;
  return;
}



/* EditorAudioStreamPreviewPlugin::EditorAudioStreamPreviewPlugin() */

void __thiscall
EditorAudioStreamPreviewPlugin::EditorAudioStreamPreviewPlugin(EditorAudioStreamPreviewPlugin *this)

{
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined ***)this = &PTR__initialize_classv_001120c8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorMeshPreviewPlugin::EditorMeshPreviewPlugin() */

void __thiscall EditorMeshPreviewPlugin::EditorMeshPreviewPlugin(EditorMeshPreviewPlugin *this)

{
  code *pcVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  long local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  Basis local_a8 [16];
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined ***)this = &PTR__initialize_classv_00112258;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x228) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x238) = (undefined1  [16])0x0;
  Object::Object((Object *)(this + 0x248));
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined ***)(this + 0x248) = &PTR__initialize_classv_00111608;
  *(undefined1 (*) [16])(this + 0x3c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3d0) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 1000));
  *(undefined8 *)(this + 0x418) = 0;
  plVar3 = (long *)RenderingServer::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0xce8))(plVar3);
  *(undefined8 *)(this + 0x1f8) = uVar4;
  plVar3 = (long *)RenderingServer::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0x990))(plVar3);
  *(undefined8 *)(this + 0x208) = uVar4;
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0x9f8))(plVar3,*(undefined8 *)(this + 0x208),0);
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0xa40))(plVar3,*(undefined8 *)(this + 0x208),*(undefined8 *)(this + 0x1f8))
  ;
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0x9a0))(plVar3,*(undefined8 *)(this + 0x208),0x80,0x80);
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0xa60))(plVar3,*(undefined8 *)(this + 0x208),1);
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0x9a8))(plVar3,*(undefined8 *)(this + 0x208),1);
  plVar3 = (long *)RenderingServer::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0xa18))(plVar3,*(undefined8 *)(this + 0x208));
  *(undefined8 *)(this + 0x210) = uVar4;
  plVar3 = (long *)RenderingServer::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0x940))(plVar3);
  *(undefined8 *)(this + 0x238) = uVar4;
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0xa38))(plVar3,*(undefined8 *)(this + 0x208),*(undefined8 *)(this + 0x238))
  ;
  plVar3 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0x960);
  local_a8 = (Basis  [16])ZEXT416(_LC38);
  local_98 = ZEXT416(_LC38);
  local_b8 = 0;
  local_b0 = 0x40400000;
  local_88 = 0x3f800000;
  Transform3D::Transform3D((Transform3D *)local_78,local_a8,(Vector3 *)&local_b8);
  (*pcVar1)(plVar3,*(undefined8 *)(this + 0x238),(Transform3D *)local_78);
  plVar3 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar3 + 0x950))(plVar3,*(undefined8 *)(this + 0x238));
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_d0,"rendering/lights_and_shadows/use_physical_light_units",false);
  ProjectSettings::get_setting_with_override((StringName *)local_78);
  bVar2 = Variant::operator_cast_to_bool((Variant *)local_78);
  if ((&Variant::needs_deinit)[(int)local_78._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (bVar2) {
    plVar3 = (long *)RenderingServer::get_singleton();
    uVar4 = (**(code **)(*plVar3 + 0xcb8))(plVar3);
    *(undefined8 *)(this + 0x240) = uVar4;
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0xcd8))(plVar3,*(undefined8 *)(this + 0x240));
    plVar3 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar3 + 0x978))
              (plVar3,*(undefined8 *)(this + 0x238),*(undefined8 *)(this + 0x240));
  }
  plVar3 = (long *)RenderingServer::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3);
  *(undefined8 *)(this + 0x218) = uVar4;
  plVar3 = (long *)RenderingServer::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0xd10))
                    (plVar3,*(undefined8 *)(this + 0x218),*(undefined8 *)(this + 0x1f8));
  *(undefined8 *)(this + 0x220) = uVar4;
  plVar3 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0xd40);
  local_c8 = _LC46;
  local_78 = ZEXT416(_LC38);
  local_68 = ZEXT416(_LC38);
  local_b8 = _LC43;
  local_58 = 0x3f800000;
  local_54 = 0;
  local_4c = 0;
  local_b0 = 0;
  local_c0 = 0xbf800000;
  Transform3D::looking_at(local_a8,(Transform3D *)local_78,SUB81(&local_c8,0));
  (*pcVar1)(plVar3,*(undefined8 *)(this + 0x220),local_a8);
  plVar3 = (long *)RenderingServer::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0x4c0))(plVar3);
  *(undefined8 *)(this + 0x228) = uVar4;
  plVar3 = (long *)RenderingServer::get_singleton();
  local_78._8_8_ = ram0x00112a58;
  local_78[0] = _LC47[0];
  local_78[1] = _LC47[1];
  local_78[2] = _LC47[2];
  local_78[3] = _LC47[3];
  local_78[4] = _LC47[4];
  local_78[5] = _LC47[5];
  local_78[6] = _LC47[6];
  local_78[7] = _LC47[7];
  (**(code **)(*plVar3 + 0x4d8))(plVar3,*(undefined8 *)(this + 0x228),(Transform3D *)local_78);
  plVar3 = (long *)RenderingServer::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0xd10))
                    (plVar3,*(undefined8 *)(this + 0x228),*(undefined8 *)(this + 0x1f8));
  *(undefined8 *)(this + 0x230) = uVar4;
  plVar3 = (long *)RenderingServer::get_singleton();
  pcVar1 = *(code **)(*plVar3 + 0xd40);
  local_c8 = _LC43;
  local_78 = ZEXT416(_LC38);
  local_68 = ZEXT416(_LC38);
  local_58 = 0x3f800000;
  local_54 = 0;
  local_4c = 0;
  local_b8 = 0;
  local_b0 = 0x3f800000;
  local_c0 = 0;
  Transform3D::looking_at(local_a8,(Transform3D *)local_78,SUB81(&local_c8,0));
  (*pcVar1)(plVar3,*(undefined8 *)(this + 0x230),local_a8);
  plVar3 = (long *)RenderingServer::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0xd18))(plVar3);
  *(undefined8 *)(this + 0x200) = uVar4;
  plVar3 = (long *)RenderingServer::get_singleton();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00101a27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xd28))
              (plVar3,*(undefined8 *)(this + 0x200),*(undefined8 *)(this + 0x1f8));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFontPreviewPlugin::EditorFontPreviewPlugin() */

void __thiscall EditorFontPreviewPlugin::EditorFontPreviewPlugin(EditorFontPreviewPlugin *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined ***)this = &PTR__initialize_classv_001123e8;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  Object::Object((Object *)(this + 0x218));
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined ***)(this + 0x218) = &PTR__initialize_classv_00111608;
  *(undefined1 (*) [16])(this + 0x390) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3a0) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x3b8));
  *(undefined8 *)(this + 1000) = 0;
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0x990))(plVar1);
  *(undefined8 *)(this + 0x1f8) = uVar2;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x9f8))(plVar1,*(undefined8 *)(this + 0x1f8),0);
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x9a0))(plVar1,*(undefined8 *)(this + 0x1f8),0x80,0x80);
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0x9a8))(plVar1,*(undefined8 *)(this + 0x1f8),1);
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0xa18))(plVar1,*(undefined8 *)(this + 0x1f8));
  *(undefined8 *)(this + 0x200) = uVar2;
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0xe20))(plVar1);
  *(undefined8 *)(this + 0x208) = uVar2;
  plVar1 = (long *)RenderingServer::get_singleton();
  uVar2 = (**(code **)(*plVar1 + 0xe78))(plVar1);
  *(undefined8 *)(this + 0x210) = uVar2;
  plVar1 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar1 + 0xa48))(plVar1,*(undefined8 *)(this + 0x1f8),*(undefined8 *)(this + 0x208))
  ;
  plVar1 = (long *)RenderingServer::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00101c27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe80))(plVar1,*(undefined8 *)(this + 0x210),*(undefined8 *)(this + 0x208))
  ;
  return;
}



/* EditorGradientPreviewPlugin::EditorGradientPreviewPlugin() */

void __thiscall
EditorGradientPreviewPlugin::EditorGradientPreviewPlugin(EditorGradientPreviewPlugin *this)

{
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined ***)this = &PTR__initialize_classv_00112578;
  return;
}



/* EditorResourcePreviewGenerator::initialize_class() [clone .part.0] */

void EditorResourcePreviewGenerator::initialize_class(void)

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
    if ((code *)PTR__bind_methods_00117008 != RefCounted::_bind_methods) {
      RefCounted::_bind_methods();
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "EditorResourcePreviewGenerator";
  local_70 = 0;
  local_50 = 0x1e;
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
    EditorResourcePreviewGenerator::_bind_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

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
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this)

{
  size_t __n;
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  __n = *(size_t *)(*(long *)this + -8);
  uVar3 = 0x10;
  if (__n != 0) {
    uVar3 = __n - 1 | __n - 1 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    uVar3 = (uVar3 | uVar3 >> 0x20) + 0x11;
  }
  puVar2 = (undefined8 *)Memory::alloc_static(uVar3,false);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 1;
    puVar2[1] = __n;
    memcpy(puVar2 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar2 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorScriptPreviewPlugin::_generate_from_source_code(ScriptLanguage const*, String const&,
   Vector2 const&, Dictionary&) const */

EditorScriptPreviewPlugin * __thiscall
EditorScriptPreviewPlugin::_generate_from_source_code
          (EditorScriptPreviewPlugin *this,ScriptLanguage *param_1,String *param_2,Vector2 *param_3,
          Dictionary *param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [12];
  undefined8 uVar10;
  undefined8 uVar11;
  char cVar12;
  int iVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  CowData<char32_t> *pCVar20;
  long lVar21;
  CowData<char32_t> *pCVar22;
  uint *puVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long in_FS_OFFSET;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint local_fc;
  long *local_f8;
  Color *local_f0;
  Ref *local_e8 [2];
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_3 == 0) || (*(uint *)(*(long *)param_3 + -8) < 2)) {
    *(undefined8 *)this = 0;
    goto LAB_0010221f;
  }
  local_f8 = (long *)0x0;
  if (param_2 == (String *)0x0) {
    local_d8 = (undefined1  [16])0x0;
    local_b8 = _LC74;
    local_88 = _LC74;
    local_c8 = (undefined1  [16])0x0;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
  }
  else {
    (**(code **)(*(long *)param_2 + 0x178))(param_2,&local_f8);
    local_d8 = (undefined1  [16])0x0;
    local_c8 = (undefined1  [16])0x0;
    local_b8 = _LC74;
    local_88 = _LC74;
    local_a8 = (undefined1  [16])0x0;
    local_98 = (undefined1  [16])0x0;
    if ((local_f8 != (long *)0x0) && (lVar16 = *local_f8, lVar16 != 0)) {
      do {
        while (cVar12 = (**(code **)(*(long *)param_2 + 0x180))(param_2,lVar16), cVar12 == '\0') {
          HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                    ((String *)local_e8);
          lVar16 = *(long *)(lVar16 + 8);
          if (lVar16 == 0) goto LAB_00102393;
        }
        HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                  ((String *)local_e8);
        lVar16 = *(long *)(lVar16 + 8);
      } while (lVar16 != 0);
    }
  }
LAB_00102393:
  fVar29 = *(float *)param_4;
  if (*(float *)param_4 <= *(float *)(param_4 + 4)) {
    fVar29 = *(float *)(param_4 + 4);
  }
  iVar25 = (int)fVar29;
  Image::create_empty((Ref<Image> *)&local_f0,iVar25,iVar25,0,5);
  local_e8[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_e8,"text_editor/theme/highlighting/background_color");
  _EDITOR_GET((String *)&local_58);
  _local_78 = Variant::operator_cast_to_Color((Variant *)&local_58);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  local_e8[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_e8,"text_editor/theme/highlighting/keyword_color");
  _EDITOR_GET((String *)&local_58);
  auVar32 = Variant::operator_cast_to_Color((Variant *)&local_58);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  local_e8[0] = (Ref *)0x0;
  String::parse_latin1
            ((String *)local_e8,"text_editor/theme/highlighting/control_flow_keyword_color");
  _EDITOR_GET((String *)&local_58);
  auVar33 = Variant::operator_cast_to_Color((Variant *)&local_58);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  local_e8[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_e8,"text_editor/theme/highlighting/text_color");
  _EDITOR_GET((String *)&local_58);
  auVar34 = Variant::operator_cast_to_Color((Variant *)&local_58);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  local_e8[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_e8,"text_editor/theme/highlighting/symbol_color");
  _EDITOR_GET((String *)&local_58);
  auVar35 = Variant::operator_cast_to_Color((Variant *)&local_58);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  local_e8[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_e8,"text_editor/theme/highlighting/comment_color");
  _EDITOR_GET((String *)&local_58);
  auVar36 = Variant::operator_cast_to_Color((Variant *)&local_58);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  local_e8[0] = (Ref *)0x0;
  String::parse_latin1((String *)local_e8,"text_editor/theme/highlighting/doc_comment_color");
  _EDITOR_GET((String *)&local_58);
  auVar37 = Variant::operator_cast_to_Color((Variant *)&local_58);
  if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  auVar9 = SUB1612(_local_78,0);
  if (local_70._4_4_ == 0.0) {
    auVar9 = SUB1612(ZEXT816(0),0);
LAB_0010266a:
    local_70._4_4_ = _LC73;
  }
  else if ((double)local_70._4_4_ <= __LC82) goto LAB_0010266a;
  local_78 = auVar9._0_8_;
  local_70._0_4_ = auVar9._8_4_;
  Image::fill(local_f0);
  lVar16 = *(long *)param_3;
  iVar13 = iVar25 + 7;
  if (-1 < iVar25) {
    iVar13 = iVar25;
  }
  iVar13 = iVar13 >> 3;
  if (lVar16 == 0) {
LAB_0010290f:
    local_e8[0] = (Ref *)0x0;
    Ref<Image>::operator=((Ref<Image> *)local_e8,(Ref *)local_f0);
    post_process_preview((String *)local_e8);
    Ref<Image>::unref((Ref<Image> *)local_e8);
    ImageTexture::create_from_image((Ref *)local_e8);
    *(undefined8 *)this = 0;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)this,local_e8[0]);
    Ref<ImageTexture>::unref((Ref<ImageTexture> *)local_e8);
    Ref<Image>::unref((Ref<Image> *)&local_f0);
    uVar10 = local_a8._0_8_;
    if ((CowData<char32_t> *)local_a8._0_8_ != (CowData<char32_t> *)0x0) {
      uVar15 = (ulong)local_88._4_4_;
      uVar11 = local_98._8_8_;
      if (local_88._4_4_ != 0) {
        if (*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) != 0) {
          memset((void *)local_98._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) * 4);
        }
        pCVar20 = (CowData<char32_t> *)uVar10;
        do {
          pCVar22 = pCVar20 + 8;
          CowData<char32_t>::_unref(pCVar20);
          pCVar20 = pCVar22;
        } while (pCVar22 != (CowData<char32_t> *)(uVar10 + uVar15 * 8));
      }
      Memory::free_static((void *)uVar10,false);
      Memory::free_static((void *)local_98._0_8_,false);
      Memory::free_static((void *)local_a8._8_8_,false);
      Memory::free_static((void *)uVar11,false);
    }
    uVar10 = local_d8._0_8_;
    if ((CowData<char32_t> *)local_d8._0_8_ != (CowData<char32_t> *)0x0) {
      uVar15 = (ulong)local_b8._4_4_;
      uVar11 = local_c8._8_8_;
      if (local_b8._4_4_ != 0) {
        if (*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) != 0) {
          memset((void *)local_c8._8_8_,0,
                 (ulong)*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) * 4);
        }
        pCVar20 = (CowData<char32_t> *)uVar10;
        do {
          pCVar22 = pCVar20 + 8;
          CowData<char32_t>::_unref(pCVar20);
          pCVar20 = pCVar22;
        } while (pCVar22 != (CowData<char32_t> *)(uVar10 + uVar15 * 8));
      }
      Memory::free_static((void *)uVar10,false);
      Memory::free_static((void *)local_c8._0_8_,false);
      Memory::free_static((void *)local_d8._8_8_,false);
      Memory::free_static((void *)uVar11,false);
    }
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_f8);
LAB_0010221f:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return this;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar27 = 0;
  bVar28 = false;
  lVar26 = 1;
  iVar17 = 0;
  bVar5 = false;
  bVar6 = false;
  bVar8 = false;
  bVar7 = false;
  iVar24 = iVar13;
LAB_001028f9:
  lVar3 = *(long *)(lVar16 + -8);
  iVar18 = (int)lVar3;
  if ((iVar18 == 0) || (iVar18 + -1 <= (int)lVar27)) goto LAB_0010290f;
  lVar21 = lVar27;
  if (lVar3 == lVar27) {
    puVar23 = (uint *)&String::_null;
  }
  else {
    if (lVar3 <= lVar27) goto LAB_00102bb9;
    puVar23 = (uint *)(lVar16 + lVar27 * 4);
  }
  uVar1 = *puVar23;
  if (0x20 < uVar1) {
    if (iVar24 < iVar25) {
      _local_68 = auVar34;
      if (uVar1 != 0x23) {
        if (bVar5) goto LAB_00102b48;
        if (bVar6) goto LAB_00102794;
        if (uVar1 == 0x5f) {
          if (!bVar28) goto LAB_00102ca1;
          goto LAB_00102e3f;
        }
        _local_68 = auVar35;
        if (uVar1 - 0x21 < 0x40) {
          if ((0xfc000000fe007fffU >> ((ulong)(uVar1 - 0x21) & 0x3f) & 1) == 0) {
            if (bVar28) {
              if (0x39 < uVar1) goto LAB_00102e1d;
              _local_68 = auVar34;
              if (0x2f < uVar1) goto LAB_00102e3f;
            }
            else {
              if (0x39 < uVar1) goto LAB_00102eae;
              if (0x2f < uVar1) goto LAB_00102ca1;
            }
            goto LAB_00102c59;
          }
LAB_00102d70:
          bVar8 = false;
          bVar5 = false;
          bVar7 = false;
          goto LAB_001027b8;
        }
        if (uVar1 - 0x7b < 4) goto LAB_00102d70;
        if (bVar28) {
LAB_00102e1d:
          uVar15 = (ulong)(uVar1 - 0x41);
          if (uVar1 - 0x41 < 0x3a) goto LAB_00102e2b;
        }
        else {
LAB_00102eae:
          uVar15 = (ulong)(uVar1 - 0x41);
          if (uVar1 - 0x41 < 0x3a) {
            if ((0x3ffffff43ffffffU >> (uVar15 & 0x3f) & 1) != 0) {
LAB_00102ca1:
              puVar23 = (uint *)(lVar16 + lVar27 * 4);
              do {
                if (lVar3 == lVar21) {
                  puVar14 = (uint *)&String::_null;
                }
                else {
                  puVar14 = puVar23;
                  _local_68 = auVar34;
                  if (lVar3 <= lVar21) goto LAB_00102bb9;
                }
                uVar2 = *puVar14;
                if (uVar2 < 0x3a) {
                  if (uVar2 < 0x30) goto LAB_00102cec;
                }
                else if ((0x39 < uVar2 - 0x41) ||
                        ((0x3ffffff43ffffffU >> ((ulong)(uVar2 - 0x41) & 0x3f) & 1) == 0))
                goto LAB_00102cec;
                lVar21 = lVar21 + 1;
                puVar23 = puVar23 + 1;
              } while( true );
            }
LAB_00102e2b:
            _local_68 = auVar34;
            if ((0x3ffffff43ffffffU >> (uVar15 & 0x3f) & 1) != 0) goto LAB_00102e3f;
          }
        }
LAB_00102c59:
        _local_68 = auVar34;
        if (!bVar7) goto LAB_00102d70;
        bVar8 = false;
        goto LAB_00102c69;
      }
      if ((int)lVar27 < iVar18 + -2) {
        if (lVar3 == lVar26) {
          piVar19 = (int *)&String::_null;
        }
        else {
          lVar21 = lVar26;
          if (lVar3 <= lVar26) {
LAB_00102bb9:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar21,lVar3,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          piVar19 = (int *)(lVar16 + lVar26 * 4);
        }
        if ((*piVar19 != 0x23) || (bVar6 = bVar5, bVar5)) goto LAB_00102b48;
LAB_00102794:
        bVar6 = true;
        bVar5 = false;
        _local_68 = auVar37;
      }
      else {
LAB_00102b48:
        bVar5 = true;
        _local_68 = auVar36;
      }
      goto LAB_001027b8;
    }
    goto LAB_001028e8;
  }
  if (uVar1 != 10) {
    if (uVar1 == 9) {
      bVar8 = false;
      bVar28 = false;
      bVar7 = false;
      iVar24 = iVar24 + 3;
    }
    else {
      bVar8 = false;
      bVar28 = false;
      bVar7 = false;
      iVar24 = iVar24 + 1;
    }
    goto LAB_001028ec;
  }
  iVar17 = iVar17 + 1;
  if ((iVar25 + iVar13 * -2) / 2 <= iVar17) goto LAB_0010290f;
  bVar6 = false;
  bVar5 = false;
  bVar28 = false;
  bVar8 = false;
  bVar7 = false;
  iVar24 = iVar13;
LAB_001028ec:
  lVar27 = lVar27 + 1;
  lVar26 = lVar26 + 1;
  if (lVar16 == 0) goto LAB_0010290f;
  goto LAB_001028f9;
LAB_00102cec:
  _local_68 = auVar34;
  String::substr((int)(String *)local_e8,(int)param_3);
  local_fc = 0;
  cVar12 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
                     ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *)
                      local_d8,(String *)local_e8,&local_fc);
  if (cVar12 == '\0') {
    local_fc = 0;
    cVar12 = HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
                       ((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *)
                        local_a8,(String *)local_e8,&local_fc);
    if (cVar12 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
LAB_00102e3f:
      if (bVar7) goto LAB_00102c69;
      if (bVar8) goto LAB_00102e55;
      bVar6 = false;
      bVar5 = false;
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
      bVar8 = bVar7;
      if (bVar7) goto LAB_00102c69;
LAB_00102e55:
      bVar7 = false;
      bVar5 = false;
      bVar8 = true;
      _local_68 = auVar32;
    }
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
LAB_00102c69:
    bVar7 = true;
    bVar5 = false;
    _local_68 = auVar33;
  }
LAB_001027b8:
  fVar29 = _LC84 * local_60._4_4_;
  fVar31 = _LC38 - fVar29;
  fVar30 = fVar31 * local_70._4_4_ + fVar29;
  local_58 = 0;
  uStack_50 = 0;
  if (fVar30 != 0.0) {
    local_58 = CONCAT44(((float)local_78._4_4_ * local_70._4_4_ * fVar31 +
                        (float)local_68._4_4_ * fVar29) / fVar30,
                        ((float)local_78._0_4_ * local_70._4_4_ * fVar31 +
                        (float)local_68._0_4_ * fVar29) / fVar30);
    uStack_50 = CONCAT44(fVar30,(local_70._4_4_ * (float)local_70 * fVar31 +
                                fVar29 * (float)local_60) / fVar30);
  }
  uVar2 = iVar13 + iVar17 * 2;
  Image::set_pixel((int)local_f0,iVar24,(Color *)(ulong)uVar2);
  Image::set_pixel((int)local_f0,iVar24,(Color *)(ulong)(uVar2 + 1));
  if (uVar1 < 0x3a) {
    bVar28 = 0x2f < uVar1;
    lVar16 = *(long *)param_3;
  }
  else if (uVar1 - 0x41 < 0x3a) {
    bVar28 = (0x3ffffff43ffffffU >> ((ulong)(uVar1 - 0x41) & 0x3f) & 1) != 0;
    lVar16 = *(long *)param_3;
  }
  else {
    bVar28 = false;
    lVar16 = *(long *)param_3;
  }
LAB_001028e8:
  iVar24 = iVar24 + 1;
  goto LAB_001028ec;
}



/* EditorScriptPreviewPlugin::generate_from_path(String const&, Vector2 const&, Dictionary&) const
    */

EditorScriptPreviewPlugin * __thiscall
EditorScriptPreviewPlugin::generate_from_path
          (EditorScriptPreviewPlugin *this,String *param_1,Vector2 *param_2,Dictionary *param_3)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  int local_54;
  long local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::get_file_as_string((String *)&local_50,param_2);
  if (local_54 == 0) {
    String::get_extension();
    pSVar3 = (String *)ScriptServer::get_language_for_extension(local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    _generate_from_source_code(this,(ScriptLanguage *)param_1,pSVar3,(Vector2 *)&local_50,param_3);
  }
  else {
    *(undefined8 *)this = 0;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorScriptPreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const */

EditorScriptPreviewPlugin * __thiscall
EditorScriptPreviewPlugin::generate
          (EditorScriptPreviewPlugin *this,Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  char cVar1;
  Object *pOVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_2 != 0) {
    pOVar2 = (Object *)__dynamic_cast(*(long *)param_2,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x218))(local_48,pOVar2);
        String::strip_edges(SUB81(local_50,0),SUB81(local_48,0));
        CowData<char32_t>::_unref(local_48);
        pSVar3 = (String *)(**(code **)(*(long *)pOVar2 + 0x288))(pOVar2);
        _generate_from_source_code
                  (this,(ScriptLanguage *)param_1,pSVar3,(Vector2 *)local_50,param_3);
        CowData<char32_t>::_unref(local_50);
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar2);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        goto LAB_00103118;
      }
    }
  }
  *(undefined8 *)this = 0;
LAB_00103118:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void Ref<Image>::TEMPNAMEPLACEHOLDERVALUE(Ref<Resource> const&) [clone .isra.0] */

void __thiscall Ref<Image>::operator=(Ref<Image> *this,Ref *param_1)

{
  Image *pIVar1;
  char cVar2;
  Image *pIVar3;
  
  pIVar1 = *(Image **)this;
  if (param_1 == (Ref *)0x0) {
    if (pIVar1 == (Image *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pIVar3 = (Image *)__dynamic_cast(param_1,&Object::typeinfo,&Image::typeinfo,0);
    if (pIVar1 == pIVar3) {
      return;
    }
    *(Image **)this = pIVar3;
    if ((pIVar3 != (Image *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pIVar1 == (Image *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar1);
  return;
}



/* EditorMaterialPreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const */

EditorMaterialPreviewPlugin * __thiscall
EditorMaterialPreviewPlugin::generate
          (EditorMaterialPreviewPlugin *this,Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  code *pcVar1;
  Ref *pRVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long in_FS_OFFSET;
  float fVar9;
  Ref *local_50;
  Ref *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_2 != 0) {
    pOVar5 = (Object *)__dynamic_cast(*(long *)param_2,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar5 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
        iVar4 = (**(code **)(*(long *)pOVar5 + 0x1e0))(pOVar5);
        if (iVar4 == 0) {
          plVar6 = (long *)RenderingServer::get_singleton();
          pcVar1 = *(code **)(*plVar6 + 0x358);
          uVar7 = (**(code **)(*(long *)pOVar5 + 0x1c0))(pOVar5);
          (*pcVar1)(plVar6,*(undefined8 *)(param_1 + 0x200),0,uVar7);
          EditorResourcePreviewGenerator::DrawRequester::request_and_wait
                    (param_1 + 0x250,*(undefined8 *)(param_1 + 0x210));
          plVar6 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar6 + 0x1c0))
                    ((Ref<Image> *)&local_50,plVar6,*(undefined8 *)(param_1 + 0x218));
          plVar6 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar6 + 0x358))(plVar6,*(undefined8 *)(param_1 + 0x200),0,0);
          if (local_50 == (Ref *)0x0) {
            _err_print_error("generate","editor/plugins/editor_preview_plugins.cpp",0x165,
                             "Condition \"img.is_null()\" is true. Returning: Ref<ImageTexture>()",0
                             ,0);
            *(undefined8 *)this = 0;
            Ref<Texture2D>::operator=((Ref<Texture2D> *)this,(Ref *)0x0);
          }
          else {
            uVar8 = 0;
            Image::convert(local_50,5);
            fVar9 = *(float *)param_3;
            if (*(float *)param_3 <= *(float *)(param_3 + 4)) {
              fVar9 = *(float *)(param_3 + 4);
            }
            Image::resize(local_50,CONCAT44(uVar8,(int)fVar9),(int)fVar9,2);
            local_48 = (Ref *)0x0;
            if (local_50 != (Ref *)0x0) {
              local_48 = local_50;
              cVar3 = RefCounted::reference();
              if (cVar3 == '\0') {
                local_48 = (Ref *)0x0;
              }
            }
            post_process_preview((Ref<Image> *)&local_48);
            Ref<Image>::unref((Ref<Image> *)&local_48);
            ImageTexture::create_from_image((Ref *)&local_48);
            *(undefined8 *)this = 0;
            Ref<Texture2D>::operator=((Ref<Texture2D> *)this,local_48);
            if (local_48 != (Ref *)0x0) {
              cVar3 = RefCounted::unreference();
              pRVar2 = local_48;
              if (cVar3 != '\0') {
                cVar3 = predelete_handler((Object *)local_48);
                if (cVar3 != '\0') {
                  (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
                  Memory::free_static(pRVar2,false);
                }
              }
            }
          }
          Ref<Image>::unref((Ref<Image> *)&local_50);
        }
        else {
          *(undefined8 *)this = 0;
        }
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar5);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
        goto LAB_001032f9;
      }
    }
  }
  _err_print_error("generate","editor/plugins/editor_preview_plugins.cpp",0x15b,
                   "Condition \"material.is_null()\" is true. Returning: Ref<Texture2D>()",0,0);
  *(undefined8 *)this = 0;
LAB_001032f9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImagePreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const */

Ref * EditorImagePreviewPlugin::generate(Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  Image *pIVar4;
  Image *pIVar5;
  float *in_RCX;
  undefined4 uVar6;
  undefined8 in_R8;
  undefined8 in_R9;
  Image *pIVar7;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float fVar8;
  float extraout_XMM0_Db;
  float fVar9;
  Image *local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((*(long *)param_3 == 0) ||
       (pIVar4 = (Image *)__dynamic_cast(*(long *)param_3,&Object::typeinfo,&Image::typeinfo,0,in_R8
                                         ,in_R9,0), pIVar4 == (Image *)0x0)) ||
      (cVar2 = RefCounted::reference(), cVar2 == '\0')) || (pIVar4 == (Image *)0x0)) {
    *(undefined8 *)param_1 = 0;
    goto LAB_0010358f;
  }
  cVar2 = Image::is_empty();
  if (cVar2 == '\0') {
    pIVar7 = pIVar4;
    (**(code **)(*(long *)pIVar4 + 0x198))((Ref<Image> *)&local_50,pIVar4,0);
    uVar6 = (undefined4)((ulong)pIVar4 >> 0x20);
    if (local_50 == (Image *)0x0) {
      pIVar4 = pIVar7;
      if (pIVar7 != (Image *)0x0) {
        pIVar5 = (Image *)0x0;
        goto LAB_001037e5;
      }
    }
    else {
      uVar6 = 0;
      pIVar5 = (Image *)__dynamic_cast(local_50,&Object::typeinfo,&Image::typeinfo,0);
      pIVar4 = pIVar7;
      if (pIVar7 != pIVar5) {
        if (pIVar5 == (Image *)0x0) {
          pIVar4 = pIVar5;
          if (pIVar7 != (Image *)0x0) goto LAB_001037e5;
        }
        else {
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            pIVar5 = (Image *)0x0;
          }
          if (pIVar7 != (Image *)0x0) {
LAB_001037e5:
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
              memdelete<Image>(pIVar7);
            }
          }
          pIVar4 = pIVar5;
          if (local_50 == (Image *)0x0) goto LAB_0010366e;
        }
      }
      cVar2 = RefCounted::unreference();
      pIVar7 = local_50;
      if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)local_50), cVar2 != '\0')) {
        (**(code **)(*(long *)pIVar7 + 0x140))(pIVar7);
        uVar6 = 0;
        Memory::free_static(pIVar7,false);
      }
    }
LAB_0010366e:
    Image::clear_mipmaps();
    cVar2 = Image::is_compressed();
    if (cVar2 == '\0') {
      iVar3 = Image::get_format();
      if ((iVar3 != 4) && (iVar3 = Image::get_format(), iVar3 != 5)) {
        uVar6 = 0;
        Image::convert(pIVar4,5);
      }
    }
    else {
      iVar3 = Image::decompress();
      if (iVar3 != 0) {
        *(undefined8 *)param_1 = 0;
        goto LAB_001035d5;
      }
    }
    local_48 = Image::get_size();
    Vector2i::operator_cast_to_Vector2((Vector2i *)&local_48);
    fVar1 = *in_RCX;
    fVar8 = extraout_XMM0_Db;
    fVar9 = extraout_XMM0_Da;
    if (fVar1 < extraout_XMM0_Da) {
      fVar8 = (extraout_XMM0_Db * fVar1) / extraout_XMM0_Da;
      fVar9 = fVar1;
    }
    fVar1 = in_RCX[1];
    if (fVar1 < fVar8) {
      fVar9 = (fVar9 * fVar1) / fVar8;
      fVar8 = fVar1;
    }
    Image::resize(pIVar4,CONCAT44(uVar6,(int)fVar9),(int)fVar8,2);
    local_50 = (Image *)0x0;
    if ((pIVar4 != (Image *)0x0) &&
       (local_50 = pIVar4, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_50 = (Image *)0x0;
    }
    post_process_preview((Ref<Image> *)&local_50);
    Ref<Image>::unref((Ref<Image> *)&local_50);
    ImageTexture::create_from_image((Ref *)&local_50);
    *(undefined8 *)param_1 = 0;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)param_1,(Ref *)local_50);
    if (((local_50 != (Image *)0x0) &&
        (cVar2 = RefCounted::unreference(), pIVar7 = local_50, cVar2 != '\0')) &&
       (cVar2 = predelete_handler((Object *)local_50), cVar2 != '\0')) {
      (**(code **)(*(long *)pIVar7 + 0x140))(pIVar7);
      Memory::free_static(pIVar7,false);
    }
  }
  else {
    *(undefined8 *)param_1 = 0;
  }
LAB_001035d5:
  if ((pIVar4 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    memdelete<Image>(pIVar4);
  }
LAB_0010358f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorMeshPreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const */

EditorMeshPreviewPlugin * __thiscall
EditorMeshPreviewPlugin::generate
          (EditorMeshPreviewPlugin *this,Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  code *pcVar1;
  Ref *pRVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  char cVar5;
  Object *pOVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  Vector3 *pVVar10;
  long lVar11;
  undefined4 uVar12;
  long in_FS_OFFSET;
  float fVar13;
  float fVar14;
  float extraout_XMM0_Da;
  float fVar15;
  float extraout_XMM0_Db;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  Ref *local_128;
  Ref *local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  float local_100;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float local_ec;
  float fStack_e8;
  float local_e4;
  undefined1 local_d8 [8];
  float fStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  float local_88;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_2 != 0) &&
     (pOVar6 = (Object *)__dynamic_cast(*(long *)param_2,&Object::typeinfo,&Mesh::typeinfo,0),
     pOVar6 != (Object *)0x0)) {
    cVar5 = RefCounted::reference();
    if (cVar5 != '\0') {
      plVar7 = (long *)RenderingServer::get_singleton();
      pcVar1 = *(code **)(*plVar7 + 0xd20);
      uVar8 = (**(code **)(*(long *)pOVar6 + 0x1c0))(pOVar6);
      (*pcVar1)(plVar7,*(undefined8 *)(param_1 + 0x200),uVar8);
      (**(code **)(*(long *)pOVar6 + 0x230))(&local_f8,pOVar6);
      _local_a8 = ZEXT416((uint)_LC38);
      fVar13 = _LC84 * local_ec + local_f8;
      fVar15 = _UNK_00112aec * fStack_e8 + fStack_f4;
      fVar22 = local_f8 - fVar13;
      fVar23 = fStack_f4 - fVar15;
      local_58 = 1.0;
      local_54 = 0;
      local_4c = 0.0;
      local_88 = 1.0;
      fVar14 = _LC84 * local_e4 + local_f0;
      fStack_d0 = 0.0;
      local_d8 = (undefined1  [8])_LC43;
      _local_98 = _local_a8;
      _local_78 = _local_a8;
      _local_68 = _local_a8;
      Basis::rotated((Vector3 *)&local_158,_LC89);
      _local_d8 = ZEXT416((uint)_LC38);
      local_58 = local_138;
      uStack_70 = uStack_150;
      local_78 = (undefined1  [8])local_158;
      uStack_60 = uStack_140;
      local_68 = (undefined1  [8])local_148;
      local_b8 = 0x3f800000;
      local_108 = 0x3f800000;
      local_100 = 0.0;
      local_c8 = _local_d8;
      Basis::rotated((Vector2i *)local_a8,_LC91);
      fVar17 = local_58;
      uVar12 = local_a8._0_4_;
      uVar4 = local_a8._4_4_;
      lVar11 = 0;
      local_110 = local_f0 - fVar14;
      local_108 = CONCAT44(fStack_e8 + fVar23,local_ec + fVar22);
      fVar16 = uStack_70._4_4_;
      _local_d8 = ZEXT812(0);
      fVar21 = fStack_a0;
      local_118 = CONCAT44(fVar23,fVar22);
      _local_a8 = ZEXT812(0);
      local_100 = (local_f0 - fVar14) + local_e4;
      local_58 = (float)uStack_70 * fStack_90 + (float)local_68._4_4_ * fStack_8c +
                 local_58 * local_88;
      fVar22 = (float)local_78._0_4_ * fStack_9c;
      fVar23 = fStack_9c * (float)local_78._4_4_;
      fVar18 = fStack_9c * (float)uStack_70;
      fVar19 = fStack_90 * (float)local_78._0_4_;
      fVar20 = fStack_90 * (float)local_78._4_4_;
      local_78._4_4_ =
           (float)local_78._4_4_ * (float)uVar12 + (float)local_68._0_4_ * (float)uVar4 +
           fVar21 * uStack_60._4_4_;
      local_78._0_4_ =
           (float)local_78._0_4_ * (float)uVar12 + uStack_70._4_4_ * (float)uVar4 +
           fVar21 * (float)uStack_60;
      uStack_70._0_4_ =
           (float)uStack_70 * (float)uVar12 + (float)local_68._4_4_ * (float)uVar4 + fVar21 * fVar17
      ;
      uStack_70._4_4_ =
           fVar22 + uStack_70._4_4_ * (float)local_98._0_4_ +
           (float)local_98._4_4_ * (float)uStack_60;
      fVar21 = (float)local_68._0_4_ * fStack_8c;
      local_68._4_4_ =
           (float)local_68._4_4_ * (float)local_98._0_4_ + fVar18 + (float)local_98._4_4_ * fVar17;
      local_68._0_4_ =
           (float)local_68._0_4_ * (float)local_98._0_4_ + fVar23 +
           (float)local_98._4_4_ * uStack_60._4_4_;
      uStack_60._0_4_ = fVar16 * fStack_8c + fVar19 + local_88 * (float)uStack_60;
      uStack_60._4_4_ = fVar21 + fVar20 + local_88 * uStack_60._4_4_;
      pVVar10 = local_78;
      do {
        fVar21 = *(float *)((long)&local_54 + lVar11);
        lVar9 = 0;
        fVar16 = fVar21;
        do {
          fVar23 = *(float *)((long)&local_118 + lVar9) * *(float *)(pVVar10 + lVar9);
          fVar22 = *(float *)(pVVar10 + lVar9) * *(float *)((long)&local_108 + lVar9);
          fVar17 = fVar23;
          if (fVar23 < fVar22) {
            fVar17 = fVar22;
            fVar22 = fVar23;
          }
          fVar16 = fVar16 + fVar22;
          fVar21 = fVar21 + fVar17;
          lVar9 = lVar9 + 4;
        } while (lVar9 != 0xc);
        *(float *)((Vector2i *)local_a8 + lVar11) = fVar21;
        pVVar10 = pVVar10 + 0xc;
        *(float *)(local_d8 + lVar11) = fVar16;
        lVar11 = lVar11 + 4;
      } while (lVar11 != 0xc);
      fVar17 = fStack_a0;
      fVar16 = fStack_d0;
      fVar21 = (float)local_a8._0_4_ - (float)local_d8._0_4_;
      if ((float)local_a8._0_4_ - (float)local_d8._0_4_ <=
          (float)local_a8._4_4_ - (float)local_d8._4_4_) {
        fVar21 = (float)local_a8._4_4_ - (float)local_d8._4_4_;
      }
      if (_LC84 * fVar21 == 0.0) {
        *(undefined8 *)this = 0;
      }
      else {
        fVar21 = _LC84 * (_LC38 / (_LC84 * fVar21));
        fStack_a0 = fVar21;
        auVar3 = _local_a8;
        local_a8._4_4_ = fVar21;
        local_a8._0_4_ = fVar21;
        _fStack_a0 = auVar3._8_8_;
        Basis::scale(local_78);
        local_f8 = local_f8 + _LC84 * local_ec;
        fStack_f4 = fStack_f4 + _LC84 * fStack_e8;
        local_4c = (float)((uint)(uStack_60._4_4_ * fVar15 + (float)uStack_60 * fVar13 +
                                 local_58 * fVar14) ^ __LC93) -
                   ((fVar17 - fVar16) + (fVar17 - fVar16));
        local_54 = CONCAT44((uint)(fVar14 * SUB164(_local_68,4) +
                                  local_f8 * SUB164(_local_78,0xc) +
                                  fStack_f4 * (float)local_68._0_4_) ^ _LC94._4_4_,
                            (uint)(fVar14 * SUB164(_local_78,8) +
                                  local_f8 * SUB164(_local_78,0) + fStack_f4 * (float)local_78._4_4_
                                  ) ^ (uint)_LC94);
        plVar7 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar7 + 0xd40))(plVar7,*(undefined8 *)(param_1 + 0x200),local_78);
        EditorResourcePreviewGenerator::DrawRequester::request_and_wait
                  (param_1 + 0x248,*(undefined8 *)(param_1 + 0x208));
        plVar7 = (long *)RenderingServer::get_singleton();
        (**(code **)(*plVar7 + 0x1c0))
                  ((Ref<Image> *)&local_128,plVar7,*(undefined8 *)(param_1 + 0x210));
        if (local_128 == (Ref *)0x0) {
          _err_print_error("generate","editor/plugins/editor_preview_plugins.cpp",0x306,
                           "Condition \"img.is_null()\" is true. Returning: Ref<ImageTexture>()",0,0
                          );
          *(undefined8 *)this = 0;
          Ref<Texture2D>::operator=((Ref<Texture2D> *)this,(Ref *)0x0);
        }
        else {
          plVar7 = (long *)RenderingServer::get_singleton();
          (**(code **)(*plVar7 + 0xd20))(plVar7,*(undefined8 *)(param_1 + 0x200),0);
          uVar12 = 0;
          Image::convert(local_128,5);
          uVar8 = Image::get_size();
          local_a8 = (undefined1  [8])uVar8;
          Vector2i::operator_cast_to_Vector2((Vector2i *)local_a8);
          fVar21 = *(float *)param_3;
          fVar16 = extraout_XMM0_Db;
          fVar17 = extraout_XMM0_Da;
          if (fVar21 < extraout_XMM0_Da) {
            fVar16 = (extraout_XMM0_Db * fVar21) / extraout_XMM0_Da;
            fVar17 = fVar21;
          }
          fVar21 = *(float *)(param_3 + 4);
          if (fVar21 < fVar16) {
            fVar17 = (fVar17 * fVar21) / fVar16;
            fVar16 = fVar21;
          }
          Image::resize(local_128,CONCAT44(uVar12,(int)fVar17),(int)fVar16,2);
          local_120 = (Ref *)0x0;
          if (local_128 != (Ref *)0x0) {
            local_120 = local_128;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              local_120 = (Ref *)0x0;
            }
          }
          post_process_preview((Ref<Image> *)&local_120);
          Ref<Image>::unref((Ref<Image> *)&local_120);
          ImageTexture::create_from_image((Ref *)&local_120);
          *(undefined8 *)this = 0;
          Ref<Texture2D>::operator=((Ref<Texture2D> *)this,local_120);
          if (((local_120 != (Ref *)0x0) &&
              (cVar5 = RefCounted::unreference(), pRVar2 = local_120, cVar5 != '\0')) &&
             (cVar5 = predelete_handler((Object *)local_120), cVar5 != '\0')) {
            (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
            Memory::free_static(pRVar2,false);
          }
        }
        Ref<Image>::unref((Ref<Image> *)&local_128);
      }
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar6), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      goto LAB_00103e05;
    }
  }
  _err_print_error("generate","editor/plugins/editor_preview_plugins.cpp",0x2ed,
                   "Condition \"mesh.is_null()\" is true. Returning: Ref<Texture2D>()",0,0);
  *(undefined8 *)this = 0;
LAB_00103e05:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorGradientPreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const */

Ref * EditorGradientPreviewPlugin::generate(Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  GradientTexture1D *this;
  GradientTexture1D *pGVar4;
  long in_FS_OFFSET;
  Image *local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)param_3 != 0) {
    pOVar3 = (Object *)__dynamic_cast(*(long *)param_3,&Object::typeinfo,&Gradient::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
        pGVar4 = (GradientTexture1D *)0x0;
        this = (GradientTexture1D *)operator_new(0x308,"");
        GradientTexture1D::GradientTexture1D(this);
        postinitialize_handler((Object *)this);
        cVar2 = RefCounted::init_ref();
        if (cVar2 != '\0') {
          cVar2 = RefCounted::reference();
          pGVar4 = (GradientTexture1D *)0x0;
          if (cVar2 != '\0') {
            pGVar4 = this;
          }
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            cVar2 = predelete_handler((Object *)this);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)this + 0x140))(this);
              Memory::free_static(this,false);
            }
          }
        }
        EditorScale::get_scale();
        GradientTexture1D::set_width((int)pGVar4);
        local_38 = pOVar3;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          local_38 = (Object *)0x0;
        }
        GradientTexture1D::set_gradient(pGVar4);
        if (local_38 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          pOVar1 = local_38;
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_38);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
        }
        (**(code **)(*(long *)pGVar4 + 0x210))(&local_40,pGVar4);
        ImageTexture::create_from_image((Ref *)&local_38);
        *(undefined8 *)param_1 = 0;
        Ref<Texture2D>::operator=((Ref<Texture2D> *)param_1,(Ref *)local_38);
        if (local_38 != (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          pOVar1 = local_38;
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_38);
            if (cVar2 != '\0') {
              (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
              Memory::free_static(pOVar1,false);
            }
          }
        }
        if (local_40 != (Image *)0x0) {
          cVar2 = RefCounted::unreference();
          if (cVar2 != '\0') {
            memdelete<Image>(local_40);
          }
        }
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler((Object *)pGVar4);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pGVar4 + 0x140))(pGVar4);
            Memory::free_static(pGVar4,false);
          }
        }
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar3);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        goto LAB_001041ff;
      }
    }
  }
  *(undefined8 *)param_1 = 0;
LAB_001041ff:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPackedScenePreviewPlugin::generate_from_path(String const&, Vector2 const&, Dictionary&)
   const */

String * EditorPackedScenePreviewPlugin::generate_from_path
                   (String *param_1,Vector2 *param_2,Dictionary *param_3)

{
  char cVar1;
  int iVar2;
  Resource *this;
  long lVar3;
  Resource *pRVar4;
  long in_FS_OFFSET;
  byte bVar5;
  CowData<char32_t> local_78 [8];
  long local_70;
  String local_68 [8];
  String *local_60;
  Resource *local_58;
  undefined8 local_50;
  long local_40;
  
  bVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPaths::get_cache_dir();
  ProjectSettings::get_singleton();
  ProjectSettings::globalize_path((String *)&local_58);
  String::md5_text();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  operator+((char *)&local_60,(String *)"resthumb-");
  String::path_join((String *)&local_58);
  if ((Resource *)local_70 != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    local_70 = (long)local_58;
    local_58 = (Resource *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Resource *)&_LC97;
  local_60 = (String *)0x0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_60);
  String::operator+(local_68,(String *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  cVar1 = FileAccess::exists(local_68);
  if (cVar1 == '\0') {
    *(undefined8 *)param_1 = 0;
    goto LAB_00104596;
  }
  local_60 = (String *)0x0;
  this = (Resource *)operator_new(0x268,"");
  pRVar4 = this;
  for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar5 * -0x10 + 8;
  }
  Resource::Resource(this);
  this[0x260] = (Resource)0x0;
  *(code **)this = __cxa_guard_acquire;
  *(undefined4 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(undefined8 *)(this + 600) = 0;
  postinitialize_handler((Object *)this);
  local_58 = (Resource *)0x0;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    Ref<Image>::unref((Ref<Image> *)&local_58);
    if (local_60 == (String *)0x0) goto LAB_001046b9;
    local_58 = (Resource *)local_60;
    local_60 = (String *)0x0;
    Ref<Image>::unref((Ref<Image> *)&local_58);
    iVar2 = Image::load(local_60);
    if (iVar2 != 0) goto LAB_001046c5;
LAB_00104736:
    local_58 = (Resource *)0x0;
    if (local_60 != (String *)0x0) {
      local_58 = (Resource *)local_60;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_58 = (Resource *)0x0;
      }
    }
    post_process_preview((String *)&local_58);
    Ref<Image>::unref((Ref<Image> *)&local_58);
    ImageTexture::create_from_image((Ref *)&local_58);
    *(undefined8 *)param_1 = 0;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)param_1,(Ref *)local_58);
    if (((local_58 != (Resource *)0x0) &&
        (cVar1 = RefCounted::unreference(), pRVar4 = local_58, cVar1 != '\0')) &&
       (cVar1 = predelete_handler((Object *)local_58), cVar1 != '\0')) {
      (**(code **)(*(long *)pRVar4 + 0x140))(pRVar4);
      Memory::free_static(pRVar4,false);
    }
  }
  else {
    Ref<Image>::unref((Ref<Image> *)&local_58);
    if (this != (Resource *)local_60) {
      local_58 = (Resource *)local_60;
      local_60 = (String *)this;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_60 = (String *)0x0;
        Ref<Image>::unref((Ref<Image> *)&local_58);
      }
      else {
        Ref<Image>::unref((Ref<Image> *)&local_58);
      }
    }
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      memdelete<Image>((Image *)this);
    }
LAB_001046b9:
    iVar2 = Image::load(local_60);
    if (iVar2 == 0) goto LAB_00104736;
LAB_001046c5:
    *(undefined8 *)param_1 = 0;
  }
  if ((local_60 != (String *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) {
    memdelete<Image>((Image *)local_60);
  }
LAB_00104596:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref(local_78);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorFontPreviewPlugin::generate_from_path(String const&, Vector2 const&, Dictionary&) const */

EditorFontPreviewPlugin * __thiscall
EditorFontPreviewPlugin::generate_from_path
          (EditorFontPreviewPlugin *this,String *param_1,Vector2 *param_2,Dictionary *param_3)

{
  code *pcVar1;
  Ref *pRVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  wchar32 *pwVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  long lVar14;
  long in_FS_OFFSET;
  float fVar15;
  float extraout_XMM0_Da;
  float fVar16;
  float extraout_XMM0_Db;
  float fVar17;
  undefined1 auVar18 [12];
  Ref *local_88;
  Ref *local_80;
  Ref *local_78;
  long local_70;
  float local_60 [2];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = (Ref *)&_LC70;
  local_80 = (Ref *)0x0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_80);
  ResourceLoader::load((CowData<char32_t> *)&local_78,param_2,(StrRange *)&local_80,1,0);
  if (local_78 == (Ref *)0x0) {
LAB_00104e30:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  else {
    pOVar6 = (Object *)__dynamic_cast(local_78,&Object::typeinfo,&Font::typeinfo,0);
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        if (local_78 == (Ref *)0x0) goto LAB_00104e30;
        goto LAB_00104d79;
      }
      if ((local_78 != (Ref *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0'))
      goto LAB_00104d88;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_00104901:
      local_88 = (Ref *)0x0;
      if ((generate_from_path(String_const&,Vector2_const&,Dictionary&)::sample_base == '\0') &&
         (iVar5 = __cxa_guard_acquire(&generate_from_path(String_const&,Vector2_const&,Dictionary&)
                                       ::sample_base), iVar5 != 0)) {
        generate_from_path(String_const&,Vector2_const&,Dictionary&)::sample_base = 0;
        puVar3 = &_LC98;
        do {
          puVar9 = puVar3;
          puVar3 = puVar9 + 4;
        } while (*(int *)(puVar9 + 4) != 0);
        local_78 = (Ref *)&_LC98;
        local_70 = (long)(puVar9 + -0x110b9c) >> 2;
        String::parse_utf32((StrRange *)
                            &generate_from_path(String_const&,Vector2_const&,Dictionary&)::
                             sample_base);
        __cxa_atexit(String::~String,
                     &generate_from_path(String_const&,Vector2_const&,Dictionary&)::sample_base,
                     &__dso_handle);
        __cxa_guard_release(&generate_from_path(String_const&,Vector2_const&,Dictionary&)::
                             sample_base);
      }
      if (generate_from_path(String_const&,Vector2_const&,Dictionary&)::sample_base != 0) {
        lVar14 = 0;
        do {
          lVar13 = *(long *)(generate_from_path(String_const&,Vector2_const&,Dictionary&)::
                             sample_base + -8);
          lVar11 = *(long *)pOVar6;
          if (((int)lVar13 == 0) || ((int)lVar13 + -1 <= (int)lVar14)) goto LAB_001049cd;
          if (lVar13 == lVar14) {
            puVar8 = &String::_null;
          }
          else {
            if (lVar13 <= lVar14) goto LAB_00104dd4;
            puVar8 = (undefined8 *)
                     (generate_from_path(String_const&,Vector2_const&,Dictionary&)::sample_base +
                     lVar14 * 4);
          }
          cVar4 = (**(code **)(lVar11 + 0x2d0))(pOVar6,*(undefined4 *)puVar8);
          if (cVar4 != '\0') {
            if (generate_from_path(String_const&,Vector2_const&,Dictionary&)::sample_base == 0) {
              if (lVar14 != 0) {
                lVar13 = 0;
LAB_00104dd4:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar13,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar1 = (code *)invalidInstructionException();
                (*pcVar1)();
              }
LAB_00104ef8:
              pwVar10 = (wchar32 *)&String::_null;
            }
            else {
              lVar13 = *(long *)(generate_from_path(String_const&,Vector2_const&,Dictionary&)::
                                 sample_base + -8);
              if (lVar13 == lVar14) goto LAB_00104ef8;
              if (lVar13 <= lVar14) goto LAB_00104dd4;
              pwVar10 = (wchar32 *)
                        (generate_from_path(String_const&,Vector2_const&,Dictionary&)::sample_base +
                        lVar14 * 4);
            }
            String::operator+=((String *)&local_88,*pwVar10);
          }
          lVar14 = lVar14 + 1;
        } while (generate_from_path(String_const&,Vector2_const&,Dictionary&)::sample_base != 0);
      }
      lVar11 = *(long *)pOVar6;
LAB_001049cd:
      if ((local_88 == (Ref *)0x0) || (*(uint *)(local_88 + -8) < 2)) {
        (**(code **)(lVar11 + 0x2d8))((StrRange *)&local_80,pOVar6);
        String::substr((int)(CowData<char32_t> *)&local_78,(int)(StrRange *)&local_80);
        if (local_88 != local_78) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          local_88 = local_78;
          local_78 = (Ref *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        lVar11 = *(long *)pOVar6;
      }
      fVar15 = (float)(**(code **)(lVar11 + 0x288))
                                (pOVar6,(CowData<char32_t> *)&local_88,0,0x32,3,0,0);
      local_60[1] = 80.0;
      local_60[0] = _LC101 - fVar15 * _LC84;
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_78,"rendering/environment/defaults/default_clear_color",false)
      ;
      ProjectSettings::get_setting_with_override((StringName *)&local_58);
      auVar18 = Variant::operator_cast_to_Color((Variant *)&local_58);
      if ((&Variant::needs_deinit)[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_78 != (Ref *)0x0)) {
        StringName::unref();
      }
      local_50 = _LC38;
      if (_LC84 <= auVar18._4_4_ * __LC105 + auVar18._0_4_ * __LC104 + auVar18._8_4_ * __LC106) {
        local_50 = 0;
      }
      local_4c = _LC38;
      local_58 = CONCAT44(local_50,local_50);
      (**(code **)(*(long *)pOVar6 + 0x298))
                (pOVar6,*(undefined8 *)(param_1 + 0x210),local_60,(CowData<char32_t> *)&local_88,0,
                 0x32,(StringName *)&local_58,3,0,0);
      EditorResourcePreviewGenerator::DrawRequester::request_and_wait
                (param_1 + 0x218,*(undefined8 *)(param_1 + 0x1f8));
      plVar7 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar7 + 0xfb8))(plVar7,*(undefined8 *)(param_1 + 0x210));
      plVar7 = (long *)RenderingServer::get_singleton();
      (**(code **)(*plVar7 + 0x1c0))((StrRange *)&local_80,plVar7,*(undefined8 *)(param_1 + 0x200));
      if (local_80 == (Ref *)0x0) {
        _err_print_error("generate_from_path","editor/plugins/editor_preview_plugins.cpp",0x376,
                         "Condition \"img.is_null()\" is true. Returning: Ref<ImageTexture>()",0,0);
        *(undefined8 *)this = 0;
        Ref<Texture2D>::operator=((Ref<Texture2D> *)this,(Ref *)0x0);
      }
      else {
        uVar12 = 0;
        Image::convert(local_80,5);
        local_58 = Image::get_size();
        Vector2i::operator_cast_to_Vector2((Vector2i *)&local_58);
        fVar15 = *(float *)param_3;
        fVar16 = extraout_XMM0_Db;
        fVar17 = extraout_XMM0_Da;
        if (fVar15 < extraout_XMM0_Da) {
          fVar16 = (extraout_XMM0_Db * fVar15) / extraout_XMM0_Da;
          fVar17 = fVar15;
        }
        fVar15 = *(float *)(param_3 + 4);
        if (fVar15 < fVar16) {
          fVar17 = (fVar17 * fVar15) / fVar16;
          fVar16 = fVar15;
        }
        Image::resize(local_80,CONCAT44(uVar12,(int)fVar17),(int)fVar16,2);
        local_78 = (Ref *)0x0;
        if (local_80 != (Ref *)0x0) {
          local_78 = local_80;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_78 = (Ref *)0x0;
          }
        }
        post_process_preview((CowData<char32_t> *)&local_78);
        Ref<Image>::unref((Ref<Image> *)&local_78);
        ImageTexture::create_from_image((Ref *)&local_78);
        *(undefined8 *)this = 0;
        Ref<Texture2D>::operator=((Ref<Texture2D> *)this,local_78);
        if (((local_78 != (Ref *)0x0) &&
            (cVar4 = RefCounted::unreference(), pRVar2 = local_78, cVar4 != '\0')) &&
           (cVar4 = predelete_handler((Object *)local_78), cVar4 != '\0')) {
          (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
          Memory::free_static(pRVar2,false);
        }
      }
      Ref<Image>::unref((Ref<Image> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar6), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
      goto LAB_00104d40;
    }
LAB_00104d79:
    cVar4 = RefCounted::unreference();
    if (cVar4 == '\0') goto LAB_00104e30;
    pOVar6 = (Object *)0x0;
LAB_00104d88:
    pRVar2 = local_78;
    cVar4 = predelete_handler((Object *)local_78);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pRVar2 + 0x140))(pRVar2);
      Memory::free_static(pRVar2,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (pOVar6 != (Object *)0x0) goto LAB_00104901;
  }
  _err_print_error("generate_from_path","editor/plugins/editor_preview_plugins.cpp",0x35a,
                   "Condition \"sampled_font.is_null()\" is true. Returning: Ref<Texture2D>()",0,0);
  *(undefined8 *)this = 0;
LAB_00104d40:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* EditorTexturePreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const */

Ref * EditorTexturePreviewPlugin::generate(Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  float fVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  Object *pOVar7;
  Object *pOVar8;
  Ref *pRVar9;
  Variant *pVVar10;
  undefined8 uVar11;
  long lVar12;
  float *in_RCX;
  ulong uVar13;
  Object *pOVar14;
  Variant *in_R8;
  long in_FS_OFFSET;
  float fVar15;
  undefined1 auVar16 [8];
  undefined8 extraout_XMM1_Qa;
  Image *local_b0;
  Object *local_a8;
  Ref *local_a0;
  Ref *local_98;
  long local_90 [2];
  undefined8 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined1 local_58 [16];
  undefined8 uStack_48;
  long local_40;
  
  pOVar14 = *(Object **)param_3;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (Image *)0x0;
  if (pOVar14 == (Object *)0x0) {
LAB_001055b0:
    pOVar14 = (Object *)0x0;
LAB_001055b2:
    local_a0 = (Ref *)0x0;
    if ((pOVar14 != (Object *)0x0) &&
       (pRVar9 = (Ref *)__dynamic_cast(pOVar14,&Object::typeinfo,&Texture2D::typeinfo,0),
       pRVar9 != (Ref *)0x0)) {
      local_98 = (Ref *)0x0;
      local_a0 = pRVar9;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_a0 = (Ref *)0x0;
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_98);
      }
      else {
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_98);
        (**(code **)(*(long *)pRVar9 + 0x210))((Ref<Texture2D> *)&local_98,pRVar9);
        Ref<Image>::operator=((Ref<Image> *)&local_b0,local_98);
        Ref<Image>::unref((Ref<Image> *)&local_98);
        if (local_b0 != (Image *)0x0) {
          (**(code **)(*(long *)local_b0 + 0x198))((Ref<Texture2D> *)&local_98,local_b0,0);
          Ref<Image>::operator=((Ref<Image> *)&local_b0,local_98);
          Ref<Resource>::unref((Ref<Resource> *)&local_98);
        }
      }
    }
LAB_001054da:
    pOVar8 = (Object *)0x0;
    pOVar7 = (Object *)0x0;
    pOVar6 = (Object *)0x0;
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a0);
LAB_001052fa:
    if (local_b0 != (Image *)0x0) {
      cVar4 = Image::is_empty();
      if (cVar4 == '\0') {
        local_80 = Image::get_size();
        Variant::Variant((Variant *)local_58,(Vector2i *)&local_80);
        Variant::Variant((Variant *)local_78,"dimensions");
        pVVar10 = (Variant *)Dictionary::operator[](in_R8);
        if (pVVar10 != (Variant *)local_58) {
          if ((&Variant::needs_deinit)[*(int *)pVVar10] != '\0') {
            Variant::_clear_internal();
          }
          uVar11 = local_58._0_8_;
          *(undefined4 *)pVVar10 = 0;
          *(undefined4 *)pVVar10 = local_58._0_4_;
          *(undefined8 *)(pVVar10 + 8) = local_58._8_8_;
          *(undefined8 *)(pVVar10 + 0x10) = uStack_48;
          local_58._0_8_ = uVar11 & 0xffffffff00000000;
        }
        if ((&Variant::needs_deinit)[(int)local_78._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        if ((&Variant::needs_deinit)[(int)local_58._0_4_] != '\0') {
          Variant::_clear_internal();
        }
        Image::clear_mipmaps();
        cVar4 = Image::is_compressed();
        if (cVar4 == '\0') {
          iVar5 = Image::get_format();
          if (iVar5 != 4) {
            iVar5 = Image::get_format();
            if (iVar5 != 5) {
              Image::convert(local_b0,5);
            }
          }
        }
        else {
          iVar5 = Image::decompress();
          if (iVar5 != 0) goto LAB_00105311;
        }
        uVar11 = Image::get_size();
        local_58._0_8_ = uVar11;
        auVar16 = (undefined1  [8])Vector2i::operator_cast_to_Vector2((Vector2i *)local_58);
        local_78._0_4_ = SUB84(auVar16,0);
        fVar1 = *in_RCX;
        local_78._4_4_ = (undefined4)((ulong)auVar16 >> 0x20);
        fVar15 = (float)local_78._4_4_;
        if (fVar1 < (float)local_78._0_4_) {
          fVar15 = ((float)local_78._4_4_ * fVar1) / (float)local_78._0_4_;
          auVar16 = (undefined1  [8])CONCAT44(fVar15,fVar1);
        }
        local_78 = auVar16;
        fVar1 = in_RCX[1];
        if (fVar1 < fVar15) {
          local_78 = (undefined1  [8])CONCAT44(fVar1,((float)local_78._0_4_ * fVar1) / fVar15);
        }
        lVar12 = Vector2::operator_cast_to_Vector2i((Vector2 *)local_78);
        uVar13 = lVar12 >> 0x20 & 0xffffffff;
        if ((int)((ulong)lVar12 >> 0x20) == 0 || lVar12 < 0) {
          uVar13 = 1;
        }
        iVar5 = 1;
        if (0 < (int)lVar12) {
          iVar5 = (int)lVar12;
        }
        Image::resize(local_b0,iVar5,uVar13,2);
        local_98 = (Ref *)0x0;
        Ref<Image>::operator=((Ref<Image> *)&local_98,(Ref *)local_b0);
        post_process_preview((Ref<Image> *)&local_98);
        Ref<Image>::unref((Ref<Image> *)&local_98);
        ImageTexture::create_from_image((Ref *)&local_98);
        *(undefined8 *)param_1 = 0;
        Ref<Texture2D>::operator=((Ref<Texture2D> *)param_1,local_98);
        Ref<ImageTexture>::unref((Ref<ImageTexture> *)&local_98);
        goto LAB_00105318;
      }
    }
LAB_00105311:
    *(undefined8 *)param_1 = 0;
LAB_00105318:
    if (pOVar8 != (Object *)0x0) {
LAB_0010531d:
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
LAB_00105520:
        cVar4 = predelete_handler(pOVar8);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
      }
    }
    if (pOVar7 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') goto LAB_0010539c;
    }
  }
  else {
    pOVar6 = (Object *)__dynamic_cast(pOVar14,&Object::typeinfo,&AtlasTexture::typeinfo,0);
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        if (*(Object **)param_3 == (Object *)0x0) goto LAB_001055b0;
        pOVar6 = (Object *)0x0;
        pOVar14 = *(Object **)param_3;
        goto LAB_0010504d;
      }
      pOVar7 = *(Object **)param_3;
      pOVar14 = pOVar7;
      if (pOVar7 != (Object *)0x0) goto LAB_0010504d;
LAB_001051d0:
      pOVar8 = (Object *)0x0;
LAB_001050cc:
      AtlasTexture::get_atlas();
      if (local_a8 == (Object *)0x0) goto LAB_00105311;
      (**(code **)(*(long *)local_a8 + 0x210))((Ref<Image> *)&local_a0);
      if (local_a0 != (Ref *)0x0) {
        cVar4 = Image::is_compressed();
        if (cVar4 != '\0') {
          (**(code **)(*(long *)local_a0 + 0x198))(&local_98,local_a0,0);
          Ref<Image>::operator=((Ref<Image> *)&local_a0,local_98);
          if (((local_98 != (Ref *)0x0) &&
              (cVar4 = RefCounted::unreference(), pRVar9 = local_98, cVar4 != '\0')) &&
             (cVar4 = predelete_handler((Object *)local_98), cVar4 != '\0')) {
            (**(code **)(*(long *)pRVar9 + 0x140))();
            Memory::free_static(pRVar9,false);
          }
          iVar5 = Image::decompress();
          if (iVar5 != 0) goto LAB_0010515d;
        }
        AtlasTexture::get_region();
        if ((0.0 < (float)extraout_XMM1_Qa) && (0.0 < (float)((ulong)extraout_XMM1_Qa >> 0x20))) {
          _local_78 = AtlasTexture::get_region();
          local_58 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_78);
          Image::get_region((Ref<Image> *)&local_98);
          Ref<Image>::operator=((Ref<Image> *)&local_b0,local_98);
          Ref<Image>::unref((Ref<Image> *)&local_98);
          Ref<Image>::unref((Ref<Image> *)&local_a0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
          goto LAB_001052fa;
        }
      }
LAB_0010515d:
      *(undefined8 *)param_1 = 0;
      Ref<Image>::unref((Ref<Image> *)&local_a0);
      if (local_a8 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(local_a8);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)local_a8 + 0x140))(local_a8);
            Memory::free_static(local_a8,false);
          }
        }
      }
      goto LAB_00105318;
    }
LAB_0010504d:
    pOVar7 = (Object *)__dynamic_cast(pOVar14,&Object::typeinfo,&Texture3D::typeinfo,0);
    if (pOVar7 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        pOVar14 = *(Object **)param_3;
        pOVar7 = (Object *)0x0;
        if (pOVar14 != (Object *)0x0) goto LAB_0010508f;
        pOVar8 = (Object *)0x0;
        if (pOVar6 != (Object *)0x0) goto LAB_001050cc;
        local_a0 = (Ref *)0x0;
        goto LAB_001054da;
      }
      pOVar14 = *(Object **)param_3;
      if (pOVar14 != (Object *)0x0) goto LAB_0010508f;
      pOVar8 = (Object *)0x0;
      if (pOVar6 == (Object *)0x0) goto LAB_001051ee;
      goto LAB_001050cc;
    }
LAB_0010508f:
    pOVar8 = (Object *)__dynamic_cast(pOVar14,&Object::typeinfo,&TextureLayered::typeinfo,0);
    if (pOVar8 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        if (pOVar6 != (Object *)0x0) goto LAB_001051d0;
        if (pOVar7 == (Object *)0x0) {
          pOVar14 = *(Object **)param_3;
          goto LAB_001055b2;
        }
        goto LAB_001051ee;
      }
      if (pOVar6 != (Object *)0x0) goto LAB_001050cc;
      if (pOVar7 != (Object *)0x0) {
        iVar5 = (**(code **)(*(long *)pOVar7 + 0x1e0))(pOVar7);
        if (iVar5 != 0) goto LAB_00105204;
        *(undefined8 *)param_1 = 0;
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') goto LAB_00105520;
        goto LAB_001053fc;
      }
      iVar5 = (**(code **)(*(long *)pOVar8 + 0x1e8))(pOVar8);
      if (iVar5 != 0) {
        iVar5 = (**(code **)(*(long *)pOVar8 + 0x1e8))(pOVar8);
        (**(code **)(*(long *)pOVar8 + 0x1f8))((Ref<Image> *)&local_a0,pOVar8,(iVar5 + -1) / 2);
        if (local_a0 != (Ref *)0x0) {
          (**(code **)(*(long *)local_a0 + 0x198))((Ref<Resource> *)&local_98,local_a0,0);
          Ref<Image>::operator=((Ref<Image> *)&local_b0,local_98);
          Ref<Resource>::unref((Ref<Resource> *)&local_98);
        }
        pOVar6 = (Object *)0x0;
        Ref<Image>::unref((Ref<Image> *)&local_a0);
        goto LAB_001052fa;
      }
      *(undefined8 *)param_1 = 0;
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') goto LAB_00105347;
      goto LAB_00105520;
    }
    if (pOVar6 != (Object *)0x0) goto LAB_001051d0;
    if (pOVar7 == (Object *)0x0) goto LAB_001055b2;
LAB_001051ee:
    pOVar8 = (Object *)0x0;
    iVar5 = (**(code **)(*(long *)pOVar7 + 0x1e0))(pOVar7);
    if (iVar5 != 0) {
LAB_00105204:
      (**(code **)(*(long *)pOVar7 + 0x1f0))(&local_98);
      if (local_90[0] == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(long *)(local_90[0] + -8);
      }
      iVar5 = (**(code **)(*(long *)pOVar7 + 0x1e0))(pOVar7);
      if (iVar5 == lVar12) {
        iVar5 = (**(code **)(*(long *)pOVar7 + 0x1e0))(pOVar7);
        if (local_90[0] != 0) {
          lVar12 = (long)((iVar5 + -1) / 2);
          if ((iVar5 < 0) || (*(long *)(local_90[0] + -8) <= lVar12)) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar12,*(long *)(local_90[0] + -8),
                       "p_index","size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          plVar2 = *(long **)(local_90[0] + lVar12 * 8);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x198))((Ref<Resource> *)&local_a0,plVar2,0);
            Ref<Image>::operator=((Ref<Image> *)&local_b0,local_a0);
            Ref<Resource>::unref((Ref<Resource> *)&local_a0);
          }
        }
        pOVar6 = (Object *)0x0;
        CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_90);
        goto LAB_001052fa;
      }
      *(undefined8 *)param_1 = 0;
      pOVar6 = (Object *)0x0;
      CowData<Ref<Image>>::_unref((CowData<Ref<Image>> *)local_90);
      if (pOVar8 == (Object *)0x0) {
LAB_001053fc:
        cVar4 = RefCounted::unreference();
        if (cVar4 == '\0') goto LAB_00105347;
        goto LAB_0010539c;
      }
      goto LAB_0010531d;
    }
    *(undefined8 *)param_1 = 0;
    cVar4 = RefCounted::unreference();
    if (cVar4 == '\0') goto LAB_00105347;
    pOVar6 = (Object *)0x0;
LAB_0010539c:
    cVar4 = predelete_handler(pOVar7);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
  }
  if (pOVar6 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(pOVar6);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
        Memory::free_static(pOVar6,false);
      }
    }
  }
LAB_00105347:
  if (local_b0 != (Image *)0x0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      memdelete<Image>(local_b0);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this,long param_1)

{
  CowData<unsigned_char> *pCVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  CowData<unsigned_char> *pCVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  CowData<unsigned_char> *pCVar9;
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
LAB_00105be6:
    lVar10 = 0;
    pCVar6 = (CowData<unsigned_char> *)0x0;
  }
  else {
    lVar10 = *(long *)(lVar3 + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar2 = (long *)(lVar3 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    if (lVar10 == 0) goto LAB_00105be6;
    uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar6 = (CowData<unsigned_char> *)((uVar5 | uVar5 >> 0x20) + 1);
  }
  uVar5 = param_1 - 1U | param_1 - 1U >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 | uVar5 >> 0x10;
  pCVar9 = (CowData<unsigned_char> *)(uVar5 | uVar5 >> 0x20);
  pCVar1 = pCVar9 + 1;
  if (param_1 <= lVar10) {
    if ((pCVar1 != pCVar6) && (iVar4 = _realloc(this,(long)pCVar1), iVar4 != 0)) {
      return;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return;
    }
    FUN_00108cf6();
    return;
  }
  if (pCVar1 != pCVar6) {
    if (lVar10 == 0) {
      puVar7 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
      if (puVar7 == (undefined8 *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        return;
      }
      puVar8 = puVar7 + 2;
      *puVar7 = 1;
      puVar7[1] = 0;
      *(undefined8 **)this = puVar8;
      goto LAB_00105b3c;
    }
    pCVar9 = this;
    iVar4 = _realloc(this,(long)pCVar1);
    if (iVar4 != 0) {
      return;
    }
  }
  puVar8 = *(undefined8 **)this;
  if (puVar8 == (undefined8 *)0x0) {
    resize<false>((long)pCVar9);
    return;
  }
LAB_00105b3c:
  puVar8[-1] = param_1;
  return;
}



/* EditorBitmapPreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const */

EditorBitmapPreviewPlugin * __thiscall
EditorBitmapPreviewPlugin::generate
          (EditorBitmapPreviewPlugin *this,Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  long *plVar1;
  float fVar2;
  Ref *pRVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  Object *pOVar9;
  int extraout_var;
  int extraout_var_00;
  ulong uVar10;
  ulong uVar11;
  undefined4 uVar12;
  int iVar13;
  long in_FS_OFFSET;
  float extraout_XMM0_Da;
  float fVar14;
  float extraout_XMM0_Db;
  float fVar15;
  Ref *local_78;
  Ref *local_70;
  undefined1 local_68 [8];
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  pOVar9 = *(Object **)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((pOVar9 != (Object *)0x0) &&
      (pOVar9 = (Object *)__dynamic_cast(pOVar9,&Object::typeinfo,&BitMap::typeinfo,0),
      pOVar9 != (Object *)0x0)) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    pOVar9 = (Object *)0x0;
  }
  local_50 = 0;
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  local_58 = BitMap::get_size();
  cVar5 = Vector2i::operator==((Vector2i *)&local_58,(Vector2i *)&local_48);
  if (cVar5 == '\0') {
    local_60 = 0;
    iVar13 = 0;
    iVar6 = BitMap::get_size();
    BitMap::get_size();
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)&local_60,(long)(iVar6 * extraout_var));
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    lVar4 = local_60;
    iVar6 = BitMap::get_size();
    if (0 < iVar6) {
      do {
        for (iVar6 = 0; BitMap::get_size(), iVar6 < extraout_var_00; iVar6 = iVar6 + 1) {
          cVar5 = BitMap::get_bit((int)pOVar9,iVar13);
          if (cVar5 == '\0') {
            iVar7 = BitMap::get_size();
            *(undefined1 *)(lVar4 + (iVar7 * iVar6 + iVar13)) = 0;
          }
          else {
            iVar7 = BitMap::get_size();
            *(undefined1 *)(lVar4 + (iVar7 * iVar6 + iVar13)) = 0xff;
          }
        }
        iVar13 = iVar13 + 1;
        iVar6 = BitMap::get_size();
      } while (iVar13 < iVar6);
    }
    uVar10 = BitMap::get_size();
    uVar8 = BitMap::get_size();
    uVar11 = (ulong)uVar8;
    Image::create_from_data((Ref<Image> *)&local_78,uVar11,uVar10 >> 0x20,0,0,local_68);
    uVar12 = (undefined4)(uVar11 >> 0x20);
    cVar5 = Image::is_compressed();
    if (cVar5 == '\0') {
      iVar6 = Image::get_format();
      if ((iVar6 != 4) && (iVar6 = Image::get_format(), iVar6 != 5)) {
        uVar12 = 0;
        Image::convert(local_78,5);
      }
LAB_00105ed8:
      local_48 = Image::get_size();
      Vector2i::operator_cast_to_Vector2((Vector2i *)&local_48);
      fVar2 = *(float *)param_3;
      fVar14 = extraout_XMM0_Db;
      fVar15 = extraout_XMM0_Da;
      if (fVar2 < extraout_XMM0_Da) {
        fVar14 = (extraout_XMM0_Db * fVar2) / extraout_XMM0_Da;
        fVar15 = fVar2;
      }
      fVar2 = *(float *)(param_3 + 4);
      if (fVar2 < fVar14) {
        fVar15 = (fVar15 * fVar2) / fVar14;
        fVar14 = fVar2;
      }
      Image::resize(local_78,CONCAT44(uVar12,(int)fVar15),(int)fVar14,2);
      local_70 = (Ref *)0x0;
      if (local_78 != (Ref *)0x0) {
        local_70 = local_78;
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          local_70 = (Ref *)0x0;
        }
      }
      post_process_preview((Ref<Image> *)&local_70);
      Ref<Image>::unref((Ref<Image> *)&local_70);
      ImageTexture::create_from_image((Ref *)&local_70);
      *(undefined8 *)this = 0;
      Ref<Texture2D>::operator=((Ref<Texture2D> *)this,local_70);
      if (((local_70 != (Ref *)0x0) &&
          (cVar5 = RefCounted::unreference(), pRVar3 = local_70, cVar5 != '\0')) &&
         (cVar5 = predelete_handler((Object *)local_70), cVar5 != '\0')) {
        (**(code **)(*(long *)pRVar3 + 0x140))(pRVar3);
        Memory::free_static(pRVar3,false);
      }
    }
    else {
      iVar6 = Image::decompress();
      if (iVar6 == 0) goto LAB_00105ed8;
      *(undefined8 *)this = 0;
    }
    Ref<Image>::unref((Ref<Image> *)&local_78);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
        cVar5 = RefCounted::unreference();
        goto joined_r0x00105e84;
      }
    }
  }
  else {
    *(undefined8 *)this = 0;
  }
  cVar5 = RefCounted::unreference();
joined_r0x00105e84:
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioStreamPreviewPlugin::generate(Ref<Resource> const&, Vector2 const&, Dictionary&) const
    */

Ref * EditorAudioStreamPreviewPlugin::generate(Ref *param_1,Vector2 *param_2,Dictionary *param_3)

{
  float fVar1;
  float fVar2;
  long lVar3;
  char cVar4;
  Object *pOVar5;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 *puVar9;
  Variant *pVVar10;
  undefined8 *puVar11;
  float *in_RCX;
  int iVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  ulong *puVar16;
  undefined1 uVar17;
  int iVar18;
  ulong uVar19;
  ulong uVar20;
  Variant *in_R8;
  undefined4 uVar21;
  code *pcVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  Object *pOVar27;
  long in_FS_OFFSET;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  Object *local_a0;
  Ref<Image> local_98 [8];
  Ref *local_90;
  undefined1 local_88 [8];
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_3 == 0) ||
      (pOVar5 = (Object *)__dynamic_cast(*(long *)param_3,&Object::typeinfo,&AudioStream::typeinfo),
      pOVar5 == (Object *)0x0)) || (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    _err_print_error("generate","editor/plugins/editor_preview_plugins.cpp",0x297,
                     "Condition \"stream.is_null()\" is true. Returning: Ref<Texture2D>()",0,0);
    *(undefined8 *)param_1 = 0;
    goto LAB_00106401;
  }
  local_80 = 0;
  iVar25 = (int)*in_RCX;
  iVar24 = (int)in_RCX[1];
  CowData<unsigned_char>::resize<false>
            ((CowData<unsigned_char> *)&local_80,(long)(iVar25 * iVar24 * 3));
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
  lVar3 = local_80;
  (**(code **)(*(long *)pOVar5 + 0x1c8))(&local_a0);
  if (local_a0 == (Object *)0x0) {
    _err_print_error("generate","editor/plugins/editor_preview_plugins.cpp",0x2a3,
                     "Condition \"playback.is_null()\" is true. Returning: Ref<Texture2D>()",0,0);
    *(undefined8 *)param_1 = 0;
  }
  else {
    dVar29 = (double)(**(code **)(*(long *)pOVar5 + 0x1f8))(pOVar5);
    fVar15 = (float)dVar29;
    if ((float)dVar29 == 0.0) {
      fVar15 = _LC109;
    }
    plVar6 = (long *)AudioServer::get_singleton();
    fVar28 = (float)(**(code **)(*plVar6 + 0x188))(plVar6);
    iVar23 = (int)(fVar28 * fVar15);
    uVar7 = (ulong)iVar23;
    if ((long)uVar7 < 0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x157,
                       "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
LAB_00106685:
      puVar16 = (ulong *)0x0;
      (**(code **)(*(long *)local_a0 + 0x150))(0);
      uVar21 = 0;
      pcVar22 = *(code **)(*(long *)local_a0 + 0x198);
      pOVar27 = local_a0;
    }
    else {
      if (uVar7 == 0) goto LAB_00106685;
      uVar19 = uVar7 * 8 - 1;
      uVar19 = uVar19 | uVar19 >> 1;
      uVar19 = uVar19 | uVar19 >> 2;
      uVar19 = uVar19 | uVar19 >> 4;
      uVar19 = uVar19 | uVar19 >> 8;
      uVar19 = uVar19 | uVar19 >> 0x10;
      puVar8 = (ulong *)Memory::alloc_static((uVar19 | uVar19 >> 0x20) + 0x11,false);
      if (puVar8 == (ulong *)0x0) {
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
        goto LAB_00106685;
      }
      puVar16 = puVar8 + 2;
      *puVar8 = 1;
      memset(puVar16,0,uVar7 * 8);
      puVar8[1] = uVar7;
      (**(code **)(*(long *)local_a0 + 0x150))(0);
      pOVar27 = local_a0;
      uVar21 = (undefined4)puVar8[1];
      pcVar22 = *(code **)(*(long *)local_a0 + 0x198);
      if (1 < *puVar8) {
        uVar19 = puVar8[1];
        uVar20 = 0x10;
        lVar13 = uVar19 * 8;
        if (lVar13 != 0) {
          uVar20 = lVar13 - 1U | lVar13 - 1U >> 1;
          uVar20 = uVar20 | uVar20 >> 2;
          uVar20 = uVar20 | uVar20 >> 4;
          uVar20 = uVar20 | uVar20 >> 8;
          uVar20 = uVar20 | uVar20 >> 0x10;
          uVar20 = (uVar20 | uVar20 >> 0x20) + 0x11;
        }
        puVar11 = (undefined8 *)Memory::alloc_static(uVar20,false);
        if (puVar11 == (undefined8 *)0x0) {
          _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                           "Parameter \"mem_new\" is null.",0,0);
        }
        else {
          puVar16 = puVar11 + 2;
          lVar14 = 0x10;
          *puVar11 = 1;
          puVar11[1] = uVar19;
          if (uVar19 != 0) {
            do {
              *(undefined8 *)((long)puVar11 + lVar14) = *(undefined8 *)((long)puVar8 + lVar14);
              lVar14 = lVar14 + 8;
            } while (lVar14 != lVar13 + 0x10);
          }
          LOCK();
          *puVar8 = *puVar8 - 1;
          UNLOCK();
          if (*puVar8 == 0) {
            Memory::free_static(puVar8,false);
          }
        }
      }
    }
    (*pcVar22)(pOVar27,puVar16,uVar21);
    (**(code **)(*(long *)local_a0 + 0x158))();
    if (0 < iVar25) {
      uVar19 = 0;
      iVar26 = 0;
      do {
        uVar20 = uVar19 / (ulong)(long)iVar25;
        uVar19 = uVar19 + uVar7;
        iVar18 = (int)uVar20;
        iVar12 = (int)(uVar19 / (ulong)(long)iVar25);
        if (iVar23 <= iVar12) {
          iVar12 = iVar23;
        }
        if (iVar23 + -1 <= iVar18) {
          iVar18 = iVar23 + -1;
        }
        if (iVar18 == iVar12) {
          iVar12 = iVar18 + 1;
LAB_00106275:
          lVar13 = (long)iVar18;
          if (lVar13 < 0) {
            if (puVar16 != (ulong *)0x0) {
              uVar20 = puVar16[-1];
              goto LAB_0010643d;
            }
          }
          else if (puVar16 != (ulong *)0x0) {
            uVar20 = puVar16[-1];
            fVar15 = _LC39;
            fVar28 = _LC110;
            while( true ) {
              if ((long)uVar20 <= lVar13) goto LAB_0010643d;
              fVar1 = *(float *)(puVar16 + lVar13);
              fVar2 = *(float *)((long)puVar16 + lVar13 * 8 + 4);
              if (fVar1 <= fVar15) {
                fVar15 = fVar1;
              }
              if (fVar28 <= fVar1) {
                fVar28 = fVar1;
              }
              if (fVar28 <= fVar2) {
                fVar28 = fVar2;
              }
              if (fVar2 <= fVar15) {
                fVar15 = fVar2;
              }
              if (iVar12 <= (int)lVar13 + 1) break;
              lVar13 = lVar13 + 1;
            }
            dVar29 = (double)fVar15 * _LC117 + _LC117;
            dVar31 = (double)fVar28 * _LC117 + _LC117;
            goto LAB_001062fc;
          }
          uVar20 = 0;
LAB_0010643d:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar13,uVar20,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar22 = (code *)invalidInstructionException();
          (*pcVar22)();
        }
        dVar29 = _LC112;
        dVar31 = _LC111;
        if (iVar18 < iVar12) goto LAB_00106275;
LAB_001062fc:
        dVar30 = dVar29 * (double)iVar24 * _LC117;
        dVar29 = 0.0;
        if ((0.0 <= dVar30) && (dVar29 = (double)(iVar24 / 2), dVar30 <= dVar29)) {
          dVar29 = dVar30;
        }
        iVar18 = iVar24 + 3;
        if (-1 < iVar24) {
          iVar18 = iVar24;
        }
        dVar30 = (double)iVar24 * dVar31 * _LC117;
        dVar31 = 0.0;
        if ((0.0 <= dVar30) && (dVar31 = (double)(iVar24 / 2), dVar30 <= dVar31)) {
          dVar31 = dVar30;
        }
        if (0 < iVar24) {
          iVar12 = 0;
          puVar9 = (undefined1 *)(iVar26 * 3 + lVar3);
          do {
            if ((iVar12 < (int)(dVar29 + (double)(iVar18 >> 2))) ||
               (uVar17 = 0xb4, (int)((double)(iVar18 >> 2) + dVar31) < iVar12)) {
              uVar17 = 100;
            }
            iVar12 = iVar12 + 1;
            *puVar9 = uVar17;
            puVar9[1] = uVar17;
            puVar9[2] = uVar17;
            puVar9 = puVar9 + iVar25 * 3;
          } while (iVar24 != iVar12);
        }
        iVar26 = iVar26 + 1;
      } while (iVar25 != iVar26);
    }
    dVar29 = (double)(**(code **)(*(long *)pOVar5 + 0x1f8))(pOVar5);
    Variant::Variant((Variant *)local_58,dVar29);
    Variant::Variant((Variant *)local_78,"length");
    pVVar10 = (Variant *)Dictionary::operator[](in_R8);
    if (pVVar10 != (Variant *)local_58) {
      if ((&Variant::needs_deinit)[*(int *)pVVar10] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar10 = 0;
      *(int *)pVVar10 = local_58[0];
      local_58[0] = 0;
      *(undefined8 *)(pVVar10 + 8) = local_50;
      *(undefined8 *)(pVVar10 + 0x10) = uStack_48;
    }
    if ((&Variant::needs_deinit)[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((&Variant::needs_deinit)[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Image::create_from_data(local_98,iVar25,iVar24,0,4,local_88);
    ImageTexture::create_from_image((Ref *)&local_90);
    *(undefined8 *)param_1 = 0;
    Ref<Texture2D>::operator=((Ref<Texture2D> *)param_1,local_90);
    Ref<ImageTexture>::unref((Ref<ImageTexture> *)&local_90);
    Ref<Image>::unref(local_98);
    if (puVar16 != (ulong *)0x0) {
      puVar16 = puVar16 + -2;
      LOCK();
      *puVar16 = *puVar16 - 1;
      UNLOCK();
      if (*puVar16 == 0) {
        Memory::free_static(puVar16,false);
      }
    }
  }
  if (((local_a0 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_a0), cVar4 != '\0')) {
    (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
    Memory::free_static(local_a0,false);
  }
  CowData<unsigned_char>::_unref((CowData<unsigned_char> *)&local_80);
  cVar4 = RefCounted::unreference();
  if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_00106401:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorMaterialPreviewPlugin::EditorMaterialPreviewPlugin() */

void __thiscall
EditorMaterialPreviewPlugin::EditorMaterialPreviewPlugin(EditorMaterialPreviewPlugin *this)

{
  char cVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Transform3D *pTVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long in_FS_OFFSET;
  float fVar15;
  undefined4 extraout_XMM0_Db;
  undefined1 auVar16 [16];
  undefined4 extraout_XMM0_Db_00;
  undefined1 auVar17 [16];
  undefined4 extraout_XMM0_Db_01;
  undefined1 auVar18 [16];
  undefined4 extraout_XMM0_Db_02;
  undefined1 auVar19 [16];
  undefined4 extraout_XMM0_Db_03;
  undefined1 auVar20 [16];
  undefined4 extraout_XMM0_Db_04;
  undefined1 auVar21 [16];
  float __x;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float __y;
  float fVar26;
  float __y_00;
  float __x_00;
  float fVar27;
  float __y_01;
  float __y_02;
  float __x_01;
  float __y_03;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double local_1f8;
  double local_1f0;
  double local_178;
  double local_170 [2];
  Array local_160 [8];
  Array local_158 [8];
  Dictionary local_150 [8];
  Vector local_148 [8];
  long local_140;
  Vector local_138 [8];
  long local_130;
  Vector local_128 [8];
  long local_120;
  long local_118;
  long local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  float local_f0;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined1 local_a8 [8];
  float fStack_a0;
  float fStack_9c;
  undefined1 local_98 [8];
  float fStack_90;
  float fStack_8c;
  float local_88;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  float local_58;
  undefined8 local_54;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorResourcePreviewGenerator::EditorResourcePreviewGenerator
            ((EditorResourcePreviewGenerator *)this);
  *(undefined8 *)(this + 0x248) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00111da8;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x218) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x228) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x238) = (undefined1  [16])0x0;
  Object::Object((Object *)(this + 0x250));
  *(undefined8 *)(this + 1000) = 0;
  *(undefined ***)(this + 0x250) = &PTR__initialize_classv_00111608;
  *(undefined1 (*) [16])(this + 0x3c8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x3d8) = (undefined1  [16])0x0;
  std::condition_variable::condition_variable((condition_variable *)(this + 0x3f0));
  *(undefined8 *)(this + 0x420) = 0;
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar9 = (**(code **)(*plVar8 + 0xce8))(plVar8);
  *(undefined8 *)(this + 0x1f8) = uVar9;
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar9 = (**(code **)(*plVar8 + 0x990))(plVar8);
  *(undefined8 *)(this + 0x210) = uVar9;
  plVar8 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar8 + 0x9f8))(plVar8,*(undefined8 *)(this + 0x210),0);
  plVar8 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar8 + 0xa40))(plVar8,*(undefined8 *)(this + 0x210),*(undefined8 *)(this + 0x1f8))
  ;
  plVar8 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar8 + 0x9a0))(plVar8,*(undefined8 *)(this + 0x210),0x80,0x80);
  plVar8 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar8 + 0xa60))(plVar8,*(undefined8 *)(this + 0x210),1);
  plVar8 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar8 + 0x9a8))(plVar8,*(undefined8 *)(this + 0x210),1);
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar9 = (**(code **)(*plVar8 + 0xa18))(plVar8,*(undefined8 *)(this + 0x210));
  *(undefined8 *)(this + 0x218) = uVar9;
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar9 = (**(code **)(*plVar8 + 0x940))(plVar8);
  *(undefined8 *)(this + 0x240) = uVar9;
  plVar8 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar8 + 0xa38))(plVar8,*(undefined8 *)(this + 0x210),*(undefined8 *)(this + 0x240))
  ;
  plVar8 = (long *)RenderingServer::get_singleton();
  _local_a8 = ZEXT416((uint)_LC38);
  pcVar2 = *(code **)(*plVar8 + 0x960);
  local_b8 = 0;
  local_b0 = 3.0;
  local_88 = 1.0;
  _local_98 = _local_a8;
  Transform3D::Transform3D((Transform3D *)&local_78,(Basis *)local_a8,(Vector3 *)&local_b8);
  (*pcVar2)(plVar8,*(undefined8 *)(this + 0x240),(Transform3D *)&local_78);
  plVar8 = (long *)RenderingServer::get_singleton();
  (**(code **)(*plVar8 + 0x948))(plVar8,*(undefined8 *)(this + 0x240));
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_118,"rendering/lights_and_shadows/use_physical_light_units",false)
  ;
  ProjectSettings::get_setting_with_override((StringName *)&local_78);
  bVar7 = Variant::operator_cast_to_bool((Variant *)&local_78);
  if ((&Variant::needs_deinit)[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  if (bVar7) {
    plVar8 = (long *)RenderingServer::get_singleton();
    uVar9 = (**(code **)(*plVar8 + 0xcb8))(plVar8);
    *(undefined8 *)(this + 0x248) = uVar9;
    plVar8 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar8 + 0xcd8))(plVar8,*(undefined8 *)(this + 0x248));
    plVar8 = (long *)RenderingServer::get_singleton();
    (**(code **)(*plVar8 + 0x978))
              (plVar8,*(undefined8 *)(this + 0x240),*(undefined8 *)(this + 0x248));
  }
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar9 = (**(code **)(*plVar8 + 0x4c0))(plVar8);
  *(undefined8 *)(this + 0x220) = uVar9;
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar9 = (**(code **)(*plVar8 + 0xd10))
                    (plVar8,*(undefined8 *)(this + 0x220),*(undefined8 *)(this + 0x1f8));
  *(undefined8 *)(this + 0x228) = uVar9;
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar9 = _LC43;
  pcVar2 = *(code **)(*plVar8 + 0xd40);
  local_c8 = _LC46;
  local_78 = _LC38;
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = _LC38;
  fStack_64 = 0.0;
  uStack_60 = 0;
  local_b8 = _LC43;
  local_58 = 1.0;
  local_54 = 0;
  local_4c = 0.0;
  local_b0 = 0.0;
  local_c0 = -1.0;
  Transform3D::looking_at((Basis *)local_a8,(Transform3D *)&local_78,SUB81(&local_c8,0));
  (*pcVar2)(plVar8,*(undefined8 *)(this + 0x228),(Basis *)local_a8);
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar10 = (**(code **)(*plVar8 + 0x4c0))(plVar8);
  *(undefined8 *)(this + 0x230) = uVar10;
  plVar8 = (long *)RenderingServer::get_singleton();
  local_78 = (float)_LC47._0_8_;
  fStack_74 = SUB84(_LC47._0_8_,4);
  fStack_70 = (float)ram0x00112a58;
  fStack_6c = (float)((ulong)ram0x00112a58 >> 0x20);
  (**(code **)(*plVar8 + 0x4d8))(plVar8,*(undefined8 *)(this + 0x230),(Transform3D *)&local_78);
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar10 = (**(code **)(*plVar8 + 0xd10))
                     (plVar8,*(undefined8 *)(this + 0x230),*(undefined8 *)(this + 0x1f8));
  *(undefined8 *)(this + 0x238) = uVar10;
  plVar8 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar8 + 0xd40);
  local_78 = _LC38;
  fStack_74 = 0.0;
  fStack_70 = 0.0;
  fStack_6c = 0.0;
  fStack_68 = _LC38;
  fStack_64 = 0.0;
  uStack_60 = 0;
  local_c8 = uVar9;
  local_58 = 1.0;
  local_54 = 0;
  local_4c = 0.0;
  local_b8 = 0;
  local_b0 = 1.0;
  local_c0 = 0.0;
  Transform3D::looking_at((Basis *)local_a8,(Transform3D *)&local_78,SUB81(&local_c8,0));
  (*pcVar2)(plVar8,*(undefined8 *)(this + 0x238),(Basis *)local_a8);
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar10 = (**(code **)(*plVar8 + 0x2d0))(plVar8);
  *(undefined8 *)(this + 0x200) = uVar10;
  plVar8 = (long *)RenderingServer::get_singleton();
  uVar10 = (**(code **)(*plVar8 + 0xd10))
                     (plVar8,*(undefined8 *)(this + 0x200),*(undefined8 *)(this + 0x1f8));
  fVar27 = _LC129;
  *(undefined8 *)(this + 0x208) = uVar10;
  _local_a8 = ZEXT416((uint)_LC38);
  local_78 = (float)uVar9;
  fStack_74 = (float)((ulong)uVar9 >> 0x20);
  local_140 = 0;
  local_130 = 0;
  local_120 = 0;
  local_110 = 0;
  fStack_70 = 0.0;
  local_88 = 1.0;
  _local_98 = _local_a8;
  Basis::set_axis_angle((Basis *)local_a8,fVar27);
  dVar33 = _LC118;
  dVar34 = _LC119;
  iVar13 = 1;
  dVar3 = _LC121;
  dVar4 = _LC120;
  while( true ) {
    fVar29 = (float)dVar3;
    fVar27 = (float)((uint)fVar29 ^ __LC93);
    iVar14 = 0x1f;
    fVar30 = (float)dVar4;
    __y_01 = (float)((uint)fVar30 ^ __LC93);
    local_1f0 = _LC122;
    local_1f8 = _LC123;
    dVar3 = _LC125;
    dVar4 = _LC124;
    while( true ) {
      dVar6 = local_1f0;
      dVar5 = local_1f8;
      __y = (float)(dVar33 * dVar4);
      uVar9 = CONCAT44(fVar29,__y);
      __x = (float)(dVar33 * dVar3);
      fVar26 = (float)(dVar3 * dVar34);
      __y_02 = (float)(dVar4 * dVar34);
      uVar32 = CONCAT44(fVar30,__y_02);
      __x_01 = (float)(dVar34 * local_1f8);
      __y_00 = (float)(dVar34 * local_1f0);
      uVar31 = CONCAT44(fVar30,__y_00);
      __y_03 = (float)(dVar33 * local_1f0);
      uVar10 = CONCAT44(fVar29,__y_03);
      __x_00 = (float)(dVar33 * local_1f8);
      local_78 = __y;
      fStack_74 = fVar29;
      fStack_70 = __x;
      Vector<Vector3>::push_back(uVar9,__x,local_138);
      local_108 = uVar9;
      local_100 = __x;
      Vector<Vector3>::push_back(uVar9,__x,local_148);
      fVar15 = atan2f(fVar27,__x);
      auVar16._0_4_ = atan2f(__y,__x);
      auVar16._4_4_ = fVar15;
      auVar16._8_4_ = extraout_XMM0_Db;
      auVar16._12_4_ = 0;
      divps(auVar16,__LC135);
      Vector<Vector2>::push_back((Vector<Vector2> *)local_128);
      fVar15 = fStack_90 * __y;
      fVar22 = fStack_8c * fVar29;
      fVar28 = fStack_9c * __y;
      fVar23 = local_88 * __x;
      fVar24 = (float)local_98._0_4_ * fVar29;
      fVar25 = (float)local_98._4_4_ * __x;
      Vector<float>::push_back
                ((Vector<float> *)&local_118,
                 __y * (float)local_a8._0_4_ + fVar29 * (float)local_a8._4_4_ + fStack_a0 * __x);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar28 + fVar24 + fVar25);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar15 + fVar22 + fVar23);
      Vector<float>::push_back((Vector<float> *)&local_118,_LC38);
      fStack_6c = __y_02;
      fStack_68 = fVar30;
      fStack_64 = fVar26;
      Vector<Vector3>::push_back(uVar32,fVar26,local_138);
      local_f8 = uVar32;
      local_f0 = fVar26;
      Vector<Vector3>::push_back(uVar32,fVar26,local_148);
      fVar15 = atan2f(__y_01,fVar26);
      auVar17._0_4_ = atan2f(__y_02,fVar26);
      auVar17._4_4_ = fVar15;
      auVar17._8_4_ = extraout_XMM0_Db_00;
      auVar17._12_4_ = 0;
      divps(auVar17,__LC135);
      Vector<Vector2>::push_back((Vector<Vector2> *)local_128);
      fVar15 = fStack_90 * __y_02;
      fVar24 = fStack_8c * fVar30;
      fVar22 = (float)local_98._0_4_ * fVar30;
      fVar25 = local_88 * fVar26;
      fVar28 = fStack_9c * __y_02;
      fVar23 = (float)local_98._4_4_ * fVar26;
      Vector<float>::push_back
                ((Vector<float> *)&local_118,
                 fVar26 * fStack_a0 +
                 __y_02 * (float)local_a8._0_4_ + fVar30 * (float)local_a8._4_4_);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar23 + fVar28 + fVar22);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar15 + fVar24 + fVar25);
      Vector<float>::push_back((Vector<float> *)&local_118,_LC38);
      uStack_60 = uVar31;
      local_58 = __x_01;
      Vector<Vector3>::push_back(uVar31,__x_01,local_138);
      local_e8 = uVar31;
      local_e0 = __x_01;
      Vector<Vector3>::push_back(uVar31,__x_01,local_148);
      fVar15 = atan2f(__y_01,__x_01);
      auVar18._0_4_ = atan2f(__y_00,__x_01);
      auVar18._4_4_ = fVar15;
      auVar18._8_4_ = extraout_XMM0_Db_01;
      auVar18._12_4_ = 0;
      divps(auVar18,__LC135);
      Vector<Vector2>::push_back((Vector<Vector2> *)local_128);
      fVar26 = fStack_8c * fVar30;
      fVar15 = fStack_90 * __y_00;
      fVar24 = (float)local_98._0_4_ * fVar30;
      fVar22 = local_88 * __x_01;
      fVar23 = fStack_9c * __y_00;
      fVar25 = (float)local_98._4_4_ * __x_01;
      Vector<float>::push_back
                ((Vector<float> *)&local_118,
                 __y_00 * (float)local_a8._0_4_ + (float)local_a8._4_4_ * fVar30 +
                 fStack_a0 * __x_01);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar23 + fVar24 + fVar25);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar15 + fVar26 + fVar22);
      Vector<float>::push_back((Vector<float> *)&local_118,_LC38);
      Vector<Vector3>::push_back(uStack_60,local_58,local_138);
      local_d8 = uVar31;
      local_d0 = __x_01;
      Vector<Vector3>::push_back(uVar31,__x_01,local_148);
      fVar15 = atan2f(__y_01,__x_01);
      auVar19._0_4_ = atan2f(__y_00,__x_01);
      auVar19._4_4_ = fVar15;
      auVar19._8_4_ = extraout_XMM0_Db_02;
      auVar19._12_4_ = 0;
      divps(auVar19,__LC135);
      Vector<Vector2>::push_back((Vector<Vector2> *)local_128);
      fVar15 = fStack_90 * __y_00;
      fVar23 = fStack_8c * fVar30;
      fVar22 = local_88 * __x_01;
      fVar24 = fStack_9c * __y_00;
      fVar25 = (float)local_98._0_4_ * fVar30;
      fVar26 = (float)local_98._4_4_ * __x_01;
      Vector<float>::push_back
                ((Vector<float> *)&local_118,
                 __x_01 * fStack_a0 +
                 __y_00 * (float)local_a8._0_4_ + fVar30 * (float)local_a8._4_4_);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar26 + fVar24 + fVar25);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar15 + fVar23 + fVar22);
      Vector<float>::push_back((Vector<float> *)&local_118,_LC38);
      local_54 = uVar10;
      local_4c = __x_00;
      Vector<Vector3>::push_back(uVar10,__x_00,local_138);
      local_c8 = uVar10;
      local_c0 = __x_00;
      Vector<Vector3>::push_back(uVar10,__x_00,local_148);
      fVar15 = atan2f(fVar27,__x_00);
      auVar20._0_4_ = atan2f(__y_03,__x_00);
      auVar20._4_4_ = fVar15;
      auVar20._8_4_ = extraout_XMM0_Db_03;
      auVar20._12_4_ = 0;
      divps(auVar20,__LC135);
      Vector<Vector2>::push_back((Vector<Vector2> *)local_128);
      fVar15 = fStack_90 * __y_03;
      fVar22 = fStack_8c * fVar29;
      fVar23 = local_88 * __x_00;
      fVar24 = fStack_9c * __y_03;
      fVar25 = (float)local_98._0_4_ * fVar29;
      fVar26 = (float)local_98._4_4_ * __x_00;
      Vector<float>::push_back
                ((Vector<float> *)&local_118,
                 __x_00 * fStack_a0 +
                 __y_03 * (float)local_a8._0_4_ + fVar29 * (float)local_a8._4_4_);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar26 + fVar24 + fVar25);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar15 + fVar22 + fVar23);
      Vector<float>::push_back((Vector<float> *)&local_118,_LC38);
      Vector<Vector3>::push_back(CONCAT44(fStack_74,local_78),fStack_70,local_138);
      local_b8 = uVar9;
      local_b0 = __x;
      Vector<Vector3>::push_back(uVar9,__x,local_148);
      fVar15 = atan2f(fVar27,__x);
      auVar21._0_4_ = atan2f(__y,__x);
      auVar21._4_4_ = fVar15;
      auVar21._8_4_ = extraout_XMM0_Db_04;
      auVar21._12_4_ = 0;
      divps(auVar21,__LC135);
      Vector<Vector2>::push_back((Vector<Vector2> *)local_128);
      fVar15 = fStack_90 * __y;
      fVar22 = fStack_8c * fVar29;
      fVar26 = fStack_9c * __y;
      fVar23 = local_88 * __x;
      fVar24 = (float)local_98._0_4_ * fVar29;
      fVar25 = (float)local_98._4_4_ * __x;
      Vector<float>::push_back
                ((Vector<float> *)&local_118,
                 __x * fStack_a0 + __y * (float)local_a8._0_4_ + fVar29 * (float)local_a8._4_4_);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar25 + fVar26 + fVar24);
      Vector<float>::push_back((Vector<float> *)&local_118,fVar15 + fVar22 + fVar23);
      Vector<float>::push_back((Vector<float> *)&local_118,_LC38);
      bVar7 = iVar14 == 0;
      iVar14 = iVar14 + -1;
      if (bVar7) break;
      sincos((double)iVar14 * __LC133,local_170,&local_178);
      local_1f0 = local_178;
      local_1f8 = local_170[0];
      dVar3 = dVar5;
      dVar4 = dVar6;
    }
    if (iVar13 == 0x20) break;
    sincos((double)iVar13 * __LC133 - __LC134,local_170,&local_178);
    dVar3 = local_170[0];
    dVar33 = local_178;
    sincos((double)(iVar13 + 1) * __LC133 - __LC134,local_170,&local_178);
    dVar34 = local_178;
    iVar13 = iVar13 + 1;
    dVar4 = local_170[0];
  }
  Array::Array(local_160);
  iVar13 = (int)local_160;
  Array::resize(iVar13);
  Variant::Variant((Variant *)&local_78,local_148);
  pTVar11 = (Transform3D *)Array::operator[](iVar13);
  if (pTVar11 == (Transform3D *)&local_78) {
    lVar12 = (long)(int)local_78;
  }
  else {
    if ((&Variant::needs_deinit)[*(int *)pTVar11] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pTVar11 = 0;
    *(float *)pTVar11 = local_78;
    lVar12 = 0;
    *(ulong *)(pTVar11 + 8) = CONCAT44(fStack_6c,fStack_70);
    *(ulong *)(pTVar11 + 0x10) = CONCAT44(fStack_64,fStack_68);
    local_78 = 0.0;
  }
  if ((&Variant::needs_deinit)[lVar12] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_78,local_138);
  pTVar11 = (Transform3D *)Array::operator[](iVar13);
  if (pTVar11 == (Transform3D *)&local_78) {
    cVar1 = (&Variant::needs_deinit)[(int)local_78];
  }
  else {
    if ((&Variant::needs_deinit)[*(int *)pTVar11] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pTVar11 = 0;
    *(float *)pTVar11 = local_78;
    cVar1 = Variant::needs_deinit;
    *(ulong *)(pTVar11 + 8) = CONCAT44(fStack_6c,fStack_70);
    *(ulong *)(pTVar11 + 0x10) = CONCAT44(fStack_64,fStack_68);
    local_78 = 0.0;
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_78,(Vector *)&local_118);
  pTVar11 = (Transform3D *)Array::operator[](iVar13);
  if (pTVar11 == (Transform3D *)&local_78) {
    cVar1 = (&Variant::needs_deinit)[(int)local_78];
  }
  else {
    if ((&Variant::needs_deinit)[*(int *)pTVar11] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pTVar11 = 0;
    *(float *)pTVar11 = local_78;
    cVar1 = Variant::needs_deinit;
    *(ulong *)(pTVar11 + 8) = CONCAT44(fStack_6c,fStack_70);
    *(ulong *)(pTVar11 + 0x10) = CONCAT44(fStack_64,fStack_68);
    local_78 = 0.0;
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_78,local_128);
  pTVar11 = (Transform3D *)Array::operator[](iVar13);
  if (pTVar11 == (Transform3D *)&local_78) {
    lVar12 = (long)(int)local_78;
  }
  else {
    if ((&Variant::needs_deinit)[*(int *)pTVar11] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pTVar11 = 0;
    *(float *)pTVar11 = local_78;
    lVar12 = 0;
    *(ulong *)(pTVar11 + 8) = CONCAT44(fStack_6c,fStack_70);
    *(ulong *)(pTVar11 + 0x10) = CONCAT44(fStack_64,fStack_68);
    local_78 = 0.0;
  }
  if ((&Variant::needs_deinit)[lVar12] != '\0') {
    Variant::_clear_internal();
  }
  plVar8 = (long *)RenderingServer::get_singleton();
  pcVar2 = *(code **)(*plVar8 + 0x318);
  Dictionary::Dictionary(local_150);
  Array::Array(local_158);
  (*pcVar2)(plVar8,*(undefined8 *)(this + 0x200),3,local_160,local_158,local_150);
  Array::~Array(local_158);
  Dictionary::~Dictionary(local_150);
  Array::~Array(local_160);
  lVar12 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar8 = (long *)(local_110 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar8 = (long *)(local_120 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_130;
  if (local_130 != 0) {
    LOCK();
    plVar8 = (long *)(local_130 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_130 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  lVar12 = local_140;
  if (local_140 != 0) {
    LOCK();
    plVar8 = (long *)(local_140 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_140 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
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
  return CONCAT71(0x1128,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* EditorResourcePreviewGenerator::abort() */

void EditorResourcePreviewGenerator::abort(void)

{
  return;
}



/* EditorTexturePreviewPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorTexturePreviewPlugin::is_class_ptr(EditorTexturePreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorTexturePreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorTexturePreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorTexturePreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorTexturePreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorTexturePreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorTexturePreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorTexturePreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorTexturePreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorTexturePreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorTexturePreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorTexturePreviewPlugin::_notificationv(int, bool) */

void EditorTexturePreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorImagePreviewPlugin::is_class_ptr(void*) const */

uint __thiscall EditorImagePreviewPlugin::is_class_ptr(EditorImagePreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorImagePreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorImagePreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorImagePreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorImagePreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorImagePreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorImagePreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorImagePreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorImagePreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorImagePreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorImagePreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorImagePreviewPlugin::_notificationv(int, bool) */

void EditorImagePreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorBitmapPreviewPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorBitmapPreviewPlugin::is_class_ptr(EditorBitmapPreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1127,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorBitmapPreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorBitmapPreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorBitmapPreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorBitmapPreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorBitmapPreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorBitmapPreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorBitmapPreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorBitmapPreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorBitmapPreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorBitmapPreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorBitmapPreviewPlugin::_notificationv(int, bool) */

void EditorBitmapPreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorPackedScenePreviewPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorPackedScenePreviewPlugin::is_class_ptr(EditorPackedScenePreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1127,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorPackedScenePreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorPackedScenePreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPackedScenePreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorPackedScenePreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPackedScenePreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorPackedScenePreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorPackedScenePreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorPackedScenePreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorPackedScenePreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorPackedScenePreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPackedScenePreviewPlugin::_notificationv(int, bool) */

void EditorPackedScenePreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorMaterialPreviewPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorMaterialPreviewPlugin::is_class_ptr(EditorMaterialPreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1127,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorMaterialPreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorMaterialPreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorMaterialPreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorMaterialPreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorMaterialPreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorMaterialPreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorMaterialPreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorMaterialPreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorMaterialPreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorMaterialPreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorMaterialPreviewPlugin::_notificationv(int, bool) */

void EditorMaterialPreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorScriptPreviewPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorScriptPreviewPlugin::is_class_ptr(EditorScriptPreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1127,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorScriptPreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorScriptPreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorScriptPreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorScriptPreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorScriptPreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorScriptPreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorScriptPreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorScriptPreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorScriptPreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorScriptPreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorScriptPreviewPlugin::_notificationv(int, bool) */

void EditorScriptPreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorAudioStreamPreviewPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorAudioStreamPreviewPlugin::is_class_ptr(EditorAudioStreamPreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1127,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorAudioStreamPreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorAudioStreamPreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorAudioStreamPreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorAudioStreamPreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorAudioStreamPreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorAudioStreamPreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorAudioStreamPreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorAudioStreamPreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorAudioStreamPreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
EditorAudioStreamPreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorAudioStreamPreviewPlugin::_notificationv(int, bool) */

void EditorAudioStreamPreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorMeshPreviewPlugin::is_class_ptr(void*) const */

uint __thiscall EditorMeshPreviewPlugin::is_class_ptr(EditorMeshPreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1127,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorMeshPreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorMeshPreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorMeshPreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorMeshPreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorMeshPreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorMeshPreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorMeshPreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorMeshPreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorMeshPreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorMeshPreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorMeshPreviewPlugin::_notificationv(int, bool) */

void EditorMeshPreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorFontPreviewPlugin::is_class_ptr(void*) const */

uint __thiscall EditorFontPreviewPlugin::is_class_ptr(EditorFontPreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1127,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorFontPreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorFontPreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFontPreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorFontPreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFontPreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorFontPreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorFontPreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorFontPreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorFontPreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorFontPreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorFontPreviewPlugin::_notificationv(int, bool) */

void EditorFontPreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorGradientPreviewPlugin::is_class_ptr(void*) const */

uint __thiscall
EditorGradientPreviewPlugin::is_class_ptr(EditorGradientPreviewPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1128,(undefined4 *)param_1 ==
                               &EditorResourcePreviewGenerator::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1127,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1128,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorGradientPreviewPlugin::_getv(StringName const&, Variant&) const */

undefined8 EditorGradientPreviewPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorGradientPreviewPlugin::_setv(StringName const&, Variant const&) */

undefined8 EditorGradientPreviewPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorGradientPreviewPlugin::_validate_propertyv(PropertyInfo&) const */

void EditorGradientPreviewPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorGradientPreviewPlugin::_property_can_revertv(StringName const&) const */

undefined8 EditorGradientPreviewPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorGradientPreviewPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorGradientPreviewPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorGradientPreviewPlugin::_notificationv(int, bool) */

void EditorGradientPreviewPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* Object::_initialize_classv() */

void Object::_initialize_classv(void)

{
  Object::initialize_class();
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* EditorResourcePreviewGenerator::DrawRequester::~DrawRequester() */

void __thiscall EditorResourcePreviewGenerator::DrawRequester::~DrawRequester(DrawRequester *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00111608;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x178));
  if (iVar1 == 0) {
    if (*(int *)(this + 0x1d4) != 0) {
      _err_print_error("~Semaphore","./core/os/semaphore.h",0x81,
                       "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup."
                       ,0,1);
      std::condition_variable::condition_variable((condition_variable *)(this + 0x1a0));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x178));
    std::condition_variable::~condition_variable((condition_variable *)(this + 0x1a0));
    Object::~Object((Object *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<unsigned_char>::_copy_on_write(void)

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

void FUN_00108cf6(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorResourcePreviewGenerator::DrawRequester::~DrawRequester() */

void __thiscall EditorResourcePreviewGenerator::DrawRequester::~DrawRequester(DrawRequester *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00111608;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(this + 0x178));
  if (iVar1 == 0) {
    if (*(int *)(this + 0x1d4) != 0) {
      _err_print_error("~Semaphore","./core/os/semaphore.h",0x81,
                       "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup."
                       ,0,1);
      std::condition_variable::condition_variable((condition_variable *)(this + 0x1a0));
    }
    pthread_mutex_unlock((pthread_mutex_t *)(this + 0x178));
    std::condition_variable::~condition_variable((condition_variable *)(this + 0x1a0));
    Object::~Object((Object *)this);
    operator_delete(this,0x1d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = __cxa_guard_acquire;
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



/* EditorImagePreviewPlugin::_get_class_namev() const */

undefined8 * EditorImagePreviewPlugin::_get_class_namev(void)

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
LAB_00108e63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108e63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorImagePreviewPlugin");
      goto LAB_00108ece;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorImagePreviewPlugin");
LAB_00108ece:
  return &_get_class_namev()::_class_name_static;
}



/* EditorTexturePreviewPlugin::_get_class_namev() const */

undefined8 * EditorTexturePreviewPlugin::_get_class_namev(void)

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
LAB_00108f53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108f53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorTexturePreviewPlugin")
      ;
      goto LAB_00108fbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorTexturePreviewPlugin");
LAB_00108fbe:
  return &_get_class_namev()::_class_name_static;
}



/* EditorGradientPreviewPlugin::_get_class_namev() const */

undefined8 * EditorGradientPreviewPlugin::_get_class_namev(void)

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
LAB_00109043:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109043;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorGradientPreviewPlugin"
                );
      goto LAB_001090ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorGradientPreviewPlugin");
LAB_001090ae:
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
LAB_00109123:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109123;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010918e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010918e:
  return &_get_class_namev()::_class_name_static;
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
LAB_00109203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00109203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Object");
      goto LAB_0010926e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Object");
LAB_0010926e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorScriptPreviewPlugin::_get_class_namev() const */

undefined8 * EditorScriptPreviewPlugin::_get_class_namev(void)

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
LAB_001092f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001092f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorScriptPreviewPlugin");
      goto LAB_0010935e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorScriptPreviewPlugin");
LAB_0010935e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorBitmapPreviewPlugin::_get_class_namev() const */

undefined8 * EditorBitmapPreviewPlugin::_get_class_namev(void)

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
LAB_001093e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001093e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorBitmapPreviewPlugin");
      goto LAB_0010944e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorBitmapPreviewPlugin");
LAB_0010944e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPackedScenePreviewPlugin::_get_class_namev() const */

undefined8 * EditorPackedScenePreviewPlugin::_get_class_namev(void)

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
LAB_001094e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001094e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorPackedScenePreviewPlugin");
      goto LAB_0010954e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPackedScenePreviewPlugin")
  ;
LAB_0010954e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorMaterialPreviewPlugin::_get_class_namev() const */

undefined8 * EditorMaterialPreviewPlugin::_get_class_namev(void)

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
LAB_001095d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001095d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorMaterialPreviewPlugin"
                );
      goto LAB_0010963e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorMaterialPreviewPlugin");
LAB_0010963e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorFontPreviewPlugin::_get_class_namev() const */

undefined8 * EditorFontPreviewPlugin::_get_class_namev(void)

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
LAB_001096c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001096c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorFontPreviewPlugin");
      goto LAB_0010972e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorFontPreviewPlugin");
LAB_0010972e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAudioStreamPreviewPlugin::_get_class_namev() const */

undefined8 * EditorAudioStreamPreviewPlugin::_get_class_namev(void)

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
LAB_001097c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001097c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "EditorAudioStreamPreviewPlugin");
      goto LAB_0010982e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorAudioStreamPreviewPlugin")
  ;
LAB_0010982e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorMeshPreviewPlugin::_get_class_namev() const */

undefined8 * EditorMeshPreviewPlugin::_get_class_namev(void)

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
LAB_001098b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001098b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorMeshPreviewPlugin");
      goto LAB_0010991e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorMeshPreviewPlugin");
LAB_0010991e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorAudioStreamPreviewPlugin::~EditorAudioStreamPreviewPlugin() */

void __thiscall
EditorAudioStreamPreviewPlugin::~EditorAudioStreamPreviewPlugin
          (EditorAudioStreamPreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109a11;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109a11;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109a11;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109a11;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109a11:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  return;
}



/* EditorScriptPreviewPlugin::~EditorScriptPreviewPlugin() */

void __thiscall
EditorScriptPreviewPlugin::~EditorScriptPreviewPlugin(EditorScriptPreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109ae1;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109ae1;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109ae1;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109ae1;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109ae1:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  return;
}



/* EditorGradientPreviewPlugin::~EditorGradientPreviewPlugin() */

void __thiscall
EditorGradientPreviewPlugin::~EditorGradientPreviewPlugin(EditorGradientPreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109bb1;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109bb1;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109bb1;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109bb1;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109bb1:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  return;
}



/* EditorPackedScenePreviewPlugin::~EditorPackedScenePreviewPlugin() */

void __thiscall
EditorPackedScenePreviewPlugin::~EditorPackedScenePreviewPlugin
          (EditorPackedScenePreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109c81;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109c81;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109c81;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109c81;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109c81:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  return;
}



/* EditorBitmapPreviewPlugin::~EditorBitmapPreviewPlugin() */

void __thiscall
EditorBitmapPreviewPlugin::~EditorBitmapPreviewPlugin(EditorBitmapPreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109d51;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109d51;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109d51;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109d51;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109d51:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  return;
}



/* EditorImagePreviewPlugin::~EditorImagePreviewPlugin() */

void __thiscall EditorImagePreviewPlugin::~EditorImagePreviewPlugin(EditorImagePreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109e21;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109e21;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109e21;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109e21;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109e21:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  return;
}



/* EditorTexturePreviewPlugin::~EditorTexturePreviewPlugin() */

void __thiscall
EditorTexturePreviewPlugin::~EditorTexturePreviewPlugin(EditorTexturePreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109ef1;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109ef1;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109ef1;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109ef1;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109ef1:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  return;
}



/* EditorGradientPreviewPlugin::~EditorGradientPreviewPlugin() */

void __thiscall
EditorGradientPreviewPlugin::~EditorGradientPreviewPlugin(EditorGradientPreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109fc1;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109fc1;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109fc1;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00109fc1;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00109fc1:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* EditorTexturePreviewPlugin::~EditorTexturePreviewPlugin() */

void __thiscall
EditorTexturePreviewPlugin::~EditorTexturePreviewPlugin(EditorTexturePreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a0a1;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a0a1;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a0a1;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a0a1;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a0a1:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* EditorAudioStreamPreviewPlugin::~EditorAudioStreamPreviewPlugin() */

void __thiscall
EditorAudioStreamPreviewPlugin::~EditorAudioStreamPreviewPlugin
          (EditorAudioStreamPreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a181;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a181;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a181;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a181;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a181:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* EditorBitmapPreviewPlugin::~EditorBitmapPreviewPlugin() */

void __thiscall
EditorBitmapPreviewPlugin::~EditorBitmapPreviewPlugin(EditorBitmapPreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a261;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a261;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a261;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a261;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a261:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* EditorImagePreviewPlugin::~EditorImagePreviewPlugin() */

void __thiscall EditorImagePreviewPlugin::~EditorImagePreviewPlugin(EditorImagePreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a341;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a341;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a341;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a341;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a341:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* EditorScriptPreviewPlugin::~EditorScriptPreviewPlugin() */

void __thiscall
EditorScriptPreviewPlugin::~EditorScriptPreviewPlugin(EditorScriptPreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a421;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a421;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a421;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a421;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a421:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
}



/* EditorPackedScenePreviewPlugin::~EditorPackedScenePreviewPlugin() */

void __thiscall
EditorPackedScenePreviewPlugin::~EditorPackedScenePreviewPlugin
          (EditorPackedScenePreviewPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a501;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a501;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a501;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a501;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a501:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
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
LAB_0010a6bf:
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
            if (lVar4 == 0) goto LAB_0010a5d3;
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
LAB_0010a5d3:
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
      goto LAB_0010a6bf;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* EditorMeshPreviewPlugin::get_class() const */

void EditorMeshPreviewPlugin::get_class(void)

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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = __cxa_guard_acquire;
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



/* EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator() */

void __thiscall
EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator
          (EditorResourcePreviewGenerator *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a911;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a911;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a911;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a911;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010a911:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  return;
}



/* EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator() */

void __thiscall
EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator
          (EditorResourcePreviewGenerator *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = FileAccess::exists;
  if (bVar1) {
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ae11;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ae11;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ae11;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010ae11;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_0010ae11:
  *(undefined ***)this = &PTR__initialize_classv_001114a8;
  Object::~Object((Object *)this);
  operator_delete(this,0x1f8);
  return;
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



/* EditorGradientPreviewPlugin::get_class() const */

void EditorGradientPreviewPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorFontPreviewPlugin::get_class() const */

void EditorFontPreviewPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorAudioStreamPreviewPlugin::get_class() const */

void EditorAudioStreamPreviewPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorScriptPreviewPlugin::get_class() const */

void EditorScriptPreviewPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorMaterialPreviewPlugin::get_class() const */

void EditorMaterialPreviewPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorPackedScenePreviewPlugin::get_class() const */

void EditorPackedScenePreviewPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorBitmapPreviewPlugin::get_class() const */

void EditorBitmapPreviewPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorImagePreviewPlugin::get_class() const */

void EditorImagePreviewPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorTexturePreviewPlugin::get_class() const */

void EditorTexturePreviewPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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
    if (*in_RSI != 0) goto LAB_0010b83c;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_0010b83c:
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
              goto LAB_0010bb9b;
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
  if ((float)uVar28 * __LC50 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010bb9b;
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
LAB_0010bb9b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
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



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
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
    if ((code *)PTR__bind_methods_00117010 != Object::_bind_methods) {
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



/* EditorTexturePreviewPlugin::_initialize_classv() */

void EditorTexturePreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorTexturePreviewPlugin";
    local_60 = 0;
    local_40 = 0x1a;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImagePreviewPlugin::_initialize_classv() */

void EditorImagePreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorImagePreviewPlugin";
    local_60 = 0;
    local_40 = 0x18;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorBitmapPreviewPlugin::_initialize_classv() */

void EditorBitmapPreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorBitmapPreviewPlugin";
    local_60 = 0;
    local_40 = 0x19;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPackedScenePreviewPlugin::_initialize_classv() */

void EditorPackedScenePreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorPackedScenePreviewPlugin";
    local_60 = 0;
    local_40 = 0x1e;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMaterialPreviewPlugin::_initialize_classv() */

void EditorMaterialPreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorMaterialPreviewPlugin";
    local_60 = 0;
    local_40 = 0x1b;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorScriptPreviewPlugin::_initialize_classv() */

void EditorScriptPreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorScriptPreviewPlugin";
    local_60 = 0;
    local_40 = 0x19;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioStreamPreviewPlugin::_initialize_classv() */

void EditorAudioStreamPreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorAudioStreamPreviewPlugin";
    local_60 = 0;
    local_40 = 0x1e;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMeshPreviewPlugin::_initialize_classv() */

void EditorMeshPreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorMeshPreviewPlugin";
    local_60 = 0;
    local_40 = 0x17;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFontPreviewPlugin::_initialize_classv() */

void EditorFontPreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorFontPreviewPlugin";
    local_60 = 0;
    local_40 = 0x17;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorGradientPreviewPlugin::_initialize_classv() */

void EditorGradientPreviewPlugin::_initialize_classv(void)

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
    if (EditorResourcePreviewGenerator::initialize_class()::initialized == '\0') {
      EditorResourcePreviewGenerator::initialize_class();
    }
    local_58 = 0;
    local_40 = 0x1e;
    local_48 = "EditorResourcePreviewGenerator";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorGradientPreviewPlugin";
    local_60 = 0;
    local_40 = 0x1b;
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
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
            if ((&Variant::needs_deinit)[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
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
        if (pvVar5 == (void *)0x0) goto LAB_0010ce46;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010ce46:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_0010cf9b;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010cf9b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010cf9b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorResourcePreviewGenerator::is_class(String const&) const */

undefined8 __thiscall
EditorResourcePreviewGenerator::is_class(EditorResourcePreviewGenerator *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010d10f;
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
LAB_0010d10f:
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
    if (cVar5 != '\0') goto LAB_0010d1c3;
  }
  cVar5 = String::operator==(param_1,"EditorResourcePreviewGenerator");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010d1c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorGradientPreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorGradientPreviewPlugin::is_class(EditorGradientPreviewPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010d28f;
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
LAB_0010d28f:
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
    if (cVar5 != '\0') goto LAB_0010d343;
  }
  cVar5 = String::operator==(param_1,"EditorGradientPreviewPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010d343:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFontPreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorFontPreviewPlugin::is_class(EditorFontPreviewPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010d40f;
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
LAB_0010d40f:
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
    if (cVar5 != '\0') goto LAB_0010d4c3;
  }
  cVar5 = String::operator==(param_1,"EditorFontPreviewPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010d4c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMeshPreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorMeshPreviewPlugin::is_class(EditorMeshPreviewPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010d58f;
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
LAB_0010d58f:
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
    if (cVar5 != '\0') goto LAB_0010d643;
  }
  cVar5 = String::operator==(param_1,"EditorMeshPreviewPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010d643:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioStreamPreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorAudioStreamPreviewPlugin::is_class(EditorAudioStreamPreviewPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010d79b;
  }
  cVar4 = String::operator==(param_1,"EditorAudioStreamPreviewPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010d79b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorScriptPreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorScriptPreviewPlugin::is_class(EditorScriptPreviewPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010d85f;
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
LAB_0010d85f:
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
    if (cVar5 != '\0') goto LAB_0010d913;
  }
  cVar5 = String::operator==(param_1,"EditorScriptPreviewPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010d913:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMaterialPreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorMaterialPreviewPlugin::is_class(EditorMaterialPreviewPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010d9df;
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
LAB_0010d9df:
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
    if (cVar5 != '\0') goto LAB_0010da93;
  }
  cVar5 = String::operator==(param_1,"EditorMaterialPreviewPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010da93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPackedScenePreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorPackedScenePreviewPlugin::is_class(EditorPackedScenePreviewPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010db5f;
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
LAB_0010db5f:
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
    if (cVar5 != '\0') goto LAB_0010dc13;
  }
  cVar5 = String::operator==(param_1,"EditorPackedScenePreviewPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010dc13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorBitmapPreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorBitmapPreviewPlugin::is_class(EditorBitmapPreviewPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010dcdf;
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
LAB_0010dcdf:
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
    if (cVar5 != '\0') goto LAB_0010dd93;
  }
  cVar5 = String::operator==(param_1,"EditorBitmapPreviewPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010dd93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImagePreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorImagePreviewPlugin::is_class(EditorImagePreviewPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010de5f;
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
LAB_0010de5f:
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
    if (cVar5 != '\0') goto LAB_0010df13;
  }
  cVar5 = String::operator==(param_1,"EditorImagePreviewPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010df13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorTexturePreviewPlugin::is_class(String const&) const */

undefined8 __thiscall
EditorTexturePreviewPlugin::is_class(EditorTexturePreviewPlugin *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010dfdf;
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
LAB_0010dfdf:
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
    if (cVar5 != '\0') goto LAB_0010e093;
  }
  cVar5 = String::operator==(param_1,"EditorTexturePreviewPlugin");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = EditorResourcePreviewGenerator::is_class
                        ((EditorResourcePreviewGenerator *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010e093:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
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
      goto LAB_0010e24c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e24c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorResourcePreviewGenerator::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorResourcePreviewGenerator::_get_property_listv
          (EditorResourcePreviewGenerator *this,List *param_1,bool param_2)

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
  local_78 = "EditorResourcePreviewGenerator";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorResourcePreviewGenerator";
  local_98 = 0;
  local_70 = 0x1e;
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
      goto LAB_0010e4b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e4b1:
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
  StringName::StringName((StringName *)&local_78,"EditorResourcePreviewGenerator",false);
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



/* EditorGradientPreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorGradientPreviewPlugin::_get_property_listv
          (EditorGradientPreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorGradientPreviewPlugin";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorGradientPreviewPlugin";
  local_98 = 0;
  local_70 = 0x1b;
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
      goto LAB_0010e761;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e761:
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
  StringName::StringName((StringName *)&local_78,"EditorGradientPreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorFontPreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorFontPreviewPlugin::_get_property_listv
          (EditorFontPreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorFontPreviewPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorFontPreviewPlugin";
  local_98 = 0;
  local_70 = 0x17;
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
      goto LAB_0010ea11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ea11:
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
  StringName::StringName((StringName *)&local_78,"EditorFontPreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorAudioStreamPreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorAudioStreamPreviewPlugin::_get_property_listv
          (EditorAudioStreamPreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorAudioStreamPreviewPlugin";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorAudioStreamPreviewPlugin";
  local_98 = 0;
  local_70 = 0x1e;
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
      goto LAB_0010ecc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ecc1:
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
  StringName::StringName((StringName *)&local_78,"EditorAudioStreamPreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorScriptPreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorScriptPreviewPlugin::_get_property_listv
          (EditorScriptPreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorScriptPreviewPlugin";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorScriptPreviewPlugin";
  local_98 = 0;
  local_70 = 0x19;
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
      goto LAB_0010ef71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ef71:
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
  StringName::StringName((StringName *)&local_78,"EditorScriptPreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMaterialPreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorMaterialPreviewPlugin::_get_property_listv
          (EditorMaterialPreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorMaterialPreviewPlugin";
  local_70 = 0x1b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorMaterialPreviewPlugin";
  local_98 = 0;
  local_70 = 0x1b;
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
      goto LAB_0010f221;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f221:
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
  StringName::StringName((StringName *)&local_78,"EditorMaterialPreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorBitmapPreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorBitmapPreviewPlugin::_get_property_listv
          (EditorBitmapPreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorBitmapPreviewPlugin";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorBitmapPreviewPlugin";
  local_98 = 0;
  local_70 = 0x19;
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
      goto LAB_0010f4d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f4d1:
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
  StringName::StringName((StringName *)&local_78,"EditorBitmapPreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorTexturePreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorTexturePreviewPlugin::_get_property_listv
          (EditorTexturePreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorTexturePreviewPlugin";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorTexturePreviewPlugin";
  local_98 = 0;
  local_70 = 0x1a;
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
      goto LAB_0010f781;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f781:
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
  StringName::StringName((StringName *)&local_78,"EditorTexturePreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPackedScenePreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorPackedScenePreviewPlugin::_get_property_listv
          (EditorPackedScenePreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPackedScenePreviewPlugin";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPackedScenePreviewPlugin";
  local_98 = 0;
  local_70 = 0x1e;
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
      goto LAB_0010fa31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fa31:
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
  StringName::StringName((StringName *)&local_78,"EditorPackedScenePreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorMeshPreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorMeshPreviewPlugin::_get_property_listv
          (EditorMeshPreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorMeshPreviewPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorMeshPreviewPlugin";
  local_98 = 0;
  local_70 = 0x17;
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
      goto LAB_0010fce1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010fce1:
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
  StringName::StringName((StringName *)&local_78,"EditorMeshPreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorImagePreviewPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorImagePreviewPlugin::_get_property_listv
          (EditorImagePreviewPlugin *this,List *param_1,bool param_2)

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
    EditorResourcePreviewGenerator::_get_property_listv
              ((EditorResourcePreviewGenerator *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorImagePreviewPlugin";
  local_70 = 0x18;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorImagePreviewPlugin";
  local_98 = 0;
  local_70 = 0x18;
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
      goto LAB_0010ff91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ff91:
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
  StringName::StringName((StringName *)&local_78,"EditorImagePreviewPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorResourcePreviewGenerator::_get_property_listv
                ((EditorResourcePreviewGenerator *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Resource>::unref() */

void __thiscall Ref<Resource>::unref(Ref<Resource> *this)

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



/* Ref<ImageTexture>::unref() */

void __thiscall Ref<ImageTexture>::unref(Ref<ImageTexture> *this)

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



/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::_lookup_pos(String
   const&, unsigned int&) const */

undefined8 __thiscall
HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::_lookup_pos
          (HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this,
          String *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  undefined8 uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)this != 0) && (*(int *)(this + 0x24) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar11 = String::hash();
    uVar16 = CONCAT44(0,uVar1);
    lVar17 = *(long *)(this + 0x18);
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    iVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)
                                      (*(long *)this +
                                      (ulong)*(uint *)(*(long *)(this + 8) + lVar15 * 4) * 8),
                                      param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = *(uint *)(*(long *)(this + 8) + lVar15 * 4);
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x18);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        iVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
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
LAB_001106f0:
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
  if (lVar7 == 0) goto LAB_001106f0;
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
LAB_0011065c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_001105eb;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011065c;
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
LAB_001105eb:
  puVar9[-1] = param_1;
  return 0;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00110a10:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_00110a10;
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
LAB_0011097c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00110911;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011097c;
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
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_00110911:
  puVar9[-1] = param_1;
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
    *(code **)param_1 = __cxa_guard_acquire;
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
LAB_00110ce5:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pIVar3 = (Image *)*plVar6;
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
          memdelete<Image>(pIVar3);
          if (lVar2 == lVar7) break;
          goto LAB_00110ce5;
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
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



/* CowData<AudioFrame>::_realloc(long) */

undefined8 __thiscall CowData<AudioFrame>::_realloc(CowData<AudioFrame> *this,long param_1)

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
LAB_001110a0:
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
  if (lVar8 == 0) goto LAB_001110a0;
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
        goto LAB_00110fb1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00110fb1:
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



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator() */

void __thiscall
EditorResourcePreviewGenerator::~EditorResourcePreviewGenerator
          (EditorResourcePreviewGenerator *this)

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
/* EditorTexturePreviewPlugin::~EditorTexturePreviewPlugin() */

void __thiscall
EditorTexturePreviewPlugin::~EditorTexturePreviewPlugin(EditorTexturePreviewPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorImagePreviewPlugin::~EditorImagePreviewPlugin() */

void __thiscall EditorImagePreviewPlugin::~EditorImagePreviewPlugin(EditorImagePreviewPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorBitmapPreviewPlugin::~EditorBitmapPreviewPlugin() */

void __thiscall
EditorBitmapPreviewPlugin::~EditorBitmapPreviewPlugin(EditorBitmapPreviewPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPackedScenePreviewPlugin::~EditorPackedScenePreviewPlugin() */

void __thiscall
EditorPackedScenePreviewPlugin::~EditorPackedScenePreviewPlugin
          (EditorPackedScenePreviewPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorGradientPreviewPlugin::~EditorGradientPreviewPlugin() */

void __thiscall
EditorGradientPreviewPlugin::~EditorGradientPreviewPlugin(EditorGradientPreviewPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorScriptPreviewPlugin::~EditorScriptPreviewPlugin() */

void __thiscall
EditorScriptPreviewPlugin::~EditorScriptPreviewPlugin(EditorScriptPreviewPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorAudioStreamPreviewPlugin::~EditorAudioStreamPreviewPlugin() */

void __thiscall
EditorAudioStreamPreviewPlugin::~EditorAudioStreamPreviewPlugin
          (EditorAudioStreamPreviewPlugin *this)

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
/* EditorResourcePreviewGenerator::DrawRequester::~DrawRequester() */

void __thiscall EditorResourcePreviewGenerator::DrawRequester::~DrawRequester(DrawRequester *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


