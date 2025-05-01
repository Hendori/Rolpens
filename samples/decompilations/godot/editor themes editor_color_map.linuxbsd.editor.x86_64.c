
/* EditorColorMap::finish() */

void EditorColorMap::finish(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  if ((color_conversion_map._8_8_ != 0) && (color_conversion_map._44_4_ != 0)) {
    lVar2 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)(uint)color_conversion_map._40_4_ * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(color_conversion_map._16_8_ + lVar2) != 0) {
          *(int *)(color_conversion_map._16_8_ + lVar2) = 0;
          Memory::free_static(*(void **)(color_conversion_map._8_8_ + lVar2 * 2),false);
          *(undefined8 *)(color_conversion_map._8_8_ + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
    }
    color_conversion_map._44_4_ = 0;
    color_conversion_map._24_16_ = (undefined1  [16])0x0;
  }
  lVar2 = color_conversion_exceptions;
  if ((color_conversion_exceptions != 0) && (DAT_001040e4 != 0)) {
    if ((*(uint *)(hash_table_size_primes + (ulong)DAT_001040e0 * 4) == 0) ||
       (memset(DAT_001040d8,0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)DAT_001040e0 * 4) << 2),
       DAT_001040e4 != 0)) {
      lVar3 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)(lVar2 + lVar3 * 8) != 0)) {
          StringName::unref();
        }
        lVar3 = lVar3 + 1;
        lVar2 = color_conversion_exceptions;
      } while ((uint)lVar3 < DAT_001040e4);
    }
    DAT_001040e4 = 0;
  }
  return;
}



/* EditorColorMap::add_conversion_exception(StringName const&) */

void EditorColorMap::add_conversion_exception(StringName *param_1)

