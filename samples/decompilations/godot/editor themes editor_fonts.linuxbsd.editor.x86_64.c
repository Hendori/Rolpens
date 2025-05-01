
/* void Ref<Font>::TEMPNAMEPLACEHOLDERVALUE(Ref<FontVariation> const&) [clone .isra.0] */

void __thiscall Ref<Font>::operator=(Ref<Font> *this,Ref *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Font::typeinfo,0);
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



/* void Ref<Font>::TEMPNAMEPLACEHOLDERVALUE(Ref<FontFile> const&) [clone .isra.0] */

void __thiscall Ref<Font>::operator=(Ref<Font> *this,Ref *param_1)

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
    pOVar3 = (Object *)__dynamic_cast(param_1,&Object::typeinfo,&Font::typeinfo,0);
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



/* load_external_font(String const&, TextServer::Hinting, TextServer::FontAntialiasing, bool,
   TextServer::SubpixelPositioning, bool, bool, TypedArray<Font>*) */

undefined8 *
load_external_font(undefined8 *param_1,Error *param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8,
                  Variant *param_9)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  FontFile *this;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  String local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  this = (FontFile *)operator_new(0x340,"");
  FontFile::FontFile(this);
  postinitialize_handler((Object *)this);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    pOVar4 = (Object *)*param_1;
    if (pOVar4 == (Object *)0x0) goto LAB_00100274;
    *param_1 = 0;
    cVar3 = RefCounted::unreference();
    if (cVar3 == '\0') goto LAB_00100274;
    this = (FontFile *)0x0;
    cVar3 = predelete_handler(pOVar4);
    if (cVar3 == '\0') goto LAB_00100274;
LAB_0010042a:
    (**(code **)(*(long *)pOVar4 + 0x140))();
    Memory::free_static(pOVar4,false);
    pOVar5 = (Object *)this;
    if (this == (FontFile *)0x0) goto LAB_00100274;
  }
  else {
    pOVar4 = (Object *)*param_1;
    pOVar5 = pOVar4;
    if (this != (FontFile *)pOVar4) {
      *param_1 = this;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        *param_1 = 0;
      }
      pOVar5 = (Object *)this;
      if (((pOVar4 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar4), cVar3 != '\0')) goto LAB_0010042a;
    }
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_00100274:
  FileAccess::get_file_as_bytes(local_68,param_2);
  (**(code **)(*(long *)*param_1 + 0x310))((long *)*param_1,local_68);
  (**(code **)(*(long *)*param_1 + 0x378))((long *)*param_1,param_8);
  (**(code **)(*(long *)*param_1 + 0x348))((long *)*param_1,param_4);
  (**(code **)(*(long *)*param_1 + 1000))((long *)*param_1,param_3);
  (**(code **)(*(long *)*param_1 + 0x3d8))((long *)*param_1,param_5);
  (**(code **)(*(long *)*param_1 + 0x3f8))((long *)*param_1,param_6);
  (**(code **)(*(long *)*param_1 + 0x358))();
  if (param_9 != (Variant *)0x0) {
    Variant::Variant((Variant *)local_58,(Object *)*param_1);
    Array::push_back(param_9);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* load_system_font(Vector<String> const&, TextServer::Hinting, TextServer::FontAntialiasing, bool,
   TextServer::SubpixelPositioning, bool, bool, TypedArray<Font>*) */

undefined8 *
load_system_font(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                Variant *param_9)

{
  char cVar1;
  SystemFont *this;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  this = (SystemFont *)operator_new(0x348,"");
  SystemFont::SystemFont(this);
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar2 = (Object *)*param_1;
    if (pOVar2 == (Object *)0x0) goto LAB_00100547;
    *param_1 = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      this = (SystemFont *)0x0;
      cVar1 = predelete_handler(pOVar2);
      if (cVar1 != '\0') {
LAB_001006c2:
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
        pOVar3 = (Object *)this;
        if (this != (SystemFont *)0x0) goto LAB_0010064e;
      }
    }
  }
  else {
    pOVar2 = (Object *)*param_1;
    pOVar3 = pOVar2;
    if (this != (SystemFont *)pOVar2) {
      *param_1 = this;
      cVar1 = RefCounted::reference();
      pOVar3 = (Object *)this;
      if (cVar1 == '\0') {
        *param_1 = 0;
        if (pOVar2 != (Object *)0x0) {
          cVar1 = RefCounted::unreference();
joined_r0x0010069f:
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0'))
          goto LAB_001006c2;
        }
      }
      else if (pOVar2 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        goto joined_r0x0010069f;
      }
    }
LAB_0010064e:
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      pOVar2 = (Object *)*param_1;
      goto LAB_00100547;
    }
  }
  pOVar2 = (Object *)*param_1;
LAB_00100547:
  (**(code **)(*(long *)pOVar2 + 0x3e0))(pOVar2,param_2);
  (**(code **)(*(long *)*param_1 + 0x3b0))((long *)*param_1,param_8);
  (**(code **)(*(long *)*param_1 + 800))((long *)*param_1,param_4);
  (**(code **)(*(long *)*param_1 + 0x370))((long *)*param_1,param_3);
  (**(code **)(*(long *)*param_1 + 0x360))((long *)*param_1,param_5);
  (**(code **)(*(long *)*param_1 + 0x380))((long *)*param_1,param_6);
  (**(code **)(*(long *)*param_1 + 0x330))((long *)*param_1,param_7);
  if (param_9 != (Variant *)0x0) {
    Variant::Variant((Variant *)local_58,(Object *)*param_1);
    Array::push_back(param_9);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* load_internal_font(unsigned char const*, unsigned long, TextServer::Hinting,
   TextServer::FontAntialiasing, bool, TextServer::SubpixelPositioning, bool, bool,
   TypedArray<Font>*) */

undefined8 *
load_internal_font(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6,undefined4 param_7,undefined1 param_8,
                  undefined1 param_9,Variant *param_10)

{
  char cVar1;
  FontFile *this;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = 0;
  this = (FontFile *)operator_new(0x340,"");
  FontFile::FontFile(this);
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar2 = (Object *)*param_1;
    if (pOVar2 == (Object *)0x0) goto LAB_001007d9;
    *param_1 = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      this = (FontFile *)0x0;
      cVar1 = predelete_handler(pOVar2);
      if (cVar1 != '\0') {
LAB_0010095a:
        (**(code **)(*(long *)pOVar2 + 0x140))();
        Memory::free_static(pOVar2,false);
        pOVar3 = (Object *)this;
        if (this != (FontFile *)0x0) goto LAB_001008e6;
      }
    }
  }
  else {
    pOVar2 = (Object *)*param_1;
    pOVar3 = pOVar2;
    if (this != (FontFile *)pOVar2) {
      *param_1 = this;
      cVar1 = RefCounted::reference();
      pOVar3 = (Object *)this;
      if (cVar1 == '\0') {
        *param_1 = 0;
        if (pOVar2 != (Object *)0x0) {
          cVar1 = RefCounted::unreference();
joined_r0x00100937:
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0'))
          goto LAB_0010095a;
        }
      }
      else if (pOVar2 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        goto joined_r0x00100937;
      }
    }
LAB_001008e6:
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      pOVar2 = (Object *)*param_1;
      goto LAB_001007d9;
    }
  }
  pOVar2 = (Object *)*param_1;
