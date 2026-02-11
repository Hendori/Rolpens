
/* PackedSceneEditorTranslationParserPlugin::get_recognized_extensions(List<String,
   DefaultAllocator>*) const */

void __thiscall
PackedSceneEditorTranslationParserPlugin::get_recognized_extensions
          (PackedSceneEditorTranslationParserPlugin *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "PackedScene";
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  ResourceLoader::get_recognized_extensions_for_type((String *)&local_40,param_1);
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
    return;
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



/* PackedSceneEditorTranslationParserPlugin::match_property(String const&, String const&) */

undefined8 __thiscall
PackedSceneEditorTranslationParserPlugin::match_property
          (PackedSceneEditorTranslationParserPlugin *this,String *param_1,String *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar3 = *(undefined8 **)(this + 0x208); puVar3 != (undefined8 *)0x0;
      puVar3 = (undefined8 *)*puVar3) {
    StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 2),false);
    StringName::StringName((StringName *)&local_50,param_2,false);
    cVar4 = ClassDB::is_parent_class((StringName *)&local_50,(StringName *)&local_48);
    if ((StringName::configured != '\0') &&
       (((local_50 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_48 != 0)
        ))) {
      StringName::unref();
    }
    if ((cVar4 != '\0') && (lVar7 = puVar3[4], lVar7 != 0)) {
      lVar1 = lVar7 + *(long *)(lVar7 + -8) * 8;
      for (; lVar1 != lVar7; lVar7 = lVar7 + 8) {
        cVar4 = String::match(param_1);
        if (cVar4 != '\0') goto LAB_0010022c;
      }
    }
  }
  iVar2 = *(int *)(this + 0x1ec);
  if (iVar2 == 0) {
LAB_0010022c:
    uVar5 = 0;
  }
  else {
    iVar6 = 1;
    uVar5 = String::match(param_1);
    cVar4 = (char)uVar5;
    while (cVar4 == '\0') {
      if (iVar2 <= iVar6) goto LAB_0010022c;
      iVar6 = iVar6 + 1;
      uVar5 = String::match(param_1);
      cVar4 = (char)uVar5;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

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



/* PackedSceneEditorTranslationParserPlugin::PackedSceneEditorTranslationParserPlugin() */

void __thiscall
PackedSceneEditorTranslationParserPlugin::PackedSceneEditorTranslationParserPlugin
          (PackedSceneEditorTranslationParserPlugin *this)

{
  long *plVar1;
  PackedSceneEditorTranslationParserPlugin *pPVar2;
  undefined8 uVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  CowData<char32_t> *local_60;
  char *local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RefCounted::RefCounted((RefCounted *)this);
  *(code **)this = _err_print_error;
  StringName::StringName((StringName *)(this + 0x180),"_parse_file",false);
  this[0x188] = (PackedSceneEditorTranslationParserPlugin)0x0;
  *(undefined8 *)(this + 400) = 0;
  StringName::StringName((StringName *)(this + 0x198),"_get_recognized_extensions",false);
  this[0x1a0] = (PackedSceneEditorTranslationParserPlugin)0x0;
  *(undefined8 *)(this + 0x1a8) = 0;
  StringName::StringName((StringName *)(this + 0x1b0),"_parse_file",false);
  local_58 = "text";
  *(undefined ***)this = &PTR__initialize_classv_00107358;
  uVar3 = _LC30;
  this[0x1b8] = (PackedSceneEditorTranslationParserPlugin)0x0;
  *(undefined8 *)(this + 0x1e8) = uVar3;
  *(undefined8 *)(this + 0x218) = uVar3;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1f8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_58)
  ;
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
  local_68 = 0;
  local_58 = "*_text";
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_58)
  ;
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
  local_68 = 0;
  local_58 = "popup/*/text";
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_58)
  ;
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
  local_68 = 0;
  local_58 = "title";
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_68);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_58)
  ;
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
  local_68 = 0;
  local_58 = "filters";
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_68);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_58)
  ;
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
  local_68 = 0;
  local_58 = "script";
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_58)
  ;
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
  local_68 = 0;
  local_58 = "item_*/text";
  local_50 = 0xb;
  String::parse_latin1((StrRange *)&local_68);
  HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String *)&local_58)
  ;
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
  pPVar2 = this + 0x1f0;
  local_48 = 0;
  local_58 = "text";
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_48);
  local_60 = (CowData<char32_t> *)0x0;
  iVar4 = CowData<String>::resize<false>((CowData<String> *)&local_60,1);
  if (iVar4 == 0) {
    if (local_60 == (CowData<char32_t> *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(local_60 + -8);
      if (0 < lVar6) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_60);
        if (*(long *)local_60 != local_48) {
          CowData<char32_t>::_ref(local_60,(CowData *)&local_48);
        }
        goto LAB_001007a3;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar6,"p_index","size()","",false,false);
  }
LAB_001007a3:
  local_70 = 0;
  local_58 = "LineEdit";
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_70);
  bVar5 = SUB81((StrRange *)&local_70,0);
  HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>
  ::insert((String *)&local_58,pPVar2,bVar5);
  lVar6 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_60);
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
  local_58 = "text";
  local_48 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_48);
  local_60 = (CowData<char32_t> *)0x0;
  iVar4 = CowData<String>::resize<false>((CowData<String> *)&local_60,1);
  if (iVar4 == 0) {
    if (local_60 == (CowData<char32_t> *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(local_60 + -8);
      if (0 < lVar6) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_60);
        if (*(long *)local_60 != local_48) {
          CowData<char32_t>::_ref(local_60,(CowData *)&local_48);
        }
        goto LAB_0010085b;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar6,"p_index","size()","",false,false);
  }
LAB_0010085b:
  local_70 = 0;
  local_58 = "TextEdit";
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_70);
  HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>
  ::insert((String *)&local_58,pPVar2,bVar5);
  lVar6 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_60);
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
  local_58 = "text";
  local_48 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_48);
  local_60 = (CowData<char32_t> *)0x0;
  iVar4 = CowData<String>::resize<false>((CowData<String> *)&local_60,1);
  if (iVar4 == 0) {
    if (local_60 == (CowData<char32_t> *)0x0) {
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(local_60 + -8);
      if (0 < lVar6) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_60);
        if (*(long *)local_60 != local_48) {
          CowData<char32_t>::_ref(local_60,(CowData *)&local_48);
        }
        goto LAB_0010090e;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,0,lVar6,"p_index","size()","",false,false);
  }
