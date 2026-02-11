
/* EditorSceneExporterGLTFSettings::get_bake_fps() const */

undefined8 __thiscall
EditorSceneExporterGLTFSettings::get_bake_fps(EditorSceneExporterGLTFSettings *this)

{
  return *(undefined8 *)(this + 0x1c8);
}



/* EditorSceneExporterGLTFSettings::set_bake_fps(double) */

void __thiscall
EditorSceneExporterGLTFSettings::set_bake_fps(EditorSceneExporterGLTFSettings *this,double param_1)

{
  *(double *)(this + 0x1c8) = param_1;
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



/* EditorSceneExporterGLTFSettings::set_copyright(String const&) */

void __thiscall
EditorSceneExporterGLTFSettings::set_copyright
          (EditorSceneExporterGLTFSettings *this,String *param_1)

{
  if (*(long *)(this + 0x1c0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x1c0),(CowData *)param_1);
    return;
  }
  return;
}



/* EditorSceneExporterGLTFSettings::get_copyright() const */

void EditorSceneExporterGLTFSettings::get_copyright(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x1c0) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x1c0));
  }
  return;
}



/* EditorSceneExporterGLTFSettings::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const
    */

void __thiscall
EditorSceneExporterGLTFSettings::_get_property_list
          (EditorSceneExporterGLTFSettings *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined4 *puVar8;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  undefined4 local_88;
  long local_80;
  long local_78;
  undefined4 local_70;
  long local_68;
  undefined4 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(undefined8 **)(this + 0x180) != (undefined8 *)0x0) &&
     (puVar8 = (undefined4 *)**(undefined8 **)(this + 0x180), puVar8 != (undefined4 *)0x0)) {
    do {
      local_88 = *puVar8;
      local_80 = 0;
      if (*(long *)(puVar8 + 2) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)(puVar8 + 2));
      }
      StringName::StringName((StringName *)&local_78,(StringName *)(puVar8 + 4));
      local_70 = puVar8[6];
      local_68 = 0;
      if (*(long *)(puVar8 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(puVar8 + 8));
      }
      local_60 = puVar8[10];
      cVar4 = String::operator==((String *)&local_80,"lossy_quality");
      if (cVar4 == '\0') {
LAB_00100160:
        lVar2 = *(long *)param_1;
      }
      else {
        StringName::StringName((StringName *)&local_90,"image_format",false);
        Object::get((StringName *)local_58,(bool *)this);
        Variant::operator_cast_to_String((Variant *)&local_98);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        cVar4 = String::operator==((String *)&local_98,"JPEG");
        if ((cVar4 == '\0') && (iVar5 = String::findn((char *)&local_98,0x10475e), iVar5 == -1)) {
          local_60 = 2;
        }
        else {
          local_60 = 6;
        }
        lVar2 = local_98;
        if (local_98 == 0) goto LAB_00100160;
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_00100160;
        local_98 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        lVar2 = *(long *)param_1;
      }
      if (lVar2 == 0) {
        pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])param_1 = pauVar7;
        *(undefined4 *)pauVar7[1] = 0;
        *pauVar7 = (undefined1  [16])0x0;
      }
      puVar6 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
      *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
      *puVar6 = 0;
      puVar6[6] = 0;
      *(undefined8 *)(puVar6 + 8) = 0;
      puVar6[10] = 6;
      *(undefined8 *)(puVar6 + 0x10) = 0;
      *(undefined1 (*) [16])(puVar6 + 0xc) = (undefined1  [16])0x0;
      *puVar6 = local_88;
      if (local_80 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 2),(CowData *)&local_80);
      }
      StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_78);
      puVar6[6] = local_70;
      if (*(long *)(puVar6 + 8) != local_68) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)&local_68);
      }
      lVar3 = local_68;
      puVar6[10] = local_60;
      plVar1 = *(long **)param_1;
      lVar2 = plVar1[1];
      *(undefined8 *)(puVar6 + 0xc) = 0;
      *(long **)(puVar6 + 0x10) = plVar1;
      *(long *)(puVar6 + 0xe) = lVar2;
      if (lVar2 != 0) {
        *(undefined4 **)(lVar2 + 0x30) = puVar6;
      }
      plVar1[1] = (long)puVar6;
      if (*plVar1 == 0) {
        *plVar1 = (long)puVar6;
      }
      *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
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
      puVar8 = *(undefined4 **)(puVar8 + 0xc);
    } while (puVar8 != (undefined4 *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorSceneExporterGLTFSettings::_bind_methods() */

void EditorSceneExporterGLTFSettings::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long *local_a8;
  undefined8 local_a0;
  char *local_98;
  long local_90;
  long *local_88;
  int local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_98,(char ***)"get_copyright",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<EditorSceneExporterGLTFSettings,String>(get_copyright);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "copyright";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_copyright",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<EditorSceneExporterGLTFSettings,String_const&>(set_copyright);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_98 = "Example: 2014 Godette";
  local_c8 = 0;
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "copyright";
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,4);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 0x14;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_0010088b:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_0010088b;
    StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
    if (local_88 == local_a8) {
      if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = local_a8;
    }
  }
  local_d8 = 0;
  local_a8 = (long *)0x105a90;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
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
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_bake_fps",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<EditorSceneExporterGLTFSettings,double>(get_bake_fps);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "bake_fps";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_bake_fps",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<EditorSceneExporterGLTFSettings,double>(set_bake_fps);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar5 = local_88 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar5 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "bake_fps";
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,3);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_00100db5;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00100db5:
  local_d8 = 0;
  local_a8 = (long *)0x105a90;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != (long *)0x0)) {
    StringName::unref();
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
  lVar2 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar1 = (long *)(local_d0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (((StringName::configured != '\0') &&
      ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_b0 != 0)))
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* get_friendly_config_prefix(Ref<GLTFDocumentExtension>) */

StrRange * get_friendly_config_prefix(StrRange *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  char *local_78;
  long local_70;
  long local_68;
  CowData *local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Resource::get_name();
  if ((local_78 != (char *)0x0) && (1 < *(uint *)(local_78 + -8))) {
    *(char **)param_1 = local_78;
    goto LAB_001012fb;
  }
  plVar1 = (long *)*param_2;
  if (plVar1[1] == 0) {
    plVar4 = (long *)plVar1[0x23];
    if (plVar4 != (long *)0x0) goto LAB_001011a2;
    if (*(code **)(*plVar1 + 0x40) != GLTFDocumentExtension::_get_class_namev) {
      plVar4 = (long *)(**(code **)(*plVar1 + 0x40))();
      goto LAB_001011a2;
    }
    if ((GLTFDocumentExtension::_get_class_namev()::_class_name_static == '\0') &&
       (iVar3 = __cxa_guard_acquire(&GLTFDocumentExtension::_get_class_namev()::_class_name_static),
       iVar3 != 0)) {
      GLTFDocumentExtension::_get_class_namev()::_class_name_static = 0;
      __cxa_atexit(StringName::~StringName,
                   &GLTFDocumentExtension::_get_class_namev()::_class_name_static,&__dso_handle);
      __cxa_guard_release(&GLTFDocumentExtension::_get_class_namev()::_class_name_static);
    }
    if (GLTFDocumentExtension::_get_class_namev()::_class_name_static == 0) {
LAB_00101418:
      StringName::assign_static_unique_class_name
                ((StringName *)&GLTFDocumentExtension::_get_class_namev()::_class_name_static,
                 "GLTFDocumentExtension");
      plVar4 = &GLTFDocumentExtension::_get_class_namev()::_class_name_static;
      goto LAB_001011a2;
    }
    pcVar7 = *(char **)(GLTFDocumentExtension::_get_class_namev()::_class_name_static + 8);
    if (pcVar7 == (char *)0x0) {
      if ((*(long *)(GLTFDocumentExtension::_get_class_namev()::_class_name_static + 0x10) == 0) ||
         (lVar6 = GLTFDocumentExtension::_get_class_namev()::_class_name_static,
         *(uint *)(*(long *)(GLTFDocumentExtension::_get_class_namev()::_class_name_static + 0x10) +
                  -8) < 2)) goto LAB_00101418;
      goto LAB_001014c0;
    }
LAB_001011bb:
    local_70 = 0;
    local_50 = strlen(pcVar7);
    local_58 = pcVar7;
    String::parse_latin1((StrRange *)&local_70);
  }
  else {
    plVar4 = (long *)(plVar1[1] + 0x20);
LAB_001011a2:
    lVar6 = *plVar4;
    if (lVar6 != 0) {
      pcVar7 = *(char **)(lVar6 + 8);
      if (pcVar7 != (char *)0x0) goto LAB_001011bb;
LAB_001014c0:
      plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
      if (*(long *)(lVar6 + 0x10) != 0) {
        do {
          lVar2 = *plVar1;
          if (lVar2 == 0) goto LAB_001014a9;
          LOCK();
          lVar5 = *plVar1;
          bVar8 = lVar2 == lVar5;
          if (bVar8) {
            *plVar1 = lVar2 + 1;
            lVar5 = lVar2;
          }
          UNLOCK();
        } while (!bVar8);
        if (lVar5 != -1) {
          local_70 = *(long *)(lVar6 + 0x10);
          goto LAB_001011eb;
        }
      }
    }
LAB_001014a9:
    local_70 = 0;
  }
LAB_001011eb:
  String::trim_prefix((char *)&local_68);
  String::capitalize();
  pcVar7 = local_58;
  if (local_78 == local_58) {
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar7 + -0x10,false);
      }
    }
  }
  else {
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(local_78 + -0x10,false);
      }
    }
    local_78 = local_58;
  }
  lVar6 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if ((local_78 == (char *)0x0) || (*(uint *)(local_78 + -8) < 2)) {
    (**(code **)(*(long *)*param_2 + 0x1d0))(&local_68);
    if ((local_60 == (CowData *)0x0) || (*(long *)(local_60 + -8) < 1)) {
      *(undefined8 *)param_1 = 0;
      local_58 = "Unknown GLTFDocumentExtension";
      local_50 = 0x1d;
      String::parse_latin1(param_1);
    }
    else {
      *(undefined8 *)param_1 = 0;
      if (*(long *)local_60 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)param_1,local_60);
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_60);
    lVar6 = local_70;
  }
  else {
    *(char **)param_1 = local_78;
    local_78 = (char *)0x0;
    lVar6 = local_70;
  }
  local_70 = lVar6;
  if (lVar6 != 0) {
    LOCK();
    plVar1 = (long *)(lVar6 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (local_78 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static(local_78 + -0x10,false);
    }
  }
LAB_001012fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSceneExporterGLTFSettings::_get_extension_setting(String const&, Variant&) const */

undefined1 __thiscall
EditorSceneExporterGLTFSettings::_get_extension_setting
          (EditorSceneExporterGLTFSettings *this,String *param_1,Variant *param_2)

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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  code *pcVar19;
  String *pSVar20;
  String *pSVar21;
  char cVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  int iVar26;
  long lVar27;
  Object *pOVar28;
  ulong uVar29;
  long lVar30;
  uint uVar31;
  uint uVar32;
  long in_FS_OFFSET;
  bool bVar33;
  undefined1 local_71;
  long local_70;
  char local_68 [8];
  String *local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar30 = *plVar1;
      if (lVar30 == 0) goto LAB_001015bf;
      LOCK();
      lVar24 = *plVar1;
      bVar33 = lVar30 == lVar24;
      if (bVar33) {
        *plVar1 = lVar30 + 1;
        lVar24 = lVar30;
      }
      UNLOCK();
    } while (!bVar33);
    if (lVar24 != -1) {
      local_70 = *(long *)param_1;
    }
  }
