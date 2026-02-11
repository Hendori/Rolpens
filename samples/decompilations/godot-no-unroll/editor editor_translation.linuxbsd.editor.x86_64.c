
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* get_editor_locales() */

void get_editor_locales(void)

{
  undefined **ppuVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  size_t sVar6;
  undefined **ppuVar7;
  long in_RDI;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar8 = PTR__editor_translation_ar_compressed_00105710 != (undefined *)0x0;
  *(undefined8 *)(in_RDI + 8) = 0;
  if (bVar8) {
    ppuVar7 = &_editor_translations;
    do {
      local_50 = 0;
      pcVar4 = *ppuVar7;
      sVar6 = 0;
      if (pcVar4 != (char *)0x0) {
        sVar6 = strlen(pcVar4);
      }
      local_48 = pcVar4;
      local_40 = sVar6;
      String::parse_latin1((StrRange *)&local_50);
      local_48 = (char *)0x0;
      plVar2 = (long *)(local_50 + -0x10);
      if (local_50 == 0) {
        Vector<String>::push_back();
      }
      else {
        do {
          lVar3 = *plVar2;
          if (lVar3 == 0) goto LAB_0010047b;
          LOCK();
          lVar5 = *plVar2;
          bVar8 = lVar3 == lVar5;
          if (bVar8) {
            *plVar2 = lVar3 + 1;
            lVar5 = lVar3;
          }
          UNLOCK();
        } while (!bVar8);
        if (lVar5 != -1) {
          local_48 = (char *)local_50;
        }
LAB_0010047b:
        pcVar4 = local_48;
        Vector<String>::push_back();
        if (pcVar4 != (char *)0x0) {
          LOCK();
          plVar2 = (long *)((long)pcVar4 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            Memory::free_static((void *)((long)local_48 + -0x10),false);
          }
        }
      }
      lVar3 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar2 = (long *)(local_50 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      ppuVar1 = ppuVar7 + 5;
      ppuVar7 = ppuVar7 + 3;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
LAB_00100726:
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
    if (lVar10 == 0) goto LAB_00100726;
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
    FUN_0010404c();
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
      goto LAB_0010067c;
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
LAB_0010067c:
  puVar8[-1] = param_1;
  return;
}



/* load_extractable_translations(String const&) */

void load_extractable_translations(String *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  Object *pOVar6;
  undefined **ppuVar7;
  char cVar8;
  int iVar9;
  Object *pOVar10;
  undefined8 uVar11;
  long lVar12;
  Object *pOVar13;
  long in_FS_OFFSET;
  Object *local_88;
  Object *local_80;
  Object *local_78;
  Object *local_70 [2];
  long local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_58,"godot.editor",false);
  TranslationServer::get_or_add_domain((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
    StringName::unref();
  }
  ppuVar7 = &_extractable_translations;
  puVar5 = PTR__extractable_translation_af_compressed_00105230;
joined_r0x00100807:
  if (puVar5 == (undefined *)0x0) {
LAB_001009e0:
    if (((local_88 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_88), cVar8 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  cVar8 = operator==(*ppuVar7,param_1);
  if (cVar8 != '\0') {
    local_60 = 0;
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)&local_60,(long)*(int *)((long)ppuVar7 + 0xc));
    uVar3 = *(undefined4 *)((long)ppuVar7 + 0xc);
    uVar4 = *(undefined4 *)(ppuVar7 + 1);
    puVar5 = ppuVar7[2];
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    lVar12 = local_60;
    iVar9 = Compression::decompress(local_60,uVar3,puVar5,uVar4,1);
    if (iVar9 == -1) {
      _err_print_error("load_extractable_translations","editor/editor_translation.cpp",0x95,
                       "Condition \"ret == -1\" is true.","Compressed file is corrupt.",0,0);
    }
    else {
      local_80 = (Object *)0x0;
      Ref<FileAccessMemory>::instantiate<>((Ref<FileAccessMemory> *)&local_80);
      pOVar13 = local_80;
      if (lVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar12 + -8);
      }
      (**(code **)(*(long *)local_80 + 0x2f0))(local_80,lVar12,uVar11);
      local_70[0] = (Object *)0x0;
      pOVar10 = (Object *)__dynamic_cast(pOVar13,&Object::typeinfo,&FileAccess::typeinfo,0);
      if ((pOVar10 != (Object *)0x0) &&
         (local_70[0] = pOVar10, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
        local_70[0] = (Object *)0x0;
      }
      TranslationLoaderPO::load_translation((StringName *)&local_58,(StrRange *)local_70,0);
      local_78 = (Object *)0x0;
      if (local_58 != (Object *)0x0) {
        pOVar10 = (Object *)__dynamic_cast(local_58,&Object::typeinfo,&Translation::typeinfo,0);
        if (pOVar10 != (Object *)0x0) {
          local_78 = pOVar10;
          cVar8 = RefCounted::reference();
          if (cVar8 == '\0') {
            local_78 = (Object *)0x0;
          }
          if (local_58 == (Object *)0x0) goto LAB_00100970;
        }
        cVar8 = RefCounted::unreference();
        pOVar10 = local_58;
        if ((cVar8 != '\0') && (cVar8 = predelete_handler(local_58), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))();
          Memory::free_static(pOVar10,false);
        }
      }
LAB_00100970:
      pOVar10 = local_78;
      if (((local_70[0] != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar6 = local_70[0], pOVar10 = local_78,
          cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_70[0]), pOVar10 = local_78, cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))();
        Memory::free_static(pOVar6,false);
        pOVar10 = local_78;
      }
      local_78 = pOVar10;
      if (pOVar10 == (Object *)0x0) {
        cVar8 = RefCounted::unreference();
        if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
        if (lVar12 != 0) {
          LOCK();
          plVar2 = (long *)(lVar12 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 != 0) goto LAB_00100810;
          Memory::free_static((void *)(local_60 + -0x10),false);
          puVar5 = ppuVar7[5];
          ppuVar7 = ppuVar7 + 3;
          goto joined_r0x00100807;
        }
        goto LAB_00100810;
      }
      local_70[0] = (Object *)0x0;
      pOVar6 = (Object *)*ppuVar7;
      local_50 = 0;
      if (pOVar6 != (Object *)0x0) {
        local_50 = strlen((char *)pOVar6);
      }
      local_58 = pOVar6;
      String::parse_latin1((StrRange *)local_70);
      Translation::set_locale(pOVar10);
      pOVar10 = local_70[0];
      if (local_70[0] != (Object *)0x0) {
        LOCK();
        pOVar6 = local_70[0] + -0x10;
        *(long *)pOVar6 = *(long *)pOVar6 + -1;
        UNLOCK();
        lVar12 = local_60;
        pOVar13 = local_80;
        if (*(long *)pOVar6 == 0) {
          local_70[0] = (Object *)0x0;
          Memory::free_static(pOVar10 + -0x10,false);
          lVar12 = local_60;
          pOVar13 = local_80;
        }
      }
      TranslationDomain::add_translation(local_88);
      if (((local_78 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar10 = local_78, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_78), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      if (((pOVar13 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
    }
    if (lVar12 != 0) {
      LOCK();
      plVar2 = (long *)(lVar12 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_60 + -0x10),false);
      }
    }
    goto LAB_001009e0;
  }
LAB_00100810:
  ppuVar1 = ppuVar7 + 5;
  ppuVar7 = ppuVar7 + 3;
  puVar5 = *ppuVar1;
  goto joined_r0x00100807;
}



/* load_doc_translations(String const&) */

void load_doc_translations(String *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  Object *pOVar6;
  undefined **ppuVar7;
  char cVar8;
  int iVar9;
  Object *pOVar10;
  undefined8 uVar11;
  long lVar12;
  Object *pOVar13;
  long in_FS_OFFSET;
  Object *local_88;
  Object *local_80;
  Object *local_78;
  Object *local_70 [2];
  long local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_58,"godot.documentation",false);
  TranslationServer::get_or_add_domain((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
    StringName::unref();
  }
  ppuVar7 = &_doc_translations;
  puVar5 = PTR__doc_translation_de_compressed_00105b10;
joined_r0x00100d27:
  if (puVar5 == (undefined *)0x0) {
LAB_00100f00:
    if (((local_88 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_88), cVar8 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  cVar8 = operator==(*ppuVar7,param_1);
  if (cVar8 != '\0') {
    local_60 = 0;
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)&local_60,(long)*(int *)((long)ppuVar7 + 0xc));
    uVar3 = *(undefined4 *)((long)ppuVar7 + 0xc);
    uVar4 = *(undefined4 *)(ppuVar7 + 1);
    puVar5 = ppuVar7[2];
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    lVar12 = local_60;
    iVar9 = Compression::decompress(local_60,uVar3,puVar5,uVar4,1);
    if (iVar9 == -1) {
      _err_print_error("load_doc_translations","editor/editor_translation.cpp",0x79,
                       "Condition \"ret == -1\" is true.","Compressed file is corrupt.",0,0);
    }
    else {
      local_80 = (Object *)0x0;
      Ref<FileAccessMemory>::instantiate<>((Ref<FileAccessMemory> *)&local_80);
      pOVar13 = local_80;
      if (lVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar12 + -8);
      }
      (**(code **)(*(long *)local_80 + 0x2f0))(local_80,lVar12,uVar11);
      local_70[0] = (Object *)0x0;
      pOVar10 = (Object *)__dynamic_cast(pOVar13,&Object::typeinfo,&FileAccess::typeinfo,0);
      if ((pOVar10 != (Object *)0x0) &&
         (local_70[0] = pOVar10, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
        local_70[0] = (Object *)0x0;
      }
      TranslationLoaderPO::load_translation((StringName *)&local_58,(StrRange *)local_70,0);
      local_78 = (Object *)0x0;
      if (local_58 != (Object *)0x0) {
        pOVar10 = (Object *)__dynamic_cast(local_58,&Object::typeinfo,&Translation::typeinfo,0);
        if (pOVar10 != (Object *)0x0) {
          local_78 = pOVar10;
          cVar8 = RefCounted::reference();
          if (cVar8 == '\0') {
            local_78 = (Object *)0x0;
          }
          if (local_58 == (Object *)0x0) goto LAB_00100e90;
        }
        cVar8 = RefCounted::unreference();
        pOVar10 = local_58;
        if ((cVar8 != '\0') && (cVar8 = predelete_handler(local_58), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))();
          Memory::free_static(pOVar10,false);
        }
      }
LAB_00100e90:
      pOVar10 = local_78;
      if (((local_70[0] != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar6 = local_70[0], pOVar10 = local_78,
          cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_70[0]), pOVar10 = local_78, cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))();
        Memory::free_static(pOVar6,false);
        pOVar10 = local_78;
      }
      local_78 = pOVar10;
      if (pOVar10 == (Object *)0x0) {
        cVar8 = RefCounted::unreference();
        if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
        if (lVar12 != 0) {
          LOCK();
          plVar2 = (long *)(lVar12 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 != 0) goto LAB_00100d30;
          Memory::free_static((void *)(local_60 + -0x10),false);
          puVar5 = ppuVar7[5];
          ppuVar7 = ppuVar7 + 3;
          goto joined_r0x00100d27;
        }
        goto LAB_00100d30;
      }
      local_70[0] = (Object *)0x0;
      pOVar6 = (Object *)*ppuVar7;
      local_50 = 0;
      if (pOVar6 != (Object *)0x0) {
        local_50 = strlen((char *)pOVar6);
      }
      local_58 = pOVar6;
      String::parse_latin1((StrRange *)local_70);
      Translation::set_locale(pOVar10);
      pOVar10 = local_70[0];
      if (local_70[0] != (Object *)0x0) {
        LOCK();
        pOVar6 = local_70[0] + -0x10;
        *(long *)pOVar6 = *(long *)pOVar6 + -1;
        UNLOCK();
        lVar12 = local_60;
        pOVar13 = local_80;
        if (*(long *)pOVar6 == 0) {
          local_70[0] = (Object *)0x0;
          Memory::free_static(pOVar10 + -0x10,false);
          lVar12 = local_60;
          pOVar13 = local_80;
        }
      }
      TranslationDomain::add_translation(local_88);
      if (((local_78 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar10 = local_78, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_78), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      if (((pOVar13 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
    }
    if (lVar12 != 0) {
      LOCK();
      plVar2 = (long *)(lVar12 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_60 + -0x10),false);
      }
    }
    goto LAB_00100f00;
  }
LAB_00100d30:
  ppuVar1 = ppuVar7 + 5;
  ppuVar7 = ppuVar7 + 3;
  puVar5 = *ppuVar1;
  goto joined_r0x00100d27;
}



/* load_property_translations(String const&) */

void load_property_translations(String *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  Object *pOVar6;
  undefined **ppuVar7;
  char cVar8;
  int iVar9;
  Object *pOVar10;
  undefined8 uVar11;
  long lVar12;
  Object *pOVar13;
  long in_FS_OFFSET;
  Object *local_88;
  Object *local_80;
  Object *local_78;
  Object *local_70 [2];
  long local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_58,"godot.properties",false);
  TranslationServer::get_or_add_domain((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
    StringName::unref();
  }
  ppuVar7 = &_property_translations;
  puVar5 = PTR__property_translation_ar_compressed_00104ff0;
joined_r0x00101247:
  if (puVar5 == (undefined *)0x0) {
LAB_00101420:
    if (((local_88 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_88), cVar8 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  cVar8 = operator==(*ppuVar7,param_1);
  if (cVar8 != '\0') {
    local_60 = 0;
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)&local_60,(long)*(int *)((long)ppuVar7 + 0xc));
    uVar3 = *(undefined4 *)((long)ppuVar7 + 0xc);
    uVar4 = *(undefined4 *)(ppuVar7 + 1);
    puVar5 = ppuVar7[2];
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    lVar12 = local_60;
    iVar9 = Compression::decompress(local_60,uVar3,puVar5,uVar4,1);
    if (iVar9 == -1) {
      _err_print_error("load_property_translations","editor/editor_translation.cpp",0x5d,
                       "Condition \"ret == -1\" is true.","Compressed file is corrupt.",0,0);
    }
    else {
      local_80 = (Object *)0x0;
      Ref<FileAccessMemory>::instantiate<>((Ref<FileAccessMemory> *)&local_80);
      pOVar13 = local_80;
      if (lVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar12 + -8);
      }
      (**(code **)(*(long *)local_80 + 0x2f0))(local_80,lVar12,uVar11);
      local_70[0] = (Object *)0x0;
      pOVar10 = (Object *)__dynamic_cast(pOVar13,&Object::typeinfo,&FileAccess::typeinfo,0);
      if ((pOVar10 != (Object *)0x0) &&
         (local_70[0] = pOVar10, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
        local_70[0] = (Object *)0x0;
      }
      TranslationLoaderPO::load_translation((StringName *)&local_58,(StrRange *)local_70,0);
      local_78 = (Object *)0x0;
      if (local_58 != (Object *)0x0) {
        pOVar10 = (Object *)__dynamic_cast(local_58,&Object::typeinfo,&Translation::typeinfo,0);
        if (pOVar10 != (Object *)0x0) {
          local_78 = pOVar10;
          cVar8 = RefCounted::reference();
          if (cVar8 == '\0') {
            local_78 = (Object *)0x0;
          }
          if (local_58 == (Object *)0x0) goto LAB_001013b0;
        }
        cVar8 = RefCounted::unreference();
        pOVar10 = local_58;
        if ((cVar8 != '\0') && (cVar8 = predelete_handler(local_58), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))();
          Memory::free_static(pOVar10,false);
        }
      }
LAB_001013b0:
      pOVar10 = local_78;
      if (((local_70[0] != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar6 = local_70[0], pOVar10 = local_78,
          cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_70[0]), pOVar10 = local_78, cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))();
        Memory::free_static(pOVar6,false);
        pOVar10 = local_78;
      }
      local_78 = pOVar10;
      if (pOVar10 == (Object *)0x0) {
        cVar8 = RefCounted::unreference();
        if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
        if (lVar12 != 0) {
          LOCK();
          plVar2 = (long *)(lVar12 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 != 0) goto LAB_00101250;
          Memory::free_static((void *)(local_60 + -0x10),false);
          puVar5 = ppuVar7[5];
          ppuVar7 = ppuVar7 + 3;
          goto joined_r0x00101247;
        }
        goto LAB_00101250;
      }
      local_70[0] = (Object *)0x0;
      pOVar6 = (Object *)*ppuVar7;
      local_50 = 0;
      if (pOVar6 != (Object *)0x0) {
        local_50 = strlen((char *)pOVar6);
      }
      local_58 = pOVar6;
      String::parse_latin1((StrRange *)local_70);
      Translation::set_locale(pOVar10);
      pOVar10 = local_70[0];
      if (local_70[0] != (Object *)0x0) {
        LOCK();
        pOVar6 = local_70[0] + -0x10;
        *(long *)pOVar6 = *(long *)pOVar6 + -1;
        UNLOCK();
        lVar12 = local_60;
        pOVar13 = local_80;
        if (*(long *)pOVar6 == 0) {
          local_70[0] = (Object *)0x0;
          Memory::free_static(pOVar10 + -0x10,false);
          lVar12 = local_60;
          pOVar13 = local_80;
        }
      }
      TranslationDomain::add_translation(local_88);
      if (((local_78 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar10 = local_78, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_78), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      if (((pOVar13 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
    }
    if (lVar12 != 0) {
      LOCK();
      plVar2 = (long *)(lVar12 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_60 + -0x10),false);
      }
    }
    goto LAB_00101420;
  }
LAB_00101250:
  ppuVar1 = ppuVar7 + 5;
  ppuVar7 = ppuVar7 + 3;
  puVar5 = *ppuVar1;
  goto joined_r0x00101247;
}



/* load_editor_translations(String const&) */

void load_editor_translations(String *param_1)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  Object *pOVar6;
  undefined **ppuVar7;
  char cVar8;
  int iVar9;
  Object *pOVar10;
  undefined8 uVar11;
  long lVar12;
  Object *pOVar13;
  long in_FS_OFFSET;
  Object *local_88;
  Object *local_80;
  Object *local_78;
  Object *local_70 [2];
  long local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_58,"godot.editor",false);
  TranslationServer::get_or_add_domain((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
    StringName::unref();
  }
  ppuVar7 = &_editor_translations;
  puVar5 = PTR__editor_translation_ar_compressed_00105710;
joined_r0x00101767:
  if (puVar5 == (undefined *)0x0) {
LAB_00101940:
    if (((local_88 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
       (cVar8 = predelete_handler(local_88), cVar8 != '\0')) {
      (**(code **)(*(long *)local_88 + 0x140))(local_88);
      Memory::free_static(local_88,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  cVar8 = operator==(*ppuVar7,param_1);
  if (cVar8 != '\0') {
    local_60 = 0;
    CowData<unsigned_char>::resize<false>
              ((CowData<unsigned_char> *)&local_60,(long)*(int *)((long)ppuVar7 + 0xc));
    uVar3 = *(undefined4 *)((long)ppuVar7 + 0xc);
    uVar4 = *(undefined4 *)(ppuVar7 + 1);
    puVar5 = ppuVar7[2];
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_60);
    lVar12 = local_60;
    iVar9 = Compression::decompress(local_60,uVar3,puVar5,uVar4,1);
    if (iVar9 == -1) {
      _err_print_error("load_editor_translations","editor/editor_translation.cpp",0x41,
                       "Condition \"ret == -1\" is true.","Compressed file is corrupt.",0,0);
    }
    else {
      local_80 = (Object *)0x0;
      Ref<FileAccessMemory>::instantiate<>((Ref<FileAccessMemory> *)&local_80);
      pOVar13 = local_80;
      if (lVar12 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = *(undefined8 *)(lVar12 + -8);
      }
      (**(code **)(*(long *)local_80 + 0x2f0))(local_80,lVar12,uVar11);
      local_70[0] = (Object *)0x0;
      pOVar10 = (Object *)__dynamic_cast(pOVar13,&Object::typeinfo,&FileAccess::typeinfo,0);
      if ((pOVar10 != (Object *)0x0) &&
         (local_70[0] = pOVar10, cVar8 = RefCounted::reference(), cVar8 == '\0')) {
        local_70[0] = (Object *)0x0;
      }
      TranslationLoaderPO::load_translation((StringName *)&local_58,(StrRange *)local_70,0);
      local_78 = (Object *)0x0;
      if (local_58 != (Object *)0x0) {
        pOVar10 = (Object *)__dynamic_cast(local_58,&Object::typeinfo,&Translation::typeinfo,0);
        if (pOVar10 != (Object *)0x0) {
          local_78 = pOVar10;
          cVar8 = RefCounted::reference();
          if (cVar8 == '\0') {
            local_78 = (Object *)0x0;
          }
          if (local_58 == (Object *)0x0) goto LAB_001018d0;
        }
        cVar8 = RefCounted::unreference();
        pOVar10 = local_58;
        if ((cVar8 != '\0') && (cVar8 = predelete_handler(local_58), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))();
          Memory::free_static(pOVar10,false);
        }
      }
LAB_001018d0:
      pOVar10 = local_78;
      if (((local_70[0] != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar6 = local_70[0], pOVar10 = local_78,
          cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_70[0]), pOVar10 = local_78, cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar6 + 0x140))();
        Memory::free_static(pOVar6,false);
        pOVar10 = local_78;
      }
      local_78 = pOVar10;
      if (pOVar10 == (Object *)0x0) {
        cVar8 = RefCounted::unreference();
        if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
          Memory::free_static(pOVar13,false);
        }
        if (lVar12 != 0) {
          LOCK();
          plVar2 = (long *)(lVar12 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 != 0) goto LAB_00101770;
          Memory::free_static((void *)(local_60 + -0x10),false);
          puVar5 = ppuVar7[5];
          ppuVar7 = ppuVar7 + 3;
          goto joined_r0x00101767;
        }
        goto LAB_00101770;
      }
      local_70[0] = (Object *)0x0;
      pOVar6 = (Object *)*ppuVar7;
      local_50 = 0;
      if (pOVar6 != (Object *)0x0) {
        local_50 = strlen((char *)pOVar6);
      }
      local_58 = pOVar6;
      String::parse_latin1((StrRange *)local_70);
      Translation::set_locale(pOVar10);
      pOVar10 = local_70[0];
      if (local_70[0] != (Object *)0x0) {
        LOCK();
        pOVar6 = local_70[0] + -0x10;
        *(long *)pOVar6 = *(long *)pOVar6 + -1;
        UNLOCK();
        lVar12 = local_60;
        pOVar13 = local_80;
        if (*(long *)pOVar6 == 0) {
          local_70[0] = (Object *)0x0;
          Memory::free_static(pOVar10 + -0x10,false);
          lVar12 = local_60;
          pOVar13 = local_80;
        }
      }
      TranslationDomain::add_translation(local_88);
      if (((local_78 != (Object *)0x0) &&
          (cVar8 = RefCounted::unreference(), pOVar10 = local_78, cVar8 != '\0')) &&
         (cVar8 = predelete_handler(local_78), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      if (((pOVar13 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
         (cVar8 = predelete_handler(pOVar13), cVar8 != '\0')) {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
    }
    if (lVar12 != 0) {
      LOCK();
      plVar2 = (long *)(lVar12 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        Memory::free_static((void *)(local_60 + -0x10),false);
      }
    }
    goto LAB_00101940;
  }
LAB_00101770:
  ppuVar1 = ppuVar7 + 5;
  ppuVar7 = ppuVar7 + 3;
  puVar5 = *ppuVar1;
  goto joined_r0x00101767;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* get_extractable_message_list() */

long get_extractable_message_list(void)

{
  undefined **ppuVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  Object *pOVar6;
  char *pcVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  undefined *puVar12;
  long lVar13;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  long in_RDI;
  long in_FS_OFFSET;
  bool bVar20;
  undefined **local_120;
  char local_f2;
  Object *local_e8;
  long local_e0;
  long local_d8;
  char *local_d0;
  long local_c8;
  char *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  Vector<Vector<String>> local_88 [8];
  undefined *local_80 [2];
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80[0] = (undefined *)0x0;
  puVar12 = PTR__extractable_translation_af_compressed_00105230;
  if (PTR__extractable_translation_af_compressed_00105230 != (undefined *)0x0) {
    local_120 = &PTR_DAT_00105238;
LAB_00101ec1:
    do {
      iVar11 = strcmp(local_120[-3],"source");
      if (iVar11 == 0) {
        local_70 = 0;
        CowData<unsigned_char>::resize<false>
                  ((CowData<unsigned_char> *)&local_70,(long)*(int *)((long)local_120 + -0xc));
        uVar3 = *(undefined4 *)(local_120 + -2);
        puVar12 = local_120[-1];
        uVar4 = *(undefined4 *)((long)local_120 + -0xc);
        CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_70);
        lVar16 = local_70;
        iVar11 = Compression::decompress(local_70,uVar4,puVar12,uVar3,1);
        if (iVar11 == -1) {
          _err_print_error("get_extractable_message_list","editor/editor_translation.cpp",0xb5,
                           "Condition \"ret == -1\" is true. Returning: list",
                           "Compressed file is corrupt.",0,0);
          puVar12 = local_80[0];
          local_80[0] = (undefined *)0x0;
          *(undefined **)(in_RDI + 8) = puVar12;
LAB_0010229f:
          if (lVar16 != 0) {
            LOCK();
            plVar2 = (long *)(lVar16 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              Memory::free_static((void *)(local_70 + -0x10),false);
            }
          }
          goto LAB_001022bf;
        }
        local_e8 = (Object *)0x0;
        Ref<FileAccessMemory>::instantiate<>((Ref<FileAccessMemory> *)&local_e8);
        pOVar6 = local_e8;
        if (lVar16 == 0) {
          uVar15 = 0;
        }
        else {
          uVar15 = *(undefined8 *)(lVar16 + -8);
        }
        (**(code **)(*(long *)local_e8 + 0x2f0))(local_e8,lVar16,uVar15);
        if (*(code **)(*(long *)pOVar6 + 0x1a8) == FileAccess::get_path) {
          local_e0 = 0;
          local_58 = "";
          local_50[0] = 0;
          String::parse_latin1((StrRange *)&local_e0);
        }
        else {
          (**(code **)(*(long *)pOVar6 + 0x1a8))(&local_e0,pOVar6);
        }
        iVar11 = 0;
        (**(code **)(*(long *)pOVar6 + 0x1b8))(pOVar6,0);
        local_d8 = 0;
        local_d0 = (char *)0x0;
        local_c8 = 0;
        local_f2 = '\0';
        do {
          (**(code **)(*(long *)pOVar6 + 0x228))((String *)&local_58,pOVar6);
          bVar17 = SUB81((String *)&local_58,0);
          String::strip_edges(SUB81((String *)&local_c0,0),bVar17);
          pcVar14 = local_58;
          if (local_58 != (char *)0x0) {
            LOCK();
            plVar2 = (long *)(local_58 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_58 = (char *)0x0;
              Memory::free_static(pcVar14 + -0x10,false);
            }
          }
          cVar8 = (**(code **)(*(long *)pOVar6 + 0x1d8))(pOVar6);
          pcVar14 = local_c0;
          if (cVar8 != '\0') {
            if (local_c0 == (char *)0x0) {
              if ((iVar11 != 1) && (1 < iVar11 - 3U)) break;
            }
            else {
              if (1 < *(uint *)(local_c0 + -8)) goto LAB_00102300;
              if ((iVar11 != 1) && (1 < iVar11 - 3U)) {
                LOCK();
                plVar2 = (long *)(local_c0 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_c0 = (char *)0x0;
                  Memory::free_static(pcVar14 + -0x10,false);
                }
                break;
              }
            }
            itos((long)&local_68);
            local_58 = ":";
            local_98 = 0;
            local_50[0] = 1;
            String::parse_latin1((StrRange *)&local_98);
            operator+((char *)&local_a0,"Unexpected EOF while reading POT file at: ");
            String::operator+((String *)&local_90,(String *)&local_a0);
            String::operator+((String *)&local_58,(String *)&local_90);
            pcVar14 = "Method/function failed. Returning: Vector<Vector<String>>()";
            uVar15 = 0xda;
LAB_00102170:
            _err_print_error("get_extractable_message_list","editor/editor_translation.cpp",uVar15,
                             pcVar14,(String *)&local_58,0,0);
            pcVar14 = local_58;
            if (local_58 != (char *)0x0) {
              LOCK();
              plVar2 = (long *)(local_58 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_58 = (char *)0x0;
                Memory::free_static(pcVar14 + -0x10,false);
              }
            }
            lVar16 = local_90;
            if (local_90 != 0) {
              LOCK();
              plVar2 = (long *)(local_90 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_90 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            lVar16 = local_a0;
            if (local_a0 != 0) {
              LOCK();
              plVar2 = (long *)(local_a0 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_a0 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
LAB_001021d0:
            lVar16 = local_98;
            if (local_98 != 0) {
              LOCK();
              plVar2 = (long *)(local_98 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_98 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            lVar16 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar2 = (long *)(local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            pcVar14 = local_c0;
            *(undefined8 *)(in_RDI + 8) = 0;
            if (local_c0 != (char *)0x0) {
              LOCK();
              plVar2 = (long *)(local_c0 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_c0 = (char *)0x0;
                Memory::free_static(pcVar14 + -0x10,false);
              }
            }
            lVar16 = local_c8;
            if (local_c8 != 0) {
              LOCK();
              plVar2 = (long *)(local_c8 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_c8 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            pcVar14 = local_d0;
            if (local_d0 != (char *)0x0) {
              LOCK();
              plVar2 = (long *)(local_d0 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_d0 = (char *)0x0;
                Memory::free_static(pcVar14 + -0x10,false);
              }
            }
            lVar16 = local_d8;
            if (local_d8 != 0) {
              LOCK();
              plVar2 = (long *)(local_d8 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_d8 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            lVar16 = local_e0;
            if (local_e0 != 0) {
              LOCK();
              plVar2 = (long *)(local_e0 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_e0 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            pOVar6 = local_e8;
            lVar16 = local_70;
            if (((local_e8 != (Object *)0x0) &&
                (cVar8 = RefCounted::unreference(), lVar16 = local_70, cVar8 != '\0')) &&
               (cVar8 = predelete_handler(pOVar6), lVar16 = local_70, cVar8 != '\0')) {
              (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
              Memory::free_static(pOVar6,false);
              lVar16 = local_70;
            }
            goto LAB_0010229f;
          }
LAB_00102300:
          cVar9 = String::begins_with((char *)&local_c0);
          iVar18 = (int)(String *)&local_c0;
          if (cVar9 == '\0') {
            cVar9 = String::begins_with((char *)&local_c0);
            if (cVar9 == '\0') {
              cVar9 = String::begins_with((char *)&local_c0);
              if (cVar9 == '\0') {
                cVar9 = String::begins_with((char *)&local_c0);
                if (cVar9 != '\0') {
                  if (iVar11 == 4) goto code_r0x00103349;
LAB_00102c65:
                  itos((long)&local_68);
                  local_58 = ":";
                  local_98 = 0;
                  local_50[0] = 1;
                  String::parse_latin1((StrRange *)&local_98);
                  operator+((char *)&local_a0,
                            "Unexpected \'msgstr[]\', was expecting \'msgid_plural\' before \'msgstr[]\' while parsing: "
                           );
                  String::operator+((String *)&local_90,(String *)&local_a0);
                  String::operator+((String *)&local_58,(String *)&local_90);
                  pcVar14 = 
                  "Condition \"status != STATUS_READING_PLURAL\" is true. Returning: Vector<Vector<String>>()"
                  ;
                  uVar15 = 0x110;
                  goto LAB_00102170;
                }
                cVar9 = String::begins_with((char *)&local_c0);
                if (cVar9 == '\0') goto LAB_001027dd;
                if (iVar11 != 1) goto LAB_00102a9a;
              }
              else {
                if (iVar11 == 1) {
                  itos((long)&local_68);
                  local_58 = ":";
                  local_98 = 0;
                  local_50[0] = 1;
                  String::parse_latin1((StrRange *)&local_98);
                  operator+((char *)&local_a0,
                            "Unexpected \'msgid\', was expecting \'msgstr\' while parsing: ");
                  String::operator+((String *)&local_90,(String *)&local_a0);
                  String::operator+((String *)&local_58,(String *)&local_90);
                  pcVar14 = 
                  "Condition \"status == STATUS_READING_ID\" is true. Returning: Vector<Vector<String>>()"
                  ;
                  uVar15 = 0xfa;
                  goto LAB_00102170;
                }
                if (((local_d8 != 0) && (1 < *(uint *)(local_d8 + -8))) && (local_f2 == '\0')) {
                  local_60 = 0;
                  plVar2 = (long *)(local_d8 + -0x10);
                  local_58 = (char *)0x0;
                  do {
                    lVar16 = *plVar2;
                    if (lVar16 == 0) goto LAB_00102eed;
                    LOCK();
                    lVar13 = *plVar2;
                    bVar20 = lVar16 == lVar13;
                    if (bVar20) {
                      *plVar2 = lVar16 + 1;
                      lVar13 = lVar16;
                    }
                    UNLOCK();
                  } while (!bVar20);
                  if (lVar13 != -1) {
                    local_58 = (char *)local_d8;
                  }
LAB_00102eed:
                  pcVar14 = local_58;
                  Vector<String>::push_back((Vector<String> *)&local_68);
                  if (pcVar14 != (char *)0x0) {
                    LOCK();
                    plVar2 = (long *)((long)pcVar14 + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      Memory::free_static((void *)((long)local_58 + -0x10),false);
                    }
                  }
                  local_58 = (char *)0x0;
                  plVar2 = (long *)(local_c8 + -0x10);
                  if (local_c8 == 0) {
                    Vector<String>::push_back((Vector<String> *)&local_68,(String *)&local_58);
                  }
                  else {
                    do {
                      lVar16 = *plVar2;
                      if (lVar16 == 0) goto LAB_00102f6d;
                      LOCK();
                      lVar13 = *plVar2;
                      bVar20 = lVar16 == lVar13;
                      if (bVar20) {
                        *plVar2 = lVar16 + 1;
                        lVar13 = lVar16;
                      }
                      UNLOCK();
                    } while (!bVar20);
                    if (lVar13 != -1) {
                      local_58 = (char *)local_c8;
                    }
LAB_00102f6d:
                    pcVar14 = local_58;
                    Vector<String>::push_back((Vector<String> *)&local_68);
                    if (pcVar14 != (char *)0x0) {
                      LOCK();
                      plVar2 = (long *)((long)pcVar14 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        Memory::free_static((void *)((long)local_58 + -0x10),false);
                      }
                    }
                  }
                  local_58 = (char *)0x0;
                  plVar2 = (long *)(local_d0 + -0x10);
                  if (local_d0 == (char *)0x0) {
                    Vector<String>::push_back((Vector<String> *)&local_68,(String *)&local_58);
                  }
                  else {
                    do {
                      lVar16 = *plVar2;
                      if (lVar16 == 0) goto LAB_00102fe5;
                      LOCK();
                      lVar13 = *plVar2;
                      bVar20 = lVar16 == lVar13;
                      if (bVar20) {
                        *plVar2 = lVar16 + 1;
                        lVar13 = lVar16;
                      }
                      UNLOCK();
                    } while (!bVar20);
                    if (lVar13 != -1) {
                      local_58 = local_d0;
                    }
LAB_00102fe5:
                    pcVar14 = local_58;
                    Vector<String>::push_back((Vector<String> *)&local_68);
                    if (pcVar14 != (char *)0x0) {
                      LOCK();
                      plVar2 = (long *)(pcVar14 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        Memory::free_static(local_58 + -0x10,false);
                      }
                    }
                  }
                  local_50[0] = 0;
                  if (local_60 != 0) {
                    CowData<String>::_ref((CowData<String> *)local_50,(CowData *)&local_60);
                  }
                  Vector<Vector<String>>::push_back(local_88,(String *)&local_58);
                  CowData<String>::_unref((CowData<String> *)local_50);
                  CowData<String>::_unref((CowData<String> *)&local_60);
                }
LAB_00102b5b:
                String::substr((int)&local_68,iVar18);
                String::strip_edges(bVar17,SUB81(&local_68,0));
                pcVar7 = local_58;
                pcVar14 = local_c0;
                if (local_c0 == local_58) {
                  if (local_c0 != (char *)0x0) {
                    LOCK();
                    plVar2 = (long *)(local_c0 + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      local_58 = (char *)0x0;
                      Memory::free_static(pcVar7 + -0x10,false);
                    }
                  }
                }
                else {
                  if (local_c0 != (char *)0x0) {
                    LOCK();
                    plVar2 = (long *)(local_c0 + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      local_c0 = (char *)0x0;
                      Memory::free_static(pcVar14 + -0x10,false);
                    }
                  }
                  local_c0 = local_58;
                }
                lVar16 = local_68;
                if (local_68 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_68 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_68 = 0;
                    Memory::free_static((void *)(lVar16 + -0x10),false);
                  }
                }
                if (local_f2 == '\0') {
                  local_58 = "";
                  local_50[0] = 0;
                  String::parse_latin1((StrRange *)&local_c8);
                }
                local_58 = "";
                local_50[0] = 0;
                String::parse_latin1((StrRange *)&local_d8);
                local_58 = "";
                local_50[0] = 0;
                String::parse_latin1((StrRange *)&local_d0);
                cVar9 = String::begins_with((char *)&local_c0);
                if (cVar9 != '\0') goto LAB_00102c65;
                cVar9 = String::begins_with((char *)&local_c0);
                local_f2 = '\0';
                if (cVar9 == '\0') {
                  iVar11 = 1;
                  goto LAB_001027dd;
                }
              }
              String::substr((int)&local_68,iVar18);
              String::strip_edges(bVar17,SUB81(&local_68,0));
              pcVar7 = local_58;
              pcVar14 = local_c0;
              if (local_c0 == local_58) {
                if (local_c0 != (char *)0x0) {
                  LOCK();
                  plVar2 = (long *)(local_c0 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_58 = (char *)0x0;
                    Memory::free_static(pcVar7 + -0x10,false);
                  }
                }
              }
              else {
                if (local_c0 != (char *)0x0) {
                  LOCK();
                  plVar2 = (long *)(local_c0 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_c0 = (char *)0x0;
                    Memory::free_static(pcVar14 + -0x10,false);
                  }
                }
                local_c0 = local_58;
              }
              lVar16 = local_68;
              if (local_68 != 0) {
                LOCK();
                plVar2 = (long *)(local_68 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_68 = 0;
                  Memory::free_static((void *)(lVar16 + -0x10),false);
                }
              }
              iVar11 = 2;
            }
            else {
              if (iVar11 != 1) {
LAB_0010242c:
                itos((long)&local_68);
                local_58 = ":";
                local_98 = 0;
                local_50[0] = 1;
                String::parse_latin1((StrRange *)&local_98);
                operator+((char *)&local_a0,
                          "Unexpected \'msgid_plural\', was expecting \'msgid\' before \'msgid_plural\' while parsing: "
                         );
                String::operator+((String *)&local_90,(String *)&local_a0);
                String::operator+((String *)&local_58,(String *)&local_90);
                pcVar14 = "Method/function failed. Returning: Vector<Vector<String>>()";
                uVar15 = 0xf5;
                goto LAB_00102170;
              }
              String::substr((int)&local_68,iVar18);
              String::strip_edges(bVar17,SUB81(&local_68,0));
              pcVar7 = local_58;
              pcVar14 = local_c0;
              if (local_c0 == local_58) {
                if (local_c0 != (char *)0x0) {
                  LOCK();
                  plVar2 = (long *)(local_c0 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_58 = (char *)0x0;
                    Memory::free_static(pcVar7 + -0x10,false);
                  }
                }
              }
              else {
                if (local_c0 != (char *)0x0) {
                  LOCK();
                  plVar2 = (long *)(local_c0 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_c0 = (char *)0x0;
                    Memory::free_static(pcVar14 + -0x10,false);
                  }
                }
                local_c0 = local_58;
              }
              lVar16 = local_68;
              if (local_68 != 0) {
                LOCK();
                plVar2 = (long *)(local_68 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_68 = 0;
                  Memory::free_static((void *)(lVar16 + -0x10),false);
                }
              }
              cVar9 = String::begins_with((char *)&local_c0);
              if (cVar9 == '\0') {
                cVar9 = String::begins_with((char *)&local_c0);
                if (cVar9 != '\0') {
LAB_00102a9a:
                  itos((long)&local_68);
                  local_58 = ":";
                  local_98 = 0;
                  local_50[0] = 1;
                  String::parse_latin1((StrRange *)&local_98);
                  operator+((char *)&local_a0,
                            "Unexpected \'msgstr\', was expecting \'msgid\' before \'msgstr\' while parsing: "
                           );
                  String::operator+((String *)&local_90,(String *)&local_a0);
                  String::operator+((String *)&local_58,(String *)&local_90);
                  pcVar14 = 
                  "Condition \"status != STATUS_READING_ID\" is true. Returning: Vector<Vector<String>>()"
                  ;
                  uVar15 = 0x114;
                  goto LAB_00102170;
                }
              }
              else {
code_r0x00103349:
                String::substr((int)&local_68,iVar18);
                String::strip_edges(bVar17,SUB81(&local_68,0));
                pcVar7 = local_58;
                pcVar14 = local_c0;
                if (local_c0 == local_58) {
                  if (local_c0 != (char *)0x0) {
                    LOCK();
                    plVar2 = (long *)(local_c0 + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      local_58 = (char *)0x0;
                      Memory::free_static(pcVar7 + -0x10,false);
                    }
                  }
                }
                else {
                  if (local_c0 != (char *)0x0) {
                    LOCK();
                    plVar2 = (long *)(local_c0 + -0x10);
                    *plVar2 = *plVar2 + -1;
                    UNLOCK();
                    if (*plVar2 == 0) {
                      local_c0 = (char *)0x0;
                      Memory::free_static(pcVar14 + -0x10,false);
                    }
                  }
                  local_c0 = local_58;
                }
                lVar16 = local_68;
                if (local_68 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_68 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_68 = 0;
                    Memory::free_static((void *)(lVar16 + -0x10),false);
                  }
                }
              }
              iVar11 = 4;
            }
          }
          else {
            if ((iVar11 - 2U & 0xfffffffd) != 0) {
              itos((long)&local_68);
              local_58 = ":";
              local_98 = 0;
              local_50[0] = 1;
              String::parse_latin1((StrRange *)&local_98);
              operator+((char *)&local_a0,
                        "Unexpected \'msgctxt\', was expecting \'msgid_plural\' or \'msgstr\' before \'msgctxt\' while parsing: "
                       );
              String::operator+((String *)&local_90,(String *)&local_a0);
              String::operator+((String *)&local_58,(String *)&local_90);
              pcVar14 = 
              "Condition \"status != STATUS_READING_STRING && status != STATUS_READING_PLURAL\" is true. Returning: Vector<Vector<String>>()"
              ;
              uVar15 = 0xe1;
              goto LAB_00102170;
            }
            if ((local_d8 != 0) && (1 < *(uint *)(local_d8 + -8))) {
              local_60 = 0;
              plVar2 = (long *)(local_d8 + -0x10);
              local_58 = (char *)0x0;
              do {
                lVar16 = *plVar2;
                if (lVar16 == 0) goto LAB_001028fa;
                LOCK();
                lVar13 = *plVar2;
                bVar20 = lVar16 == lVar13;
                if (bVar20) {
                  *plVar2 = lVar16 + 1;
                  lVar13 = lVar16;
                }
                UNLOCK();
              } while (!bVar20);
              if (lVar13 != -1) {
                local_58 = (char *)local_d8;
              }
LAB_001028fa:
              pcVar14 = local_58;
              Vector<String>::push_back((Vector<String> *)&local_68);
              if (pcVar14 != (char *)0x0) {
                LOCK();
                plVar2 = (long *)((long)pcVar14 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  Memory::free_static((void *)((long)local_58 + -0x10),false);
                }
              }
              local_58 = (char *)0x0;
              plVar2 = (long *)(local_c8 + -0x10);
              if (local_c8 == 0) {
                Vector<String>::push_back((Vector<String> *)&local_68,(String *)&local_58);
              }
              else {
                do {
                  lVar16 = *plVar2;
                  if (lVar16 == 0) goto LAB_0010297a;
                  LOCK();
                  lVar13 = *plVar2;
                  bVar20 = lVar16 == lVar13;
                  if (bVar20) {
                    *plVar2 = lVar16 + 1;
                    lVar13 = lVar16;
                  }
                  UNLOCK();
                } while (!bVar20);
                if (lVar13 != -1) {
                  local_58 = (char *)local_c8;
                }
LAB_0010297a:
                pcVar14 = local_58;
                Vector<String>::push_back((Vector<String> *)&local_68);
                if (pcVar14 != (char *)0x0) {
                  LOCK();
                  plVar2 = (long *)((long)pcVar14 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    Memory::free_static((void *)((long)local_58 + -0x10),false);
                  }
                }
              }
              local_58 = (char *)0x0;
              plVar2 = (long *)(local_d0 + -0x10);
              if (local_d0 == (char *)0x0) {
                Vector<String>::push_back((Vector<String> *)&local_68,(String *)&local_58);
              }
              else {
                do {
                  lVar16 = *plVar2;
                  if (lVar16 == 0) goto LAB_001029f2;
                  LOCK();
                  lVar13 = *plVar2;
                  bVar20 = lVar16 == lVar13;
                  if (bVar20) {
                    *plVar2 = lVar16 + 1;
                    lVar13 = lVar16;
                  }
                  UNLOCK();
                } while (!bVar20);
                if (lVar13 != -1) {
                  local_58 = local_d0;
                }
LAB_001029f2:
                pcVar14 = local_58;
                Vector<String>::push_back((Vector<String> *)&local_68);
                if (pcVar14 != (char *)0x0) {
                  LOCK();
                  plVar2 = (long *)(pcVar14 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    Memory::free_static(local_58 + -0x10,false);
                  }
                }
              }
              local_50[0] = 0;
              if (local_60 != 0) {
                CowData<String>::_ref((CowData<String> *)local_50,(CowData *)&local_60);
              }
              Vector<Vector<String>>::push_back(local_88,(String *)&local_58);
              CowData<String>::_unref((CowData<String> *)local_50);
              CowData<String>::_unref((CowData<String> *)&local_60);
            }
            local_50[0] = 0;
            local_58 = "";
            String::parse_latin1((StrRange *)&local_c8);
            String::substr((int)&local_68,iVar18);
            String::strip_edges(bVar17,SUB81(&local_68,0));
            pcVar7 = local_58;
            pcVar14 = local_c0;
            if (local_c0 == local_58) {
              if (local_c0 != (char *)0x0) {
                LOCK();
                plVar2 = (long *)(local_c0 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_58 = (char *)0x0;
                  Memory::free_static(pcVar7 + -0x10,false);
                }
              }
            }
            else {
              if (local_c0 != (char *)0x0) {
                LOCK();
                plVar2 = (long *)(local_c0 + -0x10);
                *plVar2 = *plVar2 + -1;
                UNLOCK();
                if (*plVar2 == 0) {
                  local_c0 = (char *)0x0;
                  Memory::free_static(pcVar14 + -0x10,false);
                }
              }
              local_c0 = local_58;
            }
            lVar16 = local_68;
            if (local_68 != 0) {
              LOCK();
              plVar2 = (long *)(local_68 + -0x10);
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (*plVar2 == 0) {
                local_68 = 0;
                Memory::free_static((void *)(lVar16 + -0x10),false);
              }
            }
            cVar10 = String::begins_with((char *)&local_c0);
            if (cVar10 != '\0') goto LAB_0010242c;
            local_f2 = String::begins_with((char *)&local_c0);
            if (local_f2 != '\0') goto LAB_00102b5b;
            cVar10 = String::begins_with((char *)&local_c0);
            if (cVar10 != '\0') goto LAB_00102c65;
            cVar10 = String::begins_with((char *)&local_c0);
            if (cVar10 != '\0') goto LAB_00102a9a;
            iVar11 = 3;
            local_f2 = cVar9;
          }
LAB_001027dd:
          if (local_c0 != (char *)0x0) {
            if (1 < *(uint *)(local_c0 + -8)) {
              cVar9 = String::begins_with((char *)&local_c0);
              if (cVar9 == '\0') {
                cVar9 = String::begins_with((char *)&local_c0);
                if (cVar9 == '\x01' && iVar11 != 0) {
                  iVar19 = (int)(String *)&local_58;
                  String::substr(iVar19,iVar18);
                  pcVar7 = local_58;
                  pcVar14 = local_c0;
                  if (local_c0 == local_58) {
                    if (local_58 != (char *)0x0) {
                      LOCK();
                      plVar2 = (long *)(local_58 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_58 = (char *)0x0;
                        Memory::free_static(pcVar7 + -0x10,false);
                      }
                      goto LAB_0010351c;
                    }
                  }
                  else {
                    if (local_c0 != (char *)0x0) {
                      LOCK();
                      plVar2 = (long *)(local_c0 + -0x10);
                      *plVar2 = *plVar2 + -1;
                      UNLOCK();
                      if (*plVar2 == 0) {
                        local_c0 = (char *)0x0;
                        Memory::free_static(pcVar14 + -0x10,false);
                      }
                    }
                    local_c0 = local_58;
LAB_0010351c:
                    if (local_c0 != (char *)0x0) {
                      lVar16 = *(long *)(local_c0 + -8);
                      if ((int)lVar16 != 0) {
                        bVar17 = false;
                        lVar13 = 0;
LAB_00103ad0:
                        if ((int)lVar16 + -1 <= (int)lVar13) goto LAB_0010352e;
                        if (lVar16 == lVar13) {
LAB_00103aff:
                          bVar17 = false;
LAB_00103b01:
                          lVar13 = lVar13 + 1;
                          goto LAB_00103ad0;
                        }
                        if (lVar16 <= lVar13) {
                          _err_print_index_error
                                    ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar16,"p_index"
                                     ,"size()","",false,true);
                          _err_flush_stdout();
                    /* WARNING: Does not return */
                          pcVar5 = (code *)invalidInstructionException();
                          (*pcVar5)();
                        }
                        if ((*(int *)(local_c0 + lVar13 * 4) == 0x5c) && (!bVar17)) {
                          bVar17 = true;
                          goto LAB_00103b01;
                        }
                        if ((*(int *)(local_c0 + lVar13 * 4) != 0x22) || (bVar17))
                        goto LAB_00103aff;
                        String::substr(iVar19,iVar18);
                        pcVar7 = local_58;
                        pcVar14 = local_c0;
                        if (local_c0 == local_58) {
                          if (local_c0 != (char *)0x0) {
                            LOCK();
                            plVar2 = (long *)(local_c0 + -0x10);
                            *plVar2 = *plVar2 + -1;
                            UNLOCK();
                            if (*plVar2 == 0) {
                              local_58 = (char *)0x0;
                              Memory::free_static(pcVar7 + -0x10,false);
                            }
                          }
                        }
                        else {
                          if (local_c0 != (char *)0x0) {
                            LOCK();
                            plVar2 = (long *)(local_c0 + -0x10);
                            *plVar2 = *plVar2 + -1;
                            UNLOCK();
                            if (*plVar2 == 0) {
                              local_c0 = (char *)0x0;
                              Memory::free_static(pcVar14 + -0x10,false);
                            }
                          }
                          local_c0 = local_58;
                        }
                        String::c_unescape();
                        pcVar7 = local_58;
                        pcVar14 = local_c0;
                        if (local_c0 == local_58) {
                          if (local_c0 != (char *)0x0) {
                            LOCK();
                            plVar2 = (long *)(local_c0 + -0x10);
                            *plVar2 = *plVar2 + -1;
                            UNLOCK();
                            if (*plVar2 == 0) {
                              local_58 = (char *)0x0;
                              Memory::free_static(pcVar7 + -0x10,false);
                            }
                          }
                        }
                        else {
                          if (local_c0 != (char *)0x0) {
                            LOCK();
                            plVar2 = (long *)(local_c0 + -0x10);
                            *plVar2 = *plVar2 + -1;
                            UNLOCK();
                            if (*plVar2 == 0) {
                              local_c0 = (char *)0x0;
                              Memory::free_static(pcVar14 + -0x10,false);
                            }
                          }
                          local_c0 = local_58;
                        }
                        if (iVar11 == 1) {
                          String::operator+=((String *)&local_d8,(String *)&local_c0);
                        }
                        else if (iVar11 == 3) {
                          String::operator+=((String *)&local_c8,(String *)&local_c0);
                        }
                        else if (iVar11 == 4) {
                          String::operator+=((String *)&local_d0,(String *)&local_c0);
                        }
                        goto joined_r0x00102e17;
                      }
                    }
                  }
LAB_0010352e:
                  itos((long)&local_68);
                  local_58 = ":";
                  local_98 = 0;
                  local_50[0] = 1;
                  String::parse_latin1((StrRange *)&local_98);
                  operator+((char *)&local_a0,"Expected \'\"\' at end of message while parsing: ");
                  String::operator+((String *)&local_90,(String *)&local_a0);
                  String::operator+((String *)&local_58,(String *)&local_90);
                  pcVar14 = 
                  "Condition \"end_pos == -1\" is true. Returning: Vector<Vector<String>>()";
                  uVar15 = 0x135;
                  goto LAB_00102170;
                }
                itos((long)&local_68);
                local_58 = ":";
                local_98 = 0;
                local_50[0] = 1;
                String::parse_latin1((StrRange *)&local_98);
                local_b0 = 0;
                local_58 = "\' while parsing: ";
                local_50[0] = 0x11;
                String::parse_latin1((StrRange *)&local_b0);
                operator+((char *)&local_b8,"Invalid line \'");
                String::operator+((String *)&local_a8,(String *)&local_b8);
                String::operator+((String *)&local_a0,(String *)&local_a8);
                String::operator+((String *)&local_90,(String *)&local_a0);
                String::operator+((String *)&local_58,(String *)&local_90);
                _err_print_error("get_extractable_message_list","editor/editor_translation.cpp",
                                 0x11f,
                                 "Condition \"!l.begins_with(\"\\\"\") || status == STATUS_NONE\" is true. Returning: Vector<Vector<String>>()"
                                 ,(String *)&local_58,0,0);
                pcVar14 = local_58;
                if (local_58 != (char *)0x0) {
                  LOCK();
                  plVar2 = (long *)(local_58 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_58 = (char *)0x0;
                    Memory::free_static(pcVar14 + -0x10,false);
                  }
                }
                lVar16 = local_90;
                if (local_90 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_90 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_90 = 0;
                    Memory::free_static((void *)(lVar16 + -0x10),false);
                  }
                }
                lVar16 = local_a0;
                if (local_a0 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_a0 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_a0 = 0;
                    Memory::free_static((void *)(lVar16 + -0x10),false);
                  }
                }
                lVar16 = local_a8;
                if (local_a8 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_a8 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_a8 = 0;
                    Memory::free_static((void *)(lVar16 + -0x10),false);
                  }
                }
                lVar16 = local_b8;
                if (local_b8 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_b8 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_b8 = 0;
                    Memory::free_static((void *)(lVar16 + -0x10),false);
                  }
                }
                lVar16 = local_b0;
                if (local_b0 != 0) {
                  LOCK();
                  plVar2 = (long *)(local_b0 + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    local_b0 = 0;
                    Memory::free_static((void *)(lVar16 + -0x10),false);
                  }
                }
                goto LAB_001021d0;
              }
joined_r0x00102e17:
              if (local_c0 == (char *)0x0) goto LAB_00102812;
            }
            pcVar14 = local_c0;
            LOCK();
            plVar2 = (long *)(local_c0 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              local_c0 = (char *)0x0;
              Memory::free_static(pcVar14 + -0x10,false);
            }
          }
LAB_00102812:
        } while (cVar8 == '\0');
        lVar16 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar2 = (long *)(local_c8 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        pcVar14 = local_d0;
        if (local_d0 != (char *)0x0) {
          LOCK();
          plVar2 = (long *)(local_d0 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_d0 = (char *)0x0;
            Memory::free_static(pcVar14 + -0x10,false);
          }
        }
        lVar16 = local_d8;
        if (local_d8 != 0) {
          LOCK();
          plVar2 = (long *)(local_d8 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_d8 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        lVar16 = local_e0;
        if (local_e0 != 0) {
          LOCK();
          plVar2 = (long *)(local_e0 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            local_e0 = 0;
            Memory::free_static((void *)(lVar16 + -0x10),false);
          }
        }
        pOVar6 = local_e8;
        if (((local_e8 != (Object *)0x0) && (cVar8 = RefCounted::unreference(), cVar8 != '\0')) &&
           (cVar8 = predelete_handler(pOVar6), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
        if (local_70 != 0) {
          LOCK();
          plVar2 = (long *)(local_70 + -0x10);
          *plVar2 = *plVar2 + -1;
          UNLOCK();
          if (*plVar2 == 0) {
            Memory::free_static((void *)(local_70 + -0x10),false);
            ppuVar1 = local_120 + 2;
            puVar12 = local_80[0];
            local_120 = local_120 + 3;
            if (*ppuVar1 == (undefined *)0x0) break;
            goto LAB_00101ec1;
          }
        }
      }
      ppuVar1 = local_120 + 2;
      puVar12 = local_80[0];
      local_120 = local_120 + 3;
    } while (*ppuVar1 != (undefined *)0x0);
  }
  local_80[0] = (undefined *)0x0;
  *(undefined **)(in_RDI + 8) = puVar12;
LAB_001022bf:
  CowData<Vector<String>>::_unref((CowData<Vector<String>> *)local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* FileAccess::get_path() const */

FileAccess * __thiscall FileAccess::get_path(FileAccess *this)

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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

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

void FUN_0010404c(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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



/* void Ref<FileAccessMemory>::instantiate<>() */

void __thiscall Ref<FileAccessMemory>::instantiate<>(Ref<FileAccessMemory> *this)

{
  char cVar1;
  RefCounted *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (RefCounted *)operator_new(0x1a8,"");
  RefCounted::RefCounted(this_00);
  *(undefined2 *)(this_00 + 0x17c) = 0;
  *(undefined4 *)(this_00 + 0x180) = 2;
  *(undefined2 *)(this_00 + 0x184) = 0;
  *(code **)this_00 = RefCounted::init_ref;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
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
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (RefCounted *)pOVar3) goto LAB_0010414d;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_0010414d;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_0010414d:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
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
LAB_00104630:
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
  if (lVar10 == 0) goto LAB_00104630;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00104509:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00104509;
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
    goto LAB_00104686;
  }
  if (lVar10 == lVar7) {
LAB_001045af:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00104686:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010459a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_001045af;
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
LAB_0010459a:
  puVar9[-1] = param_1;
  return 0;
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
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar4 = 0;
    lVar7 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar4 * 0x10;
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
LAB_00104f80:
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
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_00104f80;
  uVar6 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
        if (lVar9 != lVar7) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      CowData<String>::_unref((CowData<String> *)(lVar4 + 8 + uVar6 * 0x10));
      uVar6 = uVar6 + 1;
    }
    goto LAB_00104fd6;
  }
  if (lVar9 == lVar7) {
LAB_00104ef3:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00104fd6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar5[-1];
    if (param_1 <= lVar4) goto LAB_00104e51;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00104ef3;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar4 = 0;
  }
  puVar2 = puVar5 + lVar4 * 2;
  do {
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
  } while (puVar2 != puVar5 + param_1 * 2);
LAB_00104e51:
  puVar5[-1] = param_1;
  return 0;
}