LAB_0010090e:
  local_70 = 0;
  local_58 = "CodeEdit";
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_70);
  HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>
  ::insert((String *)&local_58,pPVar2,bVar5);
  lVar6 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_60);
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Pair<NodePath, bool> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Pair<NodePath,bool>>::_copy_on_write(CowData<Pair<NodePath,bool>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  NodePath *pNVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  NodePath *this_00;
  
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
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    lVar6 = 0;
    this_00 = (NodePath *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        lVar7 = lVar6 + 1;
        pNVar4 = (NodePath *)(lVar6 * 0x10 + *(long *)this);
        NodePath::NodePath(this_00,pNVar4);
        this_00[8] = pNVar4[8];
        lVar6 = lVar7;
        this_00 = this_00 + 0x10;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(NodePath **)this = (NodePath *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* Vector<Pair<NodePath, bool> >::push_back(Pair<NodePath, bool>) [clone .isra.0] */

void __thiscall
Vector<Pair<NodePath,bool>>::push_back(Vector<Pair<NodePath,bool>> *this,NodePath *param_2)

{
  int iVar1;
  long lVar2;
  NodePath *this_00;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<Pair<NodePath,bool>>::resize<false>
                    ((CowData<Pair<NodePath,bool>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Pair<NodePath,bool>>::_copy_on_write((CowData<Pair<NodePath,bool>> *)(this + 8));
        this_00 = (NodePath *)(lVar2 * 0x10 + *(long *)(this + 8));
        NodePath::operator=(this_00,param_2);
        this_00[8] = param_2[8];
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



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector<String>>::_copy_on_write(CowData<Vector<String>> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  CowData<String> *this_00;
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
  this_00 = (CowData<String> *)(puVar3 + 3);
  lVar6 = 0;
  *puVar3 = 1;
  puVar3[1] = lVar1;
  if (lVar1 != 0) {
    do {
      lVar4 = lVar6 * 0x10 + *(long *)this;
      *(undefined8 *)this_00 = 0;
      if (*(long *)(lVar4 + 8) != 0) {
        CowData<String>::_ref(this_00,(CowData *)(lVar4 + 8));
      }
      lVar6 = lVar6 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar6);
  }
  _unref(this);
  *(undefined8 **)this = puVar3 + 2;
  return;
}



/* Vector<Vector<String> >::push_back(Vector<String>) [clone .isra.0] */

void __thiscall Vector<Vector<String>>::push_back(Vector<Vector<String>> *this,long param_2)

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
  iVar1 = CowData<Vector<String>>::resize<false>((CowData<Vector<String>> *)(this + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(this + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<Vector<String>>::_copy_on_write((CowData<Vector<String>> *)(this + 8));
        lVar3 = *(long *)(this + 8) + lVar2 * 0x10;
        if (*(long *)(lVar3 + 8) == *(long *)(param_2 + 8)) {
          return;
        }
        CowData<String>::_ref((CowData<String> *)(lVar3 + 8),(CowData *)(param_2 + 8));
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



/* PackedSceneEditorTranslationParserPlugin::parse_file(String const&, Vector<Vector<String> >*) */

int __thiscall
PackedSceneEditorTranslationParserPlugin::parse_file
          (PackedSceneEditorTranslationParserPlugin *this,String *param_1,Vector *param_2)

{
  Object *pOVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  Object *pOVar5;
  CowData<char32_t> *this_00;
  char *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  int iVar13;
  Object *pOVar14;
  long lVar15;
  Object *pOVar16;
  long *plVar17;
  String *pSVar18;
  uint uVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  NodePath *this_01;
  long lVar24;
  long in_FS_OFFSET;
  bool bVar25;
  bool bVar26;
  int local_12c;
  String *local_128;
  int local_e4;
  Object *local_e0;
  Object *local_d8;
  Object *local_d0;
  long local_c8;
  Object *local_c0;
  Object *local_b8;
  Object *local_b0;
  Vector<Pair<NodePath,bool>> local_a8 [8];
  long local_a0;
  long local_98;
  long local_90;
  Object *local_88;
  long local_80;
  char *local_78;
  CowData<char32_t> *local_70 [2];
  Object *local_60;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (Object *)0x0;
  local_78 = "PackedScene";
  local_70[0] = (CowData<char32_t> *)0xb;
  String::parse_latin1((StrRange *)&local_88);
  ResourceLoader::load(&local_e0,param_1,(StrRange *)&local_88,1);
  pOVar14 = local_88;
  if (local_88 != (Object *)0x0) {
    LOCK();
    pOVar16 = local_88 + -0x10;
    *(long *)pOVar16 = *(long *)pOVar16 + -1;
    UNLOCK();
    if (*(long *)pOVar16 == 0) {
      local_88 = (Object *)0x0;
      Memory::free_static(pOVar14 + -0x10,false);
    }
  }
  if (local_e4 == 0) {
    if (((local_e0 == (Object *)0x0) ||
        (pOVar14 = (Object *)__dynamic_cast(local_e0,&Object::typeinfo,&PackedScene::typeinfo,0),
        pOVar14 == (Object *)0x0)) || (cVar9 = RefCounted::reference(), cVar9 == '\0')) {
      local_88 = (Object *)0x0;
      plVar17 = (long *)(*(long *)param_1 + -0x10);
      if (*(long *)param_1 != 0) {
        do {
          lVar24 = *plVar17;
          if (lVar24 == 0) goto LAB_001020e0;
          LOCK();
          lVar22 = *plVar17;
          bVar26 = lVar24 == lVar22;
          if (bVar26) {
            *plVar17 = lVar24 + 1;
            lVar22 = lVar24;
          }
          UNLOCK();
        } while (!bVar26);
        if (lVar22 != -1) {
          local_88 = *(Object **)param_1;
        }
      }
LAB_001020e0:
      local_98 = 0;
      local_78 = "\'%s\' is not a valid PackedScene resource.";
      local_70[0] = (CowData<char32_t> *)0x29;
      String::parse_latin1((StrRange *)&local_98);
      vformat<String>((NodePath *)&local_78,(StrRange *)&local_98,(StrRange *)&local_88);
      _err_print_error("parse_file","editor/plugins/packed_scene_translation_parser_plugin.cpp",0x34
                       ,
                       "Condition \"packed_scene.is_null()\" is true. Returning: ERR_FILE_UNRECOGNIZED"
                       ,(NodePath *)&local_78,0,0);
      pcVar6 = local_78;
      if (local_78 != (char *)0x0) {
        LOCK();
        plVar17 = (long *)(local_78 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_78 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar24 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar17 = (long *)(local_98 + -0x10);
        *plVar17 = *plVar17 + -1;
        UNLOCK();
        if (*plVar17 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar24 + -0x10),false);
        }
      }
      pOVar14 = local_88;
      if (local_88 != (Object *)0x0) {
        LOCK();
        pOVar16 = local_88 + -0x10;
        *(long *)pOVar16 = *(long *)pOVar16 + -1;
        UNLOCK();
        if (*(long *)pOVar16 == 0) {
          local_88 = (Object *)0x0;
          Memory::free_static(pOVar14 + -0x10,false);
        }
      }
      local_e4 = 0xf;
    }
    else {
      PackedScene::get_state();
      local_a0 = 0;
      local_90 = 0;
      for (local_12c = 0; iVar12 = SceneState::get_node_count(), local_12c < iVar12;
          local_12c = local_12c + 1) {
        iVar12 = (int)(StrRange *)&local_88;
        SceneState::get_node_type(iVar12);
        if (local_88 == (Object *)0x0) {
          local_d0 = (Object *)0x0;
        }
        else {
          pcVar6 = *(char **)(local_88 + 8);
          local_d0 = (Object *)0x0;
          if (pcVar6 == (char *)0x0) {
            if (*(long *)(local_88 + 0x10) != 0) {
              plVar17 = (long *)(*(long *)(local_88 + 0x10) + -0x10);
              do {
                lVar24 = *plVar17;
                if (lVar24 == 0) goto LAB_0010131e;
                LOCK();
                lVar22 = *plVar17;
                bVar26 = lVar24 == lVar22;
                if (bVar26) {
                  *plVar17 = lVar24 + 1;
                  lVar22 = lVar24;
                }
                UNLOCK();
              } while (!bVar26);
              if (lVar22 != -1) {
                local_d0 = *(Object **)(local_88 + 0x10);
              }
              goto LAB_0010131e;
            }
            if (StringName::configured == '\0') goto LAB_0010133a;
          }
          else {
            local_70[0] = (CowData<char32_t> *)strlen(pcVar6);
            local_78 = pcVar6;
            String::parse_latin1((StrRange *)&local_d0);
LAB_0010131e:
            if ((StringName::configured == '\0') || (local_88 == (Object *)0x0)) goto LAB_0010133a;
          }
          StringName::unref();
        }
LAB_0010133a:
        SceneState::get_node_path((int)(NodePath *)&local_78,SUB81(local_d8,0));
        NodePath::operator_cast_to_String((NodePath *)&local_c8);
        NodePath::~NodePath((NodePath *)&local_78);
        if (((local_d0 == (Object *)0x0) || (*(uint *)(local_d0 + -8) < 2)) &&
           (SceneState::get_node_instance((int)&local_c0), local_c0 != (Object *)0x0)) {
          PackedScene::get_state();
          SceneState::get_node_type((int)&local_b0);
          if (local_b0 == (Object *)0x0) {
LAB_001024fc:
            local_88 = (Object *)0x0;
            if (local_d0 != (Object *)0x0) {
LAB_0010250a:
              pOVar16 = local_d0;
              LOCK();
              local_d0 = local_d0 + -0x10;
              *(long *)local_d0 = *(long *)local_d0 + -1;
              UNLOCK();
              if (*(long *)local_d0 == 0) {
                local_d0 = (Object *)0x0;
                Memory::free_static(pOVar16 + -0x10,false);
              }
              goto LAB_00101435;
            }
          }
          else {
            pcVar6 = *(char **)(local_b0 + 8);
            local_88 = (Object *)0x0;
            if (pcVar6 == (char *)0x0) {
              if (*(long *)(local_b0 + 0x10) == 0) goto LAB_001024fc;
              plVar17 = (long *)(*(long *)(local_b0 + 0x10) + -0x10);
              do {
                lVar24 = *plVar17;
                if (lVar24 == 0) goto LAB_0010141e;
                LOCK();
                lVar22 = *plVar17;
                bVar26 = lVar24 == lVar22;
                if (bVar26) {
                  *plVar17 = lVar24 + 1;
                  lVar22 = lVar24;
                }
                UNLOCK();
              } while (!bVar26);
              if (lVar22 != -1) {
                local_88 = *(Object **)(local_b0 + 0x10);
              }
            }
            else {
              local_70[0] = (CowData<char32_t> *)strlen(pcVar6);
              local_78 = pcVar6;
              String::parse_latin1((StrRange *)&local_88);
            }
LAB_0010141e:
            pOVar16 = local_88;
            if (local_d0 == local_88) {
              if (local_88 != (Object *)0x0) {
                LOCK();
                pOVar1 = local_88 + -0x10;
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  local_88 = (Object *)0x0;
                  Memory::free_static(pOVar16 + -0x10,false);
                }
              }
            }
            else {
              if (local_d0 != (Object *)0x0) goto LAB_0010250a;
LAB_00101435:
              local_d0 = local_88;
            }
          }
          if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
            StringName::unref();
          }
          if (((local_b8 != (Object *)0x0) &&
              (cVar10 = RefCounted::unreference(), pOVar16 = local_b8, cVar10 != '\0')) &&
             (cVar10 = predelete_handler(local_b8), cVar10 != '\0')) {
            (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
            Memory::free_static(pOVar16,false);
          }
          if (((local_c0 != (Object *)0x0) &&
              (cVar10 = RefCounted::unreference(), pOVar16 = local_c0, cVar10 != '\0')) &&
             (cVar10 = predelete_handler(local_c0), cVar10 != '\0')) {
            (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
            Memory::free_static(pOVar16,false);
          }
        }
        iVar21 = 0;
        while (iVar13 = SceneState::get_node_property_count((int)local_d8), iVar21 < iVar13) {
          SceneState::get_node_property_name(iVar12,(int)local_d8);
          if (local_88 == (Object *)0x0) {
            local_b0 = (Object *)0x0;
          }
          else {
            pcVar6 = *(char **)(local_88 + 8);
            local_b0 = (Object *)0x0;
            if (pcVar6 == (char *)0x0) {
              if (*(long *)(local_88 + 0x10) != 0) {
                plVar17 = (long *)(*(long *)(local_88 + 0x10) + -0x10);
                do {
                  lVar24 = *plVar17;
                  if (lVar24 == 0) goto LAB_0010150f;
                  LOCK();
                  lVar22 = *plVar17;
                  bVar26 = lVar24 == lVar22;
                  if (bVar26) {
                    *plVar17 = lVar24 + 1;
                    lVar22 = lVar24;
                  }
                  UNLOCK();
                } while (!bVar26);
                if (lVar22 != -1) {
                  local_b0 = *(Object **)(local_88 + 0x10);
                }
                goto LAB_0010150f;
              }
              if (StringName::configured == '\0') goto LAB_0010152b;
            }
            else {
              local_70[0] = (CowData<char32_t> *)strlen(pcVar6);
              local_78 = pcVar6;
              String::parse_latin1((StrRange *)&local_b0);
LAB_0010150f:
              if ((StringName::configured == '\0') || (local_88 == (Object *)0x0))
              goto LAB_0010152b;
            }
            StringName::unref();
          }
LAB_0010152b:
          cVar10 = String::operator!=((String *)&local_b0,"auto_translate_mode");
          if ((cVar10 == '\0') ||
             (cVar10 = String::operator!=((String *)&local_b0,"auto_translate"), pOVar16 = local_b0,
             cVar10 == '\0')) {
            if (local_a0 == 0) goto LAB_001015c0;
            lVar24 = *(long *)(local_a0 + -8);
            uVar19 = (int)lVar24 - 1;
            if ((int)uVar19 < 1) goto LAB_001015c0;
            uVar20 = (ulong)uVar19;
            if ((long)uVar20 < lVar24) {
              NodePath::operator_cast_to_String((NodePath *)&local_78);
              cVar10 = String::begins_with((String *)&local_c8);
              pcVar6 = local_78;
              if (local_78 != (char *)0x0) {
                LOCK();
                plVar17 = (long *)(local_78 + -0x10);
                *plVar17 = *plVar17 + -1;
                UNLOCK();
                if (*plVar17 == 0) {
                  local_78 = (char *)0x0;
                  Memory::free_static(pcVar6 + -0x10,false);
                }
              }
              if (cVar10 == '\0') {
                if (local_a0 == 0) {
                  lVar24 = 0;
LAB_00102a01:
                  _err_print_index_error
                            ("remove_at","./core/templates/cowdata.h",0xe4,uVar20,lVar24,"p_index",
                             "size()","",false,false);
                }
                else {
                  lVar24 = *(long *)(local_a0 + -8);
                  if (lVar24 <= (long)uVar20) goto LAB_00102a01;
                  CowData<Pair<NodePath,bool>>::_copy_on_write
                            ((CowData<Pair<NodePath,bool>> *)&local_a0);
                  if (local_a0 == 0) {
                    uVar23 = 0xffffffffffffffff;
                  }
                  else {
                    uVar4 = *(long *)(local_a0 + -8) - 1;
                    uVar23 = uVar4;
                    if ((long)uVar20 < (long)uVar4) {
                      this_01 = (NodePath *)(uVar20 * 0x10 + local_a0);
                      do {
                        uVar20 = uVar20 + 1;
                        NodePath::operator=(this_01,this_01 + 0x10);
                        this_01[8] = this_01[0x18];
                        uVar23 = uVar20;
                        this_01 = this_01 + 0x10;
                      } while (uVar4 != uVar20);
                    }
                  }
                  CowData<Pair<NodePath,bool>>::resize<false>
                            ((CowData<Pair<NodePath,bool>> *)&local_a0,uVar23);
                }
              }
LAB_001015c0:
              cVar10 = String::operator==((String *)&local_b0,"auto_translate_mode");
              iVar21 = (int)(Variant *)local_58;
              if (cVar10 == '\0') {
                SceneState::get_node_property_value(iVar21,(int)local_d8);
                cVar10 = Variant::operator_cast_to_bool((Variant *)local_58);
                if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
              }
              else {
                SceneState::get_node_property_value(iVar21,(int)local_d8);
                iVar21 = Variant::operator_cast_to_int((Variant *)local_58);
                if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                cVar10 = iVar21 != 2;
              }
              SceneState::get_node_path(iVar12,SUB81(local_d8,0));
              NodePath::NodePath((NodePath *)&local_78,(NodePath *)&local_88);
              local_70[0] = (CowData<char32_t> *)CONCAT71(local_70[0]._1_7_,cVar10);
              Vector<Pair<NodePath,bool>>::push_back(local_a8);
              NodePath::~NodePath((NodePath *)&local_78);
              NodePath::~NodePath((NodePath *)&local_88);
              pOVar16 = local_b0;
              if (local_b0 != (Object *)0x0) {
                LOCK();
                pOVar1 = local_b0 + -0x10;
                *(long *)pOVar1 = *(long *)pOVar1 + -1;
                UNLOCK();
                if (*(long *)pOVar1 == 0) {
                  local_b0 = (Object *)0x0;
                  Memory::free_static(pOVar16 + -0x10,false);
                }
              }
              goto LAB_0010169a;
            }
            goto LAB_001027ec;
          }
          if (local_b0 == (Object *)0x0) {
LAB_00101c59:
            iVar21 = iVar21 + 1;
          }
          else {
            LOCK();
            pOVar1 = local_b0 + -0x10;
            *(long *)pOVar1 = *(long *)pOVar1 + -1;
            UNLOCK();
            if (*(long *)pOVar1 != 0) goto LAB_00101c59;
            iVar21 = iVar21 + 1;
            local_b0 = (Object *)0x0;
            Memory::free_static(pOVar16 + -0x10,false);
          }
        }
        if (local_a0 == 0) {
LAB_00101dd0:
          SceneState::get_node_path(iVar12,SUB81(local_d8,0));
          NodePath::NodePath((NodePath *)&local_78,(NodePath *)&local_88);
          local_70[0] = (CowData<char32_t> *)CONCAT71(local_70[0]._1_7_,1);
          Vector<Pair<NodePath,bool>>::push_back(local_a8,(NodePath *)&local_78);
          NodePath::~NodePath((NodePath *)&local_78);
          NodePath::~NodePath((NodePath *)&local_88);
          cVar10 = cVar9;
          if (local_90 == 0) goto LAB_00101e37;
LAB_001016ab:
          lVar22 = local_90;
          lVar24 = *(long *)(local_90 + -8);
          uVar20 = lVar24 - 1;
          if ((long)uVar20 < 0) {
LAB_001027ec:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar20,lVar24,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          cVar11 = String::begins_with((String *)&local_c8);
          if (cVar11 == '\0') {
            lVar24 = *(long *)(lVar22 + -8);
            lVar22 = lVar24 + -1;
            if (lVar22 < 0) {
              _err_print_index_error
                        ("remove_at","./core/templates/cowdata.h",0xe4,lVar22,lVar24,"p_index",
                         "size()","",false,false);
            }
            else {
              CowData<String>::_copy_on_write((CowData<String> *)&local_90);
              if (local_90 == 0) {
                lVar15 = -1;
              }
              else {
                lVar2 = *(long *)(local_90 + -8) + -1;
                lVar15 = lVar2;
                if (lVar24 < *(long *)(local_90 + -8)) {
                  plVar17 = (long *)(local_90 + lVar24 * 8);
                  do {
                    lVar24 = plVar17[-1];
                    lVar15 = *plVar17;
                    if (lVar24 != lVar15) {
                      if (lVar24 != 0) {
                        LOCK();
                        plVar3 = (long *)(lVar24 + -0x10);
                        *plVar3 = *plVar3 + -1;
                        UNLOCK();
                        if (*plVar3 == 0) {
                          lVar24 = plVar17[-1];
                          plVar17[-1] = 0;
                          Memory::free_static((void *)(lVar24 + -0x10),false);
                        }
                        lVar15 = *plVar17;
                      }
                      plVar17[-1] = lVar15;
                      *plVar17 = 0;
                    }
                    lVar22 = lVar22 + 1;
                    plVar17 = plVar17 + 1;
                    lVar15 = lVar22;
                  } while (lVar2 != lVar22);
                }
              }
              CowData<String>::resize<false>((CowData<String> *)&local_90,lVar15);
            }
          }
          lVar22 = local_90;
          if (cVar10 == '\0') goto LAB_001019c0;
          if (local_90 != 0) {
            StringName::StringName((StringName *)&local_78,"Control",false);
            StringName::StringName((StringName *)&local_88,(String *)&local_d0,false);
            cVar10 = ClassDB::is_parent_class((StringName *)&local_88,(StringName *)&local_78);
            if (cVar10 == '\0') {
              cVar10 = '\0';
              if (StringName::configured == '\0') goto LAB_00101e37;
LAB_001017ea:
              if (local_88 != (Object *)0x0) {
                StringName::unref();
              }
              if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
                StringName::unref();
              }
            }
            else {
              lVar24 = *(long *)(lVar22 + -8);
              uVar20 = lVar24 - 1;
              if ((long)uVar20 < 0) goto LAB_001027ec;
              cVar10 = String::operator==((String *)&local_c8,(String *)(lVar22 + uVar20 * 8));
              if (StringName::configured != '\0') goto LAB_001017ea;
            }
            if (cVar10 != '\0') {
              SceneState::get_node_name(iVar12);
              if (local_88 == (Object *)0x0) {
                local_58[0] = 0;
              }
              else {
                pcVar6 = *(char **)(local_88 + 8);
                local_58[0] = 0;
                if (pcVar6 == (char *)0x0) {
                  plVar17 = (long *)(*(long *)(local_88 + 0x10) + -0x10);
                  if (*(long *)(local_88 + 0x10) != 0) {
                    do {
                      lVar24 = *plVar17;
                      if (lVar24 == 0) goto LAB_00101887;
                      LOCK();
                      lVar22 = *plVar17;
                      bVar26 = lVar24 == lVar22;
                      if (bVar26) {
                        *plVar17 = lVar24 + 1;
                        lVar22 = lVar24;
                      }
                      UNLOCK();
                    } while (!bVar26);
                    if (lVar22 != -1) {
                      local_58[0] = *(long *)(local_88 + 0x10);
                    }
                  }
                }
                else {
                  local_70[0] = (CowData<char32_t> *)strlen(pcVar6);
                  local_78 = pcVar6;
                  String::parse_latin1((StrRange *)local_58);
                }
              }
LAB_00101887:
              local_70[0] = (CowData<char32_t> *)0x0;
              iVar21 = CowData<String>::resize<false>((CowData<String> *)local_70,1);
              if (iVar21 == 0) {
                if (local_70[0] == (CowData<char32_t> *)0x0) {
                  lVar24 = 0;
                }
                else {
                  lVar24 = *(long *)(local_70[0] + -8);
                  if (0 < lVar24) {
                    CowData<String>::_copy_on_write((CowData<String> *)local_70);
                    if (*(long *)local_70[0] != local_58[0]) {
                      CowData<char32_t>::_ref(local_70[0],(CowData *)local_58);
                    }
                    goto LAB_001018f4;
                  }
                }
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,0,lVar24,"p_index","size()","",
                           false,false);
              }
LAB_001018f4:
              Vector<Vector<String>>::push_back((Vector<Vector<String>> *)param_2);
              CowData<String>::_unref((CowData<String> *)local_70);
              lVar24 = local_58[0];
              if (local_58[0] != 0) {
                LOCK();
                plVar17 = (long *)(local_58[0] + -0x10);
                *plVar17 = *plVar17 + -1;
                UNLOCK();
                if (*plVar17 == 0) {
                  local_58[0] = 0;
                  Memory::free_static((void *)(lVar24 + -0x10),false);
                }
              }
              if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
                StringName::unref();
              }
            }
          }
LAB_00101e37:
          local_128 = (String *)&local_d0;
          cVar10 = String::operator==(local_128,"TabContainer");
          if (cVar10 != '\0') {
            SceneState::get_node_path(iVar12,SUB81(local_d8,0));
            NodePath::operator_cast_to_String((NodePath *)&local_78);
            if (local_90 == 0) {
              lVar24 = 1;
            }
            else {
              lVar24 = *(long *)(local_90 + -8) + 1;
            }
            iVar21 = CowData<String>::resize<false>((CowData<String> *)&local_90,lVar24);
            if (iVar21 == 0) {
              if (local_90 == 0) {
                lVar22 = -1;
                lVar24 = 0;
              }
              else {
                lVar24 = *(long *)(local_90 + -8);
                lVar22 = lVar24 + -1;
                if (-1 < lVar22) {
                  CowData<String>::_copy_on_write((CowData<String> *)&local_90);
                  this_00 = (CowData<char32_t> *)(local_90 + lVar22 * 8);
                  if (*(char **)this_00 != local_78) {
                    CowData<char32_t>::_ref(this_00,(CowData *)&local_78);
                  }
                  goto LAB_00102082;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,lVar22,lVar24,"p_index","size()",""
                         ,false,false);
            }
            else {
              _err_print_error("push_back","./core/templates/vector.h",0x142,
                               "Condition \"err\" is true. Returning: true",0,0);
            }
LAB_00102082:
            pcVar6 = local_78;
            if (local_78 != (char *)0x0) {
              LOCK();
              plVar17 = (long *)(local_78 + -0x10);
              *plVar17 = *plVar17 + -1;
              UNLOCK();
              if (*plVar17 == 0) {
                local_78 = (char *)0x0;
                Memory::free_static(pcVar6 + -0x10,false);
              }
            }
            NodePath::~NodePath((NodePath *)&local_88);
          }
          for (iVar21 = 0; iVar13 = SceneState::get_node_property_count((int)local_d8),
              iVar21 < iVar13; iVar21 = iVar21 + 1) {
            SceneState::get_node_property_name(iVar12,(int)local_d8);
            if (local_88 == (Object *)0x0) {
              local_b8 = (Object *)0x0;
            }
            else {
              pcVar6 = *(char **)(local_88 + 8);
              local_b8 = (Object *)0x0;
              if (pcVar6 == (char *)0x0) {
                if (*(long *)(local_88 + 0x10) != 0) {
                  plVar17 = (long *)(*(long *)(local_88 + 0x10) + -0x10);
                  do {
                    lVar24 = *plVar17;
                    if (lVar24 == 0) goto LAB_00101ea4;
                    LOCK();
                    lVar22 = *plVar17;
                    bVar26 = lVar24 == lVar22;
                    if (bVar26) {
                      *plVar17 = lVar24 + 1;
                      lVar22 = lVar24;
                    }
                    UNLOCK();
                  } while (!bVar26);
                  if (lVar22 != -1) {
                    local_b8 = *(Object **)(local_88 + 0x10);
                  }
                  goto LAB_00101ea4;
                }
                if (StringName::configured == '\0') goto LAB_00101ec0;
              }
              else {
                local_70[0] = (CowData<char32_t> *)strlen(pcVar6);
                local_78 = pcVar6;
                String::parse_latin1((StrRange *)&local_b8);
LAB_00101ea4:
                if ((StringName::configured == '\0') || (local_88 == (Object *)0x0))
                goto LAB_00101ec0;
              }
              StringName::unref();
            }
LAB_00101ec0:
            cVar10 = match_property(this,(String *)&local_b8,local_128);
            if (cVar10 != '\0') {
              SceneState::get_node_property_value((int)(Variant *)local_58,(int)local_d8);
              cVar10 = String::operator==((String *)&local_b8,"script");
              if (((cVar10 == '\0') || ((int)local_58[0] != 0x18)) ||
                 (cVar10 = Variant::is_null(), cVar10 != '\0')) {
                cVar10 = String::operator==(local_128,"FileDialog");
                bVar26 = SUB81((NodePath *)&local_78,0);
                if ((cVar10 == '\0') ||
                   (cVar10 = String::operator==((String *)&local_b8,"filters"), cVar10 == '\0')) {
                  if ((int)local_58[0] != 4) goto LAB_00101f3c;
                  Variant::operator_cast_to_String((Variant *)&local_88);
                  String::strip_edges(bVar26,SUB81((StrRange *)&local_88,0));
                  pcVar6 = local_78;
                  if (local_78 != (char *)0x0) {
                    uVar7 = *(undefined8 *)(local_78 + -8);
                    if ((int)uVar7 == 0) {
                      LOCK();
                      plVar17 = (long *)(local_78 + -0x10);
                      *plVar17 = *plVar17 + -1;
                      UNLOCK();
                      if (*plVar17 == 0) {
                        local_78 = (char *)0x0;
                        Memory::free_static(pcVar6 + -0x10,false);
                      }
                    }
                    else {
                      LOCK();
                      plVar17 = (long *)(local_78 + -0x10);
                      *plVar17 = *plVar17 + -1;
                      UNLOCK();
                      if (*plVar17 == 0) {
                        local_78 = (char *)0x0;
                        Memory::free_static(pcVar6 + -0x10,false);
                      }
                      if ((int)uVar7 != 1) {
                        local_60 = (Object *)0x0;
                        pOVar16 = local_88;
                        if (local_88 != (Object *)0x0) {
                          pOVar1 = local_88 + -0x10;
                          do {
                            lVar24 = *(long *)pOVar1;
                            if (lVar24 == 0) goto LAB_00102c52;
                            LOCK();
                            lVar22 = *(long *)pOVar1;
                            bVar26 = lVar24 == lVar22;
                            if (bVar26) {
                              *(long *)pOVar1 = lVar24 + 1;
                              lVar22 = lVar24;
                            }
                            UNLOCK();
                          } while (!bVar26);
                          if (lVar22 == -1) {
LAB_00102c52:
                            pOVar16 = (Object *)0x0;
                          }
                          else {
                            local_60 = local_88;
                          }
                        }
                        local_70[0] = (CowData<char32_t> *)0x0;
                        iVar13 = CowData<String>::resize<false>((CowData<String> *)local_70,1);
                        if (iVar13 == 0) {
                          if (local_70[0] == (CowData<char32_t> *)0x0) {
                            lVar24 = 0;
                          }
                          else {
                            lVar24 = *(long *)(local_70[0] + -8);
                            if (0 < lVar24) {
                              CowData<String>::_copy_on_write((CowData<String> *)local_70);
                              if (*(Object **)local_70[0] != pOVar16) {
                                CowData<char32_t>::_ref(local_70[0],(CowData *)&local_60);
                              }
                              goto LAB_00102741;
                            }
                          }
                          _err_print_index_error
                                    ("set","./core/templates/cowdata.h",0xcf,0,lVar24,"p_index",
                                     "size()","",false,false);
                        }
LAB_00102741:
                        Vector<Vector<String>>::push_back((Vector<Vector<String>> *)param_2);
                        CowData<String>::_unref((CowData<String> *)local_70);
                        if (pOVar16 != (Object *)0x0) {
                          LOCK();
                          pOVar16 = pOVar16 + -0x10;
                          *(long *)pOVar16 = *(long *)pOVar16 + -1;
                          UNLOCK();
                          if (*(long *)pOVar16 == 0) {
                            Memory::free_static(local_60 + -0x10,false);
                          }
                        }
                      }
                    }
                  }
                  pOVar16 = local_88;
                  if (local_88 != (Object *)0x0) {
                    LOCK();
                    pOVar1 = local_88 + -0x10;
                    *(long *)pOVar1 = *(long *)pOVar1 + -1;
                    UNLOCK();
                    if (*(long *)pOVar1 == 0) {
                      local_88 = (Object *)0x0;
                      Memory::free_static(pOVar16 + -0x10,false);
                    }
                  }
                  goto LAB_001024ca;
                }
                Variant::operator_cast_to_Vector((Variant *)&local_88);
                for (lVar24 = 0; (local_80 != 0 && (lVar24 < *(long *)(local_80 + -8)));
                    lVar24 = lVar24 + 1) {
                  String::get_slice((char *)&local_78,(int)local_80 + (int)lVar24 * 8);
                  String::strip_edges(SUB81(&local_b0,0),bVar26);
                  pcVar6 = local_78;
                  if (local_78 != (char *)0x0) {
                    LOCK();
                    plVar17 = (long *)(local_78 + -0x10);
                    *plVar17 = *plVar17 + -1;
                    UNLOCK();
                    if (*plVar17 == 0) {
                      local_78 = (char *)0x0;
                      Memory::free_static(pcVar6 + -0x10,false);
                    }
                  }
                  if (local_b0 != (Object *)0x0) {
                    if (1 < *(uint *)(local_b0 + -8)) {
                      local_60 = (Object *)0x0;
                      pOVar16 = local_b0 + -0x10;
                      do {
                        lVar22 = *(long *)pOVar16;
                        if (lVar22 == 0) goto LAB_00102398;
                        LOCK();
                        lVar15 = *(long *)pOVar16;
                        bVar25 = lVar22 == lVar15;
                        if (bVar25) {
                          *(long *)pOVar16 = lVar22 + 1;
                          lVar15 = lVar22;
                        }
                        UNLOCK();
                      } while (!bVar25);
                      if (lVar15 != -1) {
                        local_60 = local_b0;
                      }
LAB_00102398:
                      pOVar16 = local_60;
                      local_70[0] = (CowData<char32_t> *)0x0;
                      iVar13 = CowData<String>::resize<false>((CowData<String> *)local_70,1);
                      if (iVar13 == 0) {
                        if (local_70[0] == (CowData<char32_t> *)0x0) {
                          lVar22 = 0;
                        }
                        else {
                          lVar22 = *(long *)(local_70[0] + -8);
                          if (0 < lVar22) {
                            CowData<String>::_copy_on_write((CowData<String> *)local_70);
                            if (*(Object **)local_70[0] != pOVar16) {
                              CowData<char32_t>::_ref(local_70[0],(CowData *)&local_60);
                            }
                            goto LAB_001023fd;
                          }
                        }
                        _err_print_index_error
                                  ("set","./core/templates/cowdata.h",0xcf,0,lVar22,"p_index",
                                   "size()","",false,false);
                      }
LAB_001023fd:
                      Vector<Vector<String>>::push_back((Vector<Vector<String>> *)param_2);
                      CowData<String>::_unref((CowData<String> *)local_70);
                      if (pOVar16 != (Object *)0x0) {
                        LOCK();
                        pOVar16 = pOVar16 + -0x10;
                        *(long *)pOVar16 = *(long *)pOVar16 + -1;
                        UNLOCK();
                        if (*(long *)pOVar16 == 0) {
                          Memory::free_static(local_60 + -0x10,false);
                        }
                      }
                      if (local_b0 == (Object *)0x0) goto LAB_001022b7;
                    }
                    pOVar1 = local_b0;
                    LOCK();
                    pOVar16 = local_b0 + -0x10;
                    *(long *)pOVar16 = *(long *)pOVar16 + -1;
                    UNLOCK();
                    if (*(long *)pOVar16 == 0) {
                      local_b0 = (Object *)0x0;
                      Memory::free_static(pOVar1 + -0x10,false);
                    }
                  }
LAB_001022b7:
                }
                CowData<String>::_unref((CowData<String> *)&local_80);
LAB_00101f3c:
                cVar10 = Variant::needs_deinit[(int)local_58[0]];
              }
              else {
                pOVar16 = Variant::operator_cast_to_Object_((Variant *)local_58);
                if ((pOVar16 == (Object *)0x0) ||
                   (pOVar16 = (Object *)
                              __dynamic_cast(pOVar16,&Object::typeinfo,&Script::typeinfo,0),
                   pOVar16 == (Object *)0x0)) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)invalidInstructionException();
                  (*pcVar8)();
                }
                cVar10 = RefCounted::init_ref();
                if (cVar10 == '\0') {
                  pOVar16 = (Object *)0x0;
                }
                if ((*(long *)(pOVar16 + 0x188) != 0) &&
                   (1 < *(uint *)(*(long *)(pOVar16 + 0x188) + -8))) {
                  iVar13 = String::find((char *)(pOVar16 + 0x188),0x103426);
                  if ((iVar13 == -1) &&
                     (cVar10 = String::begins_with((char *)(pOVar16 + 0x188)), cVar10 == '\0')) {
                    cVar10 = RefCounted::unreference();
                    if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar16), cVar10 != '\0')) {
                      (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
                      Memory::free_static(pOVar16,false);
                    }
                    cVar10 = Variant::needs_deinit[(int)local_58[0]];
                    goto joined_r0x00101f47;
                  }
                }
                plVar17 = (long *)(**(code **)(*(long *)pOVar16 + 0x288))(pOVar16);
                (**(code **)(*plVar17 + 0x168))(&local_b0,plVar17);
                pSVar18 = (String *)EditorTranslationParser::get_singleton();
                cVar10 = EditorTranslationParser::can_parse(pSVar18);
                if (cVar10 != '\0') {
                  EditorTranslationParser::get_singleton();
                  EditorTranslationParser::get_parser((String *)&local_88);
                  pOVar1 = local_88;
                  pcVar8 = *(code **)(*(long *)local_88 + 0x150);
                  Resource::get_path();
                  (*pcVar8)(pOVar1,(NodePath *)&local_78,param_2);
                  pcVar6 = local_78;
                  if (local_78 != (char *)0x0) {
                    LOCK();
                    plVar17 = (long *)(local_78 + -0x10);
                    *plVar17 = *plVar17 + -1;
                    UNLOCK();
                    if (*plVar17 == 0) {
                      local_78 = (char *)0x0;
                      Memory::free_static(pcVar6 + -0x10,false);
                    }
                  }
                  if (((local_88 != (Object *)0x0) &&
                      (cVar10 = RefCounted::unreference(), pOVar1 = local_88, cVar10 != '\0')) &&
                     (cVar10 = predelete_handler(local_88), cVar10 != '\0')) {
                    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                    Memory::free_static(pOVar1,false);
                  }
                }
                pOVar1 = local_b0;
                if (local_b0 != (Object *)0x0) {
                  LOCK();
                  pOVar5 = local_b0 + -0x10;
                  *(long *)pOVar5 = *(long *)pOVar5 + -1;
                  UNLOCK();
                  if (*(long *)pOVar5 == 0) {
                    local_b0 = (Object *)0x0;
                    Memory::free_static(pOVar1 + -0x10,false);
                  }
                }
                cVar10 = RefCounted::unreference();
                if ((cVar10 != '\0') && (cVar10 = predelete_handler(pOVar16), cVar10 != '\0')) {
                  (**(code **)(*(long *)pOVar16 + 0x140))(pOVar16);
                  Memory::free_static(pOVar16,false);
                }
LAB_001024ca:
                cVar10 = Variant::needs_deinit[(int)local_58[0]];
              }
joined_r0x00101f47:
              if (cVar10 != '\0') {
                Variant::_clear_internal();
              }
            }
            pOVar16 = local_b8;
            if (local_b8 != (Object *)0x0) {
              LOCK();
              pOVar1 = local_b8 + -0x10;
              *(long *)pOVar1 = *(long *)pOVar1 + -1;
              UNLOCK();
              if (*(long *)pOVar1 == 0) {
                local_b8 = (Object *)0x0;
                Memory::free_static(pOVar16 + -0x10,false);
              }
            }
          }
        }
        else {
          lVar24 = *(long *)(local_a0 + -8);
          uVar19 = (int)lVar24 - 1;
          if ((int)uVar19 < 1) goto LAB_00101dd0;
          uVar20 = (ulong)uVar19;
          if (lVar24 <= (long)uVar20) goto LAB_001027ec;
          NodePath::operator_cast_to_String((NodePath *)&local_78);
          cVar10 = String::begins_with((String *)&local_c8);
          pcVar6 = local_78;
          if (local_78 != (char *)0x0) {
            LOCK();
            plVar17 = (long *)(local_78 + -0x10);
            *plVar17 = *plVar17 + -1;
            UNLOCK();
            if (*plVar17 == 0) {
              local_78 = (char *)0x0;
              Memory::free_static(pcVar6 + -0x10,false);
            }
          }
          if (cVar10 == '\0') goto LAB_00101dd0;
          if (local_a0 == 0) {
            lVar24 = 0;
            goto LAB_001027ec;
          }
          lVar24 = *(long *)(local_a0 + -8);
          if (lVar24 <= (long)uVar20) goto LAB_001027ec;
          cVar10 = *(char *)(local_a0 + 8 + uVar20 * 0x10);
LAB_0010169a:
          if (local_90 != 0) goto LAB_001016ab;
          if (cVar10 != '\0') goto LAB_00101e37;
        }
LAB_001019c0:
        lVar24 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar17 = (long *)(local_c8 + -0x10);
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          if (*plVar17 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar24 + -0x10),false);
          }
        }
        pOVar16 = local_d0;
        if (local_d0 != (Object *)0x0) {
          LOCK();
          pOVar1 = local_d0 + -0x10;
          *(long *)pOVar1 = *(long *)pOVar1 + -1;
          UNLOCK();
          if (*(long *)pOVar1 == 0) {
            local_d0 = (Object *)0x0;
            Memory::free_static(pOVar16 + -0x10,false);
          }
        }
      }
      CowData<String>::_unref((CowData<String> *)&local_90);
      CowData<Pair<NodePath,bool>>::_unref((CowData<Pair<NodePath,bool>> *)&local_a0);
      if (((local_d8 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_d8), cVar9 != '\0')) {
        (**(code **)(*(long *)local_d8 + 0x140))(local_d8);
        Memory::free_static(local_d8,false);
      }
      cVar9 = RefCounted::unreference();
      if ((cVar9 != '\0') && (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
    }
  }
  else {
    operator+((char *)&local_78,(String *)"Failed to load ");
    _err_print_error("parse_file","editor/plugins/packed_scene_translation_parser_plugin.cpp",0x30,
                     (NodePath *)&local_78,0,0);
    pcVar6 = local_78;
    if (local_78 != (char *)0x0) {
      LOCK();
      plVar17 = (long *)(local_78 + -0x10);
      *plVar17 = *plVar17 + -1;
      UNLOCK();
      if (*plVar17 == 0) {
        local_78 = (char *)0x0;
        Memory::free_static(pcVar6 + -0x10,false);
      }
    }
  }
  if (((local_e0 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
     (cVar9 = predelete_handler(local_e0), cVar9 != '\0')) {
    (**(code **)(*(long *)local_e0 + 0x140))(local_e0);
    Memory::free_static(local_e0,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_e4;
  }
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x1074,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1074,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* PackedSceneEditorTranslationParserPlugin::is_class_ptr(void*) const */

uint __thiscall
PackedSceneEditorTranslationParserPlugin::is_class_ptr
          (PackedSceneEditorTranslationParserPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1074,(undefined4 *)param_1 ==
                               &EditorTranslationParserPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1074,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1074,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1074,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PackedSceneEditorTranslationParserPlugin::_getv(StringName const&, Variant&) const */

undefined8 PackedSceneEditorTranslationParserPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PackedSceneEditorTranslationParserPlugin::_setv(StringName const&, Variant const&) */

undefined8 PackedSceneEditorTranslationParserPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PackedSceneEditorTranslationParserPlugin::_validate_propertyv(PropertyInfo&) const */

void PackedSceneEditorTranslationParserPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* PackedSceneEditorTranslationParserPlugin::_property_can_revertv(StringName const&) const */

undefined8 PackedSceneEditorTranslationParserPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* PackedSceneEditorTranslationParserPlugin::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
PackedSceneEditorTranslationParserPlugin::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PackedSceneEditorTranslationParserPlugin::_notificationv(int, bool) */

void PackedSceneEditorTranslationParserPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001071f8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001071f8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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
LAB_00103103:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103103;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010316e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010316e:
  return &_get_class_namev()::_class_name_static;
}



/* PackedSceneEditorTranslationParserPlugin::_get_class_namev() const */

undefined8 * PackedSceneEditorTranslationParserPlugin::_get_class_namev(void)

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
LAB_00103213:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103213;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "PackedSceneEditorTranslationParserPlugin");
      goto LAB_0010327e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "PackedSceneEditorTranslationParserPlugin");
LAB_0010327e:
  return &_get_class_namev()::_class_name_static;
}



/* PackedSceneEditorTranslationParserPlugin::get_class() const */

void PackedSceneEditorTranslationParserPlugin::get_class(void)

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
LAB_001038f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001038f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103916;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103916:
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
            if (lVar5 == 0) goto LAB_00103bef;
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
LAB_00103bef:
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
    if (cVar6 != '\0') goto LAB_00103ca3;
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
              if (lVar5 == 0) goto LAB_00103d53;
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
LAB_00103d53:
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
      if (cVar6 != '\0') goto LAB_00103ca3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103ca3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PackedSceneEditorTranslationParserPlugin::is_class(String const&) const */

undefined8 __thiscall
PackedSceneEditorTranslationParserPlugin::is_class
          (PackedSceneEditorTranslationParserPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00103e8f;
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
LAB_00103e8f:
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
    if (cVar6 != '\0') goto LAB_00103f43;
  }
  cVar6 = String::operator==(param_1,"PackedSceneEditorTranslationParserPlugin");
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
              if (lVar5 == 0) goto LAB_00104003;
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
LAB_00104003:
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
      if (cVar6 != '\0') goto LAB_00103f43;
    }
    cVar6 = String::operator==(param_1,"EditorTranslationParserPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_001040ac;
    }
  }
LAB_00103f43:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001040ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PackedSceneEditorTranslationParserPlugin::_initialize_classv() */

void PackedSceneEditorTranslationParserPlugin::_initialize_classv(void)

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
    if (EditorTranslationParserPlugin::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorTranslationParserPlugin";
      local_70 = 0;
      local_50 = 0x1d;
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
      if ((code *)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
        EditorTranslationParserPlugin::_bind_methods();
      }
      EditorTranslationParserPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorTranslationParserPlugin";
    local_68 = 0;
    local_50 = 0x1d;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PackedSceneEditorTranslationParserPlugin";
    local_70 = 0;
    local_50 = 0x28;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorTranslationParserPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
EditorTranslationParserPlugin::_get_property_listv
          (EditorTranslationParserPlugin *this,List *param_1,bool param_2)

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
  local_78 = "EditorTranslationParserPlugin";
  local_70 = 0x1d;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorTranslationParserPlugin";
  local_98 = 0;
  local_70 = 0x1d;
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
LAB_00104658:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104658;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104675;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104675:
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
  StringName::StringName((StringName *)&local_78,"EditorTranslationParserPlugin",false);
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



/* PackedSceneEditorTranslationParserPlugin::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
PackedSceneEditorTranslationParserPlugin::_get_property_listv
          (PackedSceneEditorTranslationParserPlugin *this,List *param_1,bool param_2)

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
    EditorTranslationParserPlugin::_get_property_listv
              ((EditorTranslationParserPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PackedSceneEditorTranslationParserPlugin";
  local_70 = 0x28;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PackedSceneEditorTranslationParserPlugin";
  local_98 = 0;
  local_70 = 0x28;
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
LAB_00104aa8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104aa8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104ac5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104ac5:
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
  StringName::StringName((StringName *)&local_78,"PackedSceneEditorTranslationParserPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorTranslationParserPlugin::_get_property_listv
                ((EditorTranslationParserPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00104f08) */
/* WARNING: Removing unreachable block (ram,0x00105038) */
/* WARNING: Removing unreachable block (ram,0x00105200) */
/* WARNING: Removing unreachable block (ram,0x00105044) */
/* WARNING: Removing unreachable block (ram,0x0010504e) */
/* WARNING: Removing unreachable block (ram,0x001051e0) */
/* WARNING: Removing unreachable block (ram,0x0010505a) */
/* WARNING: Removing unreachable block (ram,0x00105064) */
/* WARNING: Removing unreachable block (ram,0x001051c0) */
/* WARNING: Removing unreachable block (ram,0x00105070) */
/* WARNING: Removing unreachable block (ram,0x0010507a) */
/* WARNING: Removing unreachable block (ram,0x001051a0) */
/* WARNING: Removing unreachable block (ram,0x00105086) */
/* WARNING: Removing unreachable block (ram,0x00105090) */
/* WARNING: Removing unreachable block (ram,0x00105180) */
/* WARNING: Removing unreachable block (ram,0x0010509c) */
/* WARNING: Removing unreachable block (ram,0x001050a6) */
/* WARNING: Removing unreachable block (ram,0x00105160) */
/* WARNING: Removing unreachable block (ram,0x001050b2) */
/* WARNING: Removing unreachable block (ram,0x001050bc) */
/* WARNING: Removing unreachable block (ram,0x00105140) */
/* WARNING: Removing unreachable block (ram,0x001050c4) */
/* WARNING: Removing unreachable block (ram,0x001050da) */
/* WARNING: Removing unreachable block (ram,0x001050e6) */
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
  long lVar3;
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
  char cVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint *puVar36;
  int iVar37;
  uint uVar38;
  String *in_RDX;
  ulong uVar39;
  long lVar40;
  long *in_RSI;
  long lVar41;
  ulong uVar42;
  ulong uVar43;
  undefined4 uVar44;
  uint uVar45;
  uint uVar46;
  uint local_88;
  
  uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar32 = (ulong)uVar29 * 4;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::alloc_static((ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    iVar37 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010531c;
  }
  else {
    iVar37 = *(int *)((long)in_RSI + 0x24);
LAB_0010531c:
    if (iVar37 != 0) {
      uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar45 = String::hash();
      uVar32 = CONCAT44(0,uVar30);
      lVar41 = in_RSI[3];
      uVar38 = 1;
      if (uVar45 != 0) {
        uVar38 = uVar45;
      }
      uVar46 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar38 * lVar33;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar32;
      lVar40 = SUB168(auVar12 * auVar24,8);
      uVar45 = *(uint *)(lVar41 + lVar40 * 4);
      iVar37 = SUB164(auVar12 * auVar24,8);
      if (uVar45 == 0) {
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar38 == uVar45) {
            cVar28 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar40 * 4) * 8),
                                        in_RDX);
            if (cVar28 != '\0') {
              iVar37 = *(int *)((long)in_RSI + 0x24);
              lVar33 = *in_RSI;
              iVar31 = *(int *)(in_RSI[1] + lVar40 * 4);
              goto LAB_00105699;
            }
            lVar41 = in_RSI[3];
          }
          uVar46 = uVar46 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar33;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar32;
          lVar40 = SUB168(auVar13 * auVar25,8);
          uVar45 = *(uint *)(lVar41 + lVar40 * 4);
          iVar37 = SUB164(auVar13 * auVar25,8);
        } while ((uVar45 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar45 * lVar33, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar14 * auVar26,8)) * lVar33,
                auVar27._8_8_ = 0, auVar27._0_8_ = uVar32, uVar46 <= SUB164(auVar15 * auVar27,8)));
        iVar37 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar29 * __LC11 < (float)(iVar37 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar31 = -1;
      goto LAB_00105699;
    }
    uVar29 = (int)in_RSI[4] + 1;
    uVar32 = (ulong)uVar29;
    if (uVar29 < 2) {
      uVar32 = 2;
    }
    uVar29 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    *(int *)(in_RSI + 4) = (int)uVar32;
    pvVar1 = (void *)in_RSI[3];
    uVar32 = (ulong)uVar29 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar29 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar32,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::realloc_static((void *)in_RSI[1],uVar32,false);
    in_RSI[1] = lVar33;
    if (uVar29 != 0) {
      memset((void *)in_RSI[3],0,uVar32);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar32 = 0;
      lVar41 = in_RSI[3];
      lVar40 = in_RSI[2];
      do {
        uVar43 = uVar32 & 0xffffffff;
        uVar44 = (undefined4)uVar32;
        uVar45 = 0;
        uVar29 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar32 * 4) * 4);
        uVar39 = (ulong)uVar29;
        uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar42 = CONCAT44(0,uVar30);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar39 * lVar34;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar42;
        lVar35 = SUB168(auVar4 * auVar16,8) * 4;
        iVar37 = SUB164(auVar4 * auVar16,8);
        puVar36 = (uint *)(lVar41 + lVar35);
        uVar38 = *puVar36;
        if (uVar38 == 0) {
          lVar34 = uVar32 * 4;
        }
        else {
          do {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar38 * lVar34;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar42;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar5 * auVar17,8)) * lVar34;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar42;
            local_88 = SUB164(auVar6 * auVar18,8);
            if (local_88 < uVar45) {
              *(int *)(lVar40 + uVar43 * 4) = iVar37;
              uVar29 = *puVar36;
              *puVar36 = (uint)uVar39;
              uVar38 = *(uint *)(lVar35 + lVar33);
              uVar39 = (ulong)uVar29;
              *(uint *)(lVar35 + lVar33) = (uint)uVar43;
              uVar43 = (ulong)uVar38;
              uVar45 = local_88;
            }
            uVar44 = (undefined4)uVar43;
            uVar29 = (uint)uVar39;
            uVar45 = uVar45 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar37 + 1) * lVar34;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar42;
            lVar35 = SUB168(auVar7 * auVar19,8) * 4;
            iVar37 = SUB164(auVar7 * auVar19,8);
            puVar36 = (uint *)(lVar41 + lVar35);
            uVar38 = *puVar36;
          } while (uVar38 != 0);
          lVar34 = uVar43 << 2;
        }
        *puVar36 = uVar29;
        uVar32 = uVar32 + 1;
        *(int *)(lVar40 + lVar34) = iVar37;
        *(undefined4 *)(lVar33 + lVar35) = uVar44;
      } while ((uint)uVar32 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar30 = String::hash();
  uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
  lVar33 = *in_RSI;
  uVar29 = 1;
  if (uVar30 != 0) {
    uVar29 = uVar30;
  }
  this = (CowData<char32_t> *)(lVar33 + uVar32 * 8);
  uVar39 = (ulong)uVar29;
  *(undefined8 *)this = 0;
  if (*(long *)in_RDX != 0) {
    CowData<char32_t>::_ref(this,(CowData *)in_RDX);
    uVar32 = (ulong)*(uint *)((long)in_RSI + 0x24);
    lVar33 = *in_RSI;
  }
  uVar44 = (undefined4)uVar32;
  uVar45 = 0;
  lVar40 = in_RSI[3];
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar43 = CONCAT44(0,uVar30);
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar39 * lVar35;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar43;
  lVar41 = SUB168(auVar8 * auVar20,8) * 4;
  iVar37 = SUB164(auVar8 * auVar20,8);
  lVar34 = in_RSI[2];
  lVar3 = in_RSI[1];
  puVar36 = (uint *)(lVar40 + lVar41);
  uVar38 = *puVar36;
  uVar42 = uVar32;
  while (uVar38 != 0) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)uVar38 * lVar35;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar43;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)((uVar30 + iVar37) - SUB164(auVar9 * auVar21,8)) * lVar35;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = uVar43;
    local_88 = SUB164(auVar10 * auVar22,8);
    if (local_88 < uVar45) {
      *(int *)(lVar34 + uVar42 * 4) = iVar37;
      uVar29 = *puVar36;
      *puVar36 = (uint)uVar39;
      puVar36 = (uint *)(lVar41 + lVar3);
      uVar38 = *puVar36;
      uVar39 = (ulong)uVar29;
      *puVar36 = (uint)uVar32;
      uVar32 = (ulong)uVar38;
      uVar42 = uVar32;
      uVar45 = local_88;
    }
    uVar44 = (undefined4)uVar32;
    uVar29 = (uint)uVar39;
    uVar45 = uVar45 + 1;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)(iVar37 + 1) * lVar35;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar43;
    lVar41 = SUB168(auVar11 * auVar23,8) * 4;
    iVar37 = SUB164(auVar11 * auVar23,8);
    puVar36 = (uint *)(lVar40 + lVar41);
    uVar38 = *puVar36;
  }
  *puVar36 = uVar29;
  *(int *)(lVar34 + uVar42 * 4) = iVar37;
  *(undefined4 *)(lVar3 + lVar41) = uVar44;
  iVar31 = *(int *)((long)in_RSI + 0x24);
  iVar37 = iVar31 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar37;
