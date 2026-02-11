
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



/* ImageLoaderSVG::get_recognized_extensions(List<String, DefaultAllocator>*) const */

void __thiscall ImageLoaderSVG::get_recognized_extensions(ImageLoaderSVG *this,List *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar4) [16];
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC6;
  local_30 = 3;
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



/* ImageLoaderSVG::ImageLoaderSVG() */

void __thiscall ImageLoaderSVG::ImageLoaderSVG(ImageLoaderSVG *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_00105400;
  Image::_svg_scalable_mem_loader_func = load_mem_svg;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ImageLoaderSVG::_replace_color_property(HashMap<Color, Color, HashMapHasherDefault,
   HashMapComparatorDefault<Color>, DefaultTypedAllocator<HashMapElement<Color, Color> > > const&,
   String const&, String&) */

void ImageLoaderSVG::_replace_color_property(HashMap *param_1,String *param_2,String *param_3)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  code *pcVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  wchar32 wVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar7 = String::find(param_3,(int)param_2);
LAB_0010035d:
  if (iVar7 != -1) {
    while( true ) {
      wVar9 = (wchar32)param_3;
      iVar7 = String::find_char(wVar9,0x22);
      if (iVar7 == -1) {
        local_70 = 0;
        plVar1 = (long *)(*(long *)param_2 + -0x10);
        if (*(long *)param_2 != 0) goto LAB_001006ed;
        goto LAB_0010070e;
      }
      String::substr((int)(String *)&local_a0,wVar9);
      cVar6 = String::operator!=((String *)&local_a0,"none");
      if ((cVar6 != '\0') && (cVar6 = String::begins_with((char *)&local_a0), cVar6 == '\0')) {
        local_58 = __LC20;
        uStack_50 = _UNK_00105768;
        cVar6 = Color::html_is_valid((String *)&local_a0);
        if (cVar6 == '\0') {
          local_58 = Color::named((String *)&local_a0);
        }
        else {
          local_58 = Color::html((String *)&local_a0);
        }
        local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
        cVar6 = HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                ::_lookup_pos((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                               *)param_1,(Color *)&local_58,(uint *)&local_68);
        if (cVar6 != '\0') {
          String::substr((int)&local_70,wVar9);
          local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
          cVar6 = HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                  ::_lookup_pos((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                                 *)param_1,(Color *)&local_58,(uint *)&local_68);
          if (cVar6 == '\0') {
            _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                             "FATAL: Condition \"!exists\" is true.",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          Color::to_html(SUB81(&local_80,0));
          local_68 = "#";
          local_90 = 0;
          local_60 = 1;
          String::parse_latin1((StrRange *)&local_90);
          String::left((int)(String *)&local_98);
          String::operator+((String *)&local_88,(String *)&local_98);
          String::operator+((String *)&local_78,(String *)&local_88);
          String::operator+((String *)&local_68,(String *)&local_78);
          pcVar5 = local_68;
          pcVar2 = *(char **)param_3;
          if (pcVar2 == local_68) {
            if (pcVar2 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(pcVar2 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_68 = (char *)0x0;
                Memory::free_static(pcVar5 + -0x10,false);
              }
            }
          }
          else {
            if (pcVar2 != (char *)0x0) {
              LOCK();
              plVar1 = (long *)(pcVar2 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)param_3;
                *(undefined8 *)param_3 = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            *(char **)param_3 = local_68;
          }
          lVar3 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar3 = local_88;
          if (local_88 != 0) {
            LOCK();
            plVar1 = (long *)(local_88 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_88 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar3 = local_98;
          if (local_98 != 0) {
            LOCK();
            plVar1 = (long *)(local_98 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_98 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar3 = local_90;
          if (local_90 != 0) {
            LOCK();
            plVar1 = (long *)(local_90 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_90 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar3 = local_80;
          if (local_80 != 0) {
            LOCK();
            plVar1 = (long *)(local_80 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_80 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar3 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
        }
      }
      iVar7 = String::find(param_3,(int)param_2);
      lVar3 = local_a0;
      if (local_a0 == 0) break;
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) break;
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      if (iVar7 == -1) goto LAB_001003f0;
    }
    goto LAB_0010035d;
  }
  goto LAB_001003f0;
LAB_001006ed:
  do {
    lVar3 = *plVar1;
    if (lVar3 == 0) goto LAB_0010070e;
    LOCK();
    lVar8 = *plVar1;
    bVar10 = lVar3 == lVar8;
    if (bVar10) {
      *plVar1 = lVar3 + 1;
      lVar8 = lVar3;
    }
    UNLOCK();
  } while (!bVar10);
  if (lVar8 != -1) {
    local_70 = *(long *)param_2;
  }
LAB_0010070e:
  local_78 = 0;
  local_60 = 0x29;
  local_68 = "Malformed SVG string after property \"%s\".";
  String::parse_latin1((StrRange *)&local_78);
  vformat<String>(&local_68,(StrRange *)&local_78,&local_70);
  _err_print_error("_replace_color_property","modules/svg/image_loader_svg.cpp",0x39,
                   "Condition \"end_pos == -1\" is true.",&local_68,0);
  pcVar2 = local_68;
  if (local_68 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (char *)0x0;
      Memory::free_static(pcVar2 + -0x10,false);
    }
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
LAB_001003f0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageLoaderSVG::set_forced_color_map(HashMap<Color, Color, HashMapHasherDefault,
   HashMapComparatorDefault<Color>, DefaultTypedAllocator<HashMapElement<Color, Color> > > const&)
    */

void ImageLoaderSVG::set_forced_color_map(HashMap *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar5;
  long in_FS_OFFSET;
  Color aCStack_38 [8];
  long local_30;
  ulong uVar4;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (HashMap *)forced_color_map) {
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)(uint)forced_color_map._40_4_ * 4);
    if ((forced_color_map._44_4_ != 0) && (forced_color_map._8_8_ != 0)) {
      if (uVar3 != 0) {
        lVar5 = 0;
        do {
          if (*(int *)(forced_color_map._16_8_ + lVar5) != 0) {
            *(int *)(forced_color_map._16_8_ + lVar5) = 0;
            Memory::free_static(*(void **)(forced_color_map._8_8_ + lVar5 * 2),false);
            *(undefined8 *)(forced_color_map._8_8_ + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar3 * 4 - lVar5 != 0);
        uVar3 = *(uint *)(hash_table_size_primes + (ulong)(uint)forced_color_map._40_4_ * 4);
      }
      forced_color_map._44_4_ = 0;
      forced_color_map._24_16_ = (undefined1  [16])0x0;
    }
    uVar2 = forced_color_map._40_4_;
    if (uVar3 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4)) {
      if (forced_color_map._40_4_ != 0x1c) {
        uVar4 = (ulong)(uint)forced_color_map._40_4_;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar3;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x28) * 4) <=
              *(uint *)(hash_table_size_primes + uVar4 * 4)) {
            if ((uVar3 != forced_color_map._40_4_) && (uVar2 = uVar3, forced_color_map._8_8_ != 0))
            {
              HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
              ::_resize_and_rehash
                        ((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                          *)forced_color_map,uVar3);
              uVar2 = forced_color_map._40_4_;
            }
            goto LAB_00100971;
          }
        } while (uVar3 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
      uVar2 = forced_color_map._40_4_;
    }
LAB_00100971:
    forced_color_map._40_4_ = uVar2;
    if (*(long *)(param_1 + 8) != 0) {
      for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
        ::insert(aCStack_38,(Color *)forced_color_map,(bool)((char)puVar1 + '\x10'));
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00100c46:
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
    if (lVar10 == 0) goto LAB_00100c46;
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
    FUN_00102048();
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
      goto LAB_00100b9c;
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
LAB_00100b9c:
  puVar8[-1] = param_1;
  return;
}



/* ImageLoaderSVG::create_image_from_utf8_buffer(Ref<Image>, unsigned char const*, int, float, bool)
    */

undefined8
ImageLoaderSVG::create_image_from_utf8_buffer
          (float param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  long *plVar1;
  Picture *pPVar2;
  bool bVar3;
  Picture *pPVar4;
  SwCanvas *pSVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  float fVar11;
  float fVar12;
  int local_9c;
  float local_98;
  float local_94;
  Picture *local_90;
  SwCanvas *local_88;
  Picture *local_80;
  long local_78;
  long local_70;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 local_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined4 uStack_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (ABS(param_1) < _LC39) {
    uVar9 = 0x1f;
    _err_print_error("create_image_from_utf8_buffer","modules/svg/image_loader_svg.cpp",0x51,
                     "Condition \"Math::is_zero_approx(p_scale)\" is true. Returning: ERR_INVALID_PARAMETER"
                     ,"ImageLoaderSVG: Can\'t load SVG with a scale of 0.",0,0);
    goto LAB_00100d6a;
  }
  tvg::Picture::gen();
  local_58 = 0x7673;
  uStack_56 = 0x67;
  local_60 = 3;
  uStack_55 = 0;
  local_68 = &local_58;
  iVar6 = tvg::Picture::load((char *)local_90,param_3,(string *)(ulong)param_4,SUB81(&local_68,0));
  if (local_68 != &local_58) {
    operator_delete(local_68,CONCAT44(uStack_54,CONCAT13(uStack_55,CONCAT12(uStack_56,local_58))) +
                             1);
  }
  uVar9 = 0x1e;
  if (iVar6 == 0) {
    tvg::Picture::size((float *)local_90,&local_98);
    fVar11 = roundf(param_1 * local_98);
    if (fVar11 < _LC38) {
      fVar11 = roundf(param_1 * local_94);
      if (_LC38 <= fVar11) {
        uVar8 = 1;
        uVar10 = (long)fVar11 & 0xffffffff;
        bVar3 = 0x4000 < (uint)(long)fVar11;
        goto joined_r0x00100ff2;
      }
      lVar7 = 4;
      local_9c = 1;
      uVar10 = 1;
      uVar8 = 1;
      fVar11 = _LC38;
      fVar12 = _LC38;
    }
    else {
      uVar8 = (long)fVar11 & 0xffffffff;
      fVar12 = roundf(param_1 * local_94);
      uVar10 = 1;
      bVar3 = 0x4000 < (uint)(long)fVar11;
      if (_LC38 <= fVar12) {
        uVar10 = (long)fVar12 & 0xffffffff;
        if (bVar3 || 0x4000 < (uint)(long)fVar12) goto LAB_00100ff8;
      }
      else {
joined_r0x00100ff2:
        if (bVar3) {
LAB_00100ff8:
          String::utf8((char *)&local_80,0x104790);
          vformat<unsigned_int,unsigned_int,float,unsigned_int,unsigned_int>
                    ((String *)&local_78,(uint)&local_80,(uint)uVar8,param_1,(uint)uVar10,0x4000);
          _err_print_error("create_image_from_utf8_buffer","modules/svg/image_loader_svg.cpp",0x61,
                           (String *)&local_78,0,1);
          lVar7 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar7 + -0x10),false);
            }
          }
          pPVar4 = local_80;
          if (local_80 != (Picture *)0x0) {
            LOCK();
            pPVar2 = local_80 + -0x10;
            *(long *)pPVar2 = *(long *)pPVar2 + -1;
            UNLOCK();
            if (*(long *)pPVar2 == 0) {
              local_80 = (Picture *)0x0;
              Memory::free_static(pPVar4 + -0x10,false);
            }
          }
          if (0x4000 < (uint)uVar8) {
            uVar8 = 0x4000;
          }
          if (0x4000 < (uint)uVar10) {
            uVar10 = 0x4000;
          }
        }
      }
      local_9c = (int)uVar8;
      lVar7 = uVar8 * uVar10 * 4;
      fVar11 = (float)(int)uVar10;
      fVar12 = (float)local_9c;
    }
    tvg::Picture::size(fVar12,fVar11);
    tvg::SwCanvas::gen();
    local_70 = 0;
    CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_70,lVar7);
    pSVar5 = local_88;
    CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_70);
    iVar6 = tvg::SwCanvas::target(pSVar5,local_70,uVar8,uVar8,uVar10,2);
    pPVar4 = local_90;
    if (iVar6 == 0) {
      local_90 = (Picture *)0x0;
      local_80 = pPVar4;
      iVar6 = tvg::Canvas::push(local_88,&local_80);
      if (local_80 != (Picture *)0x0) {
        (**(code **)(*(long *)local_80 + 8))();
      }
      if (iVar6 != 0) {
        _err_print_error("create_image_from_utf8_buffer","modules/svg/image_loader_svg.cpp",0x75,
                         "Method/function failed. Returning: FAILED",
                         "ImageLoaderSVG: Couldn\'t insert ThorVG picture on canvas.",0,0);
        goto LAB_00101102;
      }
      iVar6 = tvg::Canvas::draw();
      if (iVar6 != 0) {
        _err_print_error("create_image_from_utf8_buffer","modules/svg/image_loader_svg.cpp",0x7a,
                         "Method/function failed. Returning: FAILED",
                         "ImageLoaderSVG: Couldn\'t draw ThorVG pictures on canvas.",0,0);
        goto LAB_00101102;
      }
      iVar6 = tvg::Canvas::sync();
      if (iVar6 != 0) {
        _err_print_error("create_image_from_utf8_buffer","modules/svg/image_loader_svg.cpp",0x7f,
                         "Method/function failed. Returning: FAILED",
                         "ImageLoaderSVG: Couldn\'t sync ThorVG canvas.",0,0);
        goto LAB_00101102;
      }
      uVar9 = 0;
      Image::set_data(*param_2,local_9c,uVar10,0,5,&local_78);
      tvg::Canvas::clear(SUB81(local_88,0));
    }
    else {
      _err_print_error("create_image_from_utf8_buffer","modules/svg/image_loader_svg.cpp",0x70,
                       "Method/function failed. Returning: FAILED",
                       "ImageLoaderSVG: Couldn\'t set target on ThorVG canvas.",0,0);
LAB_00101102:
      uVar9 = 1;
    }
    lVar7 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
    if (local_88 != (SwCanvas *)0x0) {
      tvg::SwCanvas::~SwCanvas(local_88);
    }
  }
  if (local_90 != (Picture *)0x0) {
    tvg::Picture::~Picture(local_90);
  }
LAB_00100d6a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageLoaderSVG::load_mem_svg(unsigned char const*, int, float) */

ImageLoaderSVG * __thiscall
ImageLoaderSVG::load_mem_svg(ImageLoaderSVG *this,uchar *param_1,int param_2,float param_3)

{
  Resource *pRVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  Resource *this_00;
  long lVar5;
  Resource *pRVar6;
  long in_FS_OFFSET;
  byte bVar7;
  long local_60;
  Resource *local_58;
  undefined8 local_50;
  long local_40;
  
  bVar7 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Resource *)operator_new(0x268,"");
  pRVar6 = this_00;
  for (lVar5 = 0x4d; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pRVar6 = 0;
    pRVar6 = pRVar6 + (ulong)bVar7 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  this_00[0x260] = (Resource)0x0;
  *(code **)this_00 = strlen;
  *(undefined4 *)(this_00 + 0x240) = 0;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  postinitialize_handler((Object *)this_00);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
LAB_001012f1:
    this_00 = (Resource *)0x0;
LAB_001012fc:
    local_58 = (Resource *)0x0;
    iVar4 = create_image_from_utf8_buffer(param_3,&local_58,param_1,param_2,0);
    if (iVar4 == 0) {
      if (this_00 == (Resource *)0x0) {
        *(undefined8 *)this = 0;
        goto LAB_0010132e;
      }
      goto LAB_0010138a;
    }
LAB_001013c0:
    local_60 = 0;
    local_58 = (Resource *)0x104940;
    local_50 = 0x40;
    String::parse_latin1((StrRange *)&local_60);
    vformat<Error>(&local_58,(StrRange *)&local_60,iVar4);
    _err_print_error("load_mem_svg","modules/svg/image_loader_svg.cpp",0x4b,
                     "Condition \"err != OK\" is true. Returning: Ref<Image>()",&local_58,0,0);
    pRVar6 = local_58;
    if (local_58 != (Resource *)0x0) {
      LOCK();
      pRVar1 = local_58 + -0x10;
      *(long *)pRVar1 = *(long *)pRVar1 + -1;
      UNLOCK();
      if (*(long *)pRVar1 == 0) {
        local_58 = (Resource *)0x0;
        Memory::free_static(pRVar6 + -0x10,false);
      }
    }
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar2 = (long *)(local_60 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    *(undefined8 *)this = 0;
    if (this_00 == (Resource *)0x0) goto LAB_0010132e;
  }
  else {
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        memdelete<Image>((Image *)this_00);
      }
      goto LAB_001012f1;
    }
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>((Image *)this_00);
    }
    local_58 = this_00;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') goto LAB_001012fc;
    iVar4 = create_image_from_utf8_buffer(param_3,&local_58,param_1,param_2,0);
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>((Image *)this_00);
    }
    if (iVar4 != 0) goto LAB_001013c0;
LAB_0010138a:
    *(Resource **)this = this_00;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)this = 0;
    }
  }
  cVar3 = RefCounted::unreference();
  if (cVar3 != '\0') {
    memdelete<Image>((Image *)this_00);
  }
