
/* ResourceFormatLoaderImage::handles_type(String const&) const */

void __thiscall
ResourceFormatLoaderImage::handles_type(ResourceFormatLoaderImage *this,String *param_1)

{
  String::operator==(param_1,"Image");
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



/* ResourceFormatLoaderImage::get_resource_type(String const&) const */

String * ResourceFormatLoaderImage::get_resource_type(String *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  String::get_extension();
  String::to_lower();
  cVar3 = String::operator==((String *)&local_40,"image");
  *(undefined8 *)param_1 = 0;
  if (cVar3 != '\0') {
    local_30 = 5;
    local_38 = "Image";
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
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_48 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoaderImage::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ResourceFormatLoaderImage::get_recognized_extensions(ResourceFormatLoaderImage *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "image";
  local_30 = 5;
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



/* ImageLoader::get_recognized_extensions(List<String, DefaultAllocator>*) */

void ImageLoader::get_recognized_extensions(List *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (loader._8_8_ == 0) {
    return;
  }
  lVar2 = 0;
  do {
    if (*(long *)(loader._8_8_ + -8) <= lVar2) {
      return;
    }
    plVar1 = *(long **)(loader._8_8_ + lVar2 * 8);
    lVar2 = lVar2 + 1;
    (**(code **)(*plVar1 + 0x158))(plVar1,param_1);
  } while (loader._8_8_ != 0);
  return;
}



/* ImageFormatLoader::recognize(String const&) const */

undefined8 ImageFormatLoader::recognize(String *param_1)

{
  String *pSVar1;
  char cVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  long *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (long *)0x0;
  (**(code **)(*(long *)param_1 + 0x158))(param_1,&local_28);
  if (local_28 != (long *)0x0) {
    for (pSVar1 = (String *)*local_28; pSVar1 != (String *)0x0; pSVar1 = *(String **)(pSVar1 + 8)) {
      cVar2 = String::nocasecmp_to(pSVar1);
      if (cVar2 == '\0') {
        uVar3 = 1;
        goto LAB_001005f2;
      }
    }
  }
  uVar3 = 0;
LAB_001005f2:
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageLoader::recognize(String const&) */

String * ImageLoader::recognize(String *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = 0;
  if (loader._8_8_ != 0) {
    do {
      if (*(long *)(loader._8_8_ + -8) <= lVar4) break;
      cVar3 = ImageFormatLoader::recognize(*(String **)(loader._8_8_ + lVar4 * 8));
      uVar2 = loader._8_8_;
      if (cVar3 != '\0') {
        if (loader._8_8_ == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = *(long *)(loader._8_8_ + -8);
          if (lVar4 < lVar5) {
            *(undefined8 *)param_1 = 0;
            lVar4 = *(long *)(uVar2 + lVar4 * 8);
            if (lVar4 == 0) {
              return param_1;
            }
            *(long *)param_1 = lVar4;
            cVar3 = RefCounted::reference();
            if (cVar3 != '\0') {
              return param_1;
            }
            break;
          }
        }
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar4 = lVar4 + 1;
    } while (loader._8_8_ != 0);
  }
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* ImageFormatLoader::_bind_methods() */

void ImageFormatLoader::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  long local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_80,"FLAG_NONE",false);
  local_78 = "FLAG_NONE";
  local_90 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void> *)&local_78);
  lVar2 = local_58;
  local_88 = local_68;
  local_68 = 0;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  local_98 = 0;
  local_78 = "ImageFormatLoader";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_98);
  StringName::StringName((StringName *)&local_78,(String *)&local_98,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_78,(StringName *)&local_88,(StringName *)&local_80,0,true);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_80,"FLAG_FORCE_LINEAR",false);
  local_78 = "FLAG_FORCE_LINEAR";
  local_90 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void> *)&local_78);
  lVar2 = local_58;
  local_88 = local_68;
  local_68 = 0;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  local_78 = "ImageFormatLoader";
  local_98 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_98);
  StringName::StringName((StringName *)&local_78,(String *)&local_98,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_78,(StringName *)&local_88,(StringName *)&local_80,1,true);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_80,"FLAG_CONVERT_COLORS",false);
  local_78 = "FLAG_CONVERT_COLORS";
  local_90 = 0;
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void> *)&local_78);
  lVar2 = local_58;
  local_88 = local_68;
  local_68 = 0;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  local_78 = "ImageFormatLoader";
  local_98 = 0;
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_98);
  StringName::StringName((StringName *)&local_78,(String *)&local_98,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_78,(StringName *)&local_88,(StringName *)&local_80,2,true);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_88 != 0)) {
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
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
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



/* ImageFormatLoaderExtension::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall
ImageFormatLoaderExtension::get_recognized_extensions
          (ImageFormatLoaderExtension *this,List *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_118;
  long local_110 [2];
  long local_100;
  int local_f8 [2];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined4 local_e0;
  long local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar6 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = 0;
  if (plVar6 == (long *)0x0) {
LAB_00100fdb:
    if ((*(long *)(this + 8) != 0) && (this[0x188] == (ImageFormatLoaderExtension)0x0)) {
      local_c8 = 0;
      local_b8 = (undefined1  [16])0x0;
      local_f8[0] = 0x10550b;
      local_f8[1] = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      uStack_f0 = 0x1a;
      uStack_ec = 0;
      String::parse_latin1((StrRange *)&local_c8);
      local_90 = CONCAT44(local_90._4_4_,0xc);
      GetTypeInfo<Vector<String>,void>::get_class_info((GetTypeInfo<Vector<String>,void> *)local_f8)
      ;
      local_c0 = CONCAT44(local_c0._4_4_,local_f8[0]);
      if (local_b8._0_8_ != CONCAT44(uStack_ec,uStack_f0)) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        auVar2 = local_b8;
        local_b8._4_4_ = uStack_ec;
        local_b8._0_4_ = uStack_f0;
        uStack_f0 = 0;
        uStack_ec = 0;
        local_b8._8_8_ = auVar2._8_8_;
      }
      if (local_b8._8_8_ != local_e8) {
        StringName::unref();
        lVar9 = local_e8;
        local_e8 = 0;
        local_b8._8_8_ = lVar9;
      }
      lVar8 = local_a0;
      lVar9 = local_d8;
      local_a8 = CONCAT44(local_a8._4_4_,local_e0);
      if (local_a0 == local_d8) {
        local_98 = CONCAT44(local_98._4_4_,local_d0);
        if (local_a0 != 0) {
          LOCK();
          plVar6 = (long *)(local_a0 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_d8 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
      }
      else {
        if (local_a0 != 0) {
          LOCK();
          plVar6 = (long *)(local_a0 + -0x10);
          *plVar6 = *plVar6 + -1;
          UNLOCK();
          if (*plVar6 == 0) {
            local_a0 = 0;
            Memory::free_static((void *)(lVar8 + -0x10),false);
          }
        }
        local_a0 = local_d8;
        local_98 = CONCAT44(local_98._4_4_,local_d0);
      }
      if ((StringName::configured != '\0') && (local_e8 != 0)) {
        StringName::unref();
      }
      if (CONCAT44(uStack_ec,uStack_f0) != 0) {
        LOCK();
        plVar6 = (long *)(CONCAT44(uStack_ec,uStack_f0) + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          lVar9 = CONCAT44(uStack_ec,uStack_f0);
          uStack_f0 = 0;
          uStack_ec = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
      local_70 = local_70 & 0xffffffff00000000;
      uVar3 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 400) = 0;
      lVar9 = *(long *)(this + 8);
      pcVar7 = *(code **)(lVar9 + 0xd8);
      if (((pcVar7 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
         (pcVar7 = *(code **)(lVar9 + 0xd0), pcVar7 == (code *)0x0)) {
        uStack_f0 = 0x1a;
        uStack_ec = 0;
        local_118 = 0;
        local_f8[0] = 0x105a64;
        local_f8[1] = 0;
        String::parse_latin1((StrRange *)&local_118);
        StringName::StringName((StringName *)local_110,(String *)&local_118,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_f8,(StringName *)local_110);
        if (CONCAT44(uStack_ec,uStack_f0) == 0) {
          lVar9 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
          if (StringName::configured != '\0') goto LAB_00101531;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
LAB_0010154e:
          lVar9 = *(long *)(this + 8);
          pcVar7 = *(code **)(lVar9 + 200);
          if (((pcVar7 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
             (pcVar7 = *(code **)(lVar9 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_00101438;
          uVar5 = (*pcVar7)(*(undefined8 *)(lVar9 + 0xa0),this + 0x180);
          *(undefined8 *)(this + 400) = uVar5;
        }
        else {
          lVar9 = *(long *)(CONCAT44(uStack_ec,uStack_f0) + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&uStack_f0);
          if (StringName::configured != '\0') {
LAB_00101531:
            if (local_110[0] != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
          if (lVar9 == 0) goto LAB_0010154e;
        }
        lVar9 = *(long *)(this + 8);
      }
      else {
        uVar5 = (*pcVar7)(*(undefined8 *)(lVar9 + 0xa0),this + 0x180,uVar3);
        *(undefined8 *)(this + 400) = uVar5;
        lVar9 = *(long *)(this + 8);
      }
LAB_00101438:
      if (*(char *)(lVar9 + 0x29) != '\0') {
        plVar6 = (long *)operator_new(0x18,"");
        *plVar6 = (long)(this + 400);
        plVar6[1] = (long)(this + 0x188);
        plVar6[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar6;
      }
      this[0x188] = (ImageFormatLoaderExtension)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_c8);
    }
    lVar9 = local_100;
    pcVar7 = *(code **)(this + 400);
    if (pcVar7 == (code *)0x0) goto LAB_00101130;
    uStack_f0 = 0;
    uStack_ec = 0;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (*pcVar7)(*(undefined8 *)(this + 0x10),0,local_f8);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x180,pcVar7,0,local_f8);
    }
    local_c0 = 0;
    CowData<String>::_ref((CowData<String> *)&local_c0,(CowData *)&uStack_f0);
    lVar8 = local_c0;
    if (lVar9 != local_c0) {
      CowData<String>::_unref((CowData<String> *)&local_100);
      local_100 = lVar8;
      local_c0 = 0;
    }
    CowData<String>::_unref((CowData<String> *)&local_c0);
    CowData<String>::_unref((CowData<String> *)&uStack_f0);
  }
  else {
    local_f8[0] = 0;
    local_f8[1] = 0;
    uStack_f0 = 0;
    (**(code **)(*plVar6 + 0x60))(local_58,plVar6,this + 0x180,0,0,local_f8);
    if (local_f8[0] != 0) {
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00100fdb;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_c8);
    if (local_c0 == 0) {
      CowData<String>::_unref((CowData<String> *)&local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_00101130;
    }
    CowData<String>::_unref((CowData<String> *)&local_100);
    lVar8 = local_c0;
    local_c0 = 0;
    local_100 = lVar8;
    CowData<String>::_unref((CowData<String> *)&local_c0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if ((lVar8 != 0) && (lVar9 = 0, 0 < *(long *)(lVar8 + -8))) {
    do {
      while( true ) {
        if (*(long *)param_1 == 0) {
          pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_1 = pauVar4;
          *(undefined4 *)pauVar4[1] = 0;
          *pauVar4 = (undefined1  [16])0x0;
        }
        this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        if (*(long *)(lVar8 + lVar9 * 8) != 0) {
          CowData<char32_t>::_ref(this_00,(CowData *)(lVar8 + lVar9 * 8));
        }
        plVar6 = *(long **)param_1;
        lVar1 = plVar6[1];
        *(undefined8 *)(this_00 + 8) = 0;
        *(long **)(this_00 + 0x18) = plVar6;
        *(long *)(this_00 + 0x10) = lVar1;
        if (lVar1 != 0) {
          *(CowData<char32_t> **)(lVar1 + 8) = this_00;
        }
        plVar6[1] = (long)this_00;
        if (*plVar6 != 0) break;
        *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
        lVar9 = lVar9 + 1;
        *plVar6 = (long)this_00;
        if (*(long *)(lVar8 + -8) <= lVar9) goto LAB_00101130;
      }
      *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
      lVar9 = lVar9 + 1;
    } while (lVar9 < *(long *)(lVar8 + -8));
  }
LAB_00101130:
  CowData<String>::_unref((CowData<String> *)&local_100);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Ref<ImageFormatLoader> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<ImageFormatLoader>>::_copy_on_write(CowData<Ref<ImageFormatLoader>> *this)

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



/* ResourceFormatLoaderImage::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */

long * ResourceFormatLoaderImage::load
                 (long *param_1,undefined8 param_2,int param_3,undefined8 param_4,int *param_5)

{
  long *plVar1;
  code *pcVar2;
  Image *pIVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  Object *local_60;
  long local_58;
  Image *local_50;
  Image *local_48;
  Object *local_40;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FileAccess::open((String *)&local_60,param_3,(Error *)0x1);
  if (local_60 == (Object *)0x0) {
    if (param_5 != (int *)0x0) {
      *param_5 = 0x13;
    }
    *param_1 = 0;
  }
  else {
    local_34 = 0;
    (**(code **)(*(long *)local_60 + 0x220))(local_60,&local_34,4);
    if (((((char)local_34 == 'G') && (local_34._1_1_ == 'D')) && (local_34._2_1_ == 'I')) &&
       (local_34._3_1_ == 'M')) {
      lVar8 = 0;
      (**(code **)(*(long *)local_60 + 0x2c8))(&local_58);
      if (ImageLoader::loader._8_8_ != 0) {
        while (lVar8 < *(long *)(ImageLoader::loader._8_8_ + -8)) {
          cVar5 = ImageFormatLoader::recognize(*(String **)(ImageLoader::loader._8_8_ + lVar8 * 8));
          if (cVar5 != '\0') {
            lVar8 = (long)(int)lVar8;
            local_50 = (Image *)0x0;
            Ref<Image>::instantiate<>((Ref<Image> *)&local_50);
            if (ImageLoader::loader._8_8_ == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = *(long *)(ImageLoader::loader._8_8_ + -8);
              if (lVar8 < lVar7) {
                CowData<Ref<ImageFormatLoader>>::_copy_on_write
                          ((CowData<Ref<ImageFormatLoader>> *)(ImageLoader::loader + 8));
                plVar1 = *(long **)(ImageLoader::loader._8_8_ + lVar8 * 8);
                local_40 = (Object *)0x0;
                pcVar2 = *(code **)(*plVar1 + 0x150);
                if (local_60 != (Object *)0x0) {
                  local_40 = local_60;
                  cVar5 = RefCounted::reference();
                  if (cVar5 == '\0') {
                    local_40 = (Object *)0x0;
                  }
                }
                pIVar3 = local_50;
                local_48 = (Image *)0x0;
                if (local_50 != (Image *)0x0) {
                  local_48 = local_50;
                  cVar5 = RefCounted::reference();
                  if (cVar5 == '\0') {
                    local_48 = (Image *)0x0;
                  }
                }
                iVar6 = (*pcVar2)(_LC47,plVar1,&local_48,&local_40,0);
                if ((local_48 != (Image *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')
                   ) {
                  memdelete<Image>(local_48);
                }
                if (((local_40 != (Object *)0x0) &&
                    (cVar5 = RefCounted::unreference(), pOVar4 = local_40, cVar5 != '\0')) &&
                   (cVar5 = predelete_handler(local_40), cVar5 != '\0')) {
                  (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                  Memory::free_static(pOVar4,false);
                }
                if (iVar6 == 0) {
                  if (param_5 != (int *)0x0) {
                    *param_5 = 0;
                  }
                  *param_1 = 0;
                  if (pIVar3 == (Image *)0x0) goto LAB_0010190a;
                  lVar8 = __dynamic_cast(pIVar3,&Object::typeinfo,&Resource::typeinfo,0);
                  if (lVar8 != 0) {
                    *param_1 = lVar8;
                    cVar5 = RefCounted::reference();
                    if (cVar5 == '\0') {
                      *param_1 = 0;
                    }
                  }
                }
                else {
                  if (param_5 != (int *)0x0) {
                    *param_5 = iVar6;
                  }
                  *param_1 = 0;
                  if (pIVar3 == (Image *)0x0) goto LAB_0010190a;
                }
                cVar5 = RefCounted::unreference();
                if (cVar5 != '\0') {
                  memdelete<Image>(pIVar3);
                }
                goto LAB_0010190a;
              }
            }
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar7,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
          lVar8 = lVar8 + 1;
          if (ImageLoader::loader._8_8_ == 0) break;
        }
      }
      if (param_5 != (int *)0x0) {
        *param_5 = 0xf;
      }
      _err_print_error(&_LC46,"core/io/image_loader.cpp",0xb4,
                       "Method/function failed. Returning: Ref<Resource>()",0,0);
      *param_1 = 0;
LAB_0010190a:
      lVar8 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
    }
    else {
      if (param_5 != (int *)0x0) {
        *param_5 = 0xf;
      }
      _err_print_error(&_LC46,"core/io/image_loader.cpp",0xa2,
                       "Method/function failed. Returning: Ref<Resource>()",0,0);
      *param_1 = 0;
    }
    if (((local_60 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_60), cVar5 != '\0')) {
      (**(code **)(*(long *)local_60 + 0x140))(local_60);
      Memory::free_static(local_60,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* ImageLoader::load_image(String const&, Ref<Image>, Ref<FileAccess>,
   BitField<ImageFormatLoader::LoaderFlags>, float) */

int ImageLoader::load_image
              (undefined4 param_1,undefined8 param_2,long *param_3,long *param_4,undefined8 param_5)

{
  Image *pIVar1;
  Object *pOVar2;
  Image *pIVar3;
  long *plVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  Object *pOVar10;
  Object *pOVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  Image *local_78;
  long local_70;
  long local_68;
  Image *local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_3 == 0) {
    iVar7 = 0x1f;
    _err_print_error("load_image","core/io/image_loader.cpp",0x52,
                     "Condition \"p_image.is_null()\" is true. Returning: ERR_INVALID_PARAMETER",
                     "Can\'t load an image: invalid Image object.",0,0);
    goto LAB_001020ad;
  }
  ResourceUID::ensure_path((String *)&local_78);
  pOVar10 = (Object *)*param_4;
  if ((pOVar10 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 != '\0'))
  goto LAB_00101c11;
  FileAccess::open((String *)&local_58,(int)(String *)&local_78,(Error *)0x1);
  pOVar10 = local_58;
  if (local_58 == (Object *)0x0) {
LAB_00101f30:
    local_60 = (Image *)0x0;
    pIVar1 = local_78 + -0x10;
    if (local_78 != (Image *)0x0) {
      do {
        lVar12 = *(long *)pIVar1;
        if (lVar12 == 0) goto LAB_00101f6a;
        LOCK();
        lVar9 = *(long *)pIVar1;
        bVar13 = lVar12 == lVar9;
        if (bVar13) {
          *(long *)pIVar1 = lVar12 + 1;
          lVar9 = lVar12;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar9 != -1) {
        local_60 = local_78;
      }
    }
LAB_00101f6a:
    local_68 = 0;
    local_58 = (Object *)0x10555a;
    local_50 = 0x18;
    String::parse_latin1((StrRange *)&local_68);
    vformat<String>((String *)&local_58,(StrRange *)&local_68,&local_60);
    _err_print_error("load_image","core/io/image_loader.cpp",0x59,
                     "Condition \"f.is_null()\" is true. Returning: err",(String *)&local_58,0,0);
    pOVar10 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      pOVar11 = local_58 + -0x10;
      *(long *)pOVar11 = *(long *)pOVar11 + -1;
      UNLOCK();
      if (*(long *)pOVar11 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static(pOVar10 + -0x10,false);
      }
    }
    lVar12 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar4 = (long *)(local_68 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar12 + -0x10),false);
      }
    }
    pIVar1 = local_60;
    if (local_60 != (Image *)0x0) {
      LOCK();
      pIVar3 = local_60 + -0x10;
      *(long *)pIVar3 = *(long *)pIVar3 + -1;
      UNLOCK();
      if (*(long *)pIVar3 == 0) {
        local_60 = (Image *)0x0;
        Memory::free_static(pIVar1 + -0x10,false);
      }
    }
    iVar7 = (int)local_70;
  }
  else {
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      if ((local_58 != (Object *)0x0) &&
         (cVar6 = RefCounted::unreference(), pOVar11 = local_58, cVar6 != '\0')) {
        pOVar10 = (Object *)0x0;
        cVar6 = predelete_handler(local_58);
        if (cVar6 != '\0') goto LAB_00101f0e;
      }
      goto LAB_00101f30;
    }
    if (((local_58 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar11 = local_58, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
LAB_00101f0e:
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
      if (pOVar10 == (Object *)0x0) goto LAB_00101f30;
    }
LAB_00101c11:
    String::get_extension();
    for (lVar12 = 0; (loader._8_8_ != 0 && (lVar12 < *(long *)(loader._8_8_ + -8)));
        lVar12 = lVar12 + 1) {
      cVar6 = ImageFormatLoader::recognize(*(String **)(loader._8_8_ + lVar12 * 8));
      if (cVar6 != '\0') {
        if (loader._8_8_ == 0) {
          lVar9 = 0;
LAB_001020db:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar12,lVar9,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        lVar9 = *(long *)(loader._8_8_ + -8);
        if (lVar9 <= lVar12) goto LAB_001020db;
        CowData<Ref<ImageFormatLoader>>::_copy_on_write
                  ((CowData<Ref<ImageFormatLoader>> *)(loader + 8));
        plVar4 = *(long **)(loader._8_8_ + lVar12 * 8);
        pcVar5 = *(code **)(*plVar4 + 0x150);
        local_58 = pOVar10;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          local_58 = (Object *)0x0;
        }
        local_60 = (Image *)0x0;
        if (((Image *)*param_3 != (Image *)0x0) &&
           (local_60 = (Image *)*param_3, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
          local_60 = (Image *)0x0;
        }
        iVar7 = (*pcVar5)(param_1,plVar4,&local_60,&local_58,param_5);
        if ((local_60 != (Image *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) {
          memdelete<Image>(local_60);
        }
        if (((local_58 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar11 = local_58, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
        if (iVar7 == 0) goto LAB_00102075;
        local_60 = (Image *)0x0;
        pIVar1 = local_78 + -0x10;
        if (local_78 != (Image *)0x0) {
          do {
            lVar9 = *(long *)pIVar1;
            if (lVar9 == 0) goto LAB_00101c82;
            LOCK();
            lVar8 = *(long *)pIVar1;
            bVar13 = lVar9 == lVar8;
            if (bVar13) {
              *(long *)pIVar1 = lVar9 + 1;
              lVar8 = lVar9;
            }
            UNLOCK();
          } while (!bVar13);
          if (lVar8 != -1) {
            local_60 = local_78;
          }
        }
LAB_00101c82:
        local_68 = 0;
        local_58 = (Object *)0x105573;
        local_50 = 0x1a;
        String::parse_latin1((StrRange *)&local_68);
        vformat<String>(&local_58,(StrRange *)&local_68,&local_60);
        _err_print_error("load_image","core/io/image_loader.cpp",100,&local_58,0,0);
        pOVar11 = local_58;
        if (local_58 != (Object *)0x0) {
          LOCK();
          pOVar2 = local_58 + -0x10;
          *(long *)pOVar2 = *(long *)pOVar2 + -1;
          UNLOCK();
          if (*(long *)pOVar2 == 0) {
            local_58 = (Object *)0x0;
            Memory::free_static(pOVar11 + -0x10,false);
          }
        }
        lVar9 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar4 = (long *)(local_68 + -0x10);
          *plVar4 = *plVar4 + -1;
          UNLOCK();
          if (*plVar4 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar9 + -0x10),false);
          }
        }
        pIVar1 = local_60;
        if (local_60 != (Image *)0x0) {
          LOCK();
          pIVar3 = local_60 + -0x10;
          *(long *)pIVar3 = *(long *)pIVar3 + -1;
          UNLOCK();
          if (*(long *)pIVar3 == 0) {
            local_60 = (Image *)0x0;
            Memory::free_static(pIVar1 + -0x10,false);
          }
        }
        if (iVar7 != 0xf) goto LAB_00102075;
      }
    }
    iVar7 = 0xf;
LAB_00102075:
    lVar12 = local_70;
    if (local_70 == 0) {
LAB_0010208b:
      cVar6 = RefCounted::unreference();
    }
    else {
      LOCK();
      plVar4 = (long *)(local_70 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 != 0) goto LAB_0010208b;
      local_70 = 0;
      Memory::free_static((void *)(lVar12 + -0x10),false);
      cVar6 = RefCounted::unreference();
    }
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
  }
  pIVar1 = local_78;
  if (local_78 != (Image *)0x0) {
    LOCK();
    pIVar3 = local_78 + -0x10;
    *(long *)pIVar3 = *(long *)pIVar3 + -1;
    UNLOCK();
    if (*(long *)pIVar3 == 0) {
      local_78 = (Image *)0x0;
      Memory::free_static(pIVar1 + -0x10,false);
    }
  }
LAB_001020ad:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar7;
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



/* ImageFormatLoaderExtension::_bind_methods() */

void ImageFormatLoaderExtension::_bind_methods(void)

{
  long *plVar1;
  StringName *this;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char *pcVar10;
  undefined8 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  MethodBind *pMVar14;
  int *piVar15;
  long *plVar16;
  long lVar17;
  long in_FS_OFFSET;
  bool bVar18;
  long local_120;
  long local_118;
  long local_110;
  Vector local_108 [8];
  undefined8 local_100;
  char *local_f8;
  undefined1 local_f0 [16];
  int local_e0;
  long local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 local_c0;
  long *local_b8;
  long lStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 (*local_88 [2]) [16];
  int *local_78;
  ulong local_70;
  Vector<int> local_68 [8];
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_f0._8_8_ = local_f0._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = (long *)0x0;
  lStack_b0 = 0;
  local_f8 = "_get_recognized_extensions";
  local_100 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = (undefined1 (*) [16])0x0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,0xc);
  local_120 = 0;
  local_118 = 0;
  local_f8 = "";
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_f0._8_8_;
  local_f0 = auVar9 << 0x40;
  String::parse_latin1((StrRange *)&local_118);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,0x22);
  local_e0 = 0;
  local_d8 = 0;
  local_f0._0_8_ = 0;
  local_f0._8_8_ = 0;
  if (local_118 == 0) {
LAB_00103a43:
    local_d0 = 6;
    StringName::operator=((StringName *)(local_f0 + 8),(StringName *)&local_120);
    lVar2 = local_118;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_118);
    local_d0 = 6;
    if (local_e0 != 0x11) goto LAB_00103a43;
    StringName::StringName((StringName *)&local_110,(String *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      lVar2 = local_118;
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
        lVar2 = local_118;
      }
    }
    else {
      StringName::unref();
      lVar2 = local_118;
      local_f0._8_8_ = local_110;
    }
  }
  local_118 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  plVar1 = local_b8;
  local_c0 = CONCAT44(local_c0._4_4_,local_f8._0_4_);
  if (local_b8 != (long *)local_f0._0_8_) {
    if (local_b8 != (long *)0x0) {
      LOCK();
      local_b8 = (long *)((long)local_b8 + -0x10);
      *local_b8 = *local_b8 + -1;
      UNLOCK();
      if (*local_b8 == 0) {
        local_b8 = (long *)0x0;
        Memory::free_static((void *)((long)plVar1 + -0x10),false);
      }
    }
    local_b8 = (long *)local_f0._0_8_;
    local_f0._0_8_ = 0;
  }
  if (lStack_b0 != local_f0._8_8_) {
    StringName::unref();
    lStack_b0 = local_f0._8_8_;
    local_f0._8_8_ = 0;
  }
  lVar17 = local_a0;
  lVar2 = local_d8;
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  if (local_a0 == local_d8) {
    local_98 = CONCAT44(local_98._4_4_,local_d0);
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar17 + -0x10),false);
      }
    }
    local_a0 = local_d8;
    local_98 = CONCAT44(local_98._4_4_,local_d0);
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0._0_8_ = 0;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_f8 = "ImageFormatLoaderExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method((StringName *)&local_f8,(MethodInfo *)&local_c8,true,local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  piVar12 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_78 + -2);
      lVar17 = 0;
      local_78 = (int *)0x0;
      piVar15 = piVar12;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar15] != '\0') {
            Variant::_clear_internal();
          }
          lVar17 = lVar17 + 1;
          piVar15 = piVar15 + 6;
        } while (lVar2 != lVar17);
      }
      Memory::free_static(piVar12 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (lStack_b0 != 0)) {
    StringName::unref();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar16 = (long *)((long)local_b8 + -0x10);
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_b8 = (long *)0x0;
      Memory::free_static((void *)((long)plVar1 + -0x10),false);
    }
  }
  pcVar10 = local_c8;
  if (local_c8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar10 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_100);
  local_c8 = "image";
  local_100 = 0;
  local_f8 = (char *)0x0;
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_f8);
  local_c8 = (char *)0x0;
  plVar1 = (long *)((long)local_f8 + -0x10);
  if (local_f8 == (char *)0x0) {
    Vector<String>::push_back((Vector<String> *)local_108,(StrRange *)&local_c8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00102892;
      LOCK();
      lVar17 = *plVar1;
      bVar18 = lVar2 == lVar17;
      if (bVar18) {
        *plVar1 = lVar2 + 1;
        lVar17 = lVar2;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar17 != -1) {
      local_c8 = local_f8;
    }
LAB_00102892:
    pcVar10 = local_c8;
    Vector<String>::push_back((Vector<String> *)local_108);
    if (pcVar10 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_c8 + -0x10),false);
      }
    }
  }
  local_120 = 0;
  local_c8 = "fileaccess";
  local_c0 = 10;
  String::parse_latin1((StrRange *)&local_120);
  local_c8 = (char *)0x0;
  plVar1 = (long *)(local_120 + -0x10);
  if (local_120 == 0) {
    Vector<String>::push_back((Vector<String> *)local_108,(StrRange *)&local_c8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00102944;
      LOCK();
      lVar17 = *plVar1;
      bVar18 = lVar2 == lVar17;
      if (bVar18) {
        *plVar1 = lVar2 + 1;
        lVar17 = lVar2;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar17 != -1) {
      local_c8 = (char *)local_120;
    }
LAB_00102944:
    pcVar10 = local_c8;
    Vector<String>::push_back((Vector<String> *)local_108);
    if (pcVar10 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_c8 + -0x10),false);
      }
    }
  }
  local_110 = 0;
  local_c8 = "flags";
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_110);
  local_c8 = (char *)0x0;
  plVar1 = (long *)(local_110 + -0x10);
  if (local_110 == 0) {
    Vector<String>::push_back((Vector<String> *)local_108,(StrRange *)&local_c8);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001029ec;
      LOCK();
      lVar17 = *plVar1;
      bVar18 = lVar2 == lVar17;
      if (bVar18) {
        *plVar1 = lVar2 + 1;
        lVar17 = lVar2;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar17 != -1) {
      local_c8 = (char *)local_110;
    }
LAB_001029ec:
    pcVar10 = local_c8;
    Vector<String>::push_back((Vector<String> *)local_108);
    if (pcVar10 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_c8 + -0x10),false);
      }
    }
  }
  local_118 = 0;
  local_c8 = "scale";
  local_c0 = 5;
  String::parse_latin1((StrRange *)&local_118);
  local_c8 = (char *)0x0;
  plVar1 = (long *)(local_118 + -0x10);
  if (local_118 == 0) {
    Vector<String>::push_back((Vector<String> *)local_108);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_00102a94;
      LOCK();
      lVar17 = *plVar1;
      bVar18 = lVar2 == lVar17;
      if (bVar18) {
        *plVar1 = lVar2 + 1;
        lVar17 = lVar2;
      }
      UNLOCK();
    } while (!bVar18);
    if (lVar17 != -1) {
      local_c8 = (char *)local_118;
    }