{
  long in_FS_OFFSET;
  StringName aSStack_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(aSStack_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorColorMap::add_conversion_color_pair(String const&, String const&) */

void EditorColorMap::add_conversion_color_pair(String *param_1,String *param_2)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  undefined8 in_XMM1_Qa;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = Color::html(param_2);
  local_38[0] = Color::html(param_1);
  puVar1 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_38);
  *puVar1 = uVar2;
  puVar1[1] = in_XMM1_Qa;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorColorMap::create() */

void EditorColorMap::create(void)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_XMM1_Qa;
  undefined8 uVar6;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = "#478cbf";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#478cbf";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar4 = Color::html((String *)&local_70);
  uVar6 = in_XMM1_Qa;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar4;
  puVar3[1] = in_XMM1_Qa;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#414042";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#414042";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#414141";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ffffff";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#fefefe";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#fefefe";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#bfbfbf";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#000000";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#010101";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#010101";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#ff0000";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ff0000";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#00ff00";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#00ff00";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#0000ff";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#0000ff";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#5a5a5a";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#e0e0e0";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#808080";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#808080";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#363636";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#b3b3b3";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#699ce8";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#699ce8";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#606060";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#f9f9f9";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#a85de9";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#c38ef1";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#3d64dd";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#8da5f3";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#6d83c8";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#7582a8";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#cd3838";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#fc7f7f";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#be6a6a";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#b56d6d";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#2fa139";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#8eef97";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#64a66a";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#76ad7b";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#0079f0";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#5fb2ff";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#2b74bb";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#003e7a";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#615f3a";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#f7f5cf";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#ff2929";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ff4545";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#ffe337";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ffe345";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#74ff34";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#80ff45";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#2cff98";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#45ffa2";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#22ccff";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#45d7ff";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#702aff";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#8045ff";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#ff2781";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ff4596";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#d6cf4b";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#e1da5b";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#1678e0";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#62aeff";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#41acc5";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#75d1e6";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#49ccba";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#84ffee";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#c91616";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#f70000";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#d58c0b";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#eec315";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#b7d10a";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#dbee15";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#218309";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#288027";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#fea900";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ffca5f";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  lVar2 = local_78;
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#68b6ff";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#2998ff";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#4998e3";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#a2d2ff";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#29a3cc";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#69c4d4";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#bd5e2c";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ea7940";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#bd165f";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ff2b88";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#bd9d1f";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#eac840";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#16a827";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#3cf34e";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#236be6";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#2877f6";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#9f9722";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#eae440";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#9853ce";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#a448f0";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#0a9c88";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#5ad5c4";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#474747";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#d6d6d6";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#d6d6d6";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#474747";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#6e6e6e";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#919191";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  lVar2 = local_78;
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#aa8d24";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#fce00e";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#0350bd";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#0e71fc";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#828f9b";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#c6ced4";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#25e3a0";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#41ecad";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#6d8eeb";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#6f91f0";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#4fb2e9";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#5abbef";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#27ccf0";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#35d4f4";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#4690e7";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#4593ec";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#ee7991";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ee5677";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  puVar3[1] = uVar4;
  *puVar3 = uVar5;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#5a5a5a";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#e0e0e0";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#b2bb19";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#e1ec41";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#57e99f";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#54ed9e";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#6993ec";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#417aec";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#12d5c3";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#55f3e3";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#f77070";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#f74949";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#46b946";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#44bd44";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#ec69a3";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ec418e";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#ee758e";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#f1738f";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#2ce573";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#41ec80";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#96ce1a";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#b9ec41";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#f49047";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#f68f45";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  local_70 = 0;
  local_68 = "#ad76ee";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ac73f1";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#dc6aed";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#de66f0";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#ed6abd";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#f066bd";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#67c046";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#77ce57";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#d95256";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#ea686c";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar4 = uVar6;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#d9b64f";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#eac968";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar5 = Color::html((String *)&local_70);
  uVar6 = uVar4;
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar5;
  puVar3[1] = uVar4;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "#c050dd";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "#cf68ea";
  local_78 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_78);
  uVar4 = Color::html((String *)&local_70);
  local_58[0] = Color::html((String *)&local_78);
  puVar3 = (undefined8 *)
           HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                         *)color_conversion_map,(Color *)local_58);
  *puVar3 = uVar4;
  puVar3[1] = uVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  StringName::StringName((StringName *)&local_70,"EditorPivot",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"EditorHandle",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"Editor3DHandle",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"EditorBoneHandle",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"Godot",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"Sky",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"EditorControlAnchor",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"DefaultProjectIcon",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"ZoomMore",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"ZoomLess",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"ZoomReset",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"LockViewport",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GroupViewport",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"StatusSuccess",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"OverbrightIndicator",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"MaterialPreviewCube",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"MaterialPreviewSphere",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"MaterialPreviewQuad",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"MaterialPreviewLight1",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"MaterialPreviewLight2",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GuiChecked",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GuiRadioChecked",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GuiIndeterminate",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GuiCloseCustomizable",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GuiGraphNodePort",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GuiResizer",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GuiMiniCheckerboard",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GuiTab",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"GuiSpace",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"CodeFoldedRightArrow",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"CodeFoldDownArrow",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"CodeRegionFoldedRightArrow",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"CodeRegionFoldDownArrow",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"TextEditorPlay",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_70,"Breakpoint",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_68);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
  long lVar1;
  void *pvVar2;
  
  pvVar2 = *(void **)this;
  if (pvVar2 == (void *)0x0) {
    return;
  }
  if ((*(int *)(this + 0x24) != 0) &&
     ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) == 0 ||
      (memset(*(void **)(this + 0x18),0,
              (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4) << 2),
      *(int *)(this + 0x24) != 0)))) {
    lVar1 = 0;
    do {
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + lVar1 * 8) != 0)) {
        StringName::unref();
        pvVar2 = *(void **)this;
      }
      lVar1 = lVar1 + 1;
    } while ((uint)lVar1 < *(uint *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
    if (pvVar2 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar2,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  Memory::free_static(*(void **)(this + 8),false);
  Memory::free_static(*(void **)(this + 0x18),false);
  return;
}



/* HashMap<Color, Color, HashMapHasherDefault, HashMapComparatorDefault<Color>,
   DefaultTypedAllocator<HashMapElement<Color, Color> > >::~HashMap() */

void __thiscall
HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
::~HashMap(HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
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
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010438c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0010438c:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_001047d8;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC0) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_001046b5;
LAB_00104816:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_001047d8;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_00104816;
LAB_001046b5:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_001047d8:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
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



/* HashMap<Color, Color, HashMapHasherDefault, HashMapComparatorDefault<Color>,
   DefaultTypedAllocator<HashMapElement<Color, Color> > >::_lookup_pos(Color const&, unsigned int&)
   const */

undefined8 __thiscall
HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
::_lookup_pos(HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
              *this,Color *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
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
  undefined8 uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    Color::operator_cast_to_String((Color *)&local_48);
    uVar13 = String::hash();
    lVar17 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar17 + -0x10),false);
      }
    }
    uVar19 = CONCAT44(0,uVar2);
    uVar14 = 1;
    if (uVar13 != 0) {
      uVar14 = uVar13;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar14 * lVar4;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar19;
    lVar17 = SUB168(auVar5 * auVar9,8);
    uVar13 = *(uint *)(*(long *)(this + 0x10) + lVar17 * 4);
    uVar18 = (ulong)uVar13;
    uVar16 = SUB164(auVar5 * auVar9,8);
    if (uVar13 != 0) {
      uVar13 = 0;
      do {
        if (uVar14 == (uint)uVar18) {
          lVar17 = *(long *)(*(long *)(this + 8) + lVar17 * 8);
          if ((*(float *)(lVar17 + 0x10) == *(float *)param_1) ||
             ((NAN(*(float *)(lVar17 + 0x10)) && (NAN(*(float *)param_1))))) {
            if ((*(float *)(lVar17 + 0x14) == *(float *)(param_1 + 4)) ||
               ((NAN(*(float *)(lVar17 + 0x14)) && (NAN(*(float *)(param_1 + 4)))))) {
              if ((*(float *)(lVar17 + 0x18) == *(float *)(param_1 + 8)) ||
                 ((NAN(*(float *)(lVar17 + 0x18)) && (NAN(*(float *)(param_1 + 8)))))) {
                if ((*(float *)(lVar17 + 0x1c) == *(float *)(param_1 + 0xc)) ||
                   ((NAN(*(float *)(lVar17 + 0x1c)) && (NAN(*(float *)(param_1 + 0xc)))))) {
                  *param_2 = uVar16;
                  uVar15 = 1;
                  goto LAB_001049b5;
                }
              }
            }
          }
        }
        uVar13 = uVar13 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar16 + 1) * lVar4;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar19;
        lVar17 = SUB168(auVar6 * auVar10,8);
        uVar3 = *(uint *)(*(long *)(this + 0x10) + lVar17 * 4);
        uVar18 = (ulong)uVar3;
        uVar16 = SUB164(auVar6 * auVar10,8);
      } while ((uVar3 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = uVar18 * lVar4, auVar11._8_8_ = 0,
              auVar11._0_8_ = uVar19, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar2 + uVar16) - SUB164(auVar7 * auVar11,8)) * lVar4,
              auVar12._8_8_ = 0, auVar12._0_8_ = uVar19, uVar13 <= SUB164(auVar8 * auVar12,8)));
    }
  }
  uVar15 = 0;