LAB_0010132e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* ImageLoaderSVG::create_image_from_utf8_buffer(Ref<Image>, Vector<unsigned char> const&, float,
   bool) */

undefined4
ImageLoaderSVG::create_image_from_utf8_buffer
          (undefined4 param_1,undefined8 *param_2,long param_3,undefined1 param_4)

{
  long lVar1;
  Image *pIVar2;
  char cVar3;
  undefined4 uVar4;
  long in_FS_OFFSET;
  Image *local_38;
  long local_30;
  
  lVar1 = *(long *)(param_3 + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar1 + -8);
  }
  pIVar2 = (Image *)*param_2;
  if ((pIVar2 == (Image *)0x0) ||
     (local_38 = pIVar2, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    local_38 = (Image *)0x0;
    uVar4 = create_image_from_utf8_buffer(param_1,&local_38,lVar1,uVar4,param_4);
  }
  else {
    uVar4 = create_image_from_utf8_buffer(param_1,&local_38,lVar1,uVar4,param_4);
    cVar3 = RefCounted::unreference();
    if (cVar3 != '\0') {
      memdelete<Image>(pIVar2);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* ImageLoaderSVG::create_image_from_string(Ref<Image>, String, float, bool, HashMap<Color, Color,
   HashMapHasherDefault, HashMapComparatorDefault<Color>,
   DefaultTypedAllocator<HashMapElement<Color, Color> > > const&) */

undefined4
ImageLoaderSVG::create_image_from_string
          (undefined4 param_1,undefined8 *param_2,String *param_3,undefined1 param_4,
          HashMap *param_5)

{
  long *plVar1;
  Image *pIVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  Image *local_60;
  char *local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(param_5 + 0x2c) != 0) {
    local_58 = "stop-color=\"";
    local_60 = (Image *)0x0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_60);
    _replace_color_property(param_5,(String *)&local_60,param_3);
    pIVar2 = local_60;
    if (local_60 != (Image *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = (Image *)0x0;
        Memory::free_static((void *)((long)pIVar2 + -0x10),false);
      }
    }
    local_60 = (Image *)0x0;
    local_58 = "fill=\"";
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_60);
    _replace_color_property(param_5,(String *)&local_60,param_3);
    pIVar2 = local_60;
    if (local_60 != (Image *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = (Image *)0x0;
        Memory::free_static((void *)((long)pIVar2 + -0x10),false);
      }
    }
    local_60 = (Image *)0x0;
    local_58 = "stroke=\"";
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_60);
    _replace_color_property(param_5,(String *)&local_60,param_3);
    pIVar2 = local_60;
    if (local_60 != (Image *)0x0) {
      LOCK();
      plVar1 = (long *)((long)local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = (Image *)0x0;
        Memory::free_static((void *)((long)pIVar2 + -0x10),false);
      }
    }
  }
  String::to_utf8_buffer();
  pIVar2 = (Image *)*param_2;
  if (pIVar2 != (Image *)0x0) {
    cVar3 = RefCounted::reference();
    lVar5 = local_50;
    if (cVar3 != '\0') {
      if (local_50 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(undefined4 *)(local_50 + -8);
      }
      local_60 = pIVar2;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        local_60 = (Image *)0x0;
        uVar4 = create_image_from_utf8_buffer(param_1,(StrRange *)&local_60,lVar5,uVar4,param_4);
      }
      else {
        uVar4 = create_image_from_utf8_buffer(param_1,(StrRange *)&local_60,lVar5,uVar4,param_4);
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          memdelete<Image>(pIVar2);
        }
      }
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        memdelete<Image>(pIVar2);
      }
      goto LAB_00101643;
    }
  }
  if (local_50 == 0) {
    uVar4 = 0;
    lVar5 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(local_50 + -8);
    lVar5 = local_50;
  }
  local_60 = (Image *)0x0;
  uVar4 = create_image_from_utf8_buffer(param_1,(StrRange *)&local_60,lVar5,uVar4,param_4);
