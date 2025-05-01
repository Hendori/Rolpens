
/* editor_configure_icons(bool) */

void editor_configure_icons(bool param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  HashMap aHStack_58 [8];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_1) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      ImageLoaderSVG::set_forced_color_map((HashMap *)&EditorColorMap::color_conversion_map);
      return;
    }
    goto LAB_0010012a;
  }
  local_30 = 2;
  local_50 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  ImageLoaderSVG::set_forced_color_map(aHStack_58);
  if ((void *)local_50._0_8_ != (void *)0x0) {
    pvVar3 = (void *)local_50._0_8_;
    if (local_30._4_4_ != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (local_30 & 0xffffffff) * 4);
      if (uVar1 == 0) {
        local_30 = local_30 & 0xffffffff;
        local_40 = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(local_50._8_8_ + lVar2) != 0) {
            *(int *)(local_50._8_8_ + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            *(undefined8 *)(local_50._0_8_ + lVar2 * 2) = 0;
            pvVar3 = (void *)local_50._0_8_;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        local_30 = local_30 & 0xffffffff;
        local_40 = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001000c3;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static((void *)local_50._8_8_,false);
  }
LAB_001000c3:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010012a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* editor_copy_icons(Ref<Theme> const&, Ref<Theme> const&) */

void editor_copy_icons(Ref *param_1,Ref *param_2)

{
  long lVar1;
  Ref *pRVar2;
  char *pcVar3;
  StringName *pSVar4;
  long *plVar5;
  code *pcVar6;
  Object *pOVar7;
  char cVar8;
  undefined **ppuVar9;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  long local_48;
  long local_40;
  
  ppuVar9 = &editor_icons_names;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    pcVar3 = *ppuVar9;
    pSVar4 = *(StringName **)param_1;
    plVar5 = *(long **)param_2;
    pcVar6 = *(code **)(*plVar5 + 0x1c8);
    lVar1 = EditorStringNames::singleton + 0x10;
    StringName::StringName((StringName *)&local_58,pcVar3,false);
    (*pcVar6)(&local_50,plVar5,(StringName *)&local_58,lVar1);
    pRVar2 = (Ref *)(EditorStringNames::singleton + 0x10);
    StringName::StringName((StringName *)&local_48,pcVar3,false);
    Theme::set_icon(pSVar4,(StringName *)&local_48,pRVar2);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    if (local_50 != (Object *)0x0) {
      cVar8 = RefCounted::unreference();
      pOVar7 = local_50;
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(local_50);
        if (cVar8 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    ppuVar9 = ppuVar9 + 1;
  } while (ppuVar9 != (undefined **)&DAT_00157b38);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* get_default_project_icon() */

void get_default_project_icon(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar3 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = -1;
  do {
    if (iVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
      if ((&editor_icons_sources)[(int)lVar3] != (char *)0x0) {
        strlen((&editor_icons_sources)[(int)lVar3]);
      }
      String::parse_latin1(in_RDI);
LAB_00100357:
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = lVar3 + 1;
    if (lVar3 == 0x3c3) {
      *(undefined8 *)in_RDI = 0;
      goto LAB_00100357;
    }
    iVar2 = strcmp((&editor_icons_names)[lVar3],"DefaultProjectIcon");
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* get_gizmo_handle_scale(String const&, float) */

undefined8 get_gizmo_handle_scale(String *param_1,float param_2)

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
  bool bVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  long local_60;
  long local_58 [3];
  long local_40;
  undefined8 extraout_XMM0_Qb;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_LC8 < param_2) {
    if ((get_gizmo_handle_scale(String_const&,float)::gizmo_to_scale == '\0') &&
       (iVar12 = __cxa_guard_acquire(&get_gizmo_handle_scale(String_const&,float)::gizmo_to_scale),
       iVar12 != 0)) {
      _DAT_00103580 = 2;
      _gizmo_to_scale = (undefined1  [16])0x0;
      _DAT_00103570 = (undefined1  [16])0x0;
      __cxa_atexit(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::
                   ~HashSet,&get_gizmo_handle_scale(String_const&,float)::gizmo_to_scale,
                   &__dso_handle);
      __cxa_guard_release(&get_gizmo_handle_scale(String_const&,float)::gizmo_to_scale);
    }
    if (DAT_00103584 == 0) {
      StringName::StringName((StringName *)&local_60,"EditorHandle",false);
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                ((StringName *)local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_60,"EditorHandleAdd",false);
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                ((StringName *)local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_60,"EditorHandleDisabled",false);
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                ((StringName *)local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_60,"EditorCurveHandle",false);
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                ((StringName *)local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_60,"EditorPathSharpHandle",false);
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                ((StringName *)local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_60,"EditorPathSmoothHandle",false);
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                ((StringName *)local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    StringName::StringName((StringName *)local_58,param_1,false);
    if ((get_gizmo_handle_scale(String_const&,float)::gizmo_to_scale != 0) && (DAT_00103584 != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (_DAT_00103580 & 0xffffffff) * 4);
      lVar2 = *(long *)(hash_table_size_primes_inv + (_DAT_00103580 & 0xffffffff) * 8);
      if (local_58[0] == 0) {
        uVar13 = StringName::get_empty_hash();
      }
      else {
        uVar13 = *(uint *)(local_58[0] + 0x20);
      }
      uVar16 = CONCAT44(0,uVar1);
      if (uVar13 == 0) {
        uVar13 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar14 = SUB168(auVar3 * auVar7,8);
      uVar15 = *(uint *)(DAT_00103578 + lVar14 * 4);
      iVar12 = SUB164(auVar3 * auVar7,8);
      if (uVar15 != 0) {
        uVar17 = 0;
        do {
          if ((uVar13 == uVar15) &&
             (*(long *)(get_gizmo_handle_scale(String_const&,float)::gizmo_to_scale +
                       (ulong)*(uint *)(DAT_00103568 + lVar14 * 4) * 8) == local_58[0])) {
            bVar11 = true;
            goto LAB_00100567;
          }
          uVar17 = uVar17 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = uVar16;
          lVar14 = SUB168(auVar4 * auVar8,8);
          uVar15 = *(uint *)(DAT_00103578 + lVar14 * 4);
          iVar12 = SUB164(auVar4 * auVar8,8);
        } while ((uVar15 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
                auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
                auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar17 <= SUB164(auVar6 * auVar10,8)));
        bVar11 = false;
LAB_00100567:
        if ((StringName::configured != '\0') && (local_58[0] != 0)) {
          StringName::unref();
        }
        if (bVar11) {
          auVar19._0_8_ = EditorScale::get_scale();
          auVar19._8_8_ = extraout_XMM0_Qb;
          auVar20._4_12_ = auVar19._4_12_;
          auVar20._0_4_ = (float)auVar19._0_8_ * param_2;
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            return auVar20._0_8_;
          }
          goto LAB_0010079b;
        }
        goto LAB_00100538;
      }
    }
    if ((StringName::configured != '\0') && (local_58[0] != 0)) {
      StringName::unref();
    }
  }
LAB_00100538:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar18 = EditorScale::get_scale();
    return uVar18;
  }
LAB_0010079b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* editor_generate_icon(int, float, float, HashMap<Color, Color, HashMapHasherDefault,
   HashMapComparatorDefault<Color>, DefaultTypedAllocator<HashMapElement<Color, Color> > > const&)
    */

Ref * editor_generate_icon(int param_1,float param_2,float param_3,HashMap *param_4)

{
  long *plVar1;
  Image *__s;
  float fVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  undefined4 in_register_0000003c;
  Ref *pRVar7;
  long in_FS_OFFSET;
  float fVar8;
  Image *local_68;
  long local_60;
  Image *local_58;
  size_t local_50;
  long local_40;
  
  pRVar7 = (Ref *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (Image *)operator_new(0x268,"");
  Resource::Resource((Resource *)local_68);
  ((Resource *)local_68)[0x260] = (Resource)0x0;
  *(code **)local_68 = operator_delete;
  *(undefined4 *)((Resource *)local_68 + 0x240) = 0;
  *(undefined8 *)((Resource *)local_68 + 0x250) = 0;
  *(undefined8 *)((Resource *)local_68 + 600) = 0;
  postinitialize_handler((Object *)local_68);
  cVar4 = RefCounted::init_ref();
  if (cVar4 == '\0') {
    local_68 = (Image *)0x0;
  }
  fVar8 = roundf(param_2);
  bVar6 = false;
  if (param_2 != fVar8) {
    fVar2 = _LC19;
    if (_LC19 <= ABS(fVar8) * _LC19) {
      fVar2 = ABS(fVar8) * _LC19;
    }
    bVar6 = fVar2 <= ABS(fVar8 - param_2);
  }
  local_60 = 0;
  __s = (Image *)(&editor_icons_sources)[(int)param_4];
  local_50 = 0;
  if (__s != (Image *)0x0) {
    local_50 = strlen((char *)__s);
  }
  local_58 = __s;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Image *)0x0;
  if (local_68 != (Image *)0x0) {
    local_58 = local_68;
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      local_58 = (Image *)0x0;
    }
  }
  iVar5 = ImageLoaderSVG::create_image_from_string(&local_58,(StrRange *)&local_60,bVar6);
  if ((local_58 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    memdelete<Image>(local_58);
  }
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
  if (iVar5 == 0) {
    if (param_3 != _LC8) {
      Image::adjust_bcs(_LC8,_LC8,param_3);
    }
    ImageTexture::create_from_image(pRVar7);
  }
  else {
    _err_print_error("editor_generate_icon","editor/themes/editor_icons.cpp",0x3a,
                     "Condition \"err != OK\" is true. Returning: Ref<ImageTexture>()",
                     "Failed generating icon, unsupported or invalid SVG data in editor theme.",0,0)
    ;
    *(undefined8 *)pRVar7 = 0;
  }
  if ((local_68 != (Image *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    memdelete<Image>(local_68);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pRVar7;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* editor_register_icons(Ref<Theme> const&, bool, float, int, float) */

void editor_register_icons(Ref *param_1,bool param_2,float param_3,int param_4,float param_5)

{
  long *plVar1;
  Ref *pRVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
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
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  bool bVar75;
  undefined8 uVar76;
  long lVar77;
  uint uVar78;
  undefined8 uVar79;
  char cVar80;
  uint uVar81;
  int iVar82;
  uint uVar83;
  long *plVar84;
  undefined1 (*pauVar85) [16];
  size_t sVar86;
  Object *pOVar87;
  void *pvVar88;
  ulong uVar89;
  undefined8 *puVar90;
  int iVar91;
  long lVar92;
  long *plVar93;
  StringName *pSVar94;
  uint *puVar95;
  long lVar96;
  int iVar97;
  uint uVar98;
  ulong uVar99;
  void *pvVar100;
  uint uVar101;
  Object *pOVar102;
  long in_FS_OFFSET;
  float fVar103;
  float fVar104;
  double dVar105;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  uint *local_1e0;
  char *local_1d8;
  long *local_1d0;
  StringName *local_1c0;
  void *local_1a8;
  void *local_180;
  HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
  *local_178;
  long local_158;
  Object *local_150;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
  local_e8 [8];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined8 local_c0;
  long local_b8;
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  Object *local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  Color local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e0 = (undefined1  [16])0x0;
  local_d0 = (undefined1  [16])0x0;
  local_c0 = _LC0;
  if ((!param_2) && (_set_icon != (long *)0x0)) {
    plVar93 = _set_icon;
    do {
      plVar84 = (long *)HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                        ::operator[](local_e8,(Color *)(plVar93 + 2));
      plVar1 = plVar93 + 4;
      lVar96 = plVar93[5];
      plVar93 = (long *)*plVar93;
      *plVar84 = *plVar1;
      plVar84[1] = lVar96;
    } while (plVar93 != (long *)0x0);
  }
  lVar96 = EditorStringNames::singleton;
  local_178 = local_e8;
  plVar93 = *(long **)param_1;
  pcVar5 = *(code **)(*plVar93 + 0x1e8);
  if ((editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#1}::operator()()::
       sname == '\0') &&
     (iVar82 = __cxa_guard_acquire(&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                                    {lambda()#1}::operator()()::sname), iVar82 != 0)) {
    _scs_create((char *)&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#1}
                         ::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#1}::
                  operator()()::sname,&__dso_handle);
    __cxa_guard_release(&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#1}
                         ::operator()()::sname);
  }
  auVar106 = (*pcVar5)(plVar93,&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                                {lambda()#1}::operator()()::sname,lVar96);
  lVar96 = EditorStringNames::singleton;
  plVar93 = *(long **)param_1;
  pcVar5 = *(code **)(*plVar93 + 0x1e8);
  if ((editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#2}::operator()()::
       sname == '\0') &&
     (iVar82 = __cxa_guard_acquire(&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                                    {lambda()#2}::operator()()::sname), iVar82 != 0)) {
    _scs_create((char *)&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#2}
                         ::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#2}::
                  operator()()::sname,&__dso_handle);
    __cxa_guard_release(&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#2}
                         ::operator()()::sname);
  }
  auVar107 = (*pcVar5)(plVar93,&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                                {lambda()#2}::operator()()::sname,lVar96);
  lVar96 = EditorStringNames::singleton;
  plVar93 = *(long **)param_1;
  pcVar5 = *(code **)(*plVar93 + 0x1e8);
  if ((editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#3}::operator()()::
       sname == '\0') &&
     (iVar82 = __cxa_guard_acquire(&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                                    {lambda()#3}::operator()()::sname), iVar82 != 0)) {
    _scs_create((char *)&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#3}
                         ::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#3}::
                  operator()()::sname,&__dso_handle);
    __cxa_guard_release(&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#3}
                         ::operator()()::sname);
  }
  auVar108 = (*pcVar5)(plVar93,&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                                {lambda()#3}::operator()()::sname,lVar96);
  local_b8 = 0;
  local_88 = (Object *)0x103811;
  local_80._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_b8);
  local_58._0_16_ = Color::html((String *)&local_b8);
  pauVar85 = (undefined1 (*) [16])
             HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
             ::operator[](local_178,local_58);
  lVar96 = local_b8;
  *pauVar85 = auVar106;
  if (local_b8 != 0) {
    LOCK();
    plVar93 = (long *)(local_b8 + -0x10);
    *plVar93 = *plVar93 + -1;
    UNLOCK();
    if (*plVar93 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar96 + -0x10),false);
    }
  }
  local_b8 = 0;
  local_88 = (Object *)0x103819;
  local_80._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_b8);
  auVar106 = Color::html((String *)&local_b8);
  local_58._0_16_ = auVar106;
  pauVar85 = (undefined1 (*) [16])
             HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
             ::operator[](local_178,local_58);
  lVar96 = local_b8;
  *pauVar85 = auVar107;
  if (local_b8 != 0) {
    LOCK();
    plVar93 = (long *)(local_b8 + -0x10);
    *plVar93 = *plVar93 + -1;
    UNLOCK();
    if (*plVar93 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar96 + -0x10),false);
    }
  }
  local_b8 = 0;
  local_88 = (Object *)0x103821;
  local_80._0_8_ = 7;
  String::parse_latin1((StrRange *)&local_b8);
  auVar106 = Color::html((String *)&local_b8);
  local_58._0_16_ = auVar106;
  pauVar85 = (undefined1 (*) [16])
             HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
             ::operator[](local_178,local_58);
  lVar96 = local_b8;
  *pauVar85 = auVar108;
  if (local_b8 != 0) {
    LOCK();
    plVar93 = (long *)(local_b8 + -0x10);
    *plVar93 = *plVar93 + -1;
    UNLOCK();
    if (*plVar93 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar96 + -0x10),false);
    }
  }
  uVar78 = _DAT_0015a15c;
  uVar4 = __scs_create;
  if (_DAT_0015a15c == 0) {
    local_180 = (void *)0x0;
    pvVar88 = (void *)0x0;
    local_1a8 = (void *)0x0;
    local_1c0 = (StringName *)0x0;
  }
  else {
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)__scs_create * 4);
    uVar99 = (ulong)uVar3 * 4;
    local_180 = (void *)Memory::alloc_static(uVar99,false);
    lVar96 = 0;
    local_1c0 = (StringName *)Memory::alloc_static((ulong)uVar3 * 8,false);
    pvVar88 = (void *)Memory::alloc_static(uVar99,false);
    local_1a8 = (void *)Memory::alloc_static(uVar99,false);
    pSVar94 = local_1c0;
    do {
      StringName::StringName
                (pSVar94,(StringName *)(EditorColorMap::color_conversion_exceptions + lVar96 * 2));
      *(undefined4 *)((long)pvVar88 + lVar96) = *(undefined4 *)(_typeinfo + lVar96);
      lVar77 = ___dynamic_cast;
      lVar92 = _typeinfo;
      lVar96 = lVar96 + 4;
      pSVar94 = pSVar94 + 8;
    } while (lVar96 != (ulong)uVar78 << 2);
    if (uVar3 != 0) {
      uVar89 = 0;
      do {
        *(undefined4 *)((long)local_180 + uVar89) = *(undefined4 *)(lVar77 + uVar89);
        *(undefined4 *)((long)local_1a8 + uVar89) = *(undefined4 *)(lVar92 + uVar89);
        uVar89 = uVar89 + 4;
      } while (uVar89 != uVar99);
    }
  }
  local_148 = (undefined1  [16])0x0;
  local_128 = _LC0;
  local_138 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_b8,"DefaultProjectIcon",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"Godot",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"Logo",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  lVar96 = EditorStringNames::singleton;
  local_b0 = (undefined1  [16])0x0;
  local_90 = _LC0;
  local_f8 = _LC0;
  local_a0 = (undefined1  [16])0x0;
  plVar93 = *(long **)param_1;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  pcVar5 = *(code **)(*plVar93 + 0x1e8);
  if (editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#4}::operator()()::
      sname == '\0') {
    iVar82 = __cxa_guard_acquire(&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                                  {lambda()#4}::operator()()::sname);
    if (iVar82 != 0) {
      _scs_create((char *)&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                           {lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &editor_register_icons(Ref<Theme>const&,bool,float,int,float)::{lambda()#4}::
                    operator()()::sname,&__dso_handle);
      __cxa_guard_release(&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                           {lambda()#4}::operator()()::sname);
    }
  }
  auVar106 = (*pcVar5)(plVar93,&editor_register_icons(Ref<Theme>const&,bool,float,int,float)::
                                {lambda()#4}::operator()()::sname,lVar96);
  local_150 = (Object *)0x0;
  local_88 = (Object *)0x103841;
  local_80._0_8_ = 6;
  String::parse_latin1((StrRange *)&local_150);
  auVar107 = Color::html((String *)&local_150);
  local_58._0_16_ = auVar107;
  pauVar85 = (undefined1 (*) [16])
             HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
             ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                           *)&local_b8,local_58);
  pOVar102 = local_150;
  *pauVar85 = auVar106;
  if (local_150 != (Object *)0x0) {
    LOCK();
    pOVar87 = local_150 + -0x10;
    *(long *)pOVar87 = *(long *)pOVar87 + -1;
    UNLOCK();
    if (*(long *)pOVar87 == 0) {
      local_150 = (Object *)0x0;
      Memory::free_static(pOVar102 + -0x10,false);
    }
  }
  if (__LC3 < auVar106._4_4_ * __LC36 + auVar106._0_4_ * __LC37 + auVar106._8_4_ * __LC38) {
    local_150 = (Object *)0x0;
    local_88 = (Object *)0x103848;
    local_80._0_8_ = 6;
    String::parse_latin1((StrRange *)&local_150);
    auVar106 = Color::html((String *)&local_150);
    local_58._0_16_ = auVar106;
    puVar90 = (undefined8 *)
              HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
              ::operator[]((HashMap<Color,Color,HashMapHasherDefault,HashMapComparatorDefault<Color>,DefaultTypedAllocator<HashMapElement<Color,Color>>>
                            *)&local_b8,local_58);
    pOVar102 = local_150;
    uVar76 = _UNK_00159b28;
    *puVar90 = __LC40;
    puVar90[1] = uVar76;
    if (local_150 != (Object *)0x0) {
      LOCK();
      pOVar87 = local_150 + -0x10;
      *(long *)pOVar87 = *(long *)pOVar87 + -1;
      UNLOCK();
      if (*(long *)pOVar87 == 0) {
        local_150 = (Object *)0x0;
        Memory::free_static(pOVar102 + -0x10,false);
      }
    }
  }
  StringName::StringName((StringName *)&local_150,"GuiChecked",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_150 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_150,"GuiRadioChecked",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_150 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_150,"GuiIndeterminate",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_150 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_150,"GuiToggleOn",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_150 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_150,"GuiToggleOnMirrored",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_150 != (Object *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_150,"PlayOverlay",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_150 != (Object *)0x0)) {
    StringName::unref();
  }
  local_1e0 = (uint *)0x0;
  local_1d0 = (long *)local_118._0_8_;
  do {
    local_158 = 0;
    pOVar102 = (Object *)(&editor_icons_names)[(long)local_1e0];
    sVar86 = 0;
    if (pOVar102 != (Object *)0x0) {
      sVar86 = strlen((char *)pOVar102);
    }
    local_80._0_8_ = sVar86;
    local_88 = pOVar102;
    String::parse_latin1((StrRange *)&local_158);
    StringName::StringName((StringName *)&local_88,(String *)&local_158,false);
    iVar82 = (int)(StringName *)&local_88;
    iVar97 = (int)(StrRange *)&local_150;
    if ((local_1d0 == (long *)0x0) || (local_f8._4_4_ == 0)) {
joined_r0x001016bf:
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
LAB_001016d5:
      StringName::StringName((StringName *)&local_88,(String *)&local_158,false);
      uVar76 = local_148._0_8_;
      fVar104 = param_3;
      if ((local_148._0_8_ == 0) || (local_128._4_4_ == 0)) {
joined_r0x00101b47:
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
      }
      else {
        uVar3 = *(uint *)(hash_table_size_primes + (local_128 & 0xffffffff) * 4);
        lVar96 = *(long *)(hash_table_size_primes_inv + (local_128 & 0xffffffff) * 8);
        if (local_88 == (Object *)0x0) {
          uVar81 = StringName::get_empty_hash();
        }
        else {
          uVar81 = *(uint *)(local_88 + 0x20);
        }
        uVar99 = CONCAT44(0,uVar3);
        if (uVar81 == 0) {
          uVar81 = 1;
        }
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar81 * lVar96;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = uVar99;
        lVar92 = SUB168(auVar12 * auVar47,8);
        uVar83 = *(uint *)(local_138._8_8_ + lVar92 * 4);
        iVar91 = SUB164(auVar12 * auVar47,8);
        if (uVar83 == 0) goto joined_r0x00101b47;
        uVar101 = 0;
        do {
          if ((uVar83 == uVar81) &&
             (*(Object **)(uVar76 + (ulong)*(uint *)(local_148._8_8_ + lVar92 * 4) * 8) == local_88)
             ) {
            bVar75 = true;
            goto LAB_00101800;
          }
          uVar101 = uVar101 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar91 + 1) * lVar96;
          auVar48._8_8_ = 0;
          auVar48._0_8_ = uVar99;
          lVar92 = SUB168(auVar13 * auVar48,8);
          uVar83 = *(uint *)(local_138._8_8_ + lVar92 * 4);
          iVar91 = SUB164(auVar13 * auVar48,8);
        } while ((uVar83 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar83 * lVar96, auVar49._8_8_ = 0,
                auVar49._0_8_ = uVar99, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar3 + iVar91) - SUB164(auVar14 * auVar49,8)) * lVar96,
                auVar50._8_8_ = 0, auVar50._0_8_ = uVar99, uVar101 <= SUB164(auVar15 * auVar50,8)));
        bVar75 = false;
LAB_00101800:
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
        if (bVar75) {
          fVar104 = _LC8;
        }
      }
      StringName::StringName((StringName *)&local_88,(String *)&local_158,false);
      if ((local_1c0 == (StringName *)0x0) || (uVar78 == 0)) {
joined_r0x00101aef:
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
LAB_00101b11:
        fVar103 = (float)get_gizmo_handle_scale((String *)&local_158,param_5);
        goto LAB_00101388;
      }
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
      lVar96 = *(long *)(hash_table_size_primes_inv + (ulong)uVar4 * 8);
      if (local_88 == (Object *)0x0) {
        uVar81 = StringName::get_empty_hash();
      }
      else {
        uVar81 = *(uint *)(local_88 + 0x20);
      }
      uVar99 = CONCAT44(0,uVar3);
      if (uVar81 == 0) {
        uVar81 = 1;
      }
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar81 * lVar96;
      auVar51._8_8_ = 0;
      auVar51._0_8_ = uVar99;
      lVar92 = SUB168(auVar16 * auVar51,8);
      uVar83 = *(uint *)((long)local_180 + lVar92 * 4);
      iVar91 = SUB164(auVar16 * auVar51,8);
      if (uVar83 == 0) goto joined_r0x00101aef;
      uVar101 = 0;
      do {
        if ((uVar83 == uVar81) &&
           (*(Object **)(local_1c0 + (ulong)*(uint *)((long)local_1a8 + lVar92 * 4) * 8) == local_88
           )) {
          bVar75 = true;
          goto LAB_00101948;
        }
        uVar101 = uVar101 + 1;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)(iVar91 + 1) * lVar96;
        auVar52._8_8_ = 0;
        auVar52._0_8_ = uVar99;
        lVar92 = SUB168(auVar17 * auVar52,8);
        uVar83 = *(uint *)((long)local_180 + lVar92 * 4);
        iVar91 = SUB164(auVar17 * auVar52,8);
      } while ((uVar83 != 0) &&
              (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar83 * lVar96, auVar53._8_8_ = 0,
              auVar53._0_8_ = uVar99, auVar19._8_8_ = 0,
              auVar19._0_8_ = (ulong)((uVar3 + iVar91) - SUB164(auVar18 * auVar53,8)) * lVar96,
              auVar54._8_8_ = 0, auVar54._0_8_ = uVar99, uVar101 <= SUB164(auVar19 * auVar54,8)));
      bVar75 = false;
LAB_00101948:
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      if (!bVar75) goto LAB_00101b11;
      local_80 = (undefined1  [16])0x0;
      local_70 = (undefined1  [16])0x0;
      local_60 = _LC0;
      fVar103 = (float)get_gizmo_handle_scale((String *)&local_158,param_5);
      editor_generate_icon(iVar97,fVar103,fVar104,(HashMap *)((ulong)local_1e0 & 0xffffffff));
      pOVar102 = local_150;
      if (local_150 == (Object *)0x0) {
        pvVar100 = (void *)local_80._0_8_;
        if ((void *)local_80._0_8_ != (void *)0x0) goto LAB_00101a0f;
        goto LAB_00101c20;
      }
      cVar80 = RefCounted::reference();
      if (cVar80 == '\0') {
        pOVar102 = (Object *)0x0;
      }
      if (local_150 != (Object *)0x0) {
        cVar80 = RefCounted::unreference();
        pOVar87 = local_150;
        if (cVar80 != '\0') {
          cVar80 = predelete_handler(local_150);
          if (cVar80 != '\0') {
            (**(code **)(*(long *)pOVar87 + 0x140))(pOVar87);
            Memory::free_static(pOVar87,false);
          }
        }
      }
      pvVar100 = (void *)local_80._0_8_;
      if ((void *)local_80._0_8_ != (void *)0x0) {
LAB_00101a0f:
        if (local_60._4_4_ != 0) {
          uVar3 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
          if (uVar3 == 0) {
            local_60 = local_60 & 0xffffffff;
            local_70 = (undefined1  [16])0x0;
          }
          else {
            lVar96 = 0;
            do {
              if (*(int *)(local_80._8_8_ + lVar96) != 0) {
                *(int *)(local_80._8_8_ + lVar96) = 0;
                Memory::free_static(*(void **)((long)pvVar100 + lVar96 * 2),false);
                *(undefined8 *)(local_80._0_8_ + lVar96 * 2) = 0;
                pvVar100 = (void *)local_80._0_8_;
              }
              lVar96 = lVar96 + 4;
            } while ((ulong)uVar3 << 2 != lVar96);
            local_60 = local_60 & 0xffffffff;
            local_70 = (undefined1  [16])0x0;
            if (pvVar100 == (void *)0x0) goto LAB_001013d9;
          }
        }
        Memory::free_static(pvVar100,false);
        Memory::free_static((void *)local_80._8_8_,false);
      }
LAB_001013d9:
      local_88 = (Object *)0x0;
      pSVar94 = *(StringName **)param_1;
      if (pOVar102 != (Object *)0x0) {
LAB_001013f2:
        local_88 = (Object *)0x0;
        pOVar87 = (Object *)__dynamic_cast(pOVar102,&Object::typeinfo,&Texture2D::typeinfo,0);
        if (pOVar87 != (Object *)0x0) {
          local_88 = pOVar87;
          cVar80 = RefCounted::reference();
          if (cVar80 == '\0') {
            local_88 = (Object *)0x0;
          }
        }
      }
    }
    else {
      uVar3 = *(uint *)(hash_table_size_primes + (local_f8 & 0xffffffff) * 4);
      uVar99 = CONCAT44(0,uVar3);
      lVar96 = *(long *)(hash_table_size_primes_inv + (local_f8 & 0xffffffff) * 8);
      if (local_88 == (Object *)0x0) {
        uVar81 = StringName::get_empty_hash();
      }
      else {
        uVar81 = *(uint *)(local_88 + 0x20);
      }
      if (uVar81 == 0) {
        uVar81 = 1;
      }
      auVar106._8_8_ = 0;
      auVar106._0_8_ = (ulong)uVar81 * lVar96;
      auVar107._8_8_ = 0;
      auVar107._0_8_ = uVar99;
      lVar92 = SUB168(auVar106 * auVar107,8);
      uVar83 = *(uint *)(local_108._8_8_ + lVar92 * 4);
      iVar91 = SUB164(auVar106 * auVar107,8);
      if (uVar83 == 0) goto joined_r0x001016bf;
      uVar101 = 0;
      do {
        if ((uVar83 == uVar81) &&
           ((Object *)local_1d0[*(uint *)(local_118._8_8_ + lVar92 * 4)] == local_88)) {
          bVar75 = true;
          goto LAB_00101350;
        }
        uVar101 = uVar101 + 1;
        auVar108._8_8_ = 0;
        auVar108._0_8_ = (ulong)(iVar91 + 1) * lVar96;
        auVar40._8_8_ = 0;
        auVar40._0_8_ = uVar99;
        lVar92 = SUB168(auVar108 * auVar40,8);
        uVar83 = *(uint *)(local_108._8_8_ + lVar92 * 4);
        iVar91 = SUB164(auVar108 * auVar40,8);
      } while ((uVar83 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar83 * lVar96, auVar41._8_8_ = 0,
              auVar41._0_8_ = uVar99, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar3 + iVar91) - SUB164(auVar6 * auVar41,8)) * lVar96,
              auVar42._8_8_ = 0, auVar42._0_8_ = uVar99, uVar101 <= SUB164(auVar7 * auVar42,8)));
      bVar75 = false;
LAB_00101350:
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      if (!bVar75) goto LAB_001016d5;
      fVar103 = (float)get_gizmo_handle_scale((String *)&local_158,param_5);
      fVar104 = _LC8;
LAB_00101388:
      editor_generate_icon(iVar82,fVar103,fVar104,(HashMap *)((ulong)local_1e0 & 0xffffffff));
      pOVar102 = local_88;
      if (local_88 == (Object *)0x0) {
LAB_00101c20:
        local_88 = (Object *)0x0;
        pSVar94 = *(StringName **)param_1;
      }
      else {
        cVar80 = RefCounted::reference();
        if (cVar80 != '\0') {
          if (local_88 != (Object *)0x0) goto LAB_001013c9;
          pSVar94 = *(StringName **)param_1;
          goto LAB_001013f2;
        }
        pOVar102 = (Object *)0x0;
        if (local_88 != (Object *)0x0) {
LAB_001013c9:
          cVar80 = RefCounted::unreference();
          pOVar87 = local_88;
          if (cVar80 != '\0') {
            cVar80 = predelete_handler(local_88);
            if (cVar80 != '\0') {
              (**(code **)(*(long *)pOVar87 + 0x140))(pOVar87);
              Memory::free_static(pOVar87,false);
            }
          }
          goto LAB_001013d9;
        }
        local_88 = (Object *)0x0;
        pSVar94 = *(StringName **)param_1;
        pOVar102 = (Object *)0x0;
      }
    }
    pRVar2 = (Ref *)(EditorStringNames::singleton + 0x10);
    StringName::StringName((StringName *)&local_150,(String *)&local_158,false);
    Theme::set_icon(pSVar94,(StringName *)&local_150,pRVar2);
    if ((StringName::configured != '\0') && (local_150 != (Object *)0x0)) {
      StringName::unref();
    }
    if (local_88 != (Object *)0x0) {
      cVar80 = RefCounted::unreference();
      pOVar87 = local_88;
      if (cVar80 != '\0') {
        cVar80 = predelete_handler(local_88);
        if (cVar80 != '\0') {
          (**(code **)(*(long *)pOVar87 + 0x140))(pOVar87);
          Memory::free_static(pOVar87,false);
        }
      }
    }
    lVar96 = local_158;
    if (local_158 != 0) {
      LOCK();
      plVar93 = (long *)(local_158 + -0x10);
      *plVar93 = *plVar93 + -1;
      UNLOCK();
      if (*plVar93 == 0) {
        local_158 = 0;
        Memory::free_static((void *)(lVar96 + -0x10),false);
      }
      local_1d0 = (long *)local_118._0_8_;
    }
    if (pOVar102 != (Object *)0x0) {
      cVar80 = RefCounted::unreference();
      if (cVar80 != '\0') {
        cVar80 = predelete_handler(pOVar102);
        if (cVar80 != '\0') {
          (**(code **)(*(long *)pOVar102 + 0x140))(pOVar102);
          Memory::free_static(pOVar102,false);
        }
      }
    }
    local_1e0 = (uint *)((long)local_1e0 + 1);
  } while (local_1e0 != (uint *)0x3c3);
  if (param_4 < 0x40) {
    dVar105 = (double)param_4 * __LC48;
    fVar104 = (float)EditorScale::get_scale();
    local_1e0 = &editor_md_thumbs_indices;
    local_1d8 = "FileDeadMediumThumb";
    fVar104 = (float)((double)fVar104 * dVar105);
    do {
      uVar3 = *local_1e0;
      StringName::StringName((StringName *)&local_88,local_1d8,false);
      if ((local_1d0 == (long *)0x0) || (local_f8._4_4_ == 0)) {
joined_r0x00102679:
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
LAB_0010268e:
        StringName::StringName((StringName *)&local_88,local_1d8,false);
        uVar76 = local_148._0_8_;
        fVar103 = param_3;
        if ((local_148._0_8_ == 0) || (local_128._4_4_ == 0)) {
joined_r0x00102a90:
          if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        else {
          uVar81 = *(uint *)(hash_table_size_primes + (local_128 & 0xffffffff) * 4);
          lVar96 = *(long *)(hash_table_size_primes_inv + (local_128 & 0xffffffff) * 8);
          if (local_88 == (Object *)0x0) {
            uVar83 = StringName::get_empty_hash();
          }
          else {
            uVar83 = *(uint *)(local_88 + 0x20);
          }
          uVar99 = CONCAT44(0,uVar81);
          if (uVar83 == 0) {
            uVar83 = 1;
          }
          auVar32._8_8_ = 0;
          auVar32._0_8_ = (ulong)uVar83 * lVar96;
          auVar67._8_8_ = 0;
          auVar67._0_8_ = uVar99;
          lVar92 = SUB168(auVar32 * auVar67,8);
          uVar101 = *(uint *)(local_138._8_8_ + lVar92 * 4);
          iVar91 = SUB164(auVar32 * auVar67,8);
          if (uVar101 == 0) goto joined_r0x00102a90;
          uVar98 = 0;
          do {
            if ((uVar83 == uVar101) &&
               (*(Object **)(uVar76 + (ulong)*(uint *)(local_148._8_8_ + lVar92 * 4) * 8) ==
                local_88)) {
              bVar75 = true;
              goto LAB_00102e87;
            }
            uVar98 = uVar98 + 1;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = (ulong)(iVar91 + 1) * lVar96;
            auVar68._8_8_ = 0;
            auVar68._0_8_ = uVar99;
            lVar92 = SUB168(auVar33 * auVar68,8);
            uVar101 = *(uint *)(local_138._8_8_ + lVar92 * 4);
            iVar91 = SUB164(auVar33 * auVar68,8);
          } while ((uVar101 != 0) &&
                  (auVar34._8_8_ = 0, auVar34._0_8_ = (ulong)uVar101 * lVar96, auVar69._8_8_ = 0,
                  auVar69._0_8_ = uVar99, auVar35._8_8_ = 0,
                  auVar35._0_8_ = (ulong)((uVar81 + iVar91) - SUB164(auVar34 * auVar69,8)) * lVar96,
                  auVar70._8_8_ = 0, auVar70._0_8_ = uVar99, uVar98 <= SUB164(auVar35 * auVar70,8)))
          ;
          bVar75 = false;
LAB_00102e87:
          if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
            StringName::unref();
          }
          if (bVar75) {
            fVar103 = _LC8;
          }
        }
        StringName::StringName((StringName *)&local_88,local_1d8,false);
        if ((local_1c0 == (StringName *)0x0) || (uVar78 == 0)) {
joined_r0x00102fd2:
          if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
            StringName::unref();
          }
          goto LAB_001027fd;
        }
        uVar81 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
        lVar96 = *(long *)(hash_table_size_primes_inv + (ulong)uVar4 * 8);
        if (local_88 == (Object *)0x0) {
          uVar83 = StringName::get_empty_hash();
        }
        else {
          uVar83 = *(uint *)(local_88 + 0x20);
        }
        uVar99 = CONCAT44(0,uVar81);
        if (uVar83 == 0) {
          uVar83 = 1;
        }
        auVar36._8_8_ = 0;
        auVar36._0_8_ = (ulong)uVar83 * lVar96;
        auVar71._8_8_ = 0;
        auVar71._0_8_ = uVar99;
        lVar92 = SUB168(auVar36 * auVar71,8);
        uVar101 = *(uint *)((long)local_180 + lVar92 * 4);
        iVar91 = SUB164(auVar36 * auVar71,8);
        if (uVar101 == 0) goto joined_r0x00102fd2;
        uVar98 = 0;
        do {
          if ((uVar101 == uVar83) &&
             (*(Object **)(local_1c0 + (ulong)*(uint *)((long)local_1a8 + lVar92 * 4) * 8) ==
              local_88)) {
            bVar75 = true;
            goto LAB_00103004;
          }
          uVar98 = uVar98 + 1;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = (ulong)(iVar91 + 1) * lVar96;
          auVar72._8_8_ = 0;
          auVar72._0_8_ = uVar99;
          lVar92 = SUB168(auVar37 * auVar72,8);
          uVar101 = *(uint *)((long)local_180 + lVar92 * 4);
          iVar91 = SUB164(auVar37 * auVar72,8);
        } while ((uVar101 != 0) &&
                (auVar38._8_8_ = 0, auVar38._0_8_ = (ulong)uVar101 * lVar96, auVar73._8_8_ = 0,
                auVar73._0_8_ = uVar99, auVar39._8_8_ = 0,
                auVar39._0_8_ = (ulong)((uVar81 + iVar91) - SUB164(auVar38 * auVar73,8)) * lVar96,
                auVar74._8_8_ = 0, auVar74._0_8_ = uVar99, uVar98 <= SUB164(auVar39 * auVar74,8)));
        bVar75 = false;
LAB_00103004:
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
        if (!bVar75) goto LAB_001027fd;
        local_80 = (undefined1  [16])0x0;
        local_70 = (undefined1  [16])0x0;
        local_60 = _LC0;
        editor_generate_icon(iVar97,fVar104,fVar103,(HashMap *)(ulong)uVar3);
        pOVar102 = local_150;
        if (local_150 == (Object *)0x0) {
          pvVar100 = (void *)local_80._0_8_;
          if ((void *)local_80._0_8_ != (void *)0x0) goto LAB_001030ad;
          goto LAB_00103353;
        }
        cVar80 = RefCounted::reference();
        if (cVar80 == '\0') {
          pOVar102 = (Object *)0x0;
        }
        if (local_150 != (Object *)0x0) {
          cVar80 = RefCounted::unreference();
          pOVar87 = local_150;
          if (cVar80 != '\0') {
            cVar80 = predelete_handler(local_150);
            if (cVar80 != '\0') {
              (**(code **)(*(long *)pOVar87 + 0x140))(pOVar87);
              Memory::free_static(pOVar87,false);
            }
          }
        }
        pvVar100 = (void *)local_80._0_8_;
        if ((void *)local_80._0_8_ != (void *)0x0) {
LAB_001030ad:
          if (local_60._4_4_ != 0) {
            uVar3 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
            if (uVar3 == 0) {
              local_60 = local_60 & 0xffffffff;
              local_70 = (undefined1  [16])0x0;
            }
            else {
              lVar96 = 0;
              do {
                if (*(int *)(local_80._8_8_ + lVar96) != 0) {
                  *(int *)(local_80._8_8_ + lVar96) = 0;
                  Memory::free_static(*(void **)((long)pvVar100 + lVar96 * 2),false);
                  *(undefined8 *)(local_80._0_8_ + lVar96 * 2) = 0;
                  pvVar100 = (void *)local_80._0_8_;
                }
                lVar96 = lVar96 + 4;
              } while ((ulong)uVar3 * 4 - lVar96 != 0);
              local_60 = local_60 & 0xffffffff;
              local_70 = (undefined1  [16])0x0;
              if (pvVar100 == (void *)0x0) goto LAB_00102982;
            }
          }
          Memory::free_static(pvVar100,false);
          Memory::free_static((void *)local_80._8_8_,false);
        }
LAB_00102982:
        local_88 = (Object *)0x0;
        pSVar94 = *(StringName **)param_1;
        if (pOVar102 != (Object *)0x0) {
LAB_0010299b:
          local_88 = (Object *)0x0;
          pOVar87 = (Object *)__dynamic_cast(pOVar102,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar87 != (Object *)0x0) {
            local_88 = pOVar87;
            cVar80 = RefCounted::reference();
            if (cVar80 == '\0') {
              local_88 = (Object *)0x0;
            }
          }
        }
      }
      else {
        uVar81 = *(uint *)(hash_table_size_primes + (local_f8 & 0xffffffff) * 4);
        lVar96 = *(long *)(hash_table_size_primes_inv + (local_f8 & 0xffffffff) * 8);
        if (local_88 == (Object *)0x0) {
          uVar83 = StringName::get_empty_hash();
        }
        else {
          uVar83 = *(uint *)(local_88 + 0x20);
        }
        uVar99 = CONCAT44(0,uVar81);
        if (uVar83 == 0) {
          uVar83 = 1;
        }
        auVar28._8_8_ = 0;
        auVar28._0_8_ = (ulong)uVar83 * lVar96;
        auVar63._8_8_ = 0;
        auVar63._0_8_ = uVar99;
        lVar92 = SUB168(auVar28 * auVar63,8);
        uVar101 = *(uint *)(local_108._8_8_ + lVar92 * 4);
        iVar91 = SUB164(auVar28 * auVar63,8);
        if (uVar101 == 0) goto joined_r0x00102679;
        uVar98 = 0;
        do {
          if ((uVar101 == uVar83) &&
             ((Object *)local_1d0[*(uint *)(local_118._8_8_ + lVar92 * 4)] == local_88)) {
            bVar75 = true;
            goto LAB_001027d7;
          }
          uVar98 = uVar98 + 1;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = (ulong)(iVar91 + 1) * lVar96;
          auVar64._8_8_ = 0;
          auVar64._0_8_ = uVar99;
          lVar92 = SUB168(auVar29 * auVar64,8);
          uVar101 = *(uint *)(local_108._8_8_ + lVar92 * 4);
          iVar91 = SUB164(auVar29 * auVar64,8);
        } while ((uVar101 != 0) &&
                (auVar30._8_8_ = 0, auVar30._0_8_ = (ulong)uVar101 * lVar96, auVar65._8_8_ = 0,
                auVar65._0_8_ = uVar99, auVar31._8_8_ = 0,
                auVar31._0_8_ = (ulong)((uVar81 + iVar91) - SUB164(auVar30 * auVar65,8)) * lVar96,
                auVar66._8_8_ = 0, auVar66._0_8_ = uVar99, uVar98 <= SUB164(auVar31 * auVar66,8)));
        bVar75 = false;
LAB_001027d7:
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
        fVar103 = _LC8;
        if (!bVar75) goto LAB_0010268e;
LAB_001027fd:
        editor_generate_icon(iVar82,fVar104,fVar103,(HashMap *)(ulong)uVar3);
        pOVar102 = local_88;
        if (local_88 == (Object *)0x0) {
LAB_00103353:
          local_88 = (Object *)0x0;
          pSVar94 = *(StringName **)param_1;
        }
        else {
          cVar80 = RefCounted::reference();
          if (cVar80 != '\0') {
            if (local_88 != (Object *)0x0) goto LAB_00102972;
            pSVar94 = *(StringName **)param_1;
            goto LAB_0010299b;
          }
          pOVar102 = (Object *)0x0;
          if (local_88 != (Object *)0x0) {
LAB_00102972:
            cVar80 = RefCounted::unreference();
            pOVar87 = local_88;
            if (cVar80 != '\0') {
              cVar80 = predelete_handler(local_88);
              if (cVar80 != '\0') {
                (**(code **)(*(long *)pOVar87 + 0x140))(pOVar87);
                Memory::free_static(pOVar87,false);
              }
            }
            goto LAB_00102982;
          }
          local_88 = (Object *)0x0;
          pSVar94 = *(StringName **)param_1;
          pOVar102 = (Object *)0x0;
        }
      }
      pRVar2 = (Ref *)(EditorStringNames::singleton + 0x10);
      StringName::StringName((StringName *)&local_150,local_1d8,false);
      Theme::set_icon(pSVar94,(StringName *)&local_150,pRVar2);
      if ((StringName::configured != '\0') && (local_150 != (Object *)0x0)) {
        StringName::unref();
      }
      if (local_88 != (Object *)0x0) {
        cVar80 = RefCounted::unreference();
        pOVar87 = local_88;
        if (cVar80 != '\0') {
          cVar80 = predelete_handler(local_88);
          if (cVar80 != '\0') {
            (**(code **)(*(long *)pOVar87 + 0x140))(pOVar87);
            Memory::free_static(pOVar87,false);
          }
        }
      }
      if (pOVar102 != (Object *)0x0) {
        cVar80 = RefCounted::unreference();
        if (cVar80 != '\0') {
          cVar80 = predelete_handler(pOVar102);
          if (cVar80 != '\0') {
            (**(code **)(*(long *)pOVar102 + 0x140))(pOVar102);
            Memory::free_static(pOVar102,false);
          }
        }
      }
      local_1e0 = local_1e0 + 1;
      if (local_1e0 == (uint *)0x155d14) goto LAB_0010203f;
      local_1d8 = (&editor_icons_names)[(int)*local_1e0];
    } while( true );
  }
  dVar105 = (double)param_4 * __LC47;
  puVar95 = &editor_bg_thumbs_indices;
  fVar104 = (float)EditorScale::get_scale();
  local_1e0 = (uint *)0x1037c8;
  fVar104 = (float)((double)fVar104 * dVar105);
  do {
    uVar3 = *puVar95;
    StringName::StringName((StringName *)&local_88,(char *)local_1e0,false);
    if ((local_1d0 == (long *)0x0) || (local_f8._4_4_ == 0)) {
joined_r0x00101d26:
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
LAB_00101d3c:
      StringName::StringName((StringName *)&local_88,(char *)local_1e0,false);
      uVar76 = local_148._0_8_;
      fVar103 = param_3;
      if ((local_148._0_8_ == 0) || (local_128._4_4_ == 0)) {
joined_r0x0010239f:
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
      }
      else {
        uVar81 = *(uint *)(hash_table_size_primes + (local_128 & 0xffffffff) * 4);
        lVar96 = *(long *)(hash_table_size_primes_inv + (local_128 & 0xffffffff) * 8);
        if (local_88 == (Object *)0x0) {
          uVar83 = StringName::get_empty_hash();
        }
        else {
          uVar83 = *(uint *)(local_88 + 0x20);
        }
        uVar99 = CONCAT44(0,uVar81);
        if (uVar83 == 0) {
          uVar83 = 1;
        }
        auVar20._8_8_ = 0;
        auVar20._0_8_ = (ulong)uVar83 * lVar96;
        auVar55._8_8_ = 0;
        auVar55._0_8_ = uVar99;
        lVar92 = SUB168(auVar20 * auVar55,8);
        uVar101 = *(uint *)(local_138._8_8_ + lVar92 * 4);
        iVar91 = SUB164(auVar20 * auVar55,8);
        if (uVar101 == 0) goto joined_r0x0010239f;
        uVar98 = 0;
        do {
          if ((uVar101 == uVar83) &&
             (*(Object **)(uVar76 + (ulong)*(uint *)(local_148._8_8_ + lVar92 * 4) * 8) == local_88)
             ) {
            bVar75 = true;
            goto LAB_00102c3f;
          }
          uVar98 = uVar98 + 1;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = (ulong)(iVar91 + 1) * lVar96;
          auVar56._8_8_ = 0;
          auVar56._0_8_ = uVar99;
          lVar92 = SUB168(auVar21 * auVar56,8);
          uVar101 = *(uint *)(local_138._8_8_ + lVar92 * 4);
          iVar91 = SUB164(auVar21 * auVar56,8);
        } while ((uVar101 != 0) &&
                (auVar22._8_8_ = 0, auVar22._0_8_ = (ulong)uVar101 * lVar96, auVar57._8_8_ = 0,
                auVar57._0_8_ = uVar99, auVar23._8_8_ = 0,
                auVar23._0_8_ = (ulong)((uVar81 + iVar91) - SUB164(auVar22 * auVar57,8)) * lVar96,
                auVar58._8_8_ = 0, auVar58._0_8_ = uVar99, uVar98 <= SUB164(auVar23 * auVar58,8)));
        bVar75 = false;
LAB_00102c3f:
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
        if (bVar75) {
          fVar103 = _LC8;
        }
      }
      StringName::StringName((StringName *)&local_88,(char *)local_1e0,false);
      if ((local_1c0 == (StringName *)0x0) || (uVar78 == 0)) {
joined_r0x00102ab7:
        if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
          StringName::unref();
        }
        goto LAB_00101eab;
      }
      uVar81 = *(uint *)(hash_table_size_primes + (ulong)uVar4 * 4);
      uVar99 = CONCAT44(0,uVar81);
      lVar96 = *(long *)(hash_table_size_primes_inv + (ulong)uVar4 * 8);
      if (local_88 == (Object *)0x0) {
        uVar83 = StringName::get_empty_hash();
      }
      else {
        uVar83 = *(uint *)(local_88 + 0x20);
      }
      if (uVar83 == 0) {
        uVar83 = 1;
      }
      auVar24._8_8_ = 0;
      auVar24._0_8_ = (ulong)uVar83 * lVar96;
      auVar59._8_8_ = 0;
      auVar59._0_8_ = uVar99;
      lVar92 = SUB168(auVar24 * auVar59,8);
      uVar101 = *(uint *)((long)local_180 + lVar92 * 4);
      iVar91 = SUB164(auVar24 * auVar59,8);
      if (uVar101 == 0) goto joined_r0x00102ab7;
      uVar98 = 0;
      do {
        if ((uVar101 == uVar83) &&
           (*(Object **)(local_1c0 + (ulong)*(uint *)((long)local_1a8 + lVar92 * 4) * 8) == local_88
           )) {
          bVar75 = true;
          goto LAB_00102aea;
        }
        uVar98 = uVar98 + 1;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = (ulong)(iVar91 + 1) * lVar96;
        auVar60._8_8_ = 0;
        auVar60._0_8_ = uVar99;
        lVar92 = SUB168(auVar25 * auVar60,8);
        uVar101 = *(uint *)((long)local_180 + lVar92 * 4);
        iVar91 = SUB164(auVar25 * auVar60,8);
      } while ((uVar101 != 0) &&
              (auVar26._8_8_ = 0, auVar26._0_8_ = (ulong)uVar101 * lVar96, auVar61._8_8_ = 0,
              auVar61._0_8_ = uVar99, auVar27._8_8_ = 0,
              auVar27._0_8_ = (ulong)((uVar81 + iVar91) - SUB164(auVar26 * auVar61,8)) * lVar96,
              auVar62._8_8_ = 0, auVar62._0_8_ = uVar99, uVar98 <= SUB164(auVar27 * auVar62,8)));
      bVar75 = false;
LAB_00102aea:
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      if (!bVar75) goto LAB_00101eab;
      local_80 = (undefined1  [16])0x0;
      local_70 = (undefined1  [16])0x0;
      local_60 = _LC0;
      editor_generate_icon(iVar97,fVar104,fVar103,(HashMap *)(ulong)uVar3);
      pOVar102 = local_150;
      if (local_150 == (Object *)0x0) {
        pvVar100 = (void *)local_80._0_8_;
        if ((void *)local_80._0_8_ != (void *)0x0) goto LAB_00102b96;
        goto LAB_00102dae;
      }
      cVar80 = RefCounted::reference();
      if (cVar80 == '\0') {
        pOVar102 = (Object *)0x0;
      }
      if (local_150 != (Object *)0x0) {
        cVar80 = RefCounted::unreference();
        pOVar87 = local_150;
        if (cVar80 != '\0') {
          cVar80 = predelete_handler(local_150);
          if (cVar80 != '\0') {
            (**(code **)(*(long *)pOVar87 + 0x140))(pOVar87);
            Memory::free_static(pOVar87,false);
          }
        }
      }
      pvVar100 = (void *)local_80._0_8_;
      if ((void *)local_80._0_8_ != (void *)0x0) {
LAB_00102b96:
        if (local_60._4_4_ != 0) {
          uVar3 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
          if (uVar3 == 0) {
            local_60 = local_60 & 0xffffffff;
            local_70 = (undefined1  [16])0x0;
          }
          else {
            lVar96 = 0;
            do {
              if (*(int *)(local_80._8_8_ + lVar96) != 0) {
                *(int *)(local_80._8_8_ + lVar96) = 0;
                Memory::free_static(*(void **)((long)pvVar100 + lVar96 * 2),false);
                *(undefined8 *)(local_80._0_8_ + lVar96 * 2) = 0;
                pvVar100 = (void *)local_80._0_8_;
              }
              lVar96 = lVar96 + 4;
            } while (lVar96 != (ulong)uVar3 * 4);
            local_60 = local_60 & 0xffffffff;
            local_70 = (undefined1  [16])0x0;
            if (pvVar100 == (void *)0x0) goto LAB_00101f03;
          }
        }
        Memory::free_static(pvVar100,false);
        Memory::free_static((void *)local_80._8_8_,false);
      }
LAB_00101f03:
      local_88 = (Object *)0x0;
      pSVar94 = *(StringName **)param_1;
      if (pOVar102 != (Object *)0x0) {
LAB_00101f1c:
        local_88 = (Object *)0x0;
        pOVar87 = (Object *)__dynamic_cast(pOVar102,&Object::typeinfo,&Texture2D::typeinfo,0);
        if (pOVar87 != (Object *)0x0) {
          local_88 = pOVar87;
          cVar80 = RefCounted::reference();
          if (cVar80 == '\0') {
            local_88 = (Object *)0x0;
          }
        }
      }
    }
    else {
      uVar81 = *(uint *)(hash_table_size_primes + (local_f8 & 0xffffffff) * 4);
      lVar96 = *(long *)(hash_table_size_primes_inv + (local_f8 & 0xffffffff) * 8);
      if (local_88 == (Object *)0x0) {
        uVar83 = StringName::get_empty_hash();
      }
      else {
        uVar83 = *(uint *)(local_88 + 0x20);
      }
      uVar99 = CONCAT44(0,uVar81);
      if (uVar83 == 0) {
        uVar83 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar83 * lVar96;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = uVar99;
      lVar92 = SUB168(auVar8 * auVar43,8);
      uVar101 = *(uint *)(local_108._8_8_ + lVar92 * 4);
      iVar91 = SUB164(auVar8 * auVar43,8);
      if (uVar101 == 0) goto joined_r0x00101d26;
      uVar98 = 0;
      do {
        if ((uVar101 == uVar83) &&
           ((Object *)local_1d0[*(uint *)(local_118._8_8_ + lVar92 * 4)] == local_88)) {
          bVar75 = true;
          goto LAB_00101e84;
        }
        uVar98 = uVar98 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(iVar91 + 1) * lVar96;
        auVar44._8_8_ = 0;
        auVar44._0_8_ = uVar99;
        lVar92 = SUB168(auVar9 * auVar44,8);
        uVar101 = *(uint *)(local_108._8_8_ + lVar92 * 4);
        iVar91 = SUB164(auVar9 * auVar44,8);
      } while ((uVar101 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar101 * lVar96, auVar45._8_8_ = 0,
              auVar45._0_8_ = uVar99, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar81 + iVar91) - SUB164(auVar10 * auVar45,8)) * lVar96,
              auVar46._8_8_ = 0, auVar46._0_8_ = uVar99, uVar98 <= SUB164(auVar11 * auVar46,8)));
      bVar75 = false;
LAB_00101e84:
      if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
        StringName::unref();
      }
      fVar103 = _LC8;
      if (!bVar75) goto LAB_00101d3c;
LAB_00101eab:
      editor_generate_icon(iVar82,fVar104,fVar103,(HashMap *)(ulong)uVar3);
      pOVar102 = local_88;
      if (local_88 == (Object *)0x0) {
LAB_00102dae:
        local_88 = (Object *)0x0;
        pSVar94 = *(StringName **)param_1;
      }
      else {
        cVar80 = RefCounted::reference();
        if (cVar80 != '\0') {
          if (local_88 != (Object *)0x0) goto LAB_00101ef3;
          pSVar94 = *(StringName **)param_1;
          goto LAB_00101f1c;
        }
        pOVar102 = (Object *)0x0;
        if (local_88 != (Object *)0x0) {
LAB_00101ef3:
          cVar80 = RefCounted::unreference();
          pOVar87 = local_88;
          if (cVar80 != '\0') {
            cVar80 = predelete_handler(local_88);
            if (cVar80 != '\0') {
              (**(code **)(*(long *)pOVar87 + 0x140))(pOVar87);
              Memory::free_static(pOVar87,false);
            }
          }
          goto LAB_00101f03;
        }
        local_88 = (Object *)0x0;
        pSVar94 = *(StringName **)param_1;
        pOVar102 = (Object *)0x0;
      }
    }
    pRVar2 = (Ref *)(EditorStringNames::singleton + 0x10);
    StringName::StringName((StringName *)&local_150,(char *)local_1e0,false);
    Theme::set_icon(pSVar94,(StringName *)&local_150,pRVar2);
    if ((StringName::configured != '\0') && (local_150 != (Object *)0x0)) {
      StringName::unref();
    }
    if (local_88 != (Object *)0x0) {
      cVar80 = RefCounted::unreference();
      pOVar87 = local_88;
      if (cVar80 != '\0') {
        cVar80 = predelete_handler(local_88);
        if (cVar80 != '\0') {
          (**(code **)(*(long *)pOVar87 + 0x140))(pOVar87);
          Memory::free_static(pOVar87,false);
        }
      }
    }
    if (pOVar102 != (Object *)0x0) {
      cVar80 = RefCounted::unreference();
      if (cVar80 != '\0') {
        cVar80 = predelete_handler(pOVar102);
        if (cVar80 != '\0') {
          (**(code **)(*(long *)pOVar102 + 0x140))(pOVar102);
          Memory::free_static(pOVar102,false);
        }
      }
    }
    puVar95 = puVar95 + 1;
    if (puVar95 == (uint *)&DAT_00155d04) break;
    local_1e0 = (uint *)(&editor_icons_names)[(int)*puVar95];
  } while( true );
LAB_0010203f:
  if (local_1d0 != (long *)0x0) {
    uVar99 = (ulong)local_f8._4_4_;
    uVar76 = local_108._8_8_;
    if (local_f8._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_f8 & 0xffffffff) * 4) != 0) {
        memset((void *)local_108._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_f8 & 0xffffffff) * 4) * 4);
      }
      plVar93 = local_1d0;
      do {
        if ((StringName::configured != '\0') && (*plVar93 != 0)) {
          StringName::unref();
        }
        plVar93 = plVar93 + 1;
      } while (plVar93 != local_1d0 + uVar99);
    }
    Memory::free_static(local_1d0,false);
    Memory::free_static((void *)local_108._0_8_,false);
    Memory::free_static((void *)local_118._8_8_,false);
    Memory::free_static((void *)uVar76,false);
  }
  if ((void *)local_b0._0_8_ != (void *)0x0) {
    pvVar100 = (void *)local_b0._0_8_;
    if (local_90._4_4_ != 0) {
      uVar3 = *(uint *)(hash_table_size_primes + (local_90 & 0xffffffff) * 4);
      if (uVar3 == 0) {
        local_90 = local_90 & 0xffffffff;
        local_a0 = (undefined1  [16])0x0;
      }
      else {
        lVar96 = 0;
        do {
          if (*(int *)(local_b0._8_8_ + lVar96) != 0) {
            *(int *)(local_b0._8_8_ + lVar96) = 0;
            Memory::free_static(*(void **)((long)pvVar100 + lVar96 * 2),false);
            *(undefined8 *)(local_b0._0_8_ + lVar96 * 2) = 0;
            pvVar100 = (void *)local_b0._0_8_;
          }
          lVar96 = lVar96 + 4;
        } while ((ulong)uVar3 * 4 - lVar96 != 0);
        local_90 = local_90 & 0xffffffff;
        local_a0 = (undefined1  [16])0x0;
        if (pvVar100 == (void *)0x0) goto LAB_00102192;
      }
    }
    Memory::free_static(pvVar100,false);
    Memory::free_static((void *)local_b0._8_8_,false);
  }
LAB_00102192:
  uVar76 = local_148._0_8_;
  if ((long *)local_148._0_8_ != (long *)0x0) {
    uVar99 = (ulong)local_128._4_4_;
    uVar79 = local_138._8_8_;
    if (local_128._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_128 & 0xffffffff) * 4) != 0) {
        memset((void *)local_138._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_128 & 0xffffffff) * 4) * 4);
      }
      plVar93 = (long *)uVar76;
      do {
        if ((StringName::configured != '\0') && (*plVar93 != 0)) {
          StringName::unref();
        }
        plVar93 = plVar93 + 1;
      } while ((long *)(uVar76 + uVar99 * 8) != plVar93);
    }
    Memory::free_static((void *)uVar76,false);
    Memory::free_static((void *)local_138._0_8_,false);
    Memory::free_static((void *)local_148._8_8_,false);
    Memory::free_static((void *)uVar79,false);
  }
  if (local_1c0 != (StringName *)0x0) {
    if (uVar78 != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)uVar4 * 4) != 0) {
        memset(local_180,0,(ulong)*(uint *)(hash_table_size_primes + (ulong)uVar4 * 4) * 4);
      }
      pSVar94 = local_1c0;
      do {
        if ((StringName::configured != '\0') && (*(long *)pSVar94 != 0)) {
          StringName::unref();
        }
        pSVar94 = pSVar94 + 8;
      } while (pSVar94 != local_1c0 + (ulong)uVar78 * 8);
    }
    Memory::free_static(local_1c0,false);
    Memory::free_static(pvVar88,false);
    Memory::free_static(local_1a8,false);
    Memory::free_static(local_180,false);
  }
  if ((void *)local_e0._0_8_ != (void *)0x0) {
    pvVar88 = (void *)local_e0._0_8_;
    if (local_c0._4_4_ != 0) {
      uVar4 = *(uint *)(hash_table_size_primes + (local_c0 & 0xffffffff) * 4);
      if (uVar4 == 0) {
        local_c0 = local_c0 & 0xffffffff;
        local_d0 = (undefined1  [16])0x0;
      }
      else {
        lVar96 = 0;
        do {
          if (*(int *)(local_e0._8_8_ + lVar96) != 0) {
            *(int *)(local_e0._8_8_ + lVar96) = 0;
            Memory::free_static(*(void **)((long)pvVar88 + lVar96 * 2),false);
            *(undefined8 *)(local_e0._0_8_ + lVar96 * 2) = 0;
            pvVar88 = (void *)local_e0._0_8_;
          }
          lVar96 = lVar96 + 4;
        } while (lVar96 != (ulong)uVar4 * 4);
        local_c0 = local_c0 & 0xffffffff;
        local_d0 = (undefined1  [16])0x0;
        if (pvVar88 == (void *)0x0) goto LAB_0010236f;
      }
    }
    Memory::free_static(pvVar88,false);
    Memory::free_static((void *)local_e0._8_8_,false);
  }
LAB_0010236f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = operator_delete;
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = operator_delete;
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
    if (*in_RSI != 0) goto LAB_00106c6c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_00106c6c:
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
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_001070b8;
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
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC3) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_00106f95;
LAB_001070f6:
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
      goto LAB_001070b8;
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
    if (lVar30 == 0) goto LAB_001070f6;
LAB_00106f95:
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
LAB_001070b8:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
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
                  goto LAB_00107255;
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
LAB_00107255:
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
    uVar30 = _UNK_00159b18;
    if (cVar25 == '\0') {
      if ((float)uVar27 * __LC3 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar27 = *(uint *)(this + 0x28);
        if (uVar27 == 0x1c) {
          pauVar31 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_001078fb;
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
      uVar37 = _UNK_00159b18;
      uVar30 = __LC15;
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
      *(undefined8 *)pauVar31[2] = __LC15;
      *(undefined8 *)(pauVar31[2] + 8) = uVar30;
    }
  }
  else {
    pauVar31 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_88 * 8);
  }
LAB_001078fb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar31 + 2;
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
    *(code **)param_1 = operator_delete;
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



/* WARNING: Control flow encountered bad instruction data */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> >::~HashSet() */

void __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::~HashSet
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