LAB_001049b5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Color, Color, HashMapHasherDefault, HashMapComparatorDefault<Color>,
   DefaultTypedAllocator<HashMapElement<Color, Color> > >::operator[](Color const&) */

undefined1 (*) [16] __thiscall
HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
::operator[](HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
             *this,Color *param_1)

{
  long *plVar1;
  uint *puVar2;
  undefined8 *puVar3;
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
  uint uVar28;
  ulong uVar29;
  undefined8 uVar30;
  void *__s_00;
  undefined1 (*pauVar31) [16];
  void *pvVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  undefined8 uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined1 (*pauVar41) [16];
  long in_FS_OFFSET;
  uint local_88;
  uint local_84;
  long local_80 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  cVar25 = _lookup_pos(this,param_1,&local_88);
  if (cVar25 == '\0') {
    uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar36 = (ulong)uVar27;
      uVar29 = uVar36 * 4;
      uVar40 = uVar36 * 8;
      uVar30 = Memory::alloc_static(uVar29,false);
      *(undefined8 *)(this + 0x10) = uVar30;
      pvVar32 = (void *)Memory::alloc_static(uVar40,false);
      *(void **)(this + 8) = pvVar32;
      if (uVar27 != 0) {
        pvVar5 = *(void **)(this + 0x10);
        if ((pvVar5 < (void *)((long)pvVar32 + uVar40)) &&
           (pvVar32 < (void *)((long)pvVar5 + uVar29))) {
          uVar29 = 0;
          do {
            *(undefined4 *)((long)pvVar5 + uVar29 * 4) = 0;
            *(undefined8 *)((long)pvVar32 + uVar29 * 8) = 0;
            uVar29 = uVar29 + 1;
          } while (uVar36 != uVar29);
        }
        else {
          memset(pvVar5,0,uVar29);
          memset(pvVar32,0,uVar40);
        }
      }
    }
    local_84 = 0;
    cVar25 = _lookup_pos(this,param_1,&local_84);
    uVar30 = _UNK_00105ae8;
    if (cVar25 == '\0') {
      if ((float)uVar27 * __LC0 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar27 = *(uint *)(this + 0x28);
        if (uVar27 == 0x1c) {
          pauVar31 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_0010505b;
        }
        uVar29 = (ulong)(uVar27 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)uVar27 * 4);
        if (uVar27 + 1 < 2) {
          uVar29 = 2;
        }
        uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
        uVar36 = (ulong)uVar27;
        *(int *)(this + 0x28) = (int)uVar29;
        pvVar32 = *(void **)(this + 8);
        uVar29 = uVar36 * 4;
        uVar40 = uVar36 * 8;
        pvVar5 = *(void **)(this + 0x10);
        uVar30 = Memory::alloc_static(uVar29,false);
        *(undefined8 *)(this + 0x10) = uVar30;
        __s_00 = (void *)Memory::alloc_static(uVar40,false);
        *(void **)(this + 8) = __s_00;
        if (uVar27 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar40)) && (__s_00 < (void *)((long)__s + uVar29))) {
            uVar29 = 0;
            do {
              *(undefined4 *)((long)__s + uVar29 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar29 * 8) = 0;
              uVar29 = uVar29 + 1;
            } while (uVar36 != uVar29);
          }
          else {
            memset(__s,0,uVar29);
            memset(__s_00,0,uVar40);
          }
        }
        if (uVar4 != 0) {
          uVar29 = 0;
          do {
            uVar27 = *(uint *)((long)pvVar5 + uVar29 * 4);
            if (uVar27 != 0) {
              lVar6 = *(long *)(this + 0x10);
              uVar38 = 0;
              uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar40 = CONCAT44(0,uVar28);
              lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar27 * lVar7;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar40;
              lVar34 = SUB168(auVar8 * auVar16,8);
              puVar2 = (uint *)(lVar6 + lVar34 * 4);
              iVar33 = SUB164(auVar8 * auVar16,8);
              uVar39 = *puVar2;
              uVar30 = *(undefined8 *)((long)pvVar32 + uVar29 * 8);
              while (uVar39 != 0) {
                auVar9._8_8_ = 0;
                auVar9._0_8_ = (ulong)uVar39 * lVar7;
                auVar17._8_8_ = 0;
                auVar17._0_8_ = uVar40;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)((uVar28 + iVar33) - SUB164(auVar9 * auVar17,8)) * lVar7;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar40;
                uVar26 = SUB164(auVar10 * auVar18,8);
                uVar37 = uVar30;
                if (uVar26 < uVar38) {
                  *puVar2 = uVar27;
                  puVar3 = (undefined8 *)((long)__s_00 + lVar34 * 8);
                  uVar37 = *puVar3;
                  *puVar3 = uVar30;
                  uVar27 = uVar39;
                  uVar38 = uVar26;
                }
                uVar38 = uVar38 + 1;
                auVar11._8_8_ = 0;
                auVar11._0_8_ = (ulong)(iVar33 + 1) * lVar7;
                auVar19._8_8_ = 0;
                auVar19._0_8_ = uVar40;
                lVar34 = SUB168(auVar11 * auVar19,8);
                puVar2 = (uint *)(lVar6 + lVar34 * 4);
                iVar33 = SUB164(auVar11 * auVar19,8);
                uVar30 = uVar37;
                uVar39 = *puVar2;
              }
              *(undefined8 *)((long)__s_00 + lVar34 * 8) = uVar30;
              *puVar2 = uVar27;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar29 = uVar29 + 1;
          } while (uVar4 != uVar29);
          Memory::free_static(pvVar32,false);
          Memory::free_static(pvVar5,false);
        }
      }
      local_68 = *(undefined8 *)param_1;
      uStack_60 = *(undefined8 *)(param_1 + 8);
      pauVar31 = (undefined1 (*) [16])operator_new(0x30,"");
      *pauVar31 = (undefined1  [16])0x0;
      uVar37 = _UNK_00105ae8;
      uVar30 = __LC5;
      *(undefined8 *)pauVar31[1] = local_68;
      *(undefined8 *)(pauVar31[1] + 8) = uStack_60;
      *(undefined8 *)pauVar31[2] = uVar30;
      *(undefined8 *)(pauVar31[2] + 8) = uVar37;
      puVar3 = *(undefined8 **)(this + 0x20);
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar31;
      }
      else {
        *puVar3 = pauVar31;
        *(undefined8 **)(*pauVar31 + 8) = puVar3;
      }
      *(undefined1 (**) [16])(this + 0x20) = pauVar31;
      Color::operator_cast_to_String((Color *)local_80);
      uVar27 = String::hash();
      lVar6 = local_80[0];
      uVar29 = (ulong)uVar27;
      if (local_80[0] != 0) {
        LOCK();
        plVar1 = (long *)(local_80[0] + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_80[0] = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      if (uVar27 == 0) {
        uVar29 = 1;
      }
      lVar6 = *(long *)(this + 0x10);
      uVar39 = 0;
      lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar28 = (uint)uVar29;
      uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar40 = CONCAT44(0,uVar27);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar29 * lVar7;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar40;
      lVar35 = SUB168(auVar12 * auVar20,8);
      lVar34 = *(long *)(this + 8);
      puVar2 = (uint *)(lVar6 + lVar35 * 4);
      iVar33 = SUB164(auVar12 * auVar20,8);
      uVar4 = *puVar2;
      pauVar24 = pauVar31;
      while (uVar4 != 0) {
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)uVar4 * lVar7;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar40;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((uVar27 + iVar33) - SUB164(auVar13 * auVar21,8)) * lVar7;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar40;
        uVar28 = SUB164(auVar14 * auVar22,8);
        pauVar41 = pauVar24;
        if (uVar28 < uVar39) {
          *puVar2 = (uint)uVar29;
          uVar29 = (ulong)uVar4;
          puVar3 = (undefined8 *)(lVar34 + lVar35 * 8);
          pauVar41 = (undefined1 (*) [16])*puVar3;
          *puVar3 = pauVar24;
          uVar39 = uVar28;
        }
        uVar28 = (uint)uVar29;
        uVar39 = uVar39 + 1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = (ulong)(iVar33 + 1) * lVar7;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar40;
        lVar35 = SUB168(auVar15 * auVar23,8);
        puVar2 = (uint *)(lVar6 + lVar35 * 4);
        iVar33 = SUB164(auVar15 * auVar23,8);
        pauVar24 = pauVar41;
        uVar4 = *puVar2;
      }
      *(undefined1 (**) [16])(lVar34 + lVar35 * 8) = pauVar24;
      *puVar2 = uVar28;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_84 * 8);
      *(undefined8 *)pauVar31[2] = __LC5;
      *(undefined8 *)(pauVar31[2] + 8) = uVar30;
    }
  }
  else {
    pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_88 * 8);
  }
LAB_0010505b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar31 + 2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorColorMap::color_conversion_map */

void EditorColorMap::_GLOBAL__sub_I_color_conversion_map(void)

{
  undefined8 uVar1;
  
  uVar1 = _LC196;
  color_conversion_map._8_16_ = (undefined1  [16])0x0;
  color_conversion_map._24_16_ = (undefined1  [16])0x0;
  color_conversion_map._40_8_ = _LC196;
  __cxa_atexit(HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
               ::~HashMap,color_conversion_map,&__dso_handle);
  _DAT_001040e0 = uVar1;
  _color_conversion_exceptions = (undefined1  [16])0x0;
  _DAT_001040d0 = (undefined1  [16])0x0;
  __cxa_atexit(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
               ~HashSet,&color_conversion_exceptions,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<Color, Color, HashMapHasherDefault, HashMapComparatorDefault<Color>,
   DefaultTypedAllocator<HashMapElement<Color, Color> > >::~HashMap() */

void __thiscall
HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
::~HashMap(HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