LAB_00105699:
  *(int *)(param_1 + 0xc) = iVar31;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
  return param_1;
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



/* PackedSceneEditorTranslationParserPlugin::~PackedSceneEditorTranslationParserPlugin() */

void __thiscall
PackedSceneEditorTranslationParserPlugin::~PackedSceneEditorTranslationParserPlugin
          (PackedSceneEditorTranslationParserPlugin *this)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  *(undefined ***)this = &PTR__initialize_classv_00107358;
  pvVar6 = *(void **)(this + 0x1f8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x21c) != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x218) * 4);
      if (uVar3 == 0) {
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x200) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x200) + lVar5) = 0;
            CowData<String>::_unref((CowData<String> *)((long)pvVar6 + 0x20));
            if (*(long *)((long)pvVar6 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar6 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar4 = *(long *)((long)pvVar6 + 0x10);
                *(undefined8 *)((long)pvVar6 + 0x10) = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x1f8);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar3 << 2);
        *(undefined4 *)(this + 0x21c) = 0;
        *(undefined1 (*) [16])(this + 0x208) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00105ae4;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x200),false);
  }
LAB_00105ae4:
  pvVar6 = *(void **)(this + 0x1c8);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x1ec) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4) != 0) {
        memset(*(void **)(this + 0x1e0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1e8) * 4) << 2);
        if (*(int *)(this + 0x1ec) == 0) goto LAB_00105c48;
      }
      lVar5 = 0;
      do {
        plVar1 = (long *)((long)pvVar6 + lVar5 * 8);
        if (*plVar1 != 0) {
          LOCK();
          plVar2 = (long *)(*plVar1 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            lVar4 = *plVar1;
            *plVar1 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
          pvVar6 = *(void **)(this + 0x1c8);
        }
        lVar5 = lVar5 + 1;
      } while ((uint)lVar5 < *(uint *)(this + 0x1ec));
      *(undefined4 *)(this + 0x1ec) = 0;
      if (pvVar6 == (void *)0x0) goto LAB_00105b8f;
    }