LAB_00102a94:
    pcVar10 = local_c8;
    Vector<String>::push_back((Vector<String> *)local_108);
    if (pcVar10 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)((long)pcVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)((long)local_c8 + -0x10),false);
      }
    }
  }
  lVar2 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_120;
  if (local_120 != 0) {
    LOCK();
    plVar1 = (long *)(local_120 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_120 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  pcVar10 = local_f8;
  if (local_f8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_f8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar10 + -0x10),false);
    }
  }
  local_f8 = "_load_image";
  local_b8 = (long *)0x0;
  lStack_b0 = 0;
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = (undefined1 (*) [16])0x0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  local_f0._0_8_ = (long *)0xb;
  String::parse_latin1((StrRange *)&local_c8);
  local_90 = CONCAT44(local_90._4_4_,8);
  GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_f8);
  plVar1 = local_b8;
  local_c0 = CONCAT44(local_c0._4_4_,local_f8._0_4_);
  if (local_b8 != (long *)local_f0._0_8_) {
    if (local_b8 != (long *)0x0) {
      LOCK();
      local_b8 = local_b8 + -2;
      *local_b8 = *local_b8 + -1;
      UNLOCK();
      if (*local_b8 == 0) {
        local_b8 = (long *)0x0;
        Memory::free_static(plVar1 + -2,false);
      }
    }
    local_b8 = (long *)local_f0._0_8_;
    local_f0._0_8_ = (long *)0x0;
  }
  if (lStack_b0 != local_f0._8_8_) {
    StringName::unref();
    lStack_b0 = local_f0._8_8_;
    local_f0._8_8_ = 0;
  }
  lVar17 = local_a0;
  lVar2 = local_d8;
  local_a8 = CONCAT44(local_a8._4_4_,local_e0);
  if (local_a0 == local_d8) {
    local_98 = CONCAT44(local_98._4_4_,local_d0);
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar17 + -0x10),false);
      }
    }
    local_a0 = local_d8;
    local_98 = CONCAT44(local_98._4_4_,local_d0);
  }
  this = (StringName *)(local_f0 + 8);
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_f0._0_8_;
  if ((long *)local_f0._0_8_ != (long *)0x0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0._0_8_ = 0;
      Memory::free_static((long *)(uVar11 + -0x10),false);
    }
  }
  local_70 = local_70 & 0xffffffff00000000;
  local_120 = 0;
  local_118 = 0;
  local_f8 = "Image";
  local_f0._0_8_ = 5;
  String::parse_latin1((StrRange *)&local_118);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,0x18);
  local_e0 = 0x11;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_118 == 0) {
LAB_00103c33:
    local_d0 = 6;
    StringName::StringName((StringName *)&local_110,(String *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f0._8_8_ = local_110;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_118);
    local_d0 = 6;
    if (local_e0 == 0x11) goto LAB_00103c33;
    StringName::operator=(this,(StringName *)&local_120);
  }
  lVar2 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  if (local_88[0] == (undefined1 (*) [16])0x0) {
    local_88[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_88[0][1] = 0;
    *local_88[0] = (undefined1  [16])0x0;
  }
  puVar13 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined1 (*) [16])(puVar13 + 2) = (undefined1  [16])0x0;
  *puVar13 = 0;
  puVar13[6] = 0;
  puVar13[10] = 6;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar13 + 0xc) = (undefined1  [16])0x0;
  *puVar13 = local_f8._0_4_;
  if (local_f0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 2),(CowData *)local_f0);
  }
  StringName::operator=((StringName *)(puVar13 + 4),this);
  puVar13[6] = local_e0;
  if (*(long *)(puVar13 + 8) != local_d8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 8),(CowData *)&local_d8);
  }
  lVar17 = local_d8;
  puVar13[10] = local_d0;
  lVar2 = *(long *)(*local_88[0] + 8);
  *(undefined8 *)(puVar13 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar13 + 0x10) = local_88[0];
  *(long *)(puVar13 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar13;
  }
  lVar2 = *(long *)*local_88[0];
  *(undefined4 **)(*local_88[0] + 8) = puVar13;
  if (lVar2 == 0) {
    *(undefined4 **)*local_88[0] = puVar13;
  }
  *(int *)local_88[0][1] = *(int *)local_88[0][1] + 1;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_f0._8_8_;
      local_f0 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,0);
  local_120 = 0;
  local_118 = 0;
  local_f8 = "FileAccess";
  local_f0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_118);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,0x18);
  local_e0 = 0x11;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_118 == 0) {
LAB_00103beb:
    local_d0 = 6;
    StringName::StringName((StringName *)&local_110,(String *)&local_d8,false);
    if (local_f0._8_8_ == local_110) {
      if ((StringName::configured != '\0') && (local_110 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_f0._8_8_ = local_110;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_118);
    local_d0 = 6;
    if (local_e0 == 0x11) goto LAB_00103beb;
    StringName::operator=(this,(StringName *)&local_120);
  }
  lVar2 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  if (local_88[0] == (undefined1 (*) [16])0x0) {
    local_88[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_88[0][1] = 0;
    *local_88[0] = (undefined1  [16])0x0;
  }
  puVar13 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined1 (*) [16])(puVar13 + 2) = (undefined1  [16])0x0;
  *puVar13 = 0;
  puVar13[6] = 0;
  puVar13[10] = 6;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar13 + 0xc) = (undefined1  [16])0x0;
  *puVar13 = local_f8._0_4_;
  if (local_f0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 2),(CowData *)local_f0);
  }
  StringName::operator=((StringName *)(puVar13 + 4),this);
  puVar13[6] = local_e0;
  if (*(long *)(puVar13 + 8) != local_d8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 8),(CowData *)&local_d8);
  }
  lVar17 = local_d8;
  puVar13[10] = local_d0;
  lVar2 = *(long *)(*local_88[0] + 8);
  *(undefined8 *)(puVar13 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar13 + 0x10) = local_88[0];
  *(long *)(puVar13 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar13;
  }
  lVar2 = *(long *)*local_88[0];
  *(undefined4 **)(*local_88[0] + 8) = puVar13;
  if (lVar2 == 0) {
    *(undefined4 **)*local_88[0] = puVar13;
  }
  *(int *)local_88[0][1] = *(int *)local_88[0][1] + 1;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_f0._8_8_;
      local_f0 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,0);
  GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void> *)&local_f8);
  if (local_88[0] == (undefined1 (*) [16])0x0) {
    local_88[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_88[0][1] = 0;
    *local_88[0] = (undefined1  [16])0x0;
  }
  puVar13 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined1 (*) [16])(puVar13 + 2) = (undefined1  [16])0x0;
  *puVar13 = 0;
  puVar13[6] = 0;
  puVar13[10] = 6;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar13 + 0xc) = (undefined1  [16])0x0;
  *puVar13 = local_f8._0_4_;
  if (local_f0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 2),(CowData *)local_f0);
  }
  StringName::operator=((StringName *)(puVar13 + 4),this);
  puVar13[6] = local_e0;
  if (*(long *)(puVar13 + 8) != local_d8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 8),(CowData *)&local_d8);
  }
  lVar17 = local_d8;
  puVar13[10] = local_d0;
  lVar2 = *(long *)(*local_88[0] + 8);
  *(undefined8 *)(puVar13 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar13 + 0x10) = local_88[0];
  *(long *)(puVar13 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar13;
  }
  lVar2 = *(long *)*local_88[0];
  *(undefined4 **)(*local_88[0] + 8) = puVar13;
  if (lVar2 == 0) {
    *(undefined4 **)*local_88[0] = puVar13;
  }
  *(int *)local_88[0][1] = *(int *)local_88[0][1] + 1;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_f0._8_8_;
      local_f0 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,0);
  local_120 = 0;
  local_118 = 0;
  local_f8 = "";
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_f0._8_8_;
  local_f0 = auVar7 << 0x40;
  String::parse_latin1((StrRange *)&local_118);
  local_f8 = (char *)CONCAT44(local_f8._4_4_,3);
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = (undefined1  [16])0x0;
  if (local_118 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_118);
    local_d0 = 6;
    if (local_e0 == 0x11) {
      StringName::StringName((StringName *)&local_110,(String *)&local_d8,false);
      if (local_f0._8_8_ == local_110) {
        if ((StringName::configured != '\0') && (local_110 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_f0._8_8_ = local_110;
      }
      goto LAB_00103461;
    }
  }
  local_d0 = 6;
  StringName::operator=(this,(StringName *)&local_120);
LAB_00103461:
  lVar2 = local_118;
  if (local_118 != 0) {
    LOCK();
    plVar1 = (long *)(local_118 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_118 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_120 != 0)) {
    StringName::unref();
  }
  if (local_88[0] == (undefined1 (*) [16])0x0) {
    local_88[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)local_88[0][1] = 0;
    *local_88[0] = (undefined1  [16])0x0;
  }
  puVar13 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined1 (*) [16])(puVar13 + 2) = (undefined1  [16])0x0;
  *puVar13 = 0;
  puVar13[6] = 0;
  puVar13[10] = 6;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar13 + 0xc) = (undefined1  [16])0x0;
  *puVar13 = local_f8._0_4_;
  if (local_f0._0_8_ != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 2),(CowData *)local_f0);
  }
  StringName::operator=((StringName *)(puVar13 + 4),this);
  puVar13[6] = local_e0;
  if (*(long *)(puVar13 + 8) != local_d8) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar13 + 8),(CowData *)&local_d8);
  }
  lVar17 = local_d8;
  puVar13[10] = local_d0;
  lVar2 = *(long *)(*local_88[0] + 8);
  *(undefined8 *)(puVar13 + 0xc) = 0;
  *(undefined1 (**) [16])(puVar13 + 0x10) = local_88[0];
  *(long *)(puVar13 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar13;
  }
  lVar2 = *(long *)*local_88[0];
  *(undefined4 **)(*local_88[0] + 8) = puVar13;
  if (lVar2 == 0) {
    *(undefined4 **)*local_88[0] = puVar13;
  }
  *(int *)local_88[0][1] = *(int *)local_88[0][1] + 1;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar17 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_f0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar11 = local_f0._0_8_;
  if (local_f0._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_f0._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_f0._8_8_;
      local_f0 = auVar8 << 0x40;
      Memory::free_static((void *)(uVar11 + -0x10),false);
    }
  }
  Vector<int>::push_back(local_68,9);
  local_f8 = "ImageFormatLoaderExtension";
  local_110 = 0;
  local_f0._0_8_ = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  StringName::StringName((StringName *)&local_f8,(String *)&local_110,false);
  ClassDB::add_virtual_method((StringName *)&local_f8,(MethodInfo *)&local_c8,true,local_108,false);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_110;
  if (local_110 != 0) {
    LOCK();
    plVar1 = (long *)(local_110 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_110 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  piVar12 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_78 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      lVar17 = 0;
      piVar15 = piVar12;
      if (lVar2 != 0) {
        do {
          if (Variant::needs_deinit[*piVar15] != '\0') {
            Variant::_clear_internal();
          }
          lVar17 = lVar17 + 1;
          piVar15 = piVar15 + 6;
        } while (lVar2 != lVar17);
      }
      Memory::free_static(piVar12 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (lStack_b0 != 0)) {
    StringName::unref();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar16 = local_b8 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      local_b8 = (long *)0x0;
      Memory::free_static(plVar1 + -2,false);
    }
  }
  pcVar10 = local_c8;
  if (local_c8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)((long)local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar10 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_100);
  D_METHODP((char *)&local_c8,(char ***)"add_format_loader",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar14 = create_method_bind<ImageFormatLoaderExtension>(add_format_loader);
  ClassDB::bind_methodfi(1,pMVar14,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar16 = local_b8 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_b8[-1];
      lVar17 = 0;
      local_b8 = (long *)0x0;
      plVar16 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar17 = lVar17 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar2 != lVar17);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_c8,(char ***)"remove_format_loader",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar14 = create_method_bind<ImageFormatLoaderExtension>(remove_format_loader);
  ClassDB::bind_methodfi(1,pMVar14,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_b8;
  if (local_b8 != (long *)0x0) {
    LOCK();
    plVar16 = local_b8 + -2;
    *plVar16 = *plVar16 + -1;
    UNLOCK();
    if (*plVar16 == 0) {
      if (local_b8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_b8[-1];
      lVar17 = 0;
      local_b8 = (long *)0x0;
      plVar16 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar16 != 0)) {
            StringName::unref();
          }
          lVar17 = lVar17 + 1;
          plVar16 = plVar16 + 1;
        } while (lVar2 != lVar17);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageFormatLoaderExtension::load_image(Ref<Image>, Ref<FileAccess>,
   BitField<ImageFormatLoader::LoaderFlags>, float) */

ulong __thiscall
ImageFormatLoaderExtension::load_image
          (float param_1,ImageFormatLoaderExtension *this,long *param_3,long *param_4,long param_5)

{
  Variant *pVVar1;
  undefined1 auVar2 [16];
  Object *pOVar3;
  long lVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  code *pcVar11;
  Object *pOVar12;
  Image *pIVar13;
  Variant *pVVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  Image *local_1a0;
  Object *local_198;
  long local_190;
  char *local_188;
  long local_180;
  long local_178;
  undefined4 local_170;
  long local_168;
  undefined4 local_160;
  uint local_158 [4];
  undefined1 local_148 [16];
  undefined8 local_138;
  long local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 (*local_118 [2]) [16];
  undefined8 local_108;
  ulong local_100;
  Vector<int> local_f8 [8];
  undefined8 local_f0;
  int local_e8 [8];
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant *pVStack_b0;
  Image **local_a8;
  Object **ppOStack_a0;
  long *local_98;
  char **appcStack_90 [3];
  Variant local_78 [24];
  Variant local_60 [24];
  Variant local_48 [8];
  long local_40;
  
  pOVar12 = (Object *)*param_4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pOVar12 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    pOVar12 = (Object *)0x0;
  }
  pIVar13 = (Image *)*param_3;
  if ((pIVar13 != (Image *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    pIVar13 = (Image *)0x0;
  }
  plVar10 = *(long **)(this + 0x98);
  if (plVar10 != (long *)0x0) {
    local_158[0] = 0;
    local_158[1] = 0;
    local_158[2] = 0;
    Variant::Variant((Variant *)&local_a8,(Object *)pIVar13);
    Variant::Variant((Variant *)appcStack_90,pOVar12);
    Variant::Variant(local_78,param_5);
    Variant::Variant(local_60,param_1);
    local_c8 = (Variant *)&local_a8;
    pVStack_c0 = (Variant *)appcStack_90;
    local_b8 = local_78;
    pVStack_b0 = local_60;
    (**(code **)(*plVar10 + 0x60))((Variant *)local_e8,plVar10,this + 0x198,&local_c8,4,local_158);
    if (local_158[0] == 0) {
      uVar15 = Variant::operator_cast_to_long((Variant *)local_e8);
      uVar15 = uVar15 & 0xffffffff;
      if (Variant::needs_deinit[local_e8[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar14 = local_48;
      do {
        pVVar1 = pVVar14 + -0x18;
        pVVar14 = pVVar14 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar14 != (Variant *)&local_a8);
      goto LAB_00104103;
    }
    if (Variant::needs_deinit[local_e8[0]] != '\0') {
      Variant::_clear_internal();
    }
    pVVar14 = local_48;
    do {
      pVVar1 = pVVar14 + -0x18;
      pVVar14 = pVVar14 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar14 != (Variant *)&local_a8);
  }
  if ((*(long *)(this + 8) != 0) && (this[0x1a0] == (ImageFormatLoaderExtension)0x0)) {
    local_158[0] = 0;
    local_158[1] = 0;
    local_188 = "_load_image";
    local_148 = (undefined1  [16])0x0;
    local_158[2] = 0;
    local_158[3] = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 6;
    local_120 = 1;
    local_118[0] = (undefined1 (*) [16])0x0;
    local_108 = 0;
    local_100 = 0;
    local_f0 = 0;
    local_180 = 0xb;
    String::parse_latin1((StrRange *)local_158);
    local_120 = CONCAT44(local_120._4_4_,8);
    GetTypeInfo<Error,void>::get_class_info((GetTypeInfo<Error,void> *)&local_188);
    local_158[2] = local_188._0_4_;
    uVar8 = local_148._0_8_;
    if (local_148._0_8_ != local_180) {
      if (local_148._0_8_ != 0) {
        LOCK();
        plVar10 = (long *)(local_148._0_8_ + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_148._8_8_;
          local_148 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar8 + -0x10),false);
        }
      }
      local_148._0_8_ = local_180;
      local_180 = 0;
    }
    if (local_148._8_8_ != local_178) {
      StringName::unref();
      lVar9 = local_178;
      local_178 = 0;
      local_148._8_8_ = lVar9;
    }
    lVar4 = local_130;
    lVar9 = local_168;
    local_138 = CONCAT44(local_138._4_4_,local_170);
    if (local_130 == local_168) {
      local_128 = CONCAT44(local_128._4_4_,local_160);
      if (local_130 != 0) {
        LOCK();
        plVar10 = (long *)(local_130 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_168 = 0;
          Memory::free_static((void *)(lVar9 + -0x10),false);
        }
      }
    }
    else {
      if (local_130 != 0) {
        LOCK();
        plVar10 = (long *)(local_130 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_130 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      local_130 = local_168;
      local_128 = CONCAT44(local_128._4_4_,local_160);
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    lVar9 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar10 = (long *)(local_180 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    local_100 = local_100 & 0xffffffff00000000;
    GetTypeInfo<Ref<Image>,void>::get_class_info((GetTypeInfo<Ref<Image>,void> *)&local_188);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
    lVar9 = local_168;
    if (local_168 != 0) {
      LOCK();
      plVar10 = (long *)(local_168 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    lVar9 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar10 = (long *)(local_180 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_f8,0);
    GetTypeInfo<Ref<FileAccess>,void>::get_class_info
              ((GetTypeInfo<Ref<FileAccess>,void> *)&local_188);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
    lVar9 = local_168;
    if (local_168 != 0) {
      LOCK();
      plVar10 = (long *)(local_168 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    lVar9 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar10 = (long *)(local_180 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_f8,0);
    GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void>::get_class_info
              ((GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void> *)&local_188);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)local_118,(PropertyInfo *)&local_188);
    lVar9 = local_168;
    if (local_168 != 0) {
      LOCK();
      plVar10 = (long *)(local_168 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    lVar9 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar10 = (long *)(local_180 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_f8,0);
    GetTypeInfo<float,void>::get_class_info((GetTypeInfo<float,void> *)&local_188);
    if (local_118[0] == (undefined1 (*) [16])0x0) {
      local_118[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_118[0][1] = 0;
      *local_118[0] = (undefined1  [16])0x0;
    }
    puVar7 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
    *(undefined8 *)(puVar7 + 8) = 0;
    *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
    *puVar7 = 0;
    puVar7[6] = 0;
    puVar7[10] = 6;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    *(undefined1 (*) [16])(puVar7 + 0xc) = (undefined1  [16])0x0;
    *puVar7 = local_188._0_4_;
    if (local_180 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)&local_180);
    }
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_178);
    puVar7[6] = local_170;
    if (*(long *)(puVar7 + 8) != local_168) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_168);
    }
    lVar4 = local_168;
    puVar7[10] = local_160;
    lVar9 = *(long *)(*local_118[0] + 8);
    *(undefined8 *)(puVar7 + 0xc) = 0;
    *(undefined1 (**) [16])(puVar7 + 0x10) = local_118[0];
    *(long *)(puVar7 + 0xe) = lVar9;
    if (lVar9 != 0) {
      *(undefined4 **)(lVar9 + 0x30) = puVar7;
    }
    lVar9 = *(long *)*local_118[0];
    *(undefined4 **)(*local_118[0] + 8) = puVar7;
    if (lVar9 == 0) {
      *(undefined4 **)*local_118[0] = puVar7;
    }
    *(int *)local_118[0][1] = *(int *)local_118[0][1] + 1;
    if (local_168 != 0) {
      LOCK();
      plVar10 = (long *)(local_168 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_168 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    lVar9 = local_180;
    if (local_180 != 0) {
      LOCK();
      plVar10 = (long *)(local_180 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_180 = 0;
        Memory::free_static((void *)(lVar9 + -0x10),false);
      }
    }
    Vector<int>::push_back(local_f8,9);
    uVar6 = MethodInfo::get_compatibility_hash();
    *(undefined8 *)(this + 0x1a8) = 0;
    lVar9 = *(long *)(this + 8);
    pcVar11 = *(code **)(lVar9 + 0xd8);
    if (((pcVar11 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
       (pcVar11 = *(code **)(lVar9 + 0xd0), pcVar11 == (code *)0x0)) {
      local_180 = 0x1a;
      local_188 = "ImageFormatLoaderExtension";
      local_198 = (Object *)0x0;
      String::parse_latin1((StrRange *)&local_198);
      StringName::StringName((StringName *)&local_190,(String *)&local_198,false);
      ClassDB::get_virtual_method_compatibility_hashes
                ((StringName *)&local_188,(StringName *)&local_190);
      if (local_180 == 0) {
        lVar9 = 0;
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_180);
        if (StringName::configured != '\0') goto LAB_00104a2e;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
LAB_00104a4d:
        lVar9 = *(long *)(this + 8);
        pcVar11 = *(code **)(lVar9 + 200);
        if (((pcVar11 == (code *)0x0) || (*(long *)(lVar9 + 0xe0) == 0)) &&
           (pcVar11 = *(code **)(lVar9 + 0xc0), pcVar11 == (code *)0x0)) goto LAB_00104926;
        uVar8 = (*pcVar11)(*(undefined8 *)(lVar9 + 0xa0));
        *(undefined8 *)(this + 0x1a8) = uVar8;
      }
      else {
        lVar9 = *(long *)(local_180 + -8);
        CowData<unsigned_int>::_unref((CowData<unsigned_int> *)&local_180);
        if (StringName::configured != '\0') {
LAB_00104a2e:
          if (local_190 != 0) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_198);
        if (lVar9 == 0) goto LAB_00104a4d;
      }
      lVar9 = *(long *)(this + 8);
    }
    else {
      uVar8 = (*pcVar11)(*(undefined8 *)(lVar9 + 0xa0),this + 0x198,uVar6);
      *(undefined8 *)(this + 0x1a8) = uVar8;
      lVar9 = *(long *)(this + 8);
    }
LAB_00104926:
    if (*(char *)(lVar9 + 0x29) != '\0') {
      plVar10 = (long *)operator_new(0x18,"");
      *plVar10 = (long)(this + 0x1a8);
      plVar10[1] = (long)(this + 0x1a0);
      plVar10[2] = *(long *)(this + 0x168);
      *(long **)(this + 0x168) = plVar10;
    }
    this[0x1a0] = (ImageFormatLoaderExtension)0x1;
    MethodInfo::~MethodInfo((MethodInfo *)local_158);
  }
  uVar15 = 2;
  if (*(long *)(this + 0x1a8) != 0) {
    if ((pIVar13 == (Image *)0x0) ||
       (local_1a0 = pIVar13, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      local_1a0 = (Image *)0x0;
    }
    if ((pOVar12 == (Object *)0x0) ||
       (local_198 = pOVar12, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      local_198 = (Object *)0x0;
    }
    local_a8 = &local_1a0;
    local_188 = (char *)(double)param_1;
    ppOStack_a0 = &local_198;
    local_98 = &local_190;
    appcStack_90[0] = &local_188;
    local_190 = param_5;
    if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
      (**(code **)(this + 0x1a8))(*(undefined8 *)(this + 0x10),&local_a8,local_158);
    }
    else {
      (**(code **)(*(long *)(this + 8) + 0xe0))
                (*(undefined8 *)(this + 0x10),this + 0x198,*(code **)(this + 0x1a8),&local_a8,
                 local_158);
    }
    uVar15 = (ulong)local_158[0];
    if (((local_198 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar3 = local_198, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_198), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    if ((local_1a0 != (Image *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
      memdelete<Image>(local_1a0);
    }
  }
LAB_00104103:
  if ((pIVar13 != (Image *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
    memdelete<Image>(pIVar13);
  }
  if (((pOVar12 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(pOVar12), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}



/* ImageLoader::remove_image_format_loader(Ref<ImageFormatLoader>) */

void ImageLoader::remove_image_format_loader(long *param_1)

{
  Object *pOVar1;
  Object *pOVar2;
  undefined8 uVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  if ((loader._8_8_ != 0) && (lVar6 = *(long *)(loader._8_8_ + -8), 0 < lVar6)) {
    lVar5 = 0;
    do {
      if (*param_1 == *(long *)(loader._8_8_ + lVar5 * 8)) {
        if (lVar6 <= lVar5) {
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,lVar5,lVar6,"p_index","size()",""
                     ,false,false);
          return;
        }
        CowData<Ref<ImageFormatLoader>>::_copy_on_write
                  ((CowData<Ref<ImageFormatLoader>> *)(loader + 8));
        uVar3 = loader._8_8_;
        if (loader._8_8_ == 0) {
          lVar6 = -1;
        }
        else {
          lVar6 = *(long *)(loader._8_8_ + -8) + -1;
          if (lVar5 < lVar6) {
            do {
              pOVar1 = *(Object **)(uVar3 + 8 + lVar5 * 8);
              pOVar2 = *(Object **)(uVar3 + lVar5 * 8);
              if (pOVar1 != pOVar2) {
                *(Object **)(uVar3 + lVar5 * 8) = pOVar1;
                if ((pOVar1 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
                  *(undefined8 *)(uVar3 + lVar5 * 8) = 0;
                }
                if (((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')
                    ) && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
                  (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                  Memory::free_static(pOVar2,false);
                }
              }
              lVar5 = lVar5 + 1;
            } while (lVar6 != lVar5);
          }
        }
        CowData<Ref<ImageFormatLoader>>::resize<false>
                  ((CowData<Ref<ImageFormatLoader>> *)(loader + 8),lVar6);
        return;
      }
      lVar5 = lVar5 + 1;
    } while (lVar6 != lVar5);
    return;
  }
  return;
}



/* ImageFormatLoaderExtension::remove_format_loader() */

void __thiscall ImageFormatLoaderExtension::remove_format_loader(ImageFormatLoaderExtension *this)

{
  char cVar1;
  long in_FS_OFFSET;
  ImageFormatLoaderExtension *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = this;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    local_18 = (ImageFormatLoaderExtension *)0x0;
    ImageLoader::remove_image_format_loader(&local_18);
  }
  else {
    ImageLoader::remove_image_format_loader(&local_18);
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler((Object *)this);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)this + 0x140))(this);
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(this,false);
          return;
        }
        goto LAB_00104d7b;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104d7b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageLoader::cleanup() */

void ImageLoader::cleanup(void)

{
  long lVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (loader._8_8_ != 0) {
    do {
      lVar1 = *(long *)(loader._8_8_ + -8);
      if (lVar1 == 0) break;
      if (lVar1 < 1) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,0,lVar1,"p_index","size()","",false,true)
        ;
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pOVar2 = *(Object **)loader._8_8_;
      if ((pOVar2 == (Object *)0x0) ||
         (local_28 = pOVar2, cVar4 = RefCounted::reference(), cVar4 == '\0')) {
        local_28 = (Object *)0x0;
        remove_image_format_loader(&local_28);
      }
      else {
        remove_image_format_loader(&local_28);
        cVar4 = RefCounted::unreference();
        if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar2), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    } while (loader._8_8_ != 0);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ImageLoader::add_image_format_loader(Ref<ImageFormatLoader>) */

void ImageLoader::add_image_format_loader(long *param_1)

{
  undefined8 *puVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long lVar6;
  long lVar7;
  
  pOVar5 = (Object *)*param_1;
  if ((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    pOVar5 = (Object *)0x0;
  }
  if (loader._8_8_ == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(loader._8_8_ + -8) + 1;
  }
  iVar4 = CowData<Ref<ImageFormatLoader>>::resize<false>
                    ((CowData<Ref<ImageFormatLoader>> *)(loader + 8),lVar6);
  if (iVar4 == 0) {
    if (loader._8_8_ == 0) {
      lVar7 = -1;
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(loader._8_8_ + -8);
      lVar7 = lVar6 + -1;
      if (-1 < lVar7) {
        CowData<Ref<ImageFormatLoader>>::_copy_on_write
                  ((CowData<Ref<ImageFormatLoader>> *)(loader + 8));
        puVar1 = (undefined8 *)(loader._8_8_ + lVar7 * 8);
        pOVar2 = (Object *)*puVar1;
        if (pOVar2 != pOVar5) {
          *puVar1 = pOVar5;
          if (pOVar5 == (Object *)0x0) {
            if (pOVar2 == (Object *)0x0) {
              return;
            }
            cVar3 = RefCounted::unreference();
            if (cVar3 == '\0') {
              return;
            }
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 == '\0') {
              return;
            }
          }
          else {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              *puVar1 = 0;
            }
            if (((pOVar2 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
               (cVar3 = predelete_handler(pOVar2), cVar3 == '\0')) goto LAB_00104f95;
          }
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
        goto LAB_00104f90;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00104f90:
  if (pOVar5 == (Object *)0x0) {
    return;
  }
LAB_00104f95:
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    return;
  }
  return;
}



/* ImageFormatLoaderExtension::add_format_loader() */

void __thiscall ImageFormatLoaderExtension::add_format_loader(ImageFormatLoaderExtension *this)

{
  char cVar1;
  long in_FS_OFFSET;
  ImageFormatLoaderExtension *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = this;
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    local_18 = (ImageFormatLoaderExtension *)0x0;
    ImageLoader::add_image_format_loader(&local_18);
  }
  else {
    ImageLoader::add_image_format_loader(&local_18);
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler((Object *)this);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)this + 0x140))(this);
        if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(this,false);
          return;
        }
        goto LAB_0010514b;
      }
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010514b:
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ResourceFormatLoader::is_class_ptr(void*) const */

uint __thiscall ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this,void *param_1)

{
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */

undefined8 ResourceFormatLoader::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */

undefined8 ResourceFormatLoader::_setv(StringName *param_1,Variant *param_2)

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

undefined8 ResourceFormatLoader::_property_get_revertv(StringName *param_1,Variant *param_2)

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



/* ImageFormatLoaderExtension::is_class_ptr(void*) const */

uint __thiscall
ImageFormatLoaderExtension::is_class_ptr(ImageFormatLoaderExtension *this,void *param_1)

{
  return (uint)CONCAT71(0x10ba,(undefined4 *)param_1 ==
                               &ImageFormatLoader::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10ba,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ImageFormatLoaderExtension::_getv(StringName const&, Variant&) const */

undefined8 ImageFormatLoaderExtension::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageFormatLoaderExtension::_setv(StringName const&, Variant const&) */

undefined8 ImageFormatLoaderExtension::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageFormatLoaderExtension::_validate_propertyv(PropertyInfo&) const */

void ImageFormatLoaderExtension::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ImageFormatLoaderExtension::_property_can_revertv(StringName const&) const */

undefined8 ImageFormatLoaderExtension::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ImageFormatLoaderExtension::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImageFormatLoaderExtension::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageFormatLoaderExtension::_notificationv(int, bool) */

void ImageFormatLoaderExtension::_notificationv(int param_1,bool param_2)

{
  return;
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



/* Vector<Ref<ImageFormatLoader> >::~Vector() */

void __thiscall Vector<Ref<ImageFormatLoader>>::~Vector(Vector<Ref<ImageFormatLoader>> *this)

{
  CowData<Ref<ImageFormatLoader>>::_unref((CowData<Ref<ImageFormatLoader>> *)(this + 8));
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b500;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b500;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ImageFormatLoaderExtension::~ImageFormatLoaderExtension() */

void __thiscall
ImageFormatLoaderExtension::~ImageFormatLoaderExtension(ImageFormatLoaderExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010b660;
  if (bVar1) {
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105690;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00105690:
  *(undefined ***)this = &PTR__initialize_classv_0010b500;
  Object::~Object((Object *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b9b8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b9b8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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



/* CowData<Ref<ImageFormatLoader> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<ImageFormatLoader>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ImageFormatLoaderExtension::_bind_methods() [clone .cold] */

void ImageFormatLoaderExtension::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_001057f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001057f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
      goto LAB_0010585e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ResourceFormatLoader");
LAB_0010585e:
  return &_get_class_namev()::_class_name_static;
}



/* ImageFormatLoaderExtension::~ImageFormatLoaderExtension() */

void __thiscall
ImageFormatLoaderExtension::~ImageFormatLoaderExtension(ImageFormatLoaderExtension *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined ***)this = &PTR__initialize_classv_0010b660;
  if (bVar1) {
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001058f0;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_001058f0:
  *(undefined ***)this = &PTR__initialize_classv_0010b500;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
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
LAB_001059c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001059c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00105a2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00105a2e:
  return &_get_class_namev()::_class_name_static;
}



/* ImageFormatLoaderExtension::_get_class_namev() const */

undefined8 * ImageFormatLoaderExtension::_get_class_namev(void)

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
LAB_00105ab3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105ab3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImageFormatLoaderExtension")
      ;
      goto LAB_00105b1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImageFormatLoaderExtension");
LAB_00105b1e:
  return &_get_class_namev()::_class_name_static;
}



/* ImageFormatLoaderExtension::get_class() const */

void ImageFormatLoaderExtension::get_class(void)

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
            if (lVar5 == 0) goto LAB_00105e4f;
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
LAB_00105e4f:
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
    if (cVar6 != '\0') goto LAB_00105f03;
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
              if (lVar5 == 0) goto LAB_00105fb3;
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
LAB_00105fb3:
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
      if (cVar6 != '\0') goto LAB_00105f03;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00105f03:
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
            if (lVar4 == 0) goto LAB_001060df;
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
LAB_001060df:
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
    if (cVar5 != '\0') goto LAB_00106193;
  }
  cVar5 = String::operator==(param_1,"ResourceFormatLoader");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00106193:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageFormatLoaderExtension::is_class(String const&) const */

undefined8 __thiscall
ImageFormatLoaderExtension::is_class(ImageFormatLoaderExtension *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010626f;
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
LAB_0010626f:
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
    if (cVar6 != '\0') goto LAB_00106323;
  }
  cVar6 = String::operator==(param_1,"ImageFormatLoaderExtension");
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
              if (lVar5 == 0) goto LAB_001063e3;
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
LAB_001063e3:
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
      if (cVar6 != '\0') goto LAB_00106323;
    }
    cVar6 = String::operator==(param_1,"ImageFormatLoader");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010648c;
    }
  }
LAB_00106323:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010648c:
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
LAB_001067a8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001067a8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001067c6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001067c6:
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
LAB_00106ba8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106ba8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106bc5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106bc5:
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
  if (initialize_class()::initialized != '\0') goto LAB_00106feb;
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
LAB_001070fa:
      if ((code *)PTR__bind_methods_0010f010 != RefCounted::_bind_methods) {
LAB_0010710a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_001070fa;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_0010f010 != RefCounted::_bind_methods) goto LAB_0010710a;
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
  if ((code *)PTR__bind_methods_0010f008 != RefCounted::_bind_methods) {
    ResourceFormatLoader::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_00106feb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GetTypeInfo<float, void>::get_class_info() */

GetTypeInfo<float,void> * __thiscall
GetTypeInfo<float,void>::get_class_info(GetTypeInfo<float,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 3;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x001072bc;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001072bc:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Vector<String>, void>::get_class_info() */

GetTypeInfo<Vector<String>,void> * __thiscall
GetTypeInfo<Vector<String>,void>::get_class_info(GetTypeInfo<Vector<String>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC6;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x22;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
      if (*(undefined **)(this + 0x10) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(this + 0x10) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010743c;
    }
  }
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010743c:
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ResourceFormatLoader::~ResourceFormatLoader() */

void __thiscall ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = String::nocasecmp_to;
  if (bVar1) {
    if (*(long *)(this + 0x270) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 0x240) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 0x228) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 0x210) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 0x1f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 0x1e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 0x1c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 0x1b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 0x198) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00107603;
    }
    if (*(long *)(this + 0x180) != 0) {
      StringName::unref();
    }
  }
LAB_00107603:
  *(undefined ***)this = &PTR__initialize_classv_0010b500;
  Object::~Object((Object *)this);
  return;
}



/* ResourceFormatLoaderImage::~ResourceFormatLoaderImage() */

void __thiscall
ResourceFormatLoaderImage::~ResourceFormatLoaderImage(ResourceFormatLoaderImage *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b7d0;
  ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader *)this);
  return;
}



/* ResourceFormatLoaderImage::~ResourceFormatLoaderImage() */

void __thiscall
ResourceFormatLoaderImage::~ResourceFormatLoaderImage(ResourceFormatLoaderImage *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010b7d0;
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
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



/* ImageFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ImageFormatLoader::_get_property_listv(ImageFormatLoader *this,List *param_1,bool param_2)

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
  local_78 = "ImageFormatLoader";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImageFormatLoader";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_00107868:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107868;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107885;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107885:
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
  StringName::StringName((StringName *)&local_78,"ImageFormatLoader",false);
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



/* ImageFormatLoaderExtension::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
ImageFormatLoaderExtension::_get_property_listv
          (ImageFormatLoaderExtension *this,List *param_1,bool param_2)

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
    ImageFormatLoader::_get_property_listv((ImageFormatLoader *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ImageFormatLoaderExtension";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ImageFormatLoaderExtension";
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
  if (local_90 == 0) {
LAB_00107cb8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00107cb8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00107cd5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00107cd5:
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
  StringName::StringName((StringName *)&local_78,"ImageFormatLoaderExtension",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ImageFormatLoader::_get_property_listv((ImageFormatLoader *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    plVar2 = (long *)*plVar5;
    if (plVar2 == (long *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar2[3] == plVar5) {
      lVar4 = plVar2[1];
      lVar3 = plVar2[2];
      *plVar5 = lVar4;
      if (plVar2 == (long *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 8) = lVar4;
        lVar4 = plVar2[1];
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar3;
      }
      if (*plVar2 != 0) {
        LOCK();
        plVar1 = (long *)(*plVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *plVar2;
          *plVar2 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(plVar2,false);
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



/* GetTypeInfo<Ref<Image>, void>::get_class_info() */

GetTypeInfo<Ref<Image>,void> * __thiscall
GetTypeInfo<Ref<Image>,void>::get_class_info(GetTypeInfo<Ref<Image>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "Image";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x18;
  *(undefined4 *)(this + 0x18) = 0x11;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) != 0x11) {
      StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
      goto LAB_00108500;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
  if (*(char **)(this + 0x10) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(this + 0x10) = local_48;
  }
LAB_00108500:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<Ref<FileAccess>, void>::get_class_info() */

GetTypeInfo<Ref<FileAccess>,void> * __thiscall
GetTypeInfo<Ref<FileAccess>,void>::get_class_info(GetTypeInfo<Ref<FileAccess>,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "FileAccess";
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  *(undefined4 *)this = 0x18;
  *(undefined4 *)(this + 0x18) = 0x11;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    *(undefined4 *)(this + 0x28) = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),(CowData *)&local_58);
    *(undefined4 *)(this + 0x28) = 6;
    if (*(int *)(this + 0x18) != 0x11) {
      StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_50);
      goto LAB_001086a0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
  if (*(char **)(this + 0x10) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(this + 0x10) = local_48;
  }
LAB_001086a0:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
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
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00108908) */
/* WARNING: Removing unreachable block (ram,0x00108a38) */
/* WARNING: Removing unreachable block (ram,0x00108c00) */
/* WARNING: Removing unreachable block (ram,0x00108a44) */
/* WARNING: Removing unreachable block (ram,0x00108a4e) */
/* WARNING: Removing unreachable block (ram,0x00108be0) */
/* WARNING: Removing unreachable block (ram,0x00108a5a) */
/* WARNING: Removing unreachable block (ram,0x00108a64) */
/* WARNING: Removing unreachable block (ram,0x00108bc0) */
/* WARNING: Removing unreachable block (ram,0x00108a70) */
/* WARNING: Removing unreachable block (ram,0x00108a7a) */
/* WARNING: Removing unreachable block (ram,0x00108ba0) */
/* WARNING: Removing unreachable block (ram,0x00108a86) */
/* WARNING: Removing unreachable block (ram,0x00108a90) */
/* WARNING: Removing unreachable block (ram,0x00108b80) */
/* WARNING: Removing unreachable block (ram,0x00108a9c) */
/* WARNING: Removing unreachable block (ram,0x00108aa6) */
/* WARNING: Removing unreachable block (ram,0x00108b60) */
/* WARNING: Removing unreachable block (ram,0x00108ab2) */
/* WARNING: Removing unreachable block (ram,0x00108abc) */
/* WARNING: Removing unreachable block (ram,0x00108b40) */
/* WARNING: Removing unreachable block (ram,0x00108ac4) */
/* WARNING: Removing unreachable block (ram,0x00108ada) */
/* WARNING: Removing unreachable block (ram,0x00108ae6) */
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



/* MethodBind* create_method_bind<ImageFormatLoaderExtension>(void
   (ImageFormatLoaderExtension::*)()) */

MethodBind * create_method_bind<ImageFormatLoaderExtension>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010b9b8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "ImageFormatLoaderExtension";
  local_30 = 0x1a;
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



/* GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>, void>::get_class_info() */

GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void> * __thiscall
GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void>::get_class_info
          (GetTypeInfo<BitField<ImageFormatLoader::LoaderFlags>,void> *this)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_48 = "ImageFormatLoader::LoaderFlags";
  local_40 = 0x1e;
  String::parse_latin1((StrRange *)&local_70);
  String::split(local_58,SUB81((StrRange *)&local_70,0),0x108e5f);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_40 = 1;
    local_48 = ".";
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = -2;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar4 = lVar5 + -2;
      if (-1 < lVar4) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar4 * 8));
        String::operator+((String *)&local_68,(String *)&local_48);
        pcVar3 = local_48;
        lVar5 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
            lVar5 = local_60;
          }
        }
        goto joined_r0x00108f43;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = ".";
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)&local_68);
  lVar5 = local_60;
joined_r0x00108f43:
  local_60 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_68,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x206;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
    StringName::unref();
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* CowData<String>::_ref(CowData<String> const&) */

void __thiscall CowData<String>::_ref(CowData<String> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this == *(long *)param_1) {
    return;
  }
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



/* GetTypeInfo<Error, void>::get_class_info() */

GetTypeInfo<Error,void> * __thiscall
GetTypeInfo<Error,void>::get_class_info(GetTypeInfo<Error,void> *this)

{
  long *plVar1;
  code *pcVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char local_58 [8];
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  local_48 = "Error";
  local_40 = 5;
  String::parse_latin1((StrRange *)&local_70);
  String::split(local_58,SUB81((StrRange *)&local_70,0),0x108e5f);
  if ((local_50 != 0) && (2 < *(long *)(local_50 + -8))) {
    local_60 = 0;
    local_40 = 1;
    local_48 = ".";
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == 0) {
      lVar4 = -2;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(local_50 + -8);
      lVar4 = lVar5 + -2;
      if (-1 < lVar4) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar4 * 8));
        String::operator+((String *)&local_68,(String *)&local_48);
        pcVar3 = local_48;
        lVar5 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
            lVar5 = local_60;
          }
        }
        goto joined_r0x00109293;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_60 = 0;
  local_48 = ".";
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)&local_68);
  lVar5 = local_60;
joined_r0x00109293:
  local_60 = lVar5;
  if (lVar5 != 0) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_50);
  StringName::StringName((StringName *)&local_48,(String *)&local_68,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
    StringName::unref();
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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
LAB_00109850:
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
  if (lVar10 == 0) goto LAB_00109850;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00109729:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00109729;
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
    goto LAB_001098a6;
  }
  if (lVar10 == lVar7) {
LAB_001097cf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_001098a6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_001097ba;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001097cf;
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
LAB_001097ba:
  puVar9[-1] = param_1;
  return 0;
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
    *(code **)param_1 = Memory::free_static;
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



/* void Ref<Image>::instantiate<>() */

void __thiscall Ref<Image>::instantiate<>(Ref<Image> *this)

{
  Image *pIVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Resource *pRVar4;
  Image *pIVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar4 = this_00;
  for (lVar3 = 0x4d; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar6 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(code **)this_00 = Memory::free_static;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pIVar1 = *(Image **)this;
    if (pIVar1 == (Image *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') {
      return;
    }
    memdelete<Image>(pIVar1);
    return;
  }
  pIVar1 = *(Image **)this;
  pIVar5 = pIVar1;
  if (this_00 != (Resource *)pIVar1) {
    *(Resource **)this = this_00;
    cVar2 = RefCounted::reference();
    pIVar5 = (Image *)this_00;
    if (cVar2 == '\0') {
      *(undefined8 *)this = 0;
      if (pIVar1 == (Image *)0x0) goto LAB_00109ba8;
      cVar2 = RefCounted::unreference();
    }
    else {
      if (pIVar1 == (Image *)0x0) goto LAB_00109ba8;
      cVar2 = RefCounted::unreference();
    }
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar1);
    }
  }
LAB_00109ba8:
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar5);
  return;
}



/* CowData<Ref<ImageFormatLoader> >::_unref() */

void __thiscall CowData<Ref<ImageFormatLoader>>::_unref(CowData<Ref<ImageFormatLoader>> *this)

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
LAB_00109c5d:
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
            goto LAB_00109c5d;
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
LAB_00109f60:
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
  if (lVar8 == 0) goto LAB_00109f60;
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
        goto LAB_00109e71;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00109e71:
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



/* ImageFormatLoaderExtension::_initialize_classv() */

void ImageFormatLoaderExtension::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_0010a21f;
  if (ImageFormatLoader::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
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
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      lVar2 = local_58;
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_48 = "RefCounted";
    local_58 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ImageFormatLoader";
    local_60 = 0;
    local_40 = 0x11;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 != 0) {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        ImageFormatLoader::_bind_methods();
        ImageFormatLoader::initialize_class()::initialized = '\x01';
        goto LAB_0010a11b;
      }
    }
    ImageFormatLoader::_bind_methods();
    ImageFormatLoader::initialize_class()::initialized = '\x01';
  }
LAB_0010a11b:
  local_48 = "ImageFormatLoader";
  local_58 = 0;
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "ImageFormatLoaderExtension";
  local_60 = 0;
  local_40 = 0x1a;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _bind_methods();
  initialize_class()::initialized = '\x01';
LAB_0010a21f:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Ref<ImageFormatLoader> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<ImageFormatLoader>>::_realloc(CowData<Ref<ImageFormatLoader>> *this,long param_1)

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
/* Error CowData<Ref<ImageFormatLoader> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<ImageFormatLoader>>::resize<false>(CowData<Ref<ImageFormatLoader>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
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
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010a710:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010a710;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010a5ba:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010a5ba;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0010a580;
  }
  if (lVar11 == lVar8) {
LAB_0010a68b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0010a580:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010a66b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010a68b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010a66b:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0010a888) */
/* WARNING: Removing unreachable block (ram,0x0010a9b8) */
/* WARNING: Removing unreachable block (ram,0x0010ab80) */
/* WARNING: Removing unreachable block (ram,0x0010a9c4) */
/* WARNING: Removing unreachable block (ram,0x0010a9ce) */
/* WARNING: Removing unreachable block (ram,0x0010ab60) */
/* WARNING: Removing unreachable block (ram,0x0010a9da) */
/* WARNING: Removing unreachable block (ram,0x0010a9e4) */
/* WARNING: Removing unreachable block (ram,0x0010ab40) */
/* WARNING: Removing unreachable block (ram,0x0010a9f0) */
/* WARNING: Removing unreachable block (ram,0x0010a9fa) */
/* WARNING: Removing unreachable block (ram,0x0010ab20) */
/* WARNING: Removing unreachable block (ram,0x0010aa06) */
/* WARNING: Removing unreachable block (ram,0x0010aa10) */
/* WARNING: Removing unreachable block (ram,0x0010ab00) */
/* WARNING: Removing unreachable block (ram,0x0010aa1c) */
/* WARNING: Removing unreachable block (ram,0x0010aa26) */
/* WARNING: Removing unreachable block (ram,0x0010aae0) */
/* WARNING: Removing unreachable block (ram,0x0010aa32) */
/* WARNING: Removing unreachable block (ram,0x0010aa3c) */
/* WARNING: Removing unreachable block (ram,0x0010aac0) */
/* WARNING: Removing unreachable block (ram,0x0010aa44) */
/* WARNING: Removing unreachable block (ram,0x0010aa5a) */
/* WARNING: Removing unreachable block (ram,0x0010aa66) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

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
      _err_print_error(&_LC67,"./core/object/method_bind.h",0x154,
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
      goto LAB_0010ad20;
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
LAB_0010ad20:
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
      goto LAB_0010b1ab;
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
                    /* WARNING: Could not recover jumptable at 0x0010b012. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010b1ab:
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
      goto LAB_0010b3ab;
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
                    /* WARNING: Could not recover jumptable at 0x0010b212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010b3ab:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageFormatLoader::_bind_methods() */

void ImageFormatLoader::_GLOBAL__sub_I__bind_methods(void)

{
  ImageLoader::loader._8_8_ = 0;
  __cxa_atexit(Vector<Ref<ImageFormatLoader>>::~Vector,ImageLoader::loader,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

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
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

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
/* ResourceFormatLoaderImage::~ResourceFormatLoaderImage() */

void __thiscall
ResourceFormatLoaderImage::~ResourceFormatLoaderImage(ResourceFormatLoaderImage *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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
/* ImageFormatLoaderExtension::~ImageFormatLoaderExtension() */

void __thiscall
ImageFormatLoaderExtension::~ImageFormatLoaderExtension(ImageFormatLoaderExtension *this)

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
/* Vector<Ref<ImageFormatLoader> >::~Vector() */

void __thiscall Vector<Ref<ImageFormatLoader>>::~Vector(Vector<Ref<ImageFormatLoader>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