LAB_001015bf:
  String::split(local_68,SUB81((StringName *)&local_70,0),0x1047e1);
  lVar30 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar30 + -0x10),false);
    }
  }
  pSVar20 = local_60;
  if (local_60 == (String *)0x0) {
LAB_001019e0:
    lVar30 = 0;
  }
  else {
    lVar30 = *(long *)(local_60 + -8);
    if (0 < lVar30) {
      if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
        uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
        uVar29 = CONCAT44(0,uVar2);
        lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b8) * 8);
        uVar23 = String::hash();
        lVar24 = *(long *)(this + 0x1a0);
        uVar25 = 1;
        if (uVar23 != 0) {
          uVar25 = uVar23;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)uVar25 * lVar30;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar29;
        lVar27 = SUB168(auVar3 * auVar11,8);
        uVar23 = *(uint *)(lVar24 + lVar27 * 4);
        iVar26 = SUB164(auVar3 * auVar11,8);
        if (uVar23 != 0) {
          uVar31 = 0;
          do {
            if (uVar23 == uVar25) {
              cVar22 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0x198) + lVar27 * 8) + 0x10),
                                          pSVar20);
              pSVar21 = local_60;
              if (cVar22 != '\0') {
                if (local_60 == (String *)0x0) goto LAB_001019e0;
                lVar30 = *(long *)(local_60 + -8);
                if (lVar30 < 1) goto LAB_001019e3;
                if ((*(long *)(this + 0x198) == 0) || (*(int *)(this + 0x1bc) == 0))
                goto LAB_001019b0;
                uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
                lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b8) * 8);
                uVar23 = String::hash();
                uVar29 = CONCAT44(0,uVar2);
                lVar24 = *(long *)(this + 0x1a0);
                uVar25 = 1;
                if (uVar23 != 0) {
                  uVar25 = uVar23;
                }
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)uVar25 * lVar30;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = uVar29;
                lVar27 = SUB168(auVar7 * auVar15,8);
                uVar23 = *(uint *)(lVar24 + lVar27 * 4);
                uVar31 = SUB164(auVar7 * auVar15,8);
                if (uVar23 == 0) goto LAB_001019b0;
                uVar32 = 0;
                goto LAB_00101879;
              }
              lVar24 = *(long *)(this + 0x1a0);
            }
            uVar31 = uVar31 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(iVar26 + 1) * lVar30;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar29;
            lVar27 = SUB168(auVar4 * auVar12,8);
            uVar23 = *(uint *)(lVar24 + lVar27 * 4);
            iVar26 = SUB164(auVar4 * auVar12,8);
          } while ((uVar23 != 0) &&
                  (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar23 * lVar30, auVar13._8_8_ = 0,
                  auVar13._0_8_ = uVar29, auVar6._8_8_ = 0,
                  auVar6._0_8_ = (ulong)((uVar2 + iVar26) - SUB164(auVar5 * auVar13,8)) * lVar30,
                  auVar14._8_8_ = 0, auVar14._0_8_ = uVar29, uVar31 <= SUB164(auVar6 * auVar14,8)));
        }
      }
      local_71 = 0;
LAB_00101630:
      CowData<String>::_unref((CowData<String> *)&local_60);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_71;
    }
  }
LAB_001019e3:
  lVar24 = 0;
LAB_00101a00:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar24,lVar30,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar19 = (code *)invalidInstructionException();
  (*pcVar19)();
LAB_00101879:
  if (uVar25 == uVar23) {
    cVar22 = String::operator==((String *)(*(long *)(*(long *)(this + 0x198) + lVar27 * 8) + 0x10),
                                pSVar21);
    if (cVar22 != '\0') {
      pOVar28 = *(Object **)(*(long *)(*(long *)(this + 0x198) + (ulong)uVar31 * 8) + 0x18);
      if ((pOVar28 != (Object *)0x0) && (cVar22 = RefCounted::reference(), cVar22 == '\0')) {
        pOVar28 = (Object *)0x0;
      }
      if (local_60 == (String *)0x0) {
        lVar30 = 0;
      }
      else {
        lVar30 = *(long *)(local_60 + -8);
        if (1 < lVar30) {
          StringName::StringName((StringName *)&local_70,local_60 + 8,false);
          Object::get((StringName *)local_58,(bool *)pOVar28);
          if (Variant::needs_deinit[*(int *)param_2] != '\0') {
            Variant::_clear_internal();
          }
          bVar33 = StringName::configured != '\0';
          *(undefined4 *)param_2 = local_58[0];
          *(undefined8 *)(param_2 + 8) = local_50;
          *(undefined8 *)(param_2 + 0x10) = uStack_48;
          if ((bVar33) && (local_70 != 0)) {
            StringName::unref();
          }
          if (((pOVar28 != (Object *)0x0) && (cVar22 = RefCounted::unreference(), cVar22 != '\0'))
             && (cVar22 = predelete_handler(pOVar28), cVar22 != '\0')) {
            (**(code **)(*(long *)pOVar28 + 0x140))(pOVar28);
            Memory::free_static(pOVar28,false);
          }
          goto LAB_00101630;
        }
      }
      lVar24 = 1;
      goto LAB_00101a00;
    }
    lVar24 = *(long *)(this + 0x1a0);
  }
  uVar32 = uVar32 + 1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)(uVar31 + 1) * lVar30;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar29;
  lVar27 = SUB168(auVar8 * auVar16,8);
  uVar23 = *(uint *)(lVar24 + lVar27 * 4);
  uVar31 = SUB164(auVar8 * auVar16,8);
  if ((uVar23 == 0) ||
     (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar23 * lVar30, auVar17._8_8_ = 0,
     auVar17._0_8_ = uVar29, auVar10._8_8_ = 0,
     auVar10._0_8_ = (ulong)((uVar2 + uVar31) - SUB164(auVar9 * auVar17,8)) * lVar30,
     auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, SUB164(auVar10 * auVar18,8) < uVar32)) {
LAB_001019b0:
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar19 = (code *)invalidInstructionException();
    (*pcVar19)();
  }
  goto LAB_00101879;
}