LAB_00105c48:
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x1d8),false);
    Memory::free_static(*(void **)(this + 0x1d0),false);
    Memory::free_static(*(void **)(this + 0x1e0),false);
  }
LAB_00105b8f:
  bVar7 = StringName::configured != '\0';
  *(code **)this = _err_print_error;
  if (bVar7) {
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105bf6;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105bf6;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00105bf6:
  *(undefined ***)this = &PTR__initialize_classv_001071f8;
  Object::~Object((Object *)this);
  return;
}



/* PackedSceneEditorTranslationParserPlugin::~PackedSceneEditorTranslationParserPlugin() */

void __thiscall
PackedSceneEditorTranslationParserPlugin::~PackedSceneEditorTranslationParserPlugin
          (PackedSceneEditorTranslationParserPlugin *this)

{
  ~PackedSceneEditorTranslationParserPlugin(this);
  operator_delete(this,0x220);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, Vector<String>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<String> > > >::insert(String const&,
   Vector<String> const&, bool) */

String * HashMap<String,Vector<String>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<String>>>>
         ::insert(String *param_1,Vector *param_2,bool param_3)

{
  void *pvVar1;
  void *__s;
  undefined1 auVar2 [16];
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
  char cVar26;
  uint uVar27;
  ulong uVar28;
  undefined8 uVar29;
  void *__s_00;
  long *plVar30;
  undefined8 *puVar31;
  void *pvVar32;
  long in_RCX;
  int iVar33;
  undefined7 in_register_00000011;
  String *pSVar34;
  long lVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  uint *puVar40;
  uint uVar41;
  char in_R8B;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  long lVar45;
  long lVar46;
  uint uVar47;
  long *plVar48;
  long *plVar49;
  long in_FS_OFFSET;
  long local_58 [2];
  long local_48;
  long local_40;
  
  pSVar34 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar38 = (ulong)uVar37;
    uVar28 = uVar38 * 4;
    uVar44 = uVar38 * 8;
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(param_2 + 0x10) = uVar29;
    pvVar32 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(param_2 + 8) = pvVar32;
    if (uVar37 != 0) {
      pvVar1 = *(void **)(param_2 + 0x10);
      if ((pvVar1 < (void *)((long)pvVar32 + uVar44)) && (pvVar32 < (void *)((long)pvVar1 + uVar28))
         ) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)pvVar1 + uVar28 * 4) = 0;
          *(undefined8 *)((long)pvVar32 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar38 != uVar28);
      }
      else {
        memset(pvVar1,0,uVar28);
        memset(pvVar32,0,uVar44);
      }
      goto LAB_00105d78;
    }
    iVar33 = *(int *)(param_2 + 0x2c);
    if (pvVar32 == (void *)0x0) goto LAB_00105d87;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_001061e0;