LAB_001007d9:
  (**(code **)(*(long *)pOVar2 + 0x308))(pOVar2,param_2,param_3);
  (**(code **)(*(long *)*param_1 + 0x378))((long *)*param_1,param_9);
  (**(code **)(*(long *)*param_1 + 0x348))((long *)*param_1,param_5);
  (**(code **)(*(long *)*param_1 + 1000))((long *)*param_1,param_4);
  (**(code **)(*(long *)*param_1 + 0x3d8))((long *)*param_1,param_6);
  (**(code **)(*(long *)*param_1 + 0x3f8))((long *)*param_1,param_7);
  (**(code **)(*(long *)*param_1 + 0x358))((long *)*param_1,param_8);
  if (param_10 != (Variant *)0x0) {
    Variant::Variant((Variant *)local_58,(Object *)*param_1);
    Array::push_back(param_10);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* make_bold_font(Ref<Font> const&, double, TypedArray<Font>*) */

Ref * make_bold_font(Ref *param_1,double param_2,TypedArray *param_3)

{
  Variant *in_RDX;
  long in_FS_OFFSET;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  Ref<FontVariation>::instantiate<>((Ref<FontVariation> *)param_1);
  (**(code **)(**(long **)param_1 + 0x308))(*(long **)param_1,param_3);
  (**(code **)(**(long **)param_1 + 0x330))((float)param_2);
  if (in_RDX != (Variant *)0x0) {
    Variant::Variant((Variant *)local_38,*(Object **)param_1);
    Array::push_back(in_RDX);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* editor_register_fonts(Ref<Theme> const&) */

void editor_register_fonts(Ref *param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  Object *pOVar10;
  long *plVar11;
  Object *pOVar12;
  Object *pOVar13;
  Ref *pRVar14;
  long lVar15;
  Variant *pVVar16;
  StringName *pSVar17;
  long lVar18;
  String *pSVar19;
  code *pcVar20;
  String *pSVar21;
  Ref *pRVar22;
  long in_FS_OFFSET;
  uint uVar23;
  Ref *local_2e0;
  Ref *local_2d0;
  Ref *local_2c8;
  Ref *local_2c0;
  Object *local_2b8;
  Ref *local_2b0;
  Ref *local_298;
  Ref *local_290;
  Ref *local_280;
  Ref *local_278;
  Ref *local_270;
  Object *local_238;
  Object *local_230;
  Object *local_228;
  undefined *local_220;
  undefined *local_218;
  Array local_210 [8];
  Object *local_208;
  Object *local_200;
  Object *local_1f8;
  Object *local_1f0;
  Object *local_1e8;
  Object *local_1e0;
  Object *local_1d8;
  Object *local_1d0;
  Object *local_1c8;
  Object *local_1c0;
  Object *local_1b8;
  Object *local_1b0;
  Object *local_1a8;
  Object *local_1a0;
  Object *local_198;
  Array local_190 [8];
  Object *local_188;
  Object *local_180;
  Object *local_178;
  Object *local_170;
  Object *local_168;
  Object *local_160;
  Object *local_158;
  Object *local_150;
  Object *local_148;
  Object *local_140;
  Object *local_138;
  Object *local_130;
  Object *local_128;
  Object *local_120;
  long local_118;
  long local_110;
  long local_108;
  Ref *local_100;
  Ref *local_f8;
  Ref *local_f0;
  Ref *local_e8;
  Ref *local_e0;
  Object *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  Object *local_b8;
  long local_b0;
  int local_a8 [8];
  ulong local_88;
  undefined1 auStack_80 [16];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_238,2);
  local_b8 = (Object *)0x108c30;
  local_c8 = 0;
  local_b0 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_68);
  iVar7 = Variant::operator_cast_to_int((Variant *)&local_68);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x10818e;
  local_c8 = 0;
  local_b0 = 0x1d;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_68);
  uVar8 = Variant::operator_cast_to_int((Variant *)&local_68);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x108c58;
  local_c8 = 0;
  local_b0 = 0x2a;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_68);
  iVar9 = Variant::operator_cast_to_int((Variant *)&local_68);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x108c88;
  local_c8 = 0;
  local_b0 = 0x2e;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_68);
  bVar4 = Variant::operator_cast_to_bool((Variant *)&local_68);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x108cb8;
  local_c8 = 0;
  local_b0 = 0x20;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_68);
  bVar5 = Variant::operator_cast_to_bool((Variant *)&local_68);
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (uVar8 == 1) {
    local_2b0._0_4_ = 0;
  }
  else {
    local_2b0._0_4_ = 2 - (uint)((uVar8 & 0xfffffffd) == 0);
  }
  bVar1 = uVar8 != 1;
  local_c8 = 0;
  local_b8 = (Object *)0x108ce0;
  local_b0 = 0x1f;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_68);
  Variant::operator_cast_to_int((Variant *)&local_68);
  EditorScale::get_scale();
  if (Variant::needs_deinit[(int)local_68] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  load_internal_font((StringName *)&local_b8,_font_NotoSans_Regular,0x24400,(int)local_2b0,iVar7,1,
                     iVar9,bVar4,0,0);
  pOVar12 = local_b8;
  local_230 = (Object *)0x0;
  if (local_b8 != (Object *)0x0) {
    pOVar10 = (Object *)__dynamic_cast(local_b8,&Object::typeinfo,&Font::typeinfo,0);
    if ((pOVar10 == (Object *)0x0) ||
       (local_230 = pOVar10, cVar6 = RefCounted::reference(), cVar6 != '\0')) {
      cVar6 = RefCounted::unreference();
    }
    else {
      local_230 = (Object *)0x0;
      cVar6 = RefCounted::unreference();
    }
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  load_internal_font((StringName *)&local_b8,_font_NotoSans_Regular,0x24400,(int)local_2b0,iVar7,1,
                     iVar9,bVar4,bVar5,0);
  pOVar12 = local_b8;
  local_228 = (Object *)0x0;
  if (local_b8 != (Object *)0x0) {
    pOVar10 = (Object *)__dynamic_cast(local_b8,&Object::typeinfo,&Font::typeinfo,0);
    if ((pOVar10 == (Object *)0x0) ||
       (local_228 = pOVar10, cVar6 = RefCounted::reference(), cVar6 != '\0')) {
      cVar6 = RefCounted::unreference();
    }
    else {
      local_228 = (Object *)0x0;
      cVar6 = RefCounted::unreference();
    }
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  local_220 = (undefined *)0x0;
  local_b8 = (Object *)&_LC21;
  local_218 = (undefined *)0x0;
  local_68 = 0;
  local_b0 = 2;
  String::parse_latin1((StrRange *)&local_68);
  local_b8 = (Object *)&_LC22;
  local_60 = 0;
  local_b0 = 2;
  String::parse_latin1((StrRange *)&local_60);
  local_b8 = (Object *)&_LC23;
  local_58 = 0;
  local_b0 = 2;
  String::parse_latin1((StrRange *)&local_58);
  local_b8 = (Object *)&_LC24;
  local_50 = 0;
  local_b0 = 2;
  String::parse_latin1((StrRange *)&local_50);
  local_b8 = (Object *)&_LC25;
  local_48 = 0;
  local_b0 = 2;
  String::parse_latin1((StrRange *)&local_48);
  pSVar19 = (String *)local_40;
  pSVar21 = (String *)&local_68;
  do {
    if ((local_220 == (undefined *)0x0) || (*(uint *)(local_220 + -8) < 2)) {
      plVar11 = (long *)OS::get_singleton();
      pcVar20 = *(code **)(*plVar11 + 0xf0);
      operator+((char *)&local_c8,(String *)"Noto Sans CJK ");
      if (pcVar20 == OS::get_system_font_path) {
        local_b8 = (Object *)0x0;
        if (local_220 != (undefined *)0x0) {
LAB_001012cd:
          puVar3 = local_220;
          LOCK();
          plVar11 = (long *)(local_220 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_220 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
          }
LAB_001012fc:
          local_220 = local_b8;
        }
      }
      else {
        (*pcVar20)((StringName *)&local_b8,plVar11,(StrRange *)&local_c8,400,100,0);
        pOVar12 = local_b8;
        if ((Object *)local_220 != local_b8) {
          if (local_220 != (undefined *)0x0) goto LAB_001012cd;
          goto LAB_001012fc;
        }
        if (local_220 != (undefined *)0x0) {
          LOCK();
          plVar11 = (long *)(local_220 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_b8 = (Object *)0x0;
            Memory::free_static(pOVar12 + -0x10,false);
          }
        }
      }
      lVar15 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar11 = (long *)(local_c8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
    }
    if ((local_218 == (undefined *)0x0) || (*(uint *)(local_218 + -8) < 2)) {
      plVar11 = (long *)OS::get_singleton();
      pcVar20 = *(code **)(*plVar11 + 0xf0);
      operator+((char *)&local_c8,(String *)"Noto Sans CJK ");
      if (pcVar20 == OS::get_system_font_path) {
        local_b8 = (Object *)0x0;
        if (local_218 != (undefined *)0x0) {
LAB_00101395:
          puVar3 = local_218;
          LOCK();
          plVar11 = (long *)(local_218 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_218 = (undefined *)0x0;
            Memory::free_static(puVar3 + -0x10,false);
          }
LAB_001013c4:
          local_218 = local_b8;
        }
      }
      else {
        (*pcVar20)((StringName *)&local_b8,plVar11,(StrRange *)&local_c8,800,100);
        pOVar12 = local_b8;
        if ((Object *)local_218 != local_b8) {
          if (local_218 != (undefined *)0x0) goto LAB_00101395;
          goto LAB_001013c4;
        }
        if (local_218 != (undefined *)0x0) {
          LOCK();
          plVar11 = (long *)(local_218 + -0x10);
          *plVar11 = *plVar11 + -1;
          UNLOCK();
          if (*plVar11 == 0) {
            local_b8 = (Object *)0x0;
            Memory::free_static(pOVar12 + -0x10,false);
          }
        }
      }
      lVar15 = local_c8;
      if (local_c8 != 0) {
        LOCK();
        plVar11 = (long *)(local_c8 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_c8 = 0;
          Memory::free_static((void *)(lVar15 + -0x10),false);
        }
      }
    }
    pSVar21 = pSVar21 + 8;
  } while (pSVar19 != pSVar21);
  Array::Array(local_210);
  auStack_80 = (undefined1  [16])0x0;
  local_b8 = (Object *)&_LC27;
  local_88 = 0;
  local_c8 = 0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
  Array::set_typed((uint)local_210,(StringName *)0x18,(Variant *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  load_internal_font(&local_208,_font_Vazirmatn_Regular,0xc5a4,(int)local_2b0,iVar7,1,iVar9,bVar4,0,
                     local_210);
  load_internal_font(&local_200,_font_NotoSansBengaliUI_Regular,47000,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_210);
  load_internal_font(&local_1f8,_font_NotoSansDevanagariUI_Regular,0xcaa8,(int)local_2b0,iVar7,1,
                     iVar9,bVar4,0,local_210);
  load_internal_font(&local_1f0,_font_NotoSansGeorgian_Regular,0x5b40,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_210);
  load_internal_font(&local_1e8,_font_NotoSansHebrew_Regular,0x1838,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_210);
  load_internal_font(&local_1e0,_font_NotoSansMalayalamUI_Regular,0x6948,(int)local_2b0,iVar7,1,
                     iVar9,bVar4,0,local_210);
  load_internal_font(&local_1d8,_font_NotoSansOriya_Regular,0x8cf4,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_210);
  load_internal_font(&local_1d0,_font_NotoSansSinhalaUI_Regular,0x9ee0,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_210);
  load_internal_font(&local_1c8,_font_NotoSansTamilUI_Regular,0x44c0,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_210);
  load_internal_font(&local_1c0,_font_NotoSansTeluguUI_Regular,0xadac,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_210);
  load_internal_font(&local_1b8,_font_NotoSansThai_Regular,0x2344,(int)local_2b0,iVar7,1,iVar9,bVar4
                     ,0,local_210);
  if ((local_220 != (undefined *)0x0) && (1 < *(uint *)(local_220 + -8))) {
    load_external_font((StringName *)&local_b8,&local_220,(int)local_2b0,iVar7,1,iVar9,bVar4,0,
                       local_210);
    Ref<FontFile>::unref((Ref<FontFile> *)&local_b8);
  }
  load_internal_font(&local_1b0,_font_DroidSansFallback,0x123260,(int)local_2b0,iVar7,1,iVar9,bVar4,
                     0,local_210);
  load_internal_font(&local_1a8,_font_DroidSansJapanese,0x6ddf0,(int)local_2b0,iVar7,1,iVar9,bVar4,0
                     ,local_210);
  (**(code **)(*(long *)local_230 + 0x1f0))(local_230,local_210);
  (**(code **)(*(long *)local_228 + 0x1f0))(local_228,local_210);
  load_internal_font(&local_1a0,_font_NotoSans_Bold,0x23b7c,(int)local_2b0,iVar7,1,iVar9,bVar4,0,0);
  load_internal_font(&local_198,_font_NotoSans_Bold,0x23b7c,(int)local_2b0,iVar7,1,iVar9,bVar4,bVar5
                     ,0);
  Array::Array(local_190);
  auStack_80 = (undefined1  [16])0x0;
  local_b8 = (Object *)&_LC27;
  local_88 = 0;
  local_c8 = 0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_c8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
  Array::set_typed((uint)local_190,(StringName *)0x18,(Variant *)&local_b8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  load_internal_font(&local_188,_font_Vazirmatn_Bold,0xc7f0,(int)local_2b0,iVar7,1,iVar9,bVar4,0,
                     local_190);
  load_internal_font(&local_180,_font_NotoSansBengaliUI_Bold,0xba58,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_190);
  load_internal_font(&local_178,_font_NotoSansDevanagariUI_Bold,0xcbf8,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_190);
  load_internal_font(&local_170,_font_NotoSansGeorgian_Bold,0x5de0,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_190);
  load_internal_font(&local_168,_font_NotoSansHebrew_Bold,0x1848,(int)local_2b0,iVar7,1,iVar9,bVar4,
                     0,local_190);
  load_internal_font(&local_160,_font_NotoSansMalayalamUI_Bold,0x6958,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_190);
  load_internal_font(&local_158,_font_NotoSansOriya_Bold,0x9104,(int)local_2b0,iVar7,1,iVar9,bVar4,0
                     ,local_190);
  load_internal_font(&local_150,_font_NotoSansSinhalaUI_Bold,0x9ff8,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_190);
  load_internal_font(&local_148,_font_NotoSansTamilUI_Bold,0x45b8,(int)local_2b0,iVar7,1,iVar9,bVar4
                     ,0,local_190);
  load_internal_font(&local_140,_font_NotoSansTeluguUI_Bold,0xb694,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,local_190);
  load_internal_font(&local_138,_font_NotoSansThai_Bold,0x22f4,(int)local_2b0,iVar7,1,iVar9,bVar4,0,
                     local_190);
  if ((local_218 != (undefined *)0x0) && (1 < *(uint *)(local_218 + -8))) {
    load_external_font((StringName *)&local_b8,&local_218,(int)local_2b0,iVar7,1,iVar9,bVar4,0,
                       local_190);
    Ref<FontFile>::unref((Ref<FontFile> *)&local_b8);
  }
  local_b8 = (Object *)0x0;
  if (((local_1b0 != (Object *)0x0) &&
      (pOVar12 = (Object *)__dynamic_cast(local_1b0,&Object::typeinfo,&Font::typeinfo,0),
      pOVar12 != (Object *)0x0)) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  make_bold_font((Ref *)&local_130,_LC28,(TypedArray *)&local_b8);
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  if (((local_1a8 != (Object *)0x0) &&
      (pOVar12 = (Object *)__dynamic_cast(local_1a8,&Object::typeinfo,&Font::typeinfo,0),
      pOVar12 != (Object *)0x0)) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  make_bold_font((Ref *)&local_128,_LC28,(TypedArray *)&local_b8);
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar21 = (String *)OS::get_singleton();
  local_c8 = 0;
  local_b0 = 0xc;
  local_b8 = (Object *)0x1081cf;
  String::parse_latin1((StrRange *)&local_c8);
  cVar6 = OS::has_feature(pSVar21);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (cVar6 != '\0') {
    local_c0 = 0;
    local_b8 = (Object *)0x1081dc;
    local_d0 = 0;
    local_b0 = 0x11;
    String::parse_latin1((StrRange *)&local_d0);
    Vector<String>::push_back((Vector<String> *)&local_c8,(Array *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    local_b8 = (Object *)0x1081ee;
    local_d0 = 0;
    local_b0 = 0xe;
    String::parse_latin1((StrRange *)&local_d0);
    Vector<String>::push_back((Vector<String> *)&local_c8,(Array *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    local_b8 = (Object *)0x1081fd;
    local_d0 = 0;
    local_b0 = 0x10;
    String::parse_latin1((StrRange *)&local_d0);
    Vector<String>::push_back((Vector<String> *)&local_c8,(Array *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    local_b8 = (Object *)0x10820e;
    local_d0 = 0;
    local_b0 = 0x13;
    String::parse_latin1((StrRange *)&local_d0);
    Vector<String>::push_back((Vector<String> *)&local_c8,(Array *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    local_b8 = (Object *)0x108222;
    local_d0 = 0;
    local_b0 = 8;
    String::parse_latin1((StrRange *)&local_d0);
    Vector<String>::push_back((Vector<String> *)&local_c8,(Array *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    local_b8 = (Object *)0x10822b;
    local_d0 = 0;
    local_b0 = 0xe;
    String::parse_latin1((StrRange *)&local_d0);
    Vector<String>::push_back((Vector<String> *)&local_c8,(Array *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    load_system_font((StringName *)&local_b8,(StrRange *)&local_c8,(int)local_2b0,iVar7,1,iVar9,
                     bVar4,0,0);
    pOVar12 = local_b8;
    Variant::Variant((Variant *)&local_88,local_b8);
    Array::push_back((Variant *)local_210);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_88,pOVar12);
    Array::push_back((Variant *)local_190);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    if (((pOVar12 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
    CowData<String>::_unref((CowData<String> *)&local_c0);
  }
  (**(code **)(*(long *)local_1a0 + 0x1f0))(local_1a0,local_190);
  (**(code **)(*(long *)local_198 + 0x1f0))(local_198,local_190);
  load_internal_font(&local_120,_font_JetBrainsMono_Regular,0x168e8,bVar1,iVar7,1,iVar9,bVar4,0,0);
  pOVar12 = local_120;
  (**(code **)(*(long *)local_120 + 0x1f0))(local_120,local_210);
  local_c8 = 0;
  local_b8 = (Object *)0x10823a;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_String((Variant *)&local_118);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x108d00;
  local_c8 = 0;
  local_b0 = 0x1f;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_String((Variant *)&local_110);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x108255;
  local_c8 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_String((Variant *)&local_108);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_100 = (Ref *)0x0;
  Ref<FontVariation>::instantiate<>((Ref<FontVariation> *)&local_100);
  pOVar10 = local_238;
  uVar8 = (uint)(Array *)&local_d0;
  if ((local_118 == 0) || (*(int *)(local_118 + -8) < 2)) {
LAB_001021c8:
    pSVar17 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)&local_88,"");
    StringName::StringName((StringName *)&local_b8,"interface/editor/main_font",false);
    EditorSettings::_set_only(pSVar17,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    local_2c0 = local_100;
    (**(code **)(*(long *)local_100 + 0x308))(local_100,&local_230);
  }
  else {
    pcVar20 = *(code **)(*(long *)local_238 + 0x1d0);
    local_b8 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
    cVar6 = (*pcVar20)(pOVar10,(StringName *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (cVar6 == '\0') goto LAB_001021c8;
    load_external_font(&local_d8,(Variant *)&local_118,(int)local_2b0,iVar7,1,iVar9,bVar4,0,0);
    Array::Array((Array *)&local_d0);
    auStack_80 = (undefined1  [16])0x0;
    local_b8 = (Object *)&_LC27;
    local_88 = 0;
    local_c8 = 0;
    local_b0 = 4;
    String::parse_latin1((StrRange *)&local_c8);
    StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
    Array::set_typed(uVar8,(StringName *)0x18,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_88,local_230);
    Array::push_back((Variant *)&local_d0);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    pOVar10 = local_d8;
    (**(code **)(*(long *)local_d8 + 0x1f0))(local_d8,(Array *)&local_d0);
    Array::~Array((Array *)&local_d0);
    pRVar22 = local_100;
    local_2c0 = local_100;
    pcVar20 = *(code **)(*(long *)local_100 + 0x308);
    local_b8 = (Object *)0x0;
    pOVar13 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Font::typeinfo,0);
    if ((pOVar13 != (Object *)0x0) &&
       (local_b8 = pOVar13, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_b8 = (Object *)0x0;
    }
    (*pcVar20)(pRVar22);
    if (((local_b8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar13 = local_b8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
  }
  pcVar20 = *(code **)(*(long *)local_2c0 + 0x368);
  uVar23 = EditorScale::get_scale();
  (*pcVar20)(local_2c0,2,(int)(float)(uVar23 ^ __LC39));
  pcVar20 = *(code **)(*(long *)local_2c0 + 0x368);
  uVar23 = EditorScale::get_scale();
  (*pcVar20)(local_2c0,3,(int)(float)(uVar23 ^ __LC39));
  local_f8 = (Ref *)0x0;
  Ref<FontVariation>::instantiate<>((Ref<FontVariation> *)&local_f8);
  pOVar10 = local_238;
  if ((local_118 == 0) || (*(int *)(local_118 + -8) < 2)) {
LAB_00102530:
    pSVar17 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)&local_88,"");
    StringName::StringName((StringName *)&local_b8,"interface/editor/main_font",false);
    EditorSettings::_set_only(pSVar17,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    local_290 = local_f8;
    (**(code **)(*(long *)local_f8 + 0x308))(local_f8,&local_228);
  }
  else {
    pcVar20 = *(code **)(*(long *)local_238 + 0x1d0);
    local_b8 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
    cVar6 = (*pcVar20)(pOVar10,(StringName *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (cVar6 == '\0') goto LAB_00102530;
    load_external_font(&local_d8,(Variant *)&local_118,(int)local_2b0,iVar7,1,iVar9,bVar4,bVar5,0);
    Array::Array((Array *)&local_d0);
    auStack_80 = (undefined1  [16])0x0;
    local_b8 = (Object *)&_LC27;
    local_88 = 0;
    local_c8 = 0;
    local_b0 = 4;
    String::parse_latin1((StrRange *)&local_c8);
    StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
    Array::set_typed(uVar8,(StringName *)0x18,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_88,local_228);
    Array::push_back((Variant *)&local_d0);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    pOVar10 = local_d8;
    (**(code **)(*(long *)local_d8 + 0x1f0))(local_d8,(Array *)&local_d0);
    Array::~Array((Array *)&local_d0);
    pRVar22 = local_f8;
    local_290 = local_f8;
    pcVar20 = *(code **)(*(long *)local_f8 + 0x308);
    local_b8 = (Object *)0x0;
    pOVar13 = (Object *)__dynamic_cast(pOVar10,&Object::typeinfo,&Font::typeinfo,0);
    if ((pOVar13 != (Object *)0x0) &&
       (local_b8 = pOVar13, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_b8 = (Object *)0x0;
    }
    (*pcVar20)(pRVar22);
    if (((local_b8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar13 = local_b8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
      Memory::free_static(pOVar10,false);
    }
  }
  pcVar20 = *(code **)(*(long *)local_290 + 0x368);
  uVar23 = EditorScale::get_scale();
  (*pcVar20)(local_290,2,(int)(float)(uVar23 ^ __LC39));
  pcVar20 = *(code **)(*(long *)local_290 + 0x368);
  uVar23 = EditorScale::get_scale();
  (*pcVar20)(local_290,3,(int)(float)(uVar23 ^ __LC39));
  local_f0 = (Ref *)0x0;
  Ref<FontVariation>::instantiate<>((Ref<FontVariation> *)&local_f0);
  pOVar10 = local_238;
  if ((local_110 == 0) || (*(int *)(local_110 + -8) < 2)) {
LAB_00102820:
    pOVar10 = local_238;
    if ((local_118 != 0) && (1 < *(int *)(local_118 + -8))) {
      pcVar20 = *(code **)(*(long *)local_238 + 0x1d0);
      local_b8 = (Object *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
      cVar6 = (*pcVar20)(pOVar10,(StringName *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (cVar6 != '\0') {
        load_external_font(&local_d8,(Variant *)&local_118,(int)local_2b0,iVar7,1,iVar9,bVar4,0,0);
        Array::Array((Array *)&local_d0);
        auStack_80 = (undefined1  [16])0x0;
        local_b8 = (Object *)&_LC27;
        local_88 = 0;
        local_c8 = 0;
        local_b0 = 4;
        String::parse_latin1((StrRange *)&local_c8);
        StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
        Array::set_typed(uVar8,(StringName *)0x18,(Variant *)&local_b8);
        if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if (Variant::needs_deinit[(int)local_88] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_88,local_1a0);
        Array::push_back((Variant *)&local_d0);
        if (Variant::needs_deinit[(int)local_88] != '\0') {
          Variant::_clear_internal();
        }
        pOVar10 = local_d8;
        (**(code **)(*(long *)local_d8 + 0x1f0))(local_d8,(Array *)&local_d0);
        Array::~Array((Array *)&local_d0);
        pRVar22 = local_f0;
        local_2d0 = local_f0;
        pcVar20 = *(code **)(*(long *)local_f0 + 0x308);
        local_b8 = (Object *)0x0;
        Ref<Font>::operator=((Ref<Font> *)&local_b8,(Ref *)pOVar10);
        (*pcVar20)(pRVar22);
        Ref<Font>::unref((Ref<Font> *)&local_b8);
        (**(code **)(*(long *)pRVar22 + 0x330))(pRVar22);
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
          Memory::free_static(pOVar10,false);
        }
        goto LAB_00102cc4;
      }
    }
    pSVar17 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)&local_88,"");
    StringName::StringName((StringName *)&local_b8,"interface/editor/main_font_bold",false);
    EditorSettings::_set_only(pSVar17,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    pRVar22 = local_f0;
    local_2d0 = local_f0;
    pcVar20 = *(code **)(*(long *)local_f0 + 0x308);
    local_b8 = (Object *)0x0;
    Ref<Font>::operator=((Ref<Font> *)&local_b8,(Ref *)local_1a0);
    (*pcVar20)(pRVar22,(StringName *)&local_b8);
    Ref<Font>::unref((Ref<Font> *)&local_b8);
  }
  else {
    pcVar20 = *(code **)(*(long *)local_238 + 0x1d0);
    local_b8 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_110);
    cVar6 = (*pcVar20)(pOVar10,(StringName *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (cVar6 == '\0') goto LAB_00102820;
    load_external_font((Ref<FontFile> *)&local_d8,(Variant *)&local_110,(int)local_2b0,iVar7,1,iVar9
                       ,bVar4,0,0);
    Array::Array((Array *)&local_d0);
    auStack_80 = (undefined1  [16])0x0;
    local_b8 = (Object *)&_LC27;
    local_88 = 0;
    local_c8 = 0;
    local_b0 = 4;
    String::parse_latin1((StrRange *)&local_c8);
    StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
    Array::set_typed(uVar8,(StringName *)0x18,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_88,local_1a0);
    Array::push_back((Variant *)&local_d0);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    pOVar10 = local_d8;
    (**(code **)(*(long *)local_d8 + 0x1f0))(local_d8,(Array *)&local_d0);
    Array::~Array((Array *)&local_d0);
    pRVar22 = local_f0;
    local_2d0 = local_f0;
    pcVar20 = *(code **)(*(long *)local_f0 + 0x308);
    local_b8 = (Object *)0x0;
    Ref<Font>::operator=((Ref<Font> *)&local_b8,(Ref *)pOVar10);
    (*pcVar20)(pRVar22,(StringName *)&local_b8);
    Ref<Font>::unref((Ref<Font> *)&local_b8);
    Ref<FontFile>::unref((Ref<FontFile> *)&local_d8);
  }
LAB_00102cc4:
  pcVar20 = *(code **)(*(long *)local_2d0 + 0x368);
  uVar23 = EditorScale::get_scale();
  (*pcVar20)(local_2d0,2,(int)(float)(uVar23 ^ __LC39));
  pcVar20 = *(code **)(*(long *)local_2d0 + 0x368);
  uVar23 = EditorScale::get_scale();
  (*pcVar20)(local_2d0,3,(int)(float)(uVar23 ^ __LC39));
  local_e8 = (Ref *)0x0;
  Ref<FontVariation>::instantiate<>((Ref<FontVariation> *)&local_e8);
  pOVar10 = local_238;
  if ((local_110 == 0) || (*(int *)(local_110 + -8) < 2)) {
LAB_00105ea0:
    pOVar10 = local_238;
    if ((local_118 != 0) && (1 < *(int *)(local_118 + -8))) {
      pcVar20 = *(code **)(*(long *)local_238 + 0x1d0);
      local_b8 = (Object *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
      cVar6 = (*pcVar20)(pOVar10,(StringName *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (cVar6 != '\0') {
        load_external_font((Ref<FontFile> *)&local_d8,(Variant *)&local_118,(int)local_2b0,iVar7,1,
                           iVar9,bVar4,bVar5,0);
        Array::Array((Array *)&local_d0);
        auStack_80 = (undefined1  [16])0x0;
        local_b8 = (Object *)&_LC27;
        local_88 = 0;
        local_c8 = 0;
        local_b0 = 4;
        String::parse_latin1((StrRange *)&local_c8);
        StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
        Array::set_typed(uVar8,(StringName *)0x18,(Variant *)&local_b8);
        if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if (Variant::needs_deinit[(int)local_88] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_88,local_198);
        Array::push_back((Variant *)&local_d0);
        if (Variant::needs_deinit[(int)local_88] != '\0') {
          Variant::_clear_internal();
        }
        pOVar10 = local_d8;
        (**(code **)(*(long *)local_d8 + 0x1f0))(local_d8,(Array *)&local_d0);
        Array::~Array((Array *)&local_d0);
        pRVar22 = local_e8;
        pcVar20 = *(code **)(*(long *)local_e8 + 0x308);
        local_b8 = (Object *)0x0;
        Ref<Font>::operator=((Ref<Font> *)&local_b8,(Ref *)pOVar10);
        (*pcVar20)(pRVar22,(StringName *)&local_b8);
        Ref<Font>::unref((Ref<Font> *)&local_b8);
        (**(code **)(*(long *)pRVar22 + 0x330))(pRVar22);
        Ref<FontFile>::unref((Ref<FontFile> *)&local_d8);
        goto LAB_00102f2e;
      }
    }
    pSVar17 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)&local_88,"");
    StringName::StringName((StringName *)&local_b8,"interface/editor/main_font_bold",false);
    EditorSettings::_set_only(pSVar17,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    pRVar22 = local_e8;
    pcVar20 = *(code **)(*(long *)local_e8 + 0x308);
    local_b8 = (Object *)0x0;
    Ref<Font>::operator=((Ref<Font> *)&local_b8,(Ref *)local_198);
    (*pcVar20)(pRVar22,(StringName *)&local_b8);
    Ref<Font>::unref((Ref<Font> *)&local_b8);
  }
  else {
    pcVar20 = *(code **)(*(long *)local_238 + 0x1d0);
    local_b8 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_110);
    cVar6 = (*pcVar20)(pOVar10,(StringName *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (cVar6 == '\0') goto LAB_00105ea0;
    load_external_font((Ref<FontFile> *)&local_d8,(Variant *)&local_110,(int)local_2b0,iVar7,1,iVar9
                       ,bVar4,bVar5,0);
    Array::Array((Array *)&local_d0);
    auStack_80 = (undefined1  [16])0x0;
    local_b8 = (Object *)&_LC27;
    local_88 = 0;
    local_c8 = 0;
    local_b0 = 4;
    String::parse_latin1((StrRange *)&local_c8);
    StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
    Array::set_typed(uVar8,(StringName *)0x18,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_88,local_198);
    Array::push_back((Variant *)&local_d0);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    pOVar10 = local_d8;
    (**(code **)(*(long *)local_d8 + 0x1f0))(local_d8,(Array *)&local_d0);
    Array::~Array((Array *)&local_d0);
    pRVar22 = local_e8;
    pcVar20 = *(code **)(*(long *)local_e8 + 0x308);
    local_b8 = (Object *)0x0;
    Ref<Font>::operator=((Ref<Font> *)&local_b8,(Ref *)pOVar10);
    (*pcVar20)(pRVar22,(StringName *)&local_b8);
    Ref<Font>::unref((Ref<Font> *)&local_b8);
    Ref<FontFile>::unref((Ref<FontFile> *)&local_d8);
  }
LAB_00102f2e:
  pcVar20 = *(code **)(*(long *)pRVar22 + 0x368);
  uVar23 = EditorScale::get_scale();
  (*pcVar20)(pRVar22,2,(int)(float)(uVar23 ^ __LC39));
  pcVar20 = *(code **)(*(long *)pRVar22 + 0x368);
  uVar23 = EditorScale::get_scale();
  (*pcVar20)(pRVar22,3,(int)(float)(uVar23 ^ __LC39));
  local_e0 = (Ref *)0x0;
  Ref<FontVariation>::instantiate<>((Ref<FontVariation> *)&local_e0);
  pOVar10 = local_238;
  if ((local_108 == 0) || (*(int *)(local_108 + -8) < 2)) {
LAB_001060c0:
    pSVar17 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)&local_88,"");
    StringName::StringName((StringName *)&local_b8,"interface/editor/code_font",false);
    EditorSettings::_set_only(pSVar17,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    local_2c8 = local_e0;
    if (Variant::needs_deinit[(int)local_88] == '\0') {
      pcVar20 = *(code **)(*(long *)local_e0 + 0x308);
    }
    else {
      Variant::_clear_internal();
      pcVar20 = *(code **)(*(long *)local_2c8 + 0x308);
    }
    local_b8 = (Object *)0x0;
    pOVar12 = (Object *)__dynamic_cast(pOVar12,&Object::typeinfo,&Font::typeinfo,0);
    if ((pOVar12 != (Object *)0x0) &&
       (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_b8 = (Object *)0x0;
    }
    (*pcVar20)(local_2c8);
    if (local_b8 != (Object *)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar12 = local_b8;
      goto joined_r0x001061b9;
    }
  }
  else {
    pcVar20 = *(code **)(*(long *)local_238 + 0x1d0);
    local_b8 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
    cVar6 = (*pcVar20)(pOVar10,(StringName *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (cVar6 == '\0') goto LAB_001060c0;
    load_external_font(&local_d8,(Variant *)&local_108,bVar1,iVar7,1,iVar9,bVar4,0,0);
    Array::Array((Array *)&local_d0);
    auStack_80 = (undefined1  [16])0x0;
    local_b8 = (Object *)&_LC27;
    local_88 = 0;
    local_c8 = 0;
    local_b0 = 4;
    String::parse_latin1((StrRange *)&local_c8);
    StringName::StringName((StringName *)&local_b8,(String *)&local_c8,false);
    Array::set_typed(uVar8,(StringName *)0x18,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_88,pOVar12);
    Array::push_back((Variant *)&local_d0);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    (**(code **)(*(long *)local_d8 + 0x1f0))(local_d8,(Array *)&local_d0);
    Array::~Array((Array *)&local_d0);
    local_2c8 = local_e0;
    pcVar20 = *(code **)(*(long *)local_e0 + 0x308);
    local_b8 = (Object *)0x0;
    pOVar12 = (Object *)__dynamic_cast(local_d8,&Object::typeinfo,&Font::typeinfo,0);
    if ((pOVar12 != (Object *)0x0) &&
       (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_b8 = (Object *)0x0;
    }
    (*pcVar20)(local_2c8);
    if (((local_b8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
    cVar6 = RefCounted::unreference();
    pOVar12 = local_d8;
joined_r0x001061b9:
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  pcVar20 = *(code **)(*(long *)local_2c8 + 0x368);
  uVar8 = EditorScale::get_scale();
  (*pcVar20)(local_2c8,2,(int)(float)(uVar8 ^ __LC39));
  pcVar20 = *(code **)(*(long *)local_2c8 + 0x368);
  uVar8 = EditorScale::get_scale();
  (*pcVar20)(local_2c8,3,(int)(float)(uVar8 ^ __LC39));
  (**(code **)(*(long *)local_2c8 + 0x198))((StringName *)&local_b8,local_2c8,0);
  if (local_b8 == (Object *)0x0) {
    local_2e0 = (Ref *)0x0;
  }
  else {
    pRVar14 = (Ref *)__dynamic_cast(local_b8,&Object::typeinfo,&FontVariation::typeinfo,0);
    local_2e0 = pRVar14;
    if (pRVar14 != (Ref *)0x0) {
      cVar6 = RefCounted::reference();
      local_2e0 = (Ref *)0x0;
      if (cVar6 != '\0') {
        local_2e0 = pRVar14;
      }
      if (local_b8 == (Object *)0x0) goto LAB_001032a2;
    }
    cVar6 = RefCounted::unreference();
    pOVar12 = local_b8;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
LAB_001032a2:
  local_c8 = 0;
  local_b8 = (Object *)0x108d20;
  local_b0 = 0x2f;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  iVar7 = Variant::operator_cast_to_int((Variant *)&local_88);
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (iVar7 == 1) {
    Dictionary::Dictionary((Dictionary *)&local_d0);
    Variant::Variant((Variant *)&local_88,0);
    pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
    if (pOVar12 == (Object *)0x0) goto editor_register_fonts;
    cVar6 = RefCounted::reference();
    if (cVar6 == '\0') {
      pOVar12 = (Object *)0x0;
    }
    pcVar20 = *(code **)(*(long *)pOVar12 + 0x1a8);
    local_c8 = 0;
    local_b8 = (Object *)&_LC42;
    local_b0 = 4;
    String::parse_latin1((StrRange *)&local_c8);
    lVar15 = (*pcVar20)(pOVar12,(StrRange *)&local_c8);
    Variant::Variant((Variant *)local_a8,lVar15);
    pVVar16 = (Variant *)Dictionary::operator[]((Variant *)&local_d0);
    if (pVVar16 != (Variant *)&local_88) {
      if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar16 = 0;
      *(int *)pVVar16 = (int)local_88;
      *(undefined8 *)(pVVar16 + 8) = auStack_80._0_8_;
      *(undefined8 *)(pVVar16 + 0x10) = auStack_80._8_8_;
      local_88 = local_88 & 0xffffffff00000000;
    }
LAB_0010340e:
    if (Variant::needs_deinit[local_a8[0]] == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    }
    else {
      Variant::_clear_internal();
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    }
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    (**(code **)(*(long *)local_2c8 + 0x360))();
    Dictionary::~Dictionary((Dictionary *)&local_d0);
  }
  else {
    if (iVar7 != 2) {
      Dictionary::Dictionary((Dictionary *)&local_d0);
      Variant::Variant((Variant *)&local_88,1);
      pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar12 == (Object *)0x0) goto editor_register_fonts;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        pOVar12 = (Object *)0x0;
      }
      pcVar20 = *(code **)(*(long *)pOVar12 + 0x1a8);
      local_c8 = 0;
      local_b8 = (Object *)&_LC42;
      local_b0 = 4;
      String::parse_latin1((StrRange *)&local_c8);
      lVar15 = (*pcVar20)(pOVar12,(StrRange *)&local_c8);
      Variant::Variant((Variant *)local_a8,lVar15);
      pVVar16 = (Variant *)Dictionary::operator[]((Variant *)&local_d0);
      if (pVVar16 != (Variant *)&local_88) {
        if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)pVVar16 = 0;
        *(int *)pVVar16 = (int)local_88;
        *(undefined8 *)(pVVar16 + 8) = auStack_80._0_8_;
        *(undefined8 *)(pVVar16 + 0x10) = auStack_80._8_8_;
        local_88 = local_88 & 0xffffffff00000000;
      }
      goto LAB_0010340e;
    }
    local_d0 = 0;
    local_b8 = (Object *)0x108d50;
    local_b0 = 0x33;
    String::parse_latin1((StrRange *)&local_d0);
    _EDITOR_GET((String *)&local_88);
    Variant::operator_cast_to_String((Variant *)&local_b8);
    String::split((char *)&local_c8,SUB81((StringName *)&local_b8,0),0x108275);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    Dictionary::Dictionary((Dictionary *)&local_d0);
    for (lVar15 = 0; (local_c0 != 0 && (lVar15 < *(long *)(local_c0 + -8))); lVar15 = lVar15 + 1) {
      String::split((char *)&local_b8,(bool)((char)local_c0 + (char)lVar15 * '\b'),0x108277);
      if (local_b0 != 0) {
        if (*(long *)(local_b0 + -8) == 2) {
          lVar18 = String::to_int();
          Variant::Variant((Variant *)&local_88,lVar18);
          pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar12 == (Object *)0x0) goto editor_register_fonts;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            pOVar12 = (Object *)0x0;
          }
          if (local_b0 == 0) {
LAB_00106b20:
            lVar18 = 0;
LAB_00106b23:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,lVar18,"p_index","size()","",false,
                       true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar20 = (code *)invalidInstructionException();
            (*pcVar20)();
          }
          lVar18 = *(long *)(local_b0 + -8);
          if (lVar18 < 1) goto LAB_00106b23;
          lVar18 = (**(code **)(*(long *)pOVar12 + 0x1a8))(pOVar12);
          Variant::Variant((Variant *)local_a8,lVar18);
          pVVar16 = (Variant *)Dictionary::operator[]((Variant *)&local_d0);
          if (pVVar16 != (Variant *)&local_88) {
            if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar16 = 0;
            *(int *)pVVar16 = (int)local_88;
            *(undefined4 *)(pVVar16 + 8) = auStack_80._0_4_;
            *(undefined4 *)(pVVar16 + 0xc) = auStack_80._4_4_;
            *(undefined4 *)(pVVar16 + 0x10) = auStack_80._8_4_;
            *(undefined4 *)(pVVar16 + 0x14) = auStack_80._12_4_;
            local_88 = local_88 & 0xffffffff00000000;
          }
        }
        else {
          if (*(long *)(local_b0 + -8) != 1) goto LAB_001063ba;
          Variant::Variant((Variant *)&local_88,1);
          pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
          if (pOVar12 == (Object *)0x0) goto editor_register_fonts;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            pOVar12 = (Object *)0x0;
          }
          if (local_b0 == 0) goto LAB_00106b20;
          lVar18 = *(long *)(local_b0 + -8);
          if (lVar18 < 1) goto LAB_00106b23;
          lVar18 = (**(code **)(*(long *)pOVar12 + 0x1a8))(pOVar12);
          Variant::Variant((Variant *)local_a8,lVar18);
          pVVar16 = (Variant *)Dictionary::operator[]((Variant *)&local_d0);
          if (pVVar16 != (Variant *)&local_88) {
            if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
              Variant::_clear_internal();
            }
            *(undefined4 *)pVVar16 = 0;
            *(int *)pVVar16 = (int)local_88;
            *(undefined8 *)(pVVar16 + 8) = auStack_80._0_8_;
            *(undefined8 *)(pVVar16 + 0x10) = auStack_80._8_8_;
            local_88 = local_88 & 0xffffffff00000000;
          }
        }
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        cVar6 = RefCounted::unreference();
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
        }
        if (Variant::needs_deinit[(int)local_88] != '\0') {
          Variant::_clear_internal();
        }
      }
LAB_001063ba:
      CowData<String>::_unref((CowData<String> *)&local_b0);
    }
    (**(code **)(*(long *)local_2c8 + 0x360))();
    Dictionary::~Dictionary((Dictionary *)&local_d0);
    CowData<String>::_unref((CowData<String> *)&local_c0);
  }
  Dictionary::Dictionary((Dictionary *)&local_d0);
  Variant::Variant((Variant *)&local_88,0);
  pOVar12 = *(Object **)(TextServerManager::singleton + 0x178);
  if (pOVar12 == (Object *)0x0) goto editor_register_fonts;
  cVar6 = RefCounted::reference();
  if (cVar6 == '\0') {
    pOVar12 = (Object *)0x0;
  }
  pcVar20 = *(code **)(*(long *)pOVar12 + 0x1a8);
  local_c8 = 0;
  local_b8 = (Object *)&_LC42;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_c8);
  lVar15 = (*pcVar20)(pOVar12,(StrRange *)&local_c8);
  Variant::Variant((Variant *)local_a8,lVar15);
  pVVar16 = (Variant *)Dictionary::operator[]((Variant *)&local_d0);
  if (pVVar16 != (Variant *)&local_88) {
    if (Variant::needs_deinit[*(int *)pVVar16] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar16 = 0;
    *(int *)pVVar16 = (int)local_88;
    *(undefined8 *)(pVVar16 + 8) = auStack_80._0_8_;
    *(undefined8 *)(pVVar16 + 0x10) = auStack_80._8_8_;
    local_88 = local_88 & 0xffffffff00000000;
  }
  if (Variant::needs_deinit[local_a8[0]] == '\0') {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  }
  else {
    Variant::_clear_internal();
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar12), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  (**(code **)(*(long *)local_2e0 + 0x360))(local_2e0,(Array *)&local_d0);
  Dictionary::~Dictionary((Dictionary *)&local_d0);
  (**(code **)(*(long *)local_2e0 + 0x198))((StringName *)&local_b8,local_2e0,0);
  if (local_b8 == (Object *)0x0) goto editor_register_fonts;
  pRVar14 = (Ref *)__dynamic_cast(local_b8,&Object::typeinfo,&FontVariation::typeinfo,0);
  local_280 = pRVar14;
  if (pRVar14 == (Ref *)0x0) {
LAB_00103633:
    cVar6 = RefCounted::unreference();
    pOVar12 = local_b8;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  else {
    cVar6 = RefCounted::reference();
    local_280 = (Ref *)0x0;
    if (cVar6 != '\0') {
      local_280 = pRVar14;
    }
    if (local_b8 != (Object *)0x0) goto LAB_00103633;
  }
  (**(code **)(*(long *)local_280 + 0x330))();
  (**(code **)(*(long *)local_2e0 + 0x198))((StringName *)&local_b8,local_2e0,0);
  if (local_b8 == (Object *)0x0) goto editor_register_fonts;
  pRVar14 = (Ref *)__dynamic_cast(local_b8,&Object::typeinfo,&FontVariation::typeinfo,0);
  local_278 = pRVar14;
  if (pRVar14 == (Ref *)0x0) {
LAB_001036ca:
    cVar6 = RefCounted::unreference();
    pOVar12 = local_b8;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
  }
  else {
    cVar6 = RefCounted::reference();
    local_278 = (Ref *)0x0;
    if (cVar6 != '\0') {
      local_278 = pRVar14;
    }
    if (local_b8 != (Object *)0x0) goto LAB_001036ca;
  }
  uVar2 = _LC48;
  local_88 = _LC48;
  auStack_80 = ZEXT816(0x3f80000000000000);
  (**(code **)(*(long *)local_278 + 0x340))();
  (**(code **)(*(long *)local_2e0 + 0x198))((StringName *)&local_b8,local_2e0,0);
  if (local_b8 == (Object *)0x0) goto editor_register_fonts;
  pOVar12 = (Object *)__dynamic_cast(local_b8,&Object::typeinfo,&FontVariation::typeinfo,0);
  local_2b8 = pOVar12;
  if (pOVar12 == (Object *)0x0) {
LAB_001037a7:
    cVar6 = RefCounted::unreference();
    pOVar12 = local_b8;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))();
      Memory::free_static(pOVar12,false);
    }
  }
  else {
    cVar6 = RefCounted::reference();
    local_2b8 = (Object *)0x0;
    if (cVar6 != '\0') {
      local_2b8 = pOVar12;
    }
    if (local_b8 != (Object *)0x0) goto LAB_001037a7;
  }
  (**(code **)(*(long *)local_2b8 + 0x330))();
  local_88 = uVar2;
  auStack_80 = ZEXT816(0x3f80000000000000);
  (**(code **)(*(long *)local_2b8 + 0x340))();
  (**(code **)(*(long *)local_2e0 + 0x198))((StringName *)&local_b8,local_2e0,0);
  if (local_b8 == (Object *)0x0) goto editor_register_fonts;
  pRVar14 = (Ref *)__dynamic_cast(local_b8,&Object::typeinfo,&FontVariation::typeinfo,0);
  local_298 = pRVar14;
  if (pRVar14 == (Ref *)0x0) {
LAB_0010388d:
    cVar6 = RefCounted::unreference();
    pOVar12 = local_b8;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))();
      Memory::free_static(pOVar12,false);
    }
  }
  else {
    cVar6 = RefCounted::reference();
    local_298 = (Ref *)0x0;
    if (cVar6 != '\0') {
      local_298 = pRVar14;
    }
    if (local_b8 != (Object *)0x0) goto LAB_0010388d;
  }
  (**(code **)(*(long *)local_298 + 0x330))();
  local_88 = _LC50;
  auStack_80 = ZEXT816(0x3f80000000000000);
  (**(code **)(*(long *)local_298 + 0x340))();
  (**(code **)(*(long *)local_2c0 + 0x198))((StringName *)&local_b8,local_2c0,0);
  if (local_b8 == (Object *)0x0) goto editor_register_fonts;
  pRVar14 = (Ref *)__dynamic_cast(local_b8,&Object::typeinfo,&FontVariation::typeinfo,0);
  local_2b0 = pRVar14;
  if (pRVar14 == (Ref *)0x0) {
LAB_00103980:
    cVar6 = RefCounted::unreference();
    pOVar12 = local_b8;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))();
      Memory::free_static(pOVar12,false);
    }
  }
  else {
    cVar6 = RefCounted::reference();
    local_2b0 = (Ref *)0x0;
    if (cVar6 != '\0') {
      local_2b0 = pRVar14;
    }
    if (local_b8 != (Object *)0x0) goto LAB_00103980;
  }
  local_88 = uVar2;
  auStack_80 = ZEXT816(0x3f80000000000000);
  (**(code **)(*(long *)local_2b0 + 0x340))();
  (**(code **)(*(long *)local_2d0 + 0x198))((StringName *)&local_b8,local_2d0,0);
  if (local_b8 == (Object *)0x0) {
editor_register_fonts:
                    /* WARNING: Does not return */
    pcVar20 = (code *)invalidInstructionException();
    (*pcVar20)();
  }
  pRVar14 = (Ref *)__dynamic_cast(local_b8,&Object::typeinfo,&FontVariation::typeinfo,0);
  local_270 = pRVar14;
  if (pRVar14 != (Ref *)0x0) {
    cVar6 = RefCounted::reference();
    local_270 = (Ref *)0x0;
    if (cVar6 != '\0') {
      local_270 = pRVar14;
    }
    if (local_b8 == (Object *)0x0) goto LAB_00103a6a;
  }
  cVar6 = RefCounted::unreference();
  pOVar12 = local_b8;
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
LAB_00103a6a:
  local_88 = uVar2;
  auStack_80 = ZEXT816(0x3f80000000000000);
  (**(code **)(*(long *)local_270 + 0x340))();
  local_b8 = (Object *)0x0;
  pRVar14 = *(Ref **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2c0);
  Theme::set_default_font(pRVar14);
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  Theme::set_default_font_size((int)*(undefined8 *)param_1);
  pSVar17 = *(StringName **)param_1;
  local_b8 = (Object *)0x0;
  pOVar12 = (Object *)__dynamic_cast(local_2c0,&Object::typeinfo,&Font::typeinfo,0);
  if ((pOVar12 != (Object *)0x0) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  pRVar14 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"main",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar14);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_290);
  pRVar14 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"main_msdf",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar14);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"main_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2d0);
  pRVar14 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"bold",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar14);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,pRVar22);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"main_bold_msdf",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"bold_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured == '\0') || (local_b8 == (Object *)0x0)) {
    pSVar17 = *(StringName **)param_1;
  }
  else {
    StringName::unref();
    pSVar17 = *(StringName **)param_1;
  }
  local_b8 = (Object *)0x0;
  pOVar12 = (Object *)__dynamic_cast(local_2b0,&Object::typeinfo,&Font::typeinfo,0);
  if ((pOVar12 != (Object *)0x0) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"italic",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"italic_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2d0);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"title",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"title_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar17 = *(StringName **)param_1;
  StringName::StringName((StringName *)&local_b8,"Button",false);
  StringName::StringName((StringName *)&local_c8,"MainScreenButton",false);
  Theme::set_type_variation(pSVar17,(StringName *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2d0);
  StringName::StringName((StringName *)&local_c8,"MainScreenButton",false);
  Theme::set_font(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa0),(Ref *)&local_c8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_b8,"MainScreenButton",false);
  iVar7 = (int)(StringName *)&local_b8;
  Theme::set_font_size(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa8),iVar7);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2c0);
  StringName::StringName((StringName *)&local_c8,"Label",false);
  Theme::set_font(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa0),(Ref *)&local_c8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  StringName::StringName((StringName *)&local_b8,"Label",false);
  StringName::StringName((StringName *)&local_c8,"HeaderSmall",false);
  Theme::set_type_variation(pSVar17,(StringName *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2d0);
  StringName::StringName((StringName *)&local_c8,"HeaderSmall",false);
  Theme::set_font(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa0),(Ref *)&local_c8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  StringName::StringName((StringName *)&local_b8,"HeaderSmall",false);
  Theme::set_font_size(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa8),iVar7);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar17 = *(StringName **)param_1;
  StringName::StringName((StringName *)&local_b8,"Label",false);
  StringName::StringName((StringName *)&local_c8,"HeaderMedium",false);
  Theme::set_type_variation(pSVar17,(StringName *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2d0);
  StringName::StringName((StringName *)&local_c8,"HeaderMedium",false);
  Theme::set_font(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa0),(Ref *)&local_c8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_b8,"HeaderMedium",false);
  Theme::set_font_size(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa8),iVar7);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar17 = *(StringName **)param_1;
  StringName::StringName((StringName *)&local_b8,"Label",false);
  StringName::StringName((StringName *)&local_c8,"HeaderLarge",false);
  Theme::set_type_variation(pSVar17,(StringName *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  pOVar12 = (Object *)__dynamic_cast(local_2d0,&Object::typeinfo,&Font::typeinfo,0);
  if ((pOVar12 != (Object *)0x0) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  StringName::StringName((StringName *)&local_c8,"HeaderLarge",false);
  Theme::set_font(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa0),(Ref *)&local_c8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  EditorScale::get_scale();
  StringName::StringName((StringName *)&local_b8,"HeaderLarge",false);
  Theme::set_font_size(pSVar17,(StringName *)(SceneStringNames::singleton + 0xa8),iVar7);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2c0);
  StringName::StringName((StringName *)&local_c8,"RichTextLabel",false);
  StringName::StringName((StringName *)&local_d0,"normal_font",false);
  Theme::set_font(pSVar17,(StringName *)&local_d0,(Ref *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c8 != 0)
     ) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2d0);
  StringName::StringName((StringName *)&local_c8,"RichTextLabel",false);
  StringName::StringName((StringName *)&local_d0,"bold_font",false);
  Theme::set_font(pSVar17,(StringName *)&local_d0,(Ref *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c8 != 0)
     ) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2b0);
  StringName::StringName((StringName *)&local_c8,"RichTextLabel",false);
  StringName::StringName((StringName *)&local_d0,"italics_font",false);
  Theme::set_font(pSVar17,(StringName *)&local_d0,(Ref *)&local_c8);
  if ((StringName::configured != '\0') &&
     (((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_c8 != 0)))
     ) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_270);
  StringName::StringName((StringName *)&local_c8,"RichTextLabel",false);
  StringName::StringName((StringName *)&local_d0,"bold_italics_font",false);
  Theme::set_font(pSVar17,(StringName *)&local_d0,(Ref *)&local_c8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c8 != 0)
     ) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_c8 = 0;
  local_b0 = 0x1f;
  pSVar17 = *(StringName **)param_1;
  local_b8 = (Object *)0x108d88;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_int((Variant *)&local_88);
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"doc_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2c0);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"doc",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  pOVar12 = (Object *)__dynamic_cast(local_2d0,&Object::typeinfo,&Font::typeinfo,0);
  if ((pOVar12 != (Object *)0x0) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"doc_bold",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2b0);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"doc_italic",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_c8 = 0;
  local_b0 = 0x25;
  pSVar17 = *(StringName **)param_1;
  local_b8 = (Object *)0x108da8;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_int((Variant *)&local_88);
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"doc_title_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2d0);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"doc_title",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_c8 = 0;
  pSVar17 = *(StringName **)param_1;
  local_b8 = (Object *)0x108dd0;
  local_b0 = 0x26;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_int((Variant *)&local_88);
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"doc_source_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2c8);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"doc_source",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x108dd0;
  local_c8 = 0;
  local_b0 = 0x26;
  pSVar17 = *(StringName **)param_1;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_int((Variant *)&local_88);
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"doc_keyboard_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2c8);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"doc_keyboard",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"rulers_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  pOVar12 = (Object *)__dynamic_cast(local_2c0,&Object::typeinfo,&Font::typeinfo,0);
  if ((pOVar12 != (Object *)0x0) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"rulers",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"rotation_control_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  pOVar12 = (Object *)__dynamic_cast(local_2c0,&Object::typeinfo,&Font::typeinfo,0);
  if ((pOVar12 != (Object *)0x0) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"rotation_control",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_c8 = 0;
  pSVar17 = *(StringName **)param_1;
  local_b8 = (Object *)0x108df8;
  local_b0 = 0x1f;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_int((Variant *)&local_88);
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"source_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2c8);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"source",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x108df8;
  local_c8 = 0;
  local_b0 = 0x1f;
  pSVar17 = *(StringName **)param_1;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_int((Variant *)&local_88);
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"expression_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  pOVar12 = (Object *)__dynamic_cast(local_2e0,&Object::typeinfo,&Font::typeinfo,0);
  if ((pOVar12 != (Object *)0x0) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"expression",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_c8 = 0;
  local_b0 = 0x14;
  pSVar17 = *(StringName **)param_1;
  local_b8 = (Object *)0x10843a;
  String::parse_latin1((StrRange *)&local_c8);
  _EDITOR_GET((String *)&local_88);
  Variant::operator_cast_to_int((Variant *)&local_88);
  EditorScale::get_scale();
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"output_source_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_88] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2e0);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"output_source",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_280);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"output_source_bold",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_278);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"output_source_italic",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (local_b8 == (Object *)0x0) {
    pSVar17 = *(StringName **)param_1;
  }
  else {
    cVar6 = RefCounted::unreference();
    pOVar12 = local_b8;
    if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
      Memory::free_static(pOVar12,false);
    }
    local_b8 = (Object *)0x0;
    pSVar17 = *(StringName **)param_1;
  }
  pOVar12 = (Object *)__dynamic_cast(local_2b8,&Object::typeinfo,&Font::typeinfo,0);
  if ((pOVar12 != (Object *)0x0) &&
     (local_b8 = pOVar12, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
    local_b8 = (Object *)0x0;
  }
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"output_source_bold_italic",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_298);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"output_source_mono",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  pSVar17 = *(StringName **)param_1;
  iVar7 = (int)EditorStringNames::singleton;
  StringName::StringName((StringName *)&local_b8,"status_source_size",false);
  Theme::set_font_size(pSVar17,(StringName *)&local_b8,iVar7 + 8);
  if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
    StringName::unref();
  }
  local_b8 = (Object *)0x0;
  pSVar17 = *(StringName **)param_1;
  Ref<Font>::operator=((Ref<Font> *)&local_b8,local_2e0);
  pRVar22 = (Ref *)(EditorStringNames::singleton + 8);
  StringName::StringName((StringName *)&local_c8,"status_source",false);
  Theme::set_font(pSVar17,(StringName *)&local_c8,pRVar22);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  if (((local_b8 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_b8, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_270), cVar6 != '\0')) {
    (**(code **)(*(long *)local_270 + 0x140))(local_270);
    Memory::free_static(local_270,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_2b0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_2b0 + 0x140))(local_2b0);
    Memory::free_static(local_2b0,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_298), cVar6 != '\0')) {
    (**(code **)(*(long *)local_298 + 0x140))(local_298);
    Memory::free_static(local_298,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_2b8), cVar6 != '\0')) {
    (**(code **)(*(long *)local_2b8 + 0x140))(local_2b8);
    Memory::free_static(local_2b8,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_278), cVar6 != '\0')) {
    (**(code **)(*(long *)local_278 + 0x140))(local_278);
    Memory::free_static(local_278,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_280), cVar6 != '\0')) {
    (**(code **)(*(long *)local_280 + 0x140))(local_280);
    Memory::free_static(local_280,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_2e0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_2e0 + 0x140))(local_2e0);
    Memory::free_static(local_2e0,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_2c8), cVar6 != '\0')) {
    (**(code **)(*(long *)local_2c8 + 0x140))(local_2c8);
    Memory::free_static(local_2c8,false);
  }
  pRVar22 = local_e8;
  if (((local_e8 != (Ref *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler((Object *)pRVar22), cVar6 != '\0')) {
    (**(code **)(*(long *)pRVar22 + 0x140))(pRVar22);
    Memory::free_static(pRVar22,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_2d0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_2d0 + 0x140))(local_2d0);
    Memory::free_static(local_2d0,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_290), cVar6 != '\0')) {
    (**(code **)(*(long *)local_290 + 0x140))(local_290);
    Memory::free_static(local_290,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)local_2c0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_2c0 + 0x140))(local_2c0);
    Memory::free_static(local_2c0,false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if (((local_120 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_120), cVar6 != '\0')) {
    (**(code **)(*(long *)local_120 + 0x140))(local_120);
    Memory::free_static(local_120,false);
  }
  if (((local_128 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_128), cVar6 != '\0')) {
    (**(code **)(*(long *)local_128 + 0x140))(local_128);
    Memory::free_static(local_128,false);
  }
  if (((local_130 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_130), cVar6 != '\0')) {
    (**(code **)(*(long *)local_130 + 0x140))(local_130);
    Memory::free_static(local_130,false);
  }
  if (((local_138 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_138), cVar6 != '\0')) {
    (**(code **)(*(long *)local_138 + 0x140))(local_138);
    Memory::free_static(local_138,false);
  }
  if (((local_140 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_140), cVar6 != '\0')) {
    (**(code **)(*(long *)local_140 + 0x140))(local_140);
    Memory::free_static(local_140,false);
  }
  if (((local_148 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_148), cVar6 != '\0')) {
    (**(code **)(*(long *)local_148 + 0x140))(local_148);
    Memory::free_static(local_148,false);
  }
  if (((local_150 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_150), cVar6 != '\0')) {
    (**(code **)(*(long *)local_150 + 0x140))(local_150);
    Memory::free_static(local_150,false);
  }
  if (((local_158 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_158), cVar6 != '\0')) {
    (**(code **)(*(long *)local_158 + 0x140))(local_158);
    Memory::free_static(local_158,false);
  }
  if (((local_160 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_160), cVar6 != '\0')) {
    (**(code **)(*(long *)local_160 + 0x140))(local_160);
    Memory::free_static(local_160,false);
  }
  if (((local_168 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_168), cVar6 != '\0')) {
    (**(code **)(*(long *)local_168 + 0x140))(local_168);
    Memory::free_static(local_168,false);
  }
  if (((local_170 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_170), cVar6 != '\0')) {
    (**(code **)(*(long *)local_170 + 0x140))(local_170);
    Memory::free_static(local_170,false);
  }
  if (((local_178 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_178), cVar6 != '\0')) {
    (**(code **)(*(long *)local_178 + 0x140))(local_178);
    Memory::free_static(local_178,false);
  }
  if (((local_180 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_180), cVar6 != '\0')) {
    (**(code **)(*(long *)local_180 + 0x140))(local_180);
    Memory::free_static(local_180,false);
  }
  if (((local_188 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_188), cVar6 != '\0')) {
    (**(code **)(*(long *)local_188 + 0x140))(local_188);
    Memory::free_static(local_188,false);
  }
  Array::~Array(local_190);
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_198), cVar6 != '\0')) {
    (**(code **)(*(long *)local_198 + 0x140))(local_198);
    Memory::free_static(local_198,false);
  }
  cVar6 = RefCounted::unreference();
  if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_1a0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1a0 + 0x140))(local_1a0);
    Memory::free_static(local_1a0,false);
  }
  if (((local_1a8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1a8), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1a8 + 0x140))(local_1a8);
    Memory::free_static(local_1a8,false);
  }
  if (((local_1b0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1b0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1b0 + 0x140))(local_1b0);
    Memory::free_static(local_1b0,false);
  }
  if (((local_1b8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1b8), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1b8 + 0x140))(local_1b8);
    Memory::free_static(local_1b8,false);
  }
  if (((local_1c0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1c0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1c0 + 0x140))(local_1c0);
    Memory::free_static(local_1c0,false);
  }
  if (((local_1c8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1c8), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1c8 + 0x140))(local_1c8);
    Memory::free_static(local_1c8,false);
  }
  if (((local_1d0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1d0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1d0 + 0x140))(local_1d0);
    Memory::free_static(local_1d0,false);
  }
  if (((local_1d8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1d8), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1d8 + 0x140))(local_1d8);
    Memory::free_static(local_1d8,false);
  }
  if (((local_1e0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1e0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1e0 + 0x140))(local_1e0);
    Memory::free_static(local_1e0,false);
  }
  if (((local_1e8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1e8), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1e8 + 0x140))(local_1e8);
    Memory::free_static(local_1e8,false);
  }
  if (((local_1f0 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1f0), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1f0 + 0x140))(local_1f0);
    Memory::free_static(local_1f0,false);
  }
  if (((local_1f8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_1f8), cVar6 != '\0')) {
    (**(code **)(*(long *)local_1f8 + 0x140))(local_1f8);
    Memory::free_static(local_1f8,false);
  }
  if (((local_200 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_200), cVar6 != '\0')) {
    (**(code **)(*(long *)local_200 + 0x140))(local_200);
    Memory::free_static(local_200,false);
  }
  if (((local_208 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_208), cVar6 != '\0')) {
    (**(code **)(*(long *)local_208 + 0x140))(local_208);
    Memory::free_static(local_208,false);
  }
  Array::~Array(local_210);
  do {
    pSVar21 = pSVar19 + -8;
    pSVar19 = pSVar19 + -8;
    if (*(long *)pSVar21 != 0) {
      LOCK();
      plVar11 = (long *)(*(long *)pSVar21 + -0x10);
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
        lVar15 = *(long *)pSVar19;
        *(undefined8 *)pSVar19 = 0;
        Memory::free_static((void *)(lVar15 + -0x10),false);
      }
    }
  } while (pSVar19 != (String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if (((local_228 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_228, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_228), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  if (((local_230 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar12 = local_230, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_230), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
    Memory::free_static(pOVar12,false);
  }
  if (((local_238 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_238), cVar6 != '\0')) {
    (**(code **)(*(long *)local_238 + 0x140))(local_238);
    Memory::free_static(local_238,false);
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OS::get_system_font_path(String const&, int, int, bool) const */

String * OS::get_system_font_path(String *param_1,int param_2,int param_3,bool param_4)

{
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* void Ref<FontVariation>::instantiate<>() */

void __thiscall Ref<FontVariation>::instantiate<>(Ref<FontVariation> *this)

{
  char cVar1;
  FontVariation *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (FontVariation *)operator_new(0x330,"");
  FontVariation::FontVariation(this_00);
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
    this_00 = (FontVariation *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (FontVariation *)pOVar3) goto LAB_00108595;
    *(FontVariation **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00108595;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (FontVariation *)0x0) {
    return;
  }
LAB_00108595:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
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



/* Ref<Font>::unref() */

void __thiscall Ref<Font>::unref(Ref<Font> *this)

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



/* Ref<FontFile>::unref() */

void __thiscall Ref<FontFile>::unref(Ref<FontFile> *this)

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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* editor_register_fonts(Ref<Theme> const&) [clone .cold] */

void editor_register_fonts(Ref *param_1)

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
LAB_00108ba0:
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
  if (lVar10 == 0) goto LAB_00108ba0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00108a79:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00108a79;
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
    goto LAB_00108bf6;
  }
  if (lVar10 == lVar7) {
LAB_00108b1f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00108bf6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00108b0a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00108b1f;
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
LAB_00108b0a:
  puVar9[-1] = param_1;
  return 0;
}