/* EditorSceneExporterGLTFSettings::_get(StringName const&, Variant&) const */

undefined4 __thiscall
EditorSceneExporterGLTFSettings::_get
          (EditorSceneExporterGLTFSettings *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  float fVar10;
  long local_70;
  char *local_68;
  size_t local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar2 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
LAB_00101b99:
    local_70 = 0;
  }
  else {
    pcVar3 = *(char **)(lVar2 + 8);
    local_70 = 0;
    if (pcVar3 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
      if (*(long *)(lVar2 + 0x10) == 0) goto LAB_00101b99;
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00101b99;
        LOCK();
        lVar8 = *plVar1;
        bVar9 = lVar4 == lVar8;
        if (bVar9) {
          *plVar1 = lVar4 + 1;
          lVar8 = lVar4;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar8 != -1) {
        local_70 = *(long *)(lVar2 + 0x10);
      }
    }
    else {
      local_60 = strlen(pcVar3);
      local_68 = pcVar3;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  iVar6 = String::find_char((wchar32)(String *)&local_70,0x2f);
  if (iVar6 == -1) {
    StringName::StringName((StringName *)&local_68,"image_format",false);
    pcVar5 = local_68;
    pcVar3 = *(char **)param_1;
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (pcVar3 == pcVar5) {
      GLTFDocument::get_image_format();
      Variant::Variant((Variant *)local_58,(String *)&local_68);
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_2 = local_58[0];
      *(undefined8 *)(param_2 + 8) = local_50;
      *(undefined8 *)(param_2 + 0x10) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    else {
      StringName::StringName((StringName *)&local_68,"lossy_quality",false);
      pcVar5 = local_68;
      pcVar3 = *(char **)param_1;
      if ((local_68 != (char *)0x0) && (StringName::configured != '\0')) {
        StringName::unref();
      }
      if (pcVar3 == pcVar5) {
        fVar10 = (float)GLTFDocument::get_lossy_quality();
        Variant::Variant((Variant *)local_58,fVar10);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_58[0];
        *(undefined8 *)(param_2 + 8) = local_50;
        *(undefined8 *)(param_2 + 0x10) = uStack_48;
      }
      else {
        StringName::StringName((StringName *)&local_68,"root_node_mode",false);
        pcVar5 = local_68;
        pcVar3 = *(char **)param_1;
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        uVar7 = 0;
        if (pcVar3 != pcVar5) goto LAB_00101af9;
        iVar6 = GLTFDocument::get_root_node_mode();
        Variant::Variant((Variant *)local_58,iVar6);
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_2 = local_58[0];
        *(undefined8 *)(param_2 + 8) = local_50;
        *(undefined8 *)(param_2 + 0x10) = uStack_48;
      }
    }
    uVar7 = 1;
  }
  else {
    uVar7 = _get_extension_setting(this,(String *)&local_70,param_2);
  }
LAB_00101af9:
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* EditorSceneExporterGLTFSettings::_set_extension_setting(String const&, Variant const&) */

undefined1 __thiscall
EditorSceneExporterGLTFSettings::_set_extension_setting
          (EditorSceneExporterGLTFSettings *this,String *param_1,Variant *param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  code *pcVar10;
  ulong uVar11;
  String *pSVar12;
  char cVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  StringName *pSVar20;
  long lVar21;
  uint uVar22;
  long in_FS_OFFSET;
  bool bVar23;
  undefined1 local_61;
  long local_60;
  char local_58 [8];
  String *local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  if (*(long *)param_1 != 0) {
    plVar15 = (long *)(*(long *)param_1 + -0x10);
    do {
      lVar21 = *plVar15;
      if (lVar21 == 0) goto LAB_00101dc0;
      LOCK();
      lVar16 = *plVar15;
      bVar23 = lVar21 == lVar16;
      if (bVar23) {
        *plVar15 = lVar21 + 1;
        lVar16 = lVar21;
      }
      UNLOCK();
    } while (!bVar23);
    if (lVar16 != -1) {
      local_60 = *(long *)param_1;
    }
  }
LAB_00101dc0:
  String::split(local_58,SUB81((StringName *)&local_60,0),0x1047e1);
  lVar21 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar15 = (long *)(local_60 + -0x10);
    *plVar15 = *plVar15 + -1;
    UNLOCK();
    if (*plVar15 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar21 + -0x10),false);
    }
  }
  pSVar12 = local_50[0];
  if (local_50[0] == (String *)0x0) {
LAB_00102070:
    lVar21 = 0;
  }
  else {
    lVar21 = *(long *)(local_50[0] + -8);
    if (0 < lVar21) {
      if ((*(long *)(this + 0x198) != 0) && (*(int *)(this + 0x1bc) != 0)) {
        uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1b8) * 4);
        lVar21 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x1b8) * 8);
        uVar14 = String::hash();
        uVar11 = CONCAT44(0,uVar1);
        lVar16 = *(long *)(this + 0x1a0);
        uVar17 = 1;
        if (uVar14 != 0) {
          uVar17 = uVar14;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)uVar17 * lVar21;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar11;
        lVar19 = SUB168(auVar2 * auVar6,8);
        uVar14 = *(uint *)(lVar16 + lVar19 * 4);
        iVar18 = SUB164(auVar2 * auVar6,8);
        if (uVar14 != 0) {
          uVar22 = 0;
          do {
            if (uVar17 == uVar14) {
              cVar13 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0x198) + lVar19 * 8) + 0x10),
                                          pSVar12);
              if (cVar13 != '\0') {
                if (local_50[0] == (String *)0x0) goto LAB_00102070;
                lVar21 = *(long *)(local_50[0] + -8);
                if (lVar21 < 1) goto LAB_00102073;
                plVar15 = (long *)HashMap<String,Ref<GLTFDocumentExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GLTFDocumentExtension>>>>
                                  ::operator[]((HashMap<String,Ref<GLTFDocumentExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GLTFDocumentExtension>>>>
                                                *)(this + 400),local_50[0]);
                pSVar20 = (StringName *)*plVar15;
                if ((pSVar20 != (StringName *)0x0) &&
                   (cVar13 = RefCounted::reference(), cVar13 == '\0')) {
                  pSVar20 = (StringName *)0x0;
                }
                if (local_50[0] == (String *)0x0) {
                  lVar21 = 0;
                }
                else {
                  lVar21 = *(long *)(local_50[0] + -8);
                  if (1 < lVar21) {
                    StringName::StringName((StringName *)&local_60,local_50[0] + 8,false);
                    Object::set(pSVar20,(Variant *)&local_60,(bool *)param_2);
                    if ((StringName::configured != '\0') && (local_60 != 0)) {
                      StringName::unref();
                    }
                    if (((pSVar20 != (StringName *)0x0) &&
                        (cVar13 = RefCounted::unreference(), cVar13 != '\0')) &&
                       (cVar13 = predelete_handler((Object *)pSVar20), cVar13 != '\0')) {
                      (**(code **)(*(long *)pSVar20 + 0x140))(pSVar20);
                      Memory::free_static(pSVar20,false);
                    }
                    goto LAB_00101e2c;
                  }
                }
                lVar16 = 1;
                goto LAB_00102090;
              }
              lVar16 = *(long *)(this + 0x1a0);
            }
            uVar22 = uVar22 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)(iVar18 + 1) * lVar21;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar11;
            lVar19 = SUB168(auVar3 * auVar7,8);
            uVar14 = *(uint *)(lVar16 + lVar19 * 4);
            iVar18 = SUB164(auVar3 * auVar7,8);
          } while ((uVar14 != 0) &&
                  (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar14 * lVar21, auVar8._8_8_ = 0,
                  auVar8._0_8_ = uVar11, auVar5._8_8_ = 0,
                  auVar5._0_8_ = (ulong)((uVar1 + iVar18) - SUB164(auVar4 * auVar8,8)) * lVar21,
                  auVar9._8_8_ = 0, auVar9._0_8_ = uVar11, uVar22 <= SUB164(auVar5 * auVar9,8)));
        }
      }
      local_61 = 0;