LAB_00105dad:
    uVar37 = *(uint *)(param_2 + 0x28);
    if (uVar37 == 0x1c) {
      plVar30 = (long *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010618f;
    }
    uVar28 = (ulong)(uVar37 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    if (uVar37 + 1 < 2) {
      uVar28 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar28 * 4);
    uVar38 = (ulong)uVar37;
    *(int *)(param_2 + 0x28) = (int)uVar28;
    pvVar32 = *(void **)(param_2 + 8);
    uVar28 = uVar38 * 4;
    uVar44 = uVar38 * 8;
    pvVar1 = *(void **)(param_2 + 0x10);
    uVar29 = Memory::alloc_static(uVar28,false);
    *(undefined8 *)(param_2 + 0x10) = uVar29;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar28))) {
        uVar28 = 0;
        do {
          *(undefined4 *)((long)__s + uVar28 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar28 * 8) = 0;
          uVar28 = uVar28 + 1;
        } while (uVar28 != uVar38);
      }
      else {
        memset(__s,0,uVar28);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar27 != 0) {
      uVar28 = 0;
      do {
        uVar37 = *(uint *)((long)pvVar1 + uVar28 * 4);
        if (uVar37 != 0) {
          lVar46 = *(long *)(param_2 + 0x10);
          uVar42 = 0;
          uVar41 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar41);
          lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (ulong)uVar37 * lVar45;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar44;
          lVar35 = SUB168(auVar2 * auVar14,8);
          puVar40 = (uint *)(lVar46 + lVar35 * 4);
          iVar33 = SUB164(auVar2 * auVar14,8);
          uVar43 = *puVar40;
          uVar29 = *(undefined8 *)((long)pvVar32 + uVar28 * 8);
          while (uVar43 != 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar43 * lVar45;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar44;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)((uVar41 + iVar33) - SUB164(auVar3 * auVar15,8)) * lVar45;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar44;
            uVar47 = SUB164(auVar4 * auVar16,8);
            uVar39 = uVar29;
            if (uVar47 < uVar42) {
              *puVar40 = uVar37;
              puVar31 = (undefined8 *)((long)__s_00 + lVar35 * 8);
              uVar39 = *puVar31;
              *puVar31 = uVar29;
              uVar37 = uVar43;
              uVar42 = uVar47;
            }
            uVar42 = uVar42 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar33 + 1) * lVar45;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar44;
            lVar35 = SUB168(auVar5 * auVar17,8);
            puVar40 = (uint *)(lVar46 + lVar35 * 4);
            iVar33 = SUB164(auVar5 * auVar17,8);
            uVar29 = uVar39;
            uVar43 = *puVar40;
          }
          *(undefined8 *)((long)__s_00 + lVar35 * 8) = uVar29;
          *puVar40 = uVar37;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar28 = uVar28 + 1;
      } while (uVar27 != uVar28);
      Memory::free_static(pvVar32,false);
      Memory::free_static(pvVar1,false);
    }
  }
  else {
LAB_00105d78:
    iVar33 = *(int *)(param_2 + 0x2c);
    if (iVar33 != 0) {
LAB_001061e0:
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar28 = CONCAT44(0,uVar27);
      lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar43 = String::hash();
      lVar45 = *(long *)(param_2 + 0x10);
      uVar41 = 1;
      if (uVar43 != 0) {
        uVar41 = uVar43;
      }
      uVar47 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar41 * lVar46;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar28;
      lVar35 = SUB168(auVar10 * auVar22,8);
      uVar43 = *(uint *)(lVar45 + lVar35 * 4);
      uVar42 = SUB164(auVar10 * auVar22,8);
      if (uVar43 != 0) {
        do {
          if (uVar41 == uVar43) {
            cVar26 = String::operator==((String *)
                                        (*(long *)(*(long *)(param_2 + 8) + lVar35 * 8) + 0x10),
                                        pSVar34);
            if (cVar26 != '\0') {
              plVar30 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar42 * 8);
              if (plVar30[4] != *(long *)(in_RCX + 8)) {
                CowData<String>::_ref((CowData<String> *)(plVar30 + 4),(CowData *)(in_RCX + 8));
                plVar30 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar42 * 8);
              }
              goto LAB_0010618f;
            }
            lVar45 = *(long *)(param_2 + 0x10);
          }
          uVar47 = uVar47 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(uVar42 + 1) * lVar46;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar28;
          lVar35 = SUB168(auVar11 * auVar23,8);
          uVar43 = *(uint *)(lVar45 + lVar35 * 4);
          uVar42 = SUB164(auVar11 * auVar23,8);
        } while ((uVar43 != 0) &&
                (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar43 * lVar46, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar28, auVar13._8_8_ = 0,
                auVar13._0_8_ = (ulong)((uVar27 + uVar42) - SUB164(auVar12 * auVar24,8)) * lVar46,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar28, uVar47 <= SUB164(auVar13 * auVar25,8)));
      }
      iVar33 = *(int *)(param_2 + 0x2c);
    }