LAB_00101643:
  lVar5 = local_50;
  if (local_50 != 0) {
    LOCK();
    plVar1 = (long *)(local_50 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageLoaderSVG::load_image(Ref<Image>, Ref<FileAccess>, BitField<ImageFormatLoader::LoaderFlags>,
   float) */

int ImageLoaderSVG::load_image
              (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,ulong param_4)

{
  Image *pIVar1;
  Image *pIVar2;
  long *plVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  Image *local_a0;
  Image *local_98;
  Image *local_90 [2];
  long local_80;
  Image *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = (**(code **)(*(long *)*param_3 + 0x1d0))();
  lVar8 = (**(code **)(*(long *)*param_3 + 0x1c8))();
  local_80 = 0;
  CowData<unsigned_char>::resize<false>((CowData<unsigned_char> *)&local_80,lVar7 - lVar8);
  plVar3 = (long *)*param_3;
  pcVar4 = *(code **)(*plVar3 + 0x220);
  if (local_80 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(undefined8 *)(local_80 + -8);
  }
  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char> *)&local_80);
  lVar7 = local_80;
  (*pcVar4)(plVar3,local_80,uVar10);
  local_a0 = (Image *)0x0;
  if (lVar7 == 0) {
    uVar9 = false;
  }
  else {
    uVar9 = (undefined1)*(undefined4 *)(lVar7 + -8);
  }
  iVar6 = String::parse_utf8((char *)&local_a0,(int)lVar7,(bool)uVar9);
  if (iVar6 == 0) {
    if ((param_4 & 2) == 0) {
      pIVar1 = local_a0 + -0x10;
      local_50 = 2;
      local_90[0] = (Image *)0x0;
      local_70 = (undefined1  [16])0x0;
      local_60 = (undefined1  [16])0x0;
      if (local_a0 != (Image *)0x0) {
        do {
          lVar7 = *(long *)pIVar1;
          if (lVar7 == 0) goto LAB_00101b3c;
          LOCK();
          lVar8 = *(long *)pIVar1;
          bVar11 = lVar7 == lVar8;
          if (bVar11) {
            *(long *)pIVar1 = lVar7 + 1;
            lVar8 = lVar7;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar8 != -1) {
          local_90[0] = local_a0;
        }
      }
LAB_00101b3c:
      pIVar1 = (Image *)*param_2;
      if ((pIVar1 == (Image *)0x0) ||
         (local_98 = pIVar1, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        local_98 = (Image *)0x0;
        iVar6 = create_image_from_string(&local_98,local_90,0,&local_78);
      }
      else {
        iVar6 = create_image_from_string(&local_98,local_90,0,&local_78);
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          memdelete<Image>(pIVar1);
        }
      }
      pIVar1 = local_90[0];
      if (local_90[0] != (Image *)0x0) {
        LOCK();
        pIVar2 = local_90[0] + -0x10;
        *(long *)pIVar2 = *(long *)pIVar2 + -1;
        UNLOCK();
        if (*(long *)pIVar2 == 0) {
          local_90[0] = (Image *)0x0;
          Memory::free_static(pIVar1 + -0x10,false);
        }
      }
      if ((void *)local_70._0_8_ != (void *)0x0) {
        uVar10 = local_70._8_8_;
        Memory::free_static((void *)local_70._0_8_,false);
        Memory::free_static((void *)uVar10,false);
      }
    }
    else {
      local_78 = (Image *)0x0;
      pIVar1 = local_a0 + -0x10;
      if (local_a0 != (Image *)0x0) {
        do {
          lVar7 = *(long *)pIVar1;
          if (lVar7 == 0) goto LAB_001019d8;
          LOCK();
          lVar8 = *(long *)pIVar1;
          bVar11 = lVar7 == lVar8;
          if (bVar11) {
            *(long *)pIVar1 = lVar7 + 1;
            lVar8 = lVar7;
          }
          UNLOCK();
        } while (!bVar11);
        if (lVar8 != -1) {
          local_78 = local_a0;
        }
      }
LAB_001019d8:
      pIVar1 = (Image *)*param_2;
      if ((pIVar1 == (Image *)0x0) ||
         (local_90[0] = pIVar1, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        local_90[0] = (Image *)0x0;
        iVar6 = create_image_from_string(local_90,&local_78,0,forced_color_map);
      }
      else {
        iVar6 = create_image_from_string(local_90,&local_78,0,forced_color_map);
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          memdelete<Image>(pIVar1);
        }
      }
      pIVar1 = local_78;
      if (local_78 != (Image *)0x0) {
        LOCK();
        pIVar2 = local_78 + -0x10;
        *(long *)pIVar2 = *(long *)pIVar2 + -1;
        UNLOCK();
        if (*(long *)pIVar2 == 0) {
          local_78 = (Image *)0x0;
          Memory::free_static(pIVar1 + -0x10,false);
        }
      }
    }
    if (iVar6 == 0) {
      cVar5 = Image::is_empty();
      if (cVar5 == '\0') {
        if ((param_4 & 1) != 0) {
          Image::srgb_to_linear();
        }
      }
      else {
        iVar6 = 0x1e;
      }
    }
  }
  pIVar1 = local_a0;
  if (local_a0 != (Image *)0x0) {
    LOCK();
    pIVar2 = local_a0 + -0x10;
    *(long *)pIVar2 = *(long *)pIVar2 + -1;
    UNLOCK();
    if (*(long *)pIVar2 == 0) {
      local_a0 = (Image *)0x0;
      Memory::free_static(pIVar1 + -0x10,false);
    }
  }
  if (local_80 != 0) {
    LOCK();
    plVar3 = (long *)(local_80 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      Memory::free_static((void *)(local_80 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar6;
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
  return (uint)CONCAT71(0x1055,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1055,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* ImageFormatLoader::is_class_ptr(void*) const */

uint __thiscall ImageFormatLoader::is_class_ptr(ImageFormatLoader *this,void *param_1)

{
  return (uint)CONCAT71(0x1055,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1055,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1055,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ImageFormatLoader::_getv(StringName const&, Variant&) const */

undefined8 ImageFormatLoader::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageFormatLoader::_setv(StringName const&, Variant const&) */

undefined8 ImageFormatLoader::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageFormatLoader::_validate_propertyv(PropertyInfo&) const */

void ImageFormatLoader::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ImageFormatLoader::_property_can_revertv(StringName const&) const */

undefined8 ImageFormatLoader::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ImageFormatLoader::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ImageFormatLoader::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ImageFormatLoader::_notificationv(int, bool) */

void ImageFormatLoader::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001052a0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001052a0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* ImageLoaderSVG::~ImageLoaderSVG() */

void __thiscall ImageLoaderSVG::~ImageLoaderSVG(ImageLoaderSVG *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001052a0;
  Object::~Object((Object *)this);
  return;
}



/* ImageLoaderSVG::~ImageLoaderSVG() */

void __thiscall ImageLoaderSVG::~ImageLoaderSVG(ImageLoaderSVG *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001052a0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
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

void FUN_00102048(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* ImageFormatLoader::_get_class_namev() const */

undefined8 * ImageFormatLoader::_get_class_namev(void)

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
LAB_001020a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001020a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ImageFormatLoader");
      goto LAB_0010210e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ImageFormatLoader");
LAB_0010210e:
  return &_get_class_namev()::_class_name_static;
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
LAB_00102243:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102243;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_001022ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_001022ae:
  return &_get_class_namev()::_class_name_static;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = strlen;
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



/* ImageFormatLoader::get_class() const */

void ImageFormatLoader::get_class(void)

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
            if (lVar5 == 0) goto LAB_0010256f;
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
LAB_0010256f:
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
    if (cVar6 != '\0') goto LAB_00102623;
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
              if (lVar5 == 0) goto LAB_001026d3;
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
LAB_001026d3:
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
      if (cVar6 != '\0') goto LAB_00102623;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00102623:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ImageFormatLoader::is_class(String const&) const */

undefined8 __thiscall ImageFormatLoader::is_class(ImageFormatLoader *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001027ff;
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
LAB_001027ff:
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
    if (cVar5 != '\0') goto LAB_001028b3;
  }
  cVar5 = String::operator==(param_1,"ImageFormatLoader");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001028b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
LAB_00102c18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102c18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102c36;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102c36:
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
LAB_00103018:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103018;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103035;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103035:
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



/* ImageFormatLoader::_initialize_classv() */

void ImageFormatLoader::_initialize_classv(void)

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
  if (initialize_class()::initialized != '\0') goto LAB_0010345b;
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
LAB_0010356a:
      if ((code *)PTR__bind_methods_00108010 != RefCounted::_bind_methods) {
LAB_0010357a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010356a;
      local_68 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)PTR__bind_methods_00108010 != RefCounted::_bind_methods) goto LAB_0010357a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_58 = "RefCounted";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
  local_58 = "ImageFormatLoader";
  local_70 = 0;
  local_50 = 0x11;
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
  if ((code *)PTR__bind_methods_00108008 != RefCounted::_bind_methods) {
    ImageFormatLoader::_bind_methods();
  }
  initialize_class()::initialized = '\x01';
LAB_0010345b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = strlen;
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



/* WARNING: Removing unreachable block (ram,0x001037e8) */
/* WARNING: Removing unreachable block (ram,0x00103918) */
/* WARNING: Removing unreachable block (ram,0x00103ae0) */
/* WARNING: Removing unreachable block (ram,0x00103924) */
/* WARNING: Removing unreachable block (ram,0x0010392e) */
/* WARNING: Removing unreachable block (ram,0x00103ac0) */
/* WARNING: Removing unreachable block (ram,0x0010393a) */
/* WARNING: Removing unreachable block (ram,0x00103944) */
/* WARNING: Removing unreachable block (ram,0x00103aa0) */
/* WARNING: Removing unreachable block (ram,0x00103950) */
/* WARNING: Removing unreachable block (ram,0x0010395a) */
/* WARNING: Removing unreachable block (ram,0x00103a80) */
/* WARNING: Removing unreachable block (ram,0x00103966) */
/* WARNING: Removing unreachable block (ram,0x00103970) */
/* WARNING: Removing unreachable block (ram,0x00103a60) */
/* WARNING: Removing unreachable block (ram,0x0010397c) */
/* WARNING: Removing unreachable block (ram,0x00103986) */
/* WARNING: Removing unreachable block (ram,0x00103a40) */
/* WARNING: Removing unreachable block (ram,0x00103992) */
/* WARNING: Removing unreachable block (ram,0x0010399c) */
/* WARNING: Removing unreachable block (ram,0x00103a20) */
/* WARNING: Removing unreachable block (ram,0x001039a4) */
/* WARNING: Removing unreachable block (ram,0x001039ba) */
/* WARNING: Removing unreachable block (ram,0x001039c6) */
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



/* WARNING: Removing unreachable block (ram,0x00103c28) */
/* WARNING: Removing unreachable block (ram,0x00103d58) */
/* WARNING: Removing unreachable block (ram,0x00103f20) */
/* WARNING: Removing unreachable block (ram,0x00103d64) */
/* WARNING: Removing unreachable block (ram,0x00103d6e) */
/* WARNING: Removing unreachable block (ram,0x00103f00) */
/* WARNING: Removing unreachable block (ram,0x00103d7a) */
/* WARNING: Removing unreachable block (ram,0x00103d84) */
/* WARNING: Removing unreachable block (ram,0x00103ee0) */
/* WARNING: Removing unreachable block (ram,0x00103d90) */
/* WARNING: Removing unreachable block (ram,0x00103d9a) */
/* WARNING: Removing unreachable block (ram,0x00103ec0) */
/* WARNING: Removing unreachable block (ram,0x00103da6) */
/* WARNING: Removing unreachable block (ram,0x00103db0) */
/* WARNING: Removing unreachable block (ram,0x00103ea0) */
/* WARNING: Removing unreachable block (ram,0x00103dbc) */
/* WARNING: Removing unreachable block (ram,0x00103dc6) */
/* WARNING: Removing unreachable block (ram,0x00103e80) */
/* WARNING: Removing unreachable block (ram,0x00103dd2) */
/* WARNING: Removing unreachable block (ram,0x00103ddc) */
/* WARNING: Removing unreachable block (ram,0x00103e60) */
/* WARNING: Removing unreachable block (ram,0x00103de4) */
/* WARNING: Removing unreachable block (ram,0x00103dfa) */
/* WARNING: Removing unreachable block (ram,0x00103e06) */
/* String vformat<Error>(String const&, Error const) */

undefined8 * vformat<Error>(undefined8 *param_1,bool *param_2,int param_3)

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



/* WARNING: Removing unreachable block (ram,0x001040e0) */
/* WARNING: Removing unreachable block (ram,0x00104210) */
/* WARNING: Removing unreachable block (ram,0x00104388) */
/* WARNING: Removing unreachable block (ram,0x0010421c) */
/* WARNING: Removing unreachable block (ram,0x00104226) */
/* WARNING: Removing unreachable block (ram,0x0010436a) */
/* WARNING: Removing unreachable block (ram,0x00104232) */
/* WARNING: Removing unreachable block (ram,0x0010423c) */
/* WARNING: Removing unreachable block (ram,0x0010434c) */
/* WARNING: Removing unreachable block (ram,0x00104248) */
/* WARNING: Removing unreachable block (ram,0x00104252) */
/* WARNING: Removing unreachable block (ram,0x0010432e) */
/* WARNING: Removing unreachable block (ram,0x0010425e) */
/* WARNING: Removing unreachable block (ram,0x00104268) */
/* WARNING: Removing unreachable block (ram,0x00104310) */
/* WARNING: Removing unreachable block (ram,0x00104274) */
/* WARNING: Removing unreachable block (ram,0x0010427e) */
/* WARNING: Removing unreachable block (ram,0x001042f2) */
/* WARNING: Removing unreachable block (ram,0x00104286) */
/* WARNING: Removing unreachable block (ram,0x00104290) */
/* WARNING: Removing unreachable block (ram,0x001042d7) */
/* WARNING: Removing unreachable block (ram,0x00104298) */
/* WARNING: Removing unreachable block (ram,0x001042ad) */
/* WARNING: Removing unreachable block (ram,0x001042b9) */
/* String vformat<unsigned int, unsigned int, float, unsigned int, unsigned int>(String const&,
   unsigned int const, unsigned int const, float const, unsigned int const, unsigned int const) */

String * vformat<unsigned_int,unsigned_int,float,unsigned_int,unsigned_int>
                   (String *param_1,uint param_2,uint param_3,float param_4,uint param_5,
                   uint param_6)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  undefined4 in_register_00000034;
  int iVar4;
  uint in_R9D;
  long in_FS_OFFSET;
  Array local_128 [8];
  undefined8 local_120 [9];
  Variant local_d8 [24];
  Variant local_c0 [24];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_d8,param_3);
  Variant::Variant(local_c0,param_5);
  Variant::Variant(local_a8,param_4);
  Variant::Variant(local_90,param_6);
  iVar2 = 0;
  Variant::Variant(local_78,in_R9D);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_128);
  iVar4 = (int)local_128;
  Array::resize(iVar4);
  pVVar3 = local_d8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 5);
  String::sprintf((Array *)local_120,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_120[0];
  pVVar3 = local_48;
  Array::~Array(local_128);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
                  goto LAB_001043e5;
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
LAB_001043e5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    *(code **)param_1 = strlen;
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



/* HashMap<Color, Color, HashMapHasherDefault, HashMapComparatorDefault<Color>,
   DefaultTypedAllocator<HashMapElement<Color, Color> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
::_resize_and_rehash
          (HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
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
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Color, Color, HashMapHasherDefault, HashMapComparatorDefault<Color>,
   DefaultTypedAllocator<HashMapElement<Color, Color> > >::insert(Color const&, Color const&, bool)
    */

Color * HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
        ::insert(Color *param_1,Color *param_2,bool param_3)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  void *__s;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 (*pauVar16) [16];
  char cVar17;
  uint uVar18;
  undefined8 uVar19;
  void *__s_00;
  ulong uVar20;
  undefined8 *in_RCX;
  int iVar21;
  undefined7 in_register_00000011;
  Color *pCVar22;
  long lVar23;
  uint uVar24;
  char in_R8B;
  uint uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  long in_FS_OFFSET;
  uint local_b8;
  undefined1 (*local_98) [16];
  uint local_84;
  long local_80 [3];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  pCVar22 = (Color *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar28 = (ulong)uVar18;
    uVar20 = uVar28 * 4;
    uVar19 = Memory::alloc_static(uVar20,false);
    *(undefined8 *)(param_2 + 0x10) = uVar19;
    uVar26 = uVar28 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar26,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar18 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar26 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar20))) {
        uVar20 = 0;
        do {
          *(undefined4 *)((long)__s + uVar20 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar20 * 8) = 0;
          uVar20 = uVar20 + 1;
        } while (uVar28 != uVar20);
      }
      else {
        memset(__s,0,uVar20);
        memset(__s_00,0,uVar26);
      }
    }
  }
  local_84 = 0;
  cVar17 = _lookup_pos((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                        *)param_2,pCVar22,&local_84);
  if (cVar17 == '\0') {
    if ((float)uVar18 * __LC25 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
      if (*(int *)(param_2 + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_98 = (undefined1 (*) [16])0x0;
        goto LAB_00104fa0;
      }
      _resize_and_rehash((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                          *)param_2,*(int *)(param_2 + 0x28) + 1);
    }
    local_68 = *(undefined8 *)pCVar22;
    uStack_60 = *(undefined8 *)(pCVar22 + 8);
    local_58 = *in_RCX;
    uStack_50 = in_RCX[1];
    local_98 = (undefined1 (*) [16])operator_new(0x30,"");
    *local_98 = (undefined1  [16])0x0;
    *(undefined8 *)local_98[1] = local_68;
    *(undefined8 *)(local_98[1] + 8) = uStack_60;
    *(undefined8 *)local_98[2] = local_58;
    *(undefined8 *)(local_98[2] + 8) = uStack_50;
    puVar4 = *(undefined8 **)(param_2 + 0x20);
    if (puVar4 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(param_2 + 0x18) = local_98;
      *(undefined1 (**) [16])(param_2 + 0x20) = local_98;
    }
    else if (in_R8B == '\0') {
      *puVar4 = local_98;
      *(undefined8 **)(*local_98 + 8) = puVar4;
      *(undefined1 (**) [16])(param_2 + 0x20) = local_98;
    }
    else {
      lVar5 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar5 + 8) = local_98;
      *(long *)*local_98 = lVar5;
      *(undefined1 (**) [16])(param_2 + 0x18) = local_98;
    }
    Color::operator_cast_to_String((Color *)local_80);
    uVar18 = String::hash();
    lVar5 = local_80[0];
    uVar20 = (ulong)uVar18;
    if (local_80[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_80[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80[0] = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (uVar18 == 0) {
      uVar20 = 1;
    }
    uVar25 = 0;
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    uVar24 = (uint)uVar20;
    uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
    uVar26 = CONCAT44(0,uVar18);
    lVar6 = *(long *)(param_2 + 0x10);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar20 * lVar5;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar26;
    lVar23 = SUB168(auVar8 * auVar12,8);
    lVar7 = *(long *)(param_2 + 8);
    puVar2 = (uint *)(lVar6 + lVar23 * 4);
    iVar21 = SUB164(auVar8 * auVar12,8);
    uVar3 = *puVar2;
    pauVar16 = local_98;
    while (uVar3 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar3 * lVar5;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar26;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar18 + iVar21) - SUB164(auVar9 * auVar13,8)) * lVar5;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar26;
      local_b8 = SUB164(auVar10 * auVar14,8);
      pauVar27 = pauVar16;
      if (local_b8 < uVar25) {
        *puVar2 = (uint)uVar20;
        uVar20 = (ulong)uVar3;
        puVar4 = (undefined8 *)(lVar7 + lVar23 * 8);
        pauVar27 = (undefined1 (*) [16])*puVar4;
        *puVar4 = pauVar16;
        uVar25 = local_b8;
      }
      uVar24 = (uint)uVar20;
      uVar25 = uVar25 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar21 + 1) * lVar5;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar26;
      lVar23 = SUB168(auVar11 * auVar15,8);
      puVar2 = (uint *)(lVar6 + lVar23 * 4);
      iVar21 = SUB164(auVar11 * auVar15,8);
      pauVar16 = pauVar27;
      uVar3 = *puVar2;
    }
    *(undefined1 (**) [16])(lVar7 + lVar23 * 8) = pauVar16;
    *puVar2 = uVar24;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  else {
    uVar19 = in_RCX[1];
    local_98 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)local_84 * 8);
    *(undefined8 *)local_98[2] = *in_RCX;
    *(undefined8 *)(local_98[2] + 8) = uVar19;
  }
LAB_00104fa0:
  *(undefined1 (**) [16])param_1 = local_98;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* ImageLoaderSVG::forced_color_map */

void ImageLoaderSVG::_GLOBAL__sub_I_forced_color_map(void)

{
  forced_color_map._40_8_ = 2;
  forced_color_map._8_16_ = (undefined1  [16])0x0;
  forced_color_map._24_16_ = (undefined1  [16])0x0;
  __cxa_atexit(HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
               ::~HashMap,forced_color_map,&__dso_handle);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* ImageLoaderSVG::~ImageLoaderSVG() */

void __thiscall ImageLoaderSVG::~ImageLoaderSVG(ImageLoaderSVG *this)

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