LAB_00101e2c:
      CowData<String>::_unref((CowData<String> *)local_50);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_61;
    }
  }
LAB_00102073:
  lVar16 = 0;
LAB_00102090:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar21,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar10 = (code *)invalidInstructionException();
  (*pcVar10)();
}



/* EditorSceneExporterGLTFSettings::_set(StringName const&, Variant const&) */

undefined4 __thiscall
EditorSceneExporterGLTFSettings::_set
          (EditorSceneExporterGLTFSettings *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  String *pSVar6;
  char *pcVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  float fVar12;
  long local_70;
  char *local_68;
  size_t local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar2 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar2 == 0) {
LAB_00102219:
    local_70 = 0;
  }
  else {
    pcVar3 = *(char **)(lVar2 + 8);
    local_70 = 0;
    if (pcVar3 == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
      if (*(long *)(lVar2 + 0x10) == 0) goto LAB_00102219;
      do {
        lVar4 = *plVar1;
        if (lVar4 == 0) goto LAB_00102219;
        LOCK();
        lVar10 = *plVar1;
        bVar11 = lVar4 == lVar10;
        if (bVar11) {
          *plVar1 = lVar4 + 1;
          lVar10 = lVar4;
        }
        UNLOCK();
      } while (!bVar11);
      if (lVar10 != -1) {
        local_70 = *(long *)(lVar2 + 0x10);
      }
    }
    else {
      local_60 = strlen(pcVar3);
      local_68 = pcVar3;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  iVar8 = String::find_char((wchar32)(String *)&local_70,0x2f);
  if (iVar8 == -1) {
    StringName::StringName((StringName *)&local_68,"image_format",false);
    pcVar7 = local_68;
    pcVar3 = *(char **)param_1;
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    if (pcVar3 == pcVar7) {
      pSVar6 = *(String **)(this + 0x188);
      Variant::operator_cast_to_String((Variant *)&local_68);
      GLTFDocument::set_image_format(pSVar6);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      (**(code **)(*(long *)this + 0xd0))(this,CoreStringNames::singleton + 0x120,0,0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
    }
    else {
      StringName::StringName((StringName *)&local_68,"lossy_quality",false);
      pcVar7 = local_68;
      pcVar3 = *(char **)param_1;
      if ((local_68 != (char *)0x0) && (StringName::configured != '\0')) {
        StringName::unref();
      }
      if (pcVar3 == pcVar7) {
        fVar12 = Variant::operator_cast_to_float(param_2);
        GLTFDocument::set_lossy_quality(fVar12);
      }
      else {
        StringName::StringName((StringName *)&local_68,"root_node_mode",false);
        pcVar7 = local_68;
        pcVar3 = *(char **)param_1;
        if ((local_68 != (char *)0x0) && (StringName::configured != '\0')) {
          StringName::unref();
        }
        uVar9 = 0;
        if (pcVar3 != pcVar7) goto LAB_00102179;
        uVar5 = *(undefined8 *)(this + 0x188);
        Variant::operator_cast_to_long(param_2);
        GLTFDocument::set_root_node_mode(uVar5);
      }
    }
    uVar9 = 1;
  }
  else {
    uVar9 = _set_extension_setting(this,(String *)&local_70,param_2);
  }
LAB_00102179:
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}



/* CowData<Ref<GLTFDocumentExtension> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<GLTFDocumentExtension>>::_copy_on_write(CowData<Ref<GLTFDocumentExtension>> *this)

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



/* EditorSceneExporterGLTFSettings::generate_property_list(Ref<GLTFDocument>, Node*) */

void EditorSceneExporterGLTFSettings::generate_property_list(long param_1,long *param_2)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  Object *pOVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  CallableCustom *this;
  long *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined1 (*pauVar12) [16];
  long *plVar13;
  long *plVar14;
  Object *pOVar15;
  long lVar16;
  long in_FS_OFFSET;
  StringName *local_198;
  StrRange *local_188;
  StrRange *local_180;
  long local_120;
  long local_118;
  long *local_110;
  long local_108;
  long local_100;
  long local_f8;
  long *local_f0;
  long local_e8 [2];
  undefined4 local_d8 [2];
  long local_d0;
  char *local_c8;
  int local_c0;
  long local_b8;
  undefined4 local_b0;
  undefined *local_a8;
  long local_a0;
  char *local_98;
  int local_90;
  long local_88;
  undefined4 local_80;
  Object *local_78;
  undefined *local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  plVar13 = *(long **)(param_1 + 0x180);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar13 != (long *)0x0) {
    do {
      pvVar2 = (void *)*plVar13;
      if (pvVar2 == (void *)0x0) goto LAB_001025b1;
      if (*(long **)((long)pvVar2 + 0x40) == plVar13) {
        lVar16 = *(long *)((long)pvVar2 + 0x30);
        lVar3 = *(long *)((long)pvVar2 + 0x38);
        *plVar13 = lVar16;
        if (pvVar2 == (void *)plVar13[1]) {
          plVar13[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x30) = lVar16;
          lVar16 = *(long *)((long)pvVar2 + 0x30);
        }
        if (lVar16 != 0) {
          *(long *)(lVar16 + 0x38) = lVar3;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 8));
        Memory::free_static(pvVar2,false);
        *(int *)(plVar13 + 2) = (int)plVar13[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar13 = *(long **)(param_1 + 0x180);
    } while ((int)plVar13[2] != 0);
    Memory::free_static(plVar13,false);
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
LAB_001025b1:
  pOVar4 = (Object *)*param_2;
  pOVar15 = *(Object **)(param_1 + 0x188);
  if (pOVar4 != pOVar15) {
    *(Object **)(param_1 + 0x188) = pOVar4;
    if ((pOVar4 != (Object *)0x0) && (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
    if (((pOVar15 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
       (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
      (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
      Memory::free_static(pOVar15,false);
    }
  }
  local_120 = 0;
  local_70 = (undefined *)0xd;
  local_78 = (Object *)0x104875;
  String::parse_latin1((StrRange *)&local_120);
  GLTFDocument::get_all_gltf_document_extensions();
  CowData<Ref<GLTFDocumentExtension>>::_copy_on_write
            ((CowData<Ref<GLTFDocumentExtension>> *)&local_f0);
  plVar14 = local_f0;
  CowData<Ref<GLTFDocumentExtension>>::_copy_on_write
            ((CowData<Ref<GLTFDocumentExtension>> *)&local_f0);
  plVar13 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar13 = local_f0 + local_f0[-1];
  }
  if (plVar14 != plVar13) {
    do {
      this = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this);
      *(long *)(this + 0x28) = param_1;
      *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
      *(undefined **)(this + 0x20) = &_LC4;
      *(undefined ***)this = &PTR_hash_00108870;
      *(undefined8 *)(this + 0x40) = 0;
      uVar5 = *(undefined8 *)(param_1 + 0x60);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x30) = uVar5;
      *(code **)(this + 0x38) = _on_extension_property_list_changed;
      CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
      *(char **)(this + 0x20) =
           "EditorSceneExporterGLTFSettings::_on_extension_property_list_changed";
      Callable::Callable((Callable *)local_e8,this);
      cVar8 = (**(code **)(*(long *)*plVar14 + 0x118))
                        ((long *)*plVar14,CoreStringNames::singleton + 0x120,(Callable *)local_e8);
      if (cVar8 == '\0') {
        (**(code **)(*(long *)*plVar14 + 0x108))
                  ((long *)*plVar14,CoreStringNames::singleton + 0x120,(Callable *)local_e8,0);
      }
      pOVar4 = (Object *)*plVar14;
      if ((pOVar4 == (Object *)0x0) ||
         (local_78 = pOVar4, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
        local_78 = (Object *)0x0;
        get_friendly_config_prefix((String *)&local_118,(String *)&local_78);
      }
      else {
        get_friendly_config_prefix((String *)&local_118);
        cVar8 = RefCounted::unreference();
        if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar4), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      plVar9 = (long *)HashMap<String,Ref<GLTFDocumentExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GLTFDocumentExtension>>>>
                       ::operator[]((HashMap<String,Ref<GLTFDocumentExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GLTFDocumentExtension>>>>
                                     *)(param_1 + 400),(String *)&local_118);
      pOVar4 = (Object *)*plVar14;
      pOVar15 = (Object *)*plVar9;
      if (pOVar4 != pOVar15) {
        *plVar9 = (long)pOVar4;
        if ((pOVar4 != (Object *)0x0) && (cVar8 = RefCounted::reference(), cVar8 == '\0')) {
          *plVar9 = 0;
        }
        if (((pOVar15 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
           (cVar8 = predelete_handler(pOVar15), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
        }
        pOVar15 = (Object *)*plVar14;
      }
      (**(code **)(*(long *)pOVar15 + 0x250))(local_d8,pOVar15);
      for (lVar16 = 0; (local_d0 != 0 && (lVar16 < *(long *)(local_d0 + -8))); lVar16 = lVar16 + 1)
      {
        operator+((char *)&local_78,(String *)&_LC46);
        String::operator+=((String *)&local_120,(String *)&local_78);
        pOVar4 = local_78;
        if (local_78 != (Object *)0x0) {
          LOCK();
          pOVar15 = local_78 + -0x10;
          *(long *)pOVar15 = *(long *)pOVar15 + -1;
          UNLOCK();
          if (*(long *)pOVar15 == 0) {
            local_78 = (Object *)0x0;
            Memory::free_static(pOVar4 + -0x10,false);
          }
        }
      }
      local_110 = (long *)0x0;
      Object::get_property_list((List *)*plVar14,SUB81(&local_110,0));
      if (local_110 != (long *)0x0) {
        for (puVar11 = (undefined4 *)*local_110; puVar11 != (undefined4 *)0x0;
            puVar11 = *(undefined4 **)(puVar11 + 0xc)) {
          while ((~puVar11[10] & 0x1004) == 0) {
            local_70 = (undefined *)0x0;
            local_78 = (Object *)CONCAT44(local_78._4_4_,*puVar11);
            if (*(long *)(puVar11 + 2) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(puVar11 + 2));
            }
            StringName::StringName((StringName *)&local_68,(StringName *)(puVar11 + 4));
            local_60 = puVar11[6];
            local_58 = 0;
            if (*(long *)(puVar11 + 8) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(puVar11 + 8));
            }
            local_50 = puVar11[10];
            local_108 = 0;
            local_a0 = 1;
            local_a8 = &_LC30;
            String::parse_latin1((StrRange *)&local_108);
            String::operator+((String *)&local_100,(String *)&local_118);
            String::operator+((String *)&local_a8,(String *)&local_100);
            puVar7 = local_70;
            puVar6 = local_a8;
            if (local_70 == local_a8) {
              if (local_70 != (undefined *)0x0) {
                LOCK();
                plVar9 = (long *)(local_70 + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  local_a8 = (undefined *)0x0;
                  Memory::free_static(puVar6 + -0x10,false);
                }
              }
            }
            else {
              if (local_70 != (undefined *)0x0) {
                LOCK();
                plVar9 = (long *)(local_70 + -0x10);
                *plVar9 = *plVar9 + -1;
                UNLOCK();
                if (*plVar9 == 0) {
                  local_70 = (undefined *)0x0;
                  Memory::free_static(puVar7 + -0x10,false);
                }
              }
              local_70 = local_a8;
            }
            lVar16 = local_100;
            if (local_100 != 0) {
              LOCK();
              plVar9 = (long *)(local_100 + -0x10);
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                local_100 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            lVar16 = local_108;
            if (local_108 != 0) {
              LOCK();
              plVar9 = (long *)(local_108 + -0x10);
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                local_108 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            if (*(long *)(param_1 + 0x180) == 0) {
              pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
              *(undefined1 (**) [16])(param_1 + 0x180) = pauVar12;
              *(undefined4 *)pauVar12[1] = 0;
              *pauVar12 = (undefined1  [16])0x0;
            }
            puVar10 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
            *(undefined8 *)(puVar10 + 8) = 0;
            *(undefined1 (*) [16])(puVar10 + 2) = (undefined1  [16])0x0;
            *puVar10 = 0;
            puVar10[6] = 0;
            puVar10[10] = 6;
            *(undefined8 *)(puVar10 + 0x10) = 0;
            *(undefined1 (*) [16])(puVar10 + 0xc) = (undefined1  [16])0x0;
            *puVar10 = local_78._0_4_;
            if (local_70 != (undefined *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 2),(CowData *)&local_70);
            }
            StringName::operator=((StringName *)(puVar10 + 4),(StringName *)&local_68);
            puVar10[6] = local_60;
            if (*(long *)(puVar10 + 8) != local_58) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar10 + 8),(CowData *)&local_58);
            }
            lVar3 = local_58;
            puVar10[10] = local_50;
            plVar9 = *(long **)(param_1 + 0x180);
            lVar16 = plVar9[1];
            *(undefined8 *)(puVar10 + 0xc) = 0;
            *(long **)(puVar10 + 0x10) = plVar9;
            *(long *)(puVar10 + 0xe) = lVar16;
            if (lVar16 != 0) {
              *(undefined4 **)(lVar16 + 0x30) = puVar10;
            }
            plVar9[1] = (long)puVar10;
            if (*plVar9 == 0) {
              *plVar9 = (long)puVar10;
            }
            *(int *)(plVar9 + 2) = (int)plVar9[2] + 1;
            if (local_58 != 0) {
              LOCK();
              plVar9 = (long *)(local_58 + -0x10);
              *plVar9 = *plVar9 + -1;
              UNLOCK();
              if (*plVar9 == 0) {
                local_58 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            puVar6 = local_70;
            if (local_70 == (undefined *)0x0) break;
            LOCK();
            plVar9 = (long *)(local_70 + -0x10);
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 != 0) break;
            local_70 = (undefined *)0x0;
            Memory::free_static(puVar6 + -0x10,false);
            puVar11 = *(undefined4 **)(puVar11 + 0xc);
            if (puVar11 == (undefined4 *)0x0) goto LAB_00102c9d;
          }
        }
LAB_00102c9d:
        if (local_110 != (long *)0x0) {
          do {
            plVar9 = local_110;
            pvVar2 = (void *)*local_110;
            if (pvVar2 == (void *)0x0) {
              if ((int)local_110[2] == 0) {
                Memory::free_static(local_110,false);
              }
              else {
                _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
              }
              goto LAB_00102d80;
            }
            if (*(long **)((long)pvVar2 + 0x40) == local_110) {
              lVar16 = *(long *)((long)pvVar2 + 0x30);
              lVar3 = *(long *)((long)pvVar2 + 0x38);
              *local_110 = lVar16;
              if (pvVar2 == (void *)local_110[1]) {
                local_110[1] = lVar3;
              }
              if (lVar3 != 0) {
                *(long *)(lVar3 + 0x30) = lVar16;
                lVar16 = *(long *)((long)pvVar2 + 0x30);
              }
              if (lVar16 != 0) {
                *(long *)(lVar16 + 0x38) = lVar3;
              }
              if (*(long *)((long)pvVar2 + 0x20) != 0) {
                LOCK();
                plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar16 = *(long *)((long)pvVar2 + 0x20);
                  *(undefined8 *)((long)pvVar2 + 0x20) = 0;
                  Memory::free_static((void *)(lVar16 + -0x10),false);
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
                  lVar16 = *(long *)((long)pvVar2 + 8);
                  *(undefined8 *)((long)pvVar2 + 8) = 0;
                  Memory::free_static((void *)(lVar16 + -0x10),false);
                }
              }
              Memory::free_static(pvVar2,false);
              *(int *)(plVar9 + 2) = (int)plVar9[2] + -1;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            }
          } while ((int)local_110[2] != 0);
          Memory::free_static(local_110,false);
        }
      }
LAB_00102d80:
      CowData<String>::_unref((CowData<String> *)&local_d0);
      lVar16 = local_118;
      if (local_118 != 0) {
        LOCK();
        plVar9 = (long *)(local_118 + -0x10);
        *plVar9 = *plVar9 + -1;
        UNLOCK();
        if (*plVar9 == 0) {
          local_118 = 0;
          Memory::free_static((void *)(lVar16 + -0x10),false);
        }
      }
      plVar14 = plVar14 + 1;
      Callable::~Callable((Callable *)local_e8);
    } while (plVar13 != plVar14);
  }
  local_180 = (StrRange *)&local_108;
  local_188 = (StrRange *)&local_100;
  local_198 = (StringName *)&local_68;
  CowData<Ref<GLTFDocumentExtension>>::_unref((CowData<Ref<GLTFDocumentExtension>> *)&local_f0);
  local_a8 = (undefined *)0x0;
  local_e8[0] = 0;
  local_78 = (Object *)0x10474c;
  local_70 = (undefined *)0xc;
  String::parse_latin1((StrRange *)local_e8);
  local_d8[0] = 4;
  local_d0 = 0;
  if (local_e8[0] != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)local_e8);
  }
  local_c8 = (char *)0x0;
  local_c0 = 2;
  local_b8 = 0;
  if (local_120 == 0) {
LAB_0010369c:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_a8);
    lVar16 = local_e8[0];
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_120);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_0010369c;
    StringName::StringName((StringName *)&local_78,(String *)&local_b8,false);
    if ((Object *)local_c8 == local_78) {
      lVar16 = local_e8[0];
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
        lVar16 = local_e8[0];
      }
    }
    else {
      StringName::unref();
      lVar16 = local_e8[0];
      local_c8 = (char *)local_78;
    }
  }
  local_e8[0] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    plVar13 = (long *)(lVar16 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_e8[0] = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (*(long *)(param_1 + 0x180) == 0) {
    pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(param_1 + 0x180) = pauVar12;
    *(undefined4 *)pauVar12[1] = 0;
    *pauVar12 = (undefined1  [16])0x0;
  }
  puVar11 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
  *puVar11 = 0;
  puVar11[6] = 0;
  puVar11[10] = 6;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
  *puVar11 = local_d8[0];
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)&local_d0);
  }
  StringName::operator=((StringName *)(puVar11 + 4),(StringName *)&local_c8);
  puVar11[6] = local_c0;
  if (*(long *)(puVar11 + 8) != local_b8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_b8);
  }
  puVar11[10] = local_b0;
  plVar13 = *(long **)(param_1 + 0x180);
  lVar16 = plVar13[1];
  *(long **)(puVar11 + 0x10) = plVar13;
  *(undefined8 *)(puVar11 + 0xc) = 0;
  *(long *)(puVar11 + 0xe) = lVar16;
  if (lVar16 != 0) {
    *(undefined4 **)(lVar16 + 0x30) = puVar11;
  }
  plVar13[1] = (long)puVar11;
  if (*plVar13 == 0) {
    *plVar13 = (long)puVar11;
  }
  *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
  local_e8[0] = 0;
  local_78 = (Object *)0x10488b;
  local_f8 = 0;
  local_70 = (undefined *)0x8;
  String::parse_latin1((StrRange *)&local_f8);
  local_100 = 0;
  local_78 = (Object *)0x10473e;
  local_70 = (undefined *)0xd;
  String::parse_latin1(local_188);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,3);
  local_a0 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)local_188);
  }
  local_98 = (char *)0x0;
  local_90 = 1;
  local_88 = 0;
  if (local_f8 == 0) {
LAB_00103700:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)local_e8);
    lVar16 = local_100;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_f8);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00103700;
    StringName::StringName((StringName *)&local_78,(String *)&local_88,false);
    if ((Object *)local_98 == local_78) {
      lVar16 = local_100;
      if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
        StringName::unref();
        lVar16 = local_100;
      }
    }
    else {
      StringName::unref();
      lVar16 = local_100;
      local_98 = (char *)local_78;
    }
  }
  local_100 = lVar16;
  if (lVar16 != 0) {
    LOCK();
    plVar13 = (long *)(lVar16 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  lVar16 = local_f8;
  if (local_f8 != 0) {
    LOCK();
    plVar13 = (long *)(local_f8 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_f8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
    StringName::unref();
  }
  if (*(long *)(param_1 + 0x180) == 0) {
    pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(param_1 + 0x180) = pauVar12;
    *(undefined4 *)pauVar12[1] = 0;
    *pauVar12 = (undefined1  [16])0x0;
  }
  puVar11 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
  *puVar11 = 0;
  puVar11[6] = 0;
  puVar11[10] = 6;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
  *puVar11 = local_a8._0_4_;
  if (local_a0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)&local_a0);
  }
  StringName::operator=((StringName *)(puVar11 + 4),(StringName *)&local_98);
  puVar11[6] = local_90;
  if (*(long *)(puVar11 + 8) != local_88) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_88);
  }
  puVar11[10] = local_80;
  plVar13 = *(long **)(param_1 + 0x180);
  lVar16 = plVar13[1];
  *(undefined8 *)(puVar11 + 0xc) = 0;
  *(long **)(puVar11 + 0x10) = plVar13;
  *(long *)(puVar11 + 0xe) = lVar16;
  if (lVar16 != 0) {
    *(undefined4 **)(lVar16 + 0x30) = puVar11;
  }
  plVar13[1] = (long)puVar11;
  if (*plVar13 == 0) {
    *plVar13 = (long)puVar11;
  }
  *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
  local_78 = (Object *)0x106110;
  local_f8 = 0;
  local_100 = 0;
  local_70 = (undefined *)0x20;
  String::parse_latin1(local_188);
  local_108 = 0;
  local_78 = (Object *)0x10481c;
  local_70 = (undefined *)0xe;
  String::parse_latin1(local_180);
  local_78 = (Object *)CONCAT44(local_78._4_4_,2);
  local_70 = (undefined *)0x0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)local_180);
  }
  local_68 = 0;
  local_60 = 2;
  local_58 = 0;
  if (local_100 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_188);
    local_50 = 6;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)local_e8,(String *)&local_58,false);
      if (local_68 == local_e8[0]) {
        lVar16 = local_108;
        if ((StringName::configured != '\0') && (local_e8[0] != 0)) {
          StringName::unref();
          lVar16 = local_108;
        }
      }
      else {
        StringName::unref();
        lVar16 = local_108;
        local_68 = local_e8[0];
      }
      goto joined_r0x00103778;
    }
  }
  local_50 = 6;
  StringName::operator=(local_198,(StringName *)&local_f8);
  lVar16 = local_108;