LAB_00105d87:
    if ((float)uVar37 * __LC11 < (float)(iVar33 + 1)) goto LAB_00105dad;
  }
  local_58[0] = 0;
  if (*(long *)pSVar34 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)pSVar34);
  }
  local_48 = 0;
  lVar46 = *(long *)(in_RCX + 8);
  if (*(long *)(in_RCX + 8) != 0) {
    CowData<String>::_ref((CowData<String> *)&local_48,(CowData *)(in_RCX + 8));
    lVar46 = local_48;
  }
  plVar30 = (long *)operator_new(0x28,"");
  plVar30[2] = 0;
  *plVar30 = 0;
  plVar30[1] = 0;
  if (local_58[0] != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(plVar30 + 2),(CowData *)local_58);
  }
  plVar30[4] = 0;
  if (lVar46 != 0) {
    CowData<String>::_ref((CowData<String> *)(plVar30 + 4),(CowData *)&local_48);
  }
  CowData<String>::_unref((CowData<String> *)&local_48);
  if (local_58[0] == 0) {
LAB_00106072:
    puVar31 = *(undefined8 **)(param_2 + 0x20);
    if (puVar31 != (undefined8 *)0x0) goto LAB_0010607f;
LAB_001062ed:
    *(long **)(param_2 + 0x18) = plVar30;
    *(long **)(param_2 + 0x20) = plVar30;
  }
  else {
    LOCK();
    plVar49 = (long *)(local_58[0] + -0x10);
    *plVar49 = *plVar49 + -1;
    UNLOCK();
    if (*plVar49 != 0) goto LAB_00106072;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar31 = *(undefined8 **)(param_2 + 0x20);
    if (puVar31 == (undefined8 *)0x0) goto LAB_001062ed;
LAB_0010607f:
    if (in_R8B == '\0') {
      *puVar31 = plVar30;
      plVar30[1] = (long)puVar31;
      *(long **)(param_2 + 0x20) = plVar30;
    }
    else {
      lVar46 = *(long *)(param_2 + 0x18);
      *(long **)(lVar46 + 8) = plVar30;
      *plVar30 = lVar46;
      *(long **)(param_2 + 0x18) = plVar30;
    }
  }
  uVar27 = String::hash();
  lVar46 = *(long *)(param_2 + 0x10);
  uVar37 = 1;
  if (uVar27 != 0) {
    uVar37 = uVar27;
  }
  lVar45 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar28 = CONCAT44(0,uVar27);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = (ulong)uVar37 * lVar45;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar28;
  lVar36 = SUB168(auVar6 * auVar18,8);
  lVar35 = *(long *)(param_2 + 8);
  puVar40 = (uint *)(lVar46 + lVar36 * 4);
  iVar33 = SUB164(auVar6 * auVar18,8);
  uVar41 = *puVar40;
  plVar49 = plVar30;
  if (uVar41 != 0) {
    uVar43 = 0;
    plVar48 = plVar30;
    do {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar41 * lVar45;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar28;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)((uVar27 + iVar33) - SUB164(auVar7 * auVar19,8)) * lVar45;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar28;
      uVar42 = SUB164(auVar8 * auVar20,8);
      plVar49 = plVar48;
      if (uVar42 < uVar43) {
        *puVar40 = uVar37;
        puVar31 = (undefined8 *)(lVar35 + lVar36 * 8);
        plVar49 = (long *)*puVar31;
        *puVar31 = plVar48;
        uVar43 = uVar42;
        uVar37 = uVar41;
      }
      uVar43 = uVar43 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)(iVar33 + 1) * lVar45;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar28;
      lVar36 = SUB168(auVar9 * auVar21,8);
      puVar40 = (uint *)(lVar46 + lVar36 * 4);
      iVar33 = SUB164(auVar9 * auVar21,8);
      uVar41 = *puVar40;
      plVar48 = plVar49;
    } while (uVar41 != 0);
  }
  *(long **)(lVar35 + lVar36 * 8) = plVar49;
  *puVar40 = uVar37;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0010618f:
  *(long **)param_1 = plVar30;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Pair<NodePath, bool> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Pair<NodePath,bool>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector<String> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector<String>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PackedSceneEditorTranslationParserPlugin::parse_file(String const&, Vector<Vector<String> >*)
   [clone .cold] */