joined_r0x00103778:
  local_108 = lVar16;
  if (lVar16 != 0) {
    LOCK();
    plVar13 = (long *)(lVar16 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_108 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  lVar16 = local_100;
  if (local_100 != 0) {
    LOCK();
    plVar13 = (long *)(local_100 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_100 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f8 != 0)) {
    StringName::unref();
  }
  if (*(long *)(param_1 + 0x180) == 0) {
    pauVar12 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])(param_1 + 0x180) = pauVar12;
    *(undefined4 *)pauVar12[1] = 0;
    *pauVar12 = (undefined1  [16])0x0;
  }
  puVar11 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined1 (*) [16])(puVar11 + 2) = (undefined1  [16])0x0;
  *puVar11 = 0;
  puVar11[6] = 0;
  puVar11[10] = 6;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar11 + 0xc) = (undefined1  [16])0x0;
  *puVar11 = local_78._0_4_;
  if (local_70 != (undefined *)0x0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar11 + 4),local_198);
  puVar11[6] = local_60;
  if (*(long *)(puVar11 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar11 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar11[10] = local_50;
  plVar13 = *(long **)(param_1 + 0x180);
  lVar16 = plVar13[1];
  *(undefined8 *)(puVar11 + 0xc) = 0;
  *(long **)(puVar11 + 0x10) = plVar13;
  *(long *)(puVar11 + 0xe) = lVar16;
  if (lVar16 != 0) {
    *(undefined4 **)(lVar16 + 0x30) = puVar11;
  }
  plVar13[1] = (long)puVar11;
  if (*plVar13 == 0) {
    *plVar13 = (long)puVar11;
  }
  *(int *)(plVar13 + 2) = (int)plVar13[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar13 = (long *)(local_58 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  puVar6 = local_70;
  if (local_70 != (undefined *)0x0) {
    LOCK();
    plVar13 = (long *)((long)local_70 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_70 = (undefined *)0x0;
      Memory::free_static((void *)((long)puVar6 + -0x10),false);
    }
  }
  lVar16 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar13 = (long *)(local_88 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  lVar16 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar13 = (long *)(local_a0 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  lVar16 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar13 = (long *)(local_b8 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar16 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar13 = (long *)(local_d0 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  lVar16 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar13 = (long *)(local_120 + -0x10);
    *plVar13 = *plVar13 + -1;
    UNLOCK();
    if (*plVar13 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar16 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorSceneExporterGLTFSettings::_on_extension_property_list_changed() */

void __thiscall
EditorSceneExporterGLTFSettings::_on_extension_property_list_changed
          (EditorSceneExporterGLTFSettings *this)

{
  Object *pOVar1;
  char cVar2;
  long in_FS_OFFSET;
  Object *local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  pOVar1 = *(Object **)(this + 0x188);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar1 == (Object *)0x0) ||
     (local_40 = pOVar1, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
    local_40 = (Object *)0x0;
    generate_property_list(this,&local_40,0);
  }
  else {
    generate_property_list(this,&local_40,0);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
  }
  local_38 = 0;
  local_30 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))(this,CoreStringNames::singleton + 0x120,0,0);
  if (Variant::needs_deinit[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
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



/* CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void> *this)

{
  return;
}



/* MethodBindT<double>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<double>::_gen_argument_type(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<double>::get_argument_meta(int) const */

byte __thiscall MethodBindT<double>::get_argument_meta(MethodBindT<double> *this,int param_1)

{
  return -(param_1 == 0) & 10;
}



/* MethodBindTRC<double>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<double>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<double>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<double>::get_argument_meta(MethodBindTRC<double> *this,int param_1)

{
  return param_1 >> 0x1f & 10;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* CallableCustomMethodPointer<EditorSceneExporterGLTFSettings, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void>::get_argument_count
          (CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108900;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108900;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108960;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108960;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001089c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001089c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108a20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108a20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CallableCustomMethodPointer<EditorSceneExporterGLTFSettings, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void>::get_object
          (CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010405d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010405d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010405d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GLTFDocumentExtension::_get_class_namev() const */

undefined8 * GLTFDocumentExtension::_get_class_namev(void)

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
LAB_00104183:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104183;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GLTFDocumentExtension");
      goto LAB_001041ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GLTFDocumentExtension");
LAB_001041ee:
  return &_get_class_namev()::_class_name_static;
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
  local_48 = &_LC4;
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
      goto joined_r0x0010439c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010439c:
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



/* MethodBindTRC<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<double>::_gen_argument_type_info(int param_1)

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
  *puVar3 = 3;
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
      goto joined_r0x0010451c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010451c:
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
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
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
        if (pvVar5 == (void *)0x0) goto LAB_001046b4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001046b4:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Ref<GLTFDocumentExtension>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   Ref<GLTFDocumentExtension> > > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,Ref<GLTFDocumentExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GLTFDocumentExtension>>>>
::operator[](HashMap<String,Ref<GLTFDocumentExtension>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GLTFDocumentExtension>>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  Object *pOVar4;
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
  char cVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined1 (*pauVar42) [16];
  undefined8 *puVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  ulong uVar49;
  undefined8 uVar50;
  uint *puVar51;
  uint uVar52;
  uint uVar53;
  long lVar54;
  uint uVar55;
  uint uVar56;
  undefined1 (*pauVar57) [16];
  undefined1 (*pauVar58) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00105070:
    uVar40 = (ulong)uVar56;
    uVar45 = uVar40 * 4;
    uVar49 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar49,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar56 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar44 + uVar49)) && (pvVar44 < (void *)((long)pvVar2 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_00104ef2;
      }
      memset(pvVar2,0,uVar45);
      memset(pvVar44,0,uVar49);
      iVar46 = *(int *)(this + 0x2c);
LAB_00104ef6:
      if (iVar46 != 0) {
LAB_00104efe:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar53 = String::hash();
        uVar40 = CONCAT44(0,uVar38);
        lVar54 = *(long *)(this + 0x10);
        uVar39 = 1;
        if (uVar53 != 0) {
          uVar39 = uVar53;
        }
        uVar55 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar3;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar40;
        lVar47 = SUB168(auVar17 * auVar33,8);
        uVar53 = *(uint *)(lVar54 + lVar47 * 4);
        uVar52 = SUB164(auVar17 * auVar33,8);
        if (uVar53 != 0) {
          do {
            if (uVar53 == uVar39) {
              cVar37 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),
                                          param_1);
              if (cVar37 != '\0') {
                pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
                pOVar4 = *(Object **)(pauVar42[1] + 8);
                if (pOVar4 != (Object *)0x0) {
                  *(undefined8 *)(pauVar42[1] + 8) = 0;
                  cVar37 = RefCounted::unreference();
                  if ((cVar37 != '\0') && (cVar37 = predelete_handler(pOVar4), cVar37 != '\0')) {
                    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                    Memory::free_static(pOVar4,false);
                  }
                  pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
                }
                goto LAB_00104d7b;
              }
              lVar54 = *(long *)(this + 0x10);
            }
            uVar55 = uVar55 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar52 + 1) * lVar3;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar40;
            lVar47 = SUB168(auVar18 * auVar34,8);
            uVar53 = *(uint *)(lVar54 + lVar47 * 4);
            uVar52 = SUB164(auVar18 * auVar34,8);
          } while ((uVar53 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar53 * lVar3, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar40, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar52) - SUB164(auVar19 * auVar35,8)) * lVar3,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar40, uVar55 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      uVar40 = (ulong)uVar56;
      goto LAB_001049b4;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_001049b4;
    if (iVar46 != 0) goto LAB_00104efe;
LAB_001049da:
    uVar56 = *(uint *)(this + 0x28);
    if (uVar56 == 0x1c) {
      pauVar42 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00104d7b;
    }
    uVar40 = (ulong)(uVar56 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar56 * 4);
    if (uVar56 + 1 < 2) {
      uVar40 = 2;
    }
    uVar56 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar49 = (ulong)uVar56;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar49 * 4;
    uVar45 = uVar49 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar56 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar49);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar38 != 0) {
      uVar40 = 0;
      do {
        uVar56 = *(uint *)((long)pvVar2 + uVar40 * 4);
        if (uVar56 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar52 = 0;
          uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar39);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar56 * lVar54;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar45;
          lVar47 = SUB168(auVar5 * auVar21,8);
          puVar51 = (uint *)(lVar3 + lVar47 * 4);
          iVar46 = SUB164(auVar5 * auVar21,8);
          uVar53 = *puVar51;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar53 * lVar54;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar45;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar6 * auVar22,8)) * lVar54;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            uVar55 = SUB164(auVar7 * auVar23,8);
            uVar50 = uVar41;
            if (uVar55 < uVar52) {
              *puVar51 = uVar56;
              puVar43 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar50 = *puVar43;
              *puVar43 = uVar41;
              uVar56 = uVar53;
              uVar52 = uVar55;
            }
            uVar52 = uVar52 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar46 + 1) * lVar54;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            lVar47 = SUB168(auVar8 * auVar24,8);
            puVar51 = (uint *)(lVar3 + lVar47 * 4);
            iVar46 = SUB164(auVar8 * auVar24,8);
            uVar41 = uVar50;
            uVar53 = *puVar51;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar51 = uVar56;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar38 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    uVar40 = CONCAT44(0,uVar56);
    if (iVar46 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar39 = String::hash();
      lVar54 = *(long *)(this + 0x10);
      uVar38 = 1;
      if (uVar39 != 0) {
        uVar38 = uVar39;
      }
      uVar52 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar47 = SUB168(auVar13 * auVar29,8);
      uVar39 = *(uint *)(lVar54 + lVar47 * 4);
      uVar53 = SUB164(auVar13 * auVar29,8);
      if (uVar39 != 0) {
        do {
          if (uVar39 == uVar38) {
            cVar37 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar47 * 8) + 0x10),param_1
                                       );
            if (cVar37 != '\0') {
              pauVar42 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar53 * 8);
              goto LAB_00104d7b;
            }
            lVar54 = *(long *)(this + 0x10);
          }
          uVar52 = uVar52 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar53 + 1) * lVar3;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar40;
          lVar47 = SUB168(auVar14 * auVar30,8);
          uVar39 = *(uint *)(lVar54 + lVar47 * 4);
          uVar53 = SUB164(auVar14 * auVar30,8);
        } while ((uVar39 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar39 * lVar3, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar40, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar53 + uVar56) - SUB164(auVar15 * auVar31,8)) * lVar3,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar40, uVar52 <= SUB164(auVar16 * auVar32,8)));
      }
      uVar56 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00105070;
LAB_00104ef2:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_00104ef6;
    }
LAB_001049b4:
    if ((float)uVar40 * __LC9 < (float)(iVar46 + 1)) goto LAB_001049da;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *pauVar42 = (undefined1  [16])0x0;
LAB_0010501b:
    *(undefined8 *)(pauVar42[1] + 8) = 0;
LAB_00104c63:
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 != (undefined8 *)0x0) goto LAB_00104c70;
LAB_00104ead:
    *(undefined1 (**) [16])(this + 0x18) = pauVar42;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar42 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar42[1] = 0;
    *(undefined8 *)*pauVar42 = 0;
    *(undefined8 *)(*pauVar42 + 8) = 0;
    if (lVar3 == 0) goto LAB_0010501b;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar42 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar42[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00104c63;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar43 = *(undefined8 **)(this + 0x20);
    if (puVar43 == (undefined8 *)0x0) goto LAB_00104ead;
LAB_00104c70:
    *puVar43 = pauVar42;
    *(undefined8 **)(*pauVar42 + 8) = puVar43;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar42;
  uVar38 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar56 = 1;
  if (uVar38 != 0) {
    uVar56 = uVar38;
  }
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar56 * lVar54;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar40;
  lVar48 = SUB168(auVar9 * auVar25,8);
  lVar47 = *(long *)(this + 8);
  puVar51 = (uint *)(lVar3 + lVar48 * 4);
  iVar46 = SUB164(auVar9 * auVar25,8);
  uVar39 = *puVar51;
  pauVar58 = pauVar42;
  if (uVar39 != 0) {
    uVar53 = 0;
    pauVar57 = pauVar42;
    do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar39 * lVar54;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)((iVar46 + uVar38) - SUB164(auVar10 * auVar26,8)) * lVar54;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar52 = SUB164(auVar11 * auVar27,8);
      pauVar58 = pauVar57;
      if (uVar52 < uVar53) {
        *puVar51 = uVar56;
        puVar43 = (undefined8 *)(lVar47 + lVar48 * 8);
        pauVar58 = (undefined1 (*) [16])*puVar43;
        *puVar43 = pauVar57;
        uVar53 = uVar52;
        uVar56 = uVar39;
      }
      uVar53 = uVar53 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar54;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      lVar48 = SUB168(auVar12 * auVar28,8);
      puVar51 = (uint *)(lVar3 + lVar48 * 4);
      iVar46 = SUB164(auVar12 * auVar28,8);
      uVar39 = *puVar51;
      pauVar57 = pauVar58;
    } while (uVar39 != 0);
  }
  *(undefined1 (**) [16])(lVar47 + lVar48 * 8) = pauVar58;
  *puVar51 = uVar56;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00104d7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar42[1] + 8;
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



/* CallableCustomMethodPointer<EditorSceneExporterGLTFSettings, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void>::call
          (CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar7 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    uVar7 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar7 != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001053ef;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_001053ef;
    lVar2 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar3 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar2 + lVar3) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001053c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar2 + lVar3),uVar7,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00105501;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001053ef:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC19,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    pcVar4 = local_48;
    if (local_48 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
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
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105501:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00105557;
  local_68 = 0;
  local_58 = &_LC4;
  local_70 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_50._8_8_;
  local_50 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,4);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00105648:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00105648;
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
LAB_00105557:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<double>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<double>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00105817;
  local_68 = 0;
  local_58 = &_LC4;
  local_70 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_50._8_8_;
  local_50 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,3);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_00105908:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_00105908;
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
LAB_00105817:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBind* create_method_bind<EditorSceneExporterGLTFSettings, String>(String
   (EditorSceneExporterGLTFSettings::*)() const) */

MethodBind * create_method_bind<EditorSceneExporterGLTFSettings,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00108900;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorSceneExporterGLTFSettings";
  local_30 = 0x1f;
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



/* MethodBind* create_method_bind<EditorSceneExporterGLTFSettings, String const&>(void
   (EditorSceneExporterGLTFSettings::*)(String const&)) */

MethodBind *
create_method_bind<EditorSceneExporterGLTFSettings,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00108960;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorSceneExporterGLTFSettings";
  local_30 = 0x1f;
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



/* MethodBind* create_method_bind<EditorSceneExporterGLTFSettings, double>(double
   (EditorSceneExporterGLTFSettings::*)() const) */

MethodBind * create_method_bind<EditorSceneExporterGLTFSettings,double>(_func_double *param_1)

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
  *(_func_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001089c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorSceneExporterGLTFSettings";
  local_30 = 0x1f;
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



/* MethodBind* create_method_bind<EditorSceneExporterGLTFSettings, double>(void
   (EditorSceneExporterGLTFSettings::*)(double)) */

MethodBind * create_method_bind<EditorSceneExporterGLTFSettings,double>(_func_void_double *param_1)

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
  *(_func_void_double **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00108a20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "EditorSceneExporterGLTFSettings";
  local_30 = 0x1f;
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



/* EditorSceneExporterGLTFSettings::_bind_methods() [clone .cold] */

void EditorSceneExporterGLTFSettings::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<GLTFDocumentExtension> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<GLTFDocumentExtension>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* CowData<Ref<GLTFDocumentExtension> >::_unref() */

void __thiscall
CowData<Ref<GLTFDocumentExtension>>::_unref(CowData<Ref<GLTFDocumentExtension>> *this)

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
LAB_0010619d:
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
            goto LAB_0010619d;
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



/* WARNING: Removing unreachable block (ram,0x001063a8) */
/* WARNING: Removing unreachable block (ram,0x0010653d) */
/* WARNING: Removing unreachable block (ram,0x00106549) */
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



/* MethodBindT<double>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<double>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00106895;
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
                    /* WARNING: Could not recover jumptable at 0x001066da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (*(undefined8 *)(*(long *)param_3 + 8),
               (long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00106895:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<double>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<double>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00106ac5;
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
                    /* WARNING: Could not recover jumptable at 0x00106909. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(**param_3,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00106ac5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<double>::call
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
  double dVar7;
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
      _err_print_error(&_LC19,"./core/object/method_bind.h",0x267,
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
      goto LAB_00106c20;
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
      dVar7 = (double)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,dVar7);
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
LAB_00106c20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<double>::validated_call
          (MethodBindTRC<double> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
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
      goto LAB_00106e84;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar5;
LAB_00106e84:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<double>::ptrcall
          (MethodBindTRC<double> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  undefined8 uVar5;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
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
      goto LAB_00107083;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar5 = (*pcVar3)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar5;
LAB_00107083:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00107455;
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
                    /* WARNING: Could not recover jumptable at 0x00107299. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00107455:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00107675;
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
                    /* WARNING: Could not recover jumptable at 0x001074b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00107675:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
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
      _err_print_error(&_LC19,"./core/object/method_bind.h",0x267,
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
      goto LAB_00107780;
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
      (*(code *)pVVar4)((String *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
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
LAB_00107780:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      local_48 = (Variant **)0x106598;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
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
      goto LAB_00107a31;
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
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
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
LAB_00107a31:
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
      local_48 = (void **)0x106598;
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
      goto LAB_00107c5e;
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
LAB_00107c5e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
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
      _err_print_error(&_LC19,"./core/object/method_bind.h",0x154,
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
      goto LAB_00107fb0;
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
      if (in_R8D != 1) goto LAB_00108000;
LAB_00107ff0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00108000:
        uVar7 = 4;
        goto LAB_00107fa5;
      }
      if (in_R8D == 1) goto LAB_00107ff0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,4);
    uVar4 = _LC64;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar7 = 3;
LAB_00107fa5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00107fb0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, double>(__UnexistingClass*, void
   (__UnexistingClass::*)(double), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,double>
               (__UnexistingClass *param_1,_func_void_double *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  double dVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010830d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00108370;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00108370:
      uVar6 = 4;
LAB_0010830d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010828b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010828b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_double **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC66;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  dVar9 = Variant::operator_cast_to_double(this);
                    /* WARNING: Could not recover jumptable at 0x001082e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(dVar9);
  return;
}



/* MethodBindT<double>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<double>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC19,"./core/object/method_bind.h",0x154,
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
      goto LAB_001083d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,double>
            (p_Var4,(_func_void_double *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001083d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorSceneExporterGLTFSettings::_set(StringName const&, Variant const&) */

void EditorSceneExporterGLTFSettings::_GLOBAL__sub_I__set(void)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = 0;
    Animation::PARAMETERS_BASE_PATH = '\x01';
    String::parse_latin1((StrRange *)&Animation::PARAMETERS_BASE_PATH);
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper == '\0') {
    AudioStreamRandomizer::base_property_helper = '\x01';
    AudioStreamRandomizer::base_property_helper._56_8_ = 2;
    AudioStreamRandomizer::base_property_helper._64_8_ = 0;
    AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
    AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      __cxa_atexit(PropertyListHelper::~PropertyListHelper,
                   AudioStreamRandomizer::base_property_helper,&__dso_handle);
      return;
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

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
/* MethodBindT<double>::~MethodBindT() */

void __thiscall MethodBindT<double>::~MethodBindT(MethodBindT<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<double>::~MethodBindTRC() */

void __thiscall MethodBindTRC<double>::~MethodBindTRC(MethodBindTRC<double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

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
/* CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorSceneExporterGLTFSettings,void> *this)

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