void PackedSceneEditorTranslationParserPlugin::parse_file(String *param_1,Vector *param_2)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
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
    lVar7 = 0;
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
    lVar7 = lVar6 * 8;
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
LAB_00106830:
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
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00106830;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00106709:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00106709;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00106886;
  }
  if (lVar10 == lVar7) {
LAB_001067af:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00106886:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010679a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001067af;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0010679a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<Pair<NodePath, bool> >::_unref() */

void __thiscall CowData<Pair<NodePath,bool>>::_unref(CowData<Pair<NodePath,bool>> *this)

{
  long *plVar1;
  NodePath *pNVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  NodePath *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pNVar2 = *(NodePath **)this;
    if (pNVar2 != (NodePath *)0x0) {
      lVar3 = *(long *)(pNVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pNVar2;
        do {
          lVar5 = lVar5 + 1;
          NodePath::~NodePath(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pNVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Pair<NodePath, bool> >::_realloc(long) */

undefined8 __thiscall
CowData<Pair<NodePath,bool>>::_realloc(CowData<Pair<NodePath,bool>> *this,long param_1)

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
/* Error CowData<Pair<NodePath, bool> >::resize<false>(long) */

undefined8 __thiscall
CowData<Pair<NodePath,bool>>::resize<false>(CowData<Pair<NodePath,bool>> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
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
    lVar7 = 0;
    lVar8 = 0;
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
    lVar8 = lVar7 * 0x10;
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
LAB_00106c10:
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
  if (lVar10 == 0) goto LAB_00106c10;
  uVar6 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar6) {
        if (lVar10 != lVar8) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      NodePath::~NodePath((NodePath *)(lVar7 + uVar6 * 0x10));
      uVar6 = uVar6 + 1;
    }
    goto LAB_00106c66;
  }
  if (lVar10 == lVar8) {
LAB_00106b83:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00106c66:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar5[-1];
    if (param_1 <= lVar7) goto LAB_00106ae4;
  }
  else {
    if (lVar7 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00106b83;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar7 = 0;
  }
  puVar2 = puVar5 + lVar7 * 2;
  do {
    *puVar2 = 0;
    puVar3 = puVar2 + 2;
    *(undefined1 *)(puVar2 + 1) = 0;
    puVar2 = puVar3;
  } while (puVar3 != puVar5 + param_1 * 2);
LAB_00106ae4:
  puVar5[-1] = param_1;
  return 0;
}



/* CowData<Vector<String> >::_unref() */

void __thiscall CowData<Vector<String>>::_unref(CowData<Vector<String>> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<String> *this_00;
  
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
        lVar5 = 0;
        this_00 = (CowData<String> *)(lVar2 + 8);
        do {
          lVar5 = lVar5 + 1;
          CowData<String>::_unref(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<Vector<String> >::_realloc(long) */

undefined8 __thiscall CowData<Vector<String>>::_realloc(CowData<Vector<String>> *this,long param_1)

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
/* Error CowData<Vector<String> >::resize<false>(long) */

undefined8 __thiscall
CowData<Vector<String>>::resize<false>(CowData<Vector<String>> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
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
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar5 * 0x10;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00107100:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x10 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00107100;
  uVar9 = param_1;
  if (param_1 <= lVar5) {
    while (lVar5 = *(long *)this, lVar5 != 0) {
      if (*(ulong *)(lVar5 + -8) <= uVar9) {
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar5 + -8) = param_1;
        return 0;
      }
      CowData<String>::_unref((CowData<String> *)(lVar5 + 8 + uVar9 * 0x10));
      uVar9 = uVar9 + 1;
    }
    goto LAB_00107156;
  }
  if (lVar10 == lVar7) {
LAB_00107073:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_00107156:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_00106fd9;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00107073;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar5 = 0;
  }
  puVar11 = puVar6 + param_1 * 2;
  puVar2 = puVar6 + lVar5 * 2;
  if (((int)puVar11 - (int)puVar2 & 0x10U) != 0) {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    if (puVar2 == puVar11) goto LAB_00106fd9;
  }
  do {
    puVar2[1] = 0;
    puVar3 = puVar2 + 4;
    puVar2[3] = 0;
    puVar2 = puVar3;
  } while (puVar3 != puVar11);
LAB_00106fd9:
  puVar6[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* PackedSceneEditorTranslationParserPlugin::~PackedSceneEditorTranslationParserPlugin() */

void __thiscall
PackedSceneEditorTranslationParserPlugin::~PackedSceneEditorTranslationParserPlugin
          (PackedSceneEditorTranslationParserPlugin *this)

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


