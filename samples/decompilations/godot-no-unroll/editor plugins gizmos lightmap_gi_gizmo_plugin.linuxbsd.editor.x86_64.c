
/* LightmapGIGizmoPlugin::get_priority() const */

undefined8 LightmapGIGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* LightmapGIGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall LightmapGIGizmoPlugin::has_gizmo(LightmapGIGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&LightmapGI::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* LightmapGIGizmoPlugin::get_gizmo_name() const */

LightmapGIGizmoPlugin * __thiscall
LightmapGIGizmoPlugin::get_gizmo_name(LightmapGIGizmoPlugin *this)

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



/* LightmapGIGizmoPlugin::LightmapGIGizmoPlugin() */

void __thiscall LightmapGIGizmoPlugin::LightmapGIGizmoPlugin(LightmapGIGizmoPlugin *this)

{
  code *pcVar1;
  BaseMaterial3D *pBVar2;
  char cVar3;
  int iVar4;
  BaseMaterial3D *this_00;
  Object *pOVar5;
  long in_FS_OFFSET;
  undefined4 in_XMM1_Da;
  undefined8 local_88;
  BaseMaterial3D *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60._0_4_ = in_XMM1_Da;
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_001076a0;
  local_78 = "editors/3d_gizmos/gizmo_colors/lightmap_lines";
  local_80 = (BaseMaterial3D *)0x0;
  local_70 = 0x2d;
  String::parse_latin1((StrRange *)&local_80);
  _EDITOR_GET((String *)&local_58);
  local_68 = Variant::operator_cast_to_Color((Variant *)&local_58);
  if (Variant::needs_deinit[local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_78 = "lightmap_lines";
  local_60 = CONCAT44(0x3dcccccd,(undefined4)local_60);
  local_80 = (BaseMaterial3D *)0x0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_80);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(StrRange *)&local_80,SUB81(&local_68,0),false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  this_00 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(this_00,false);
  *(undefined ***)this_00 = &PTR__initialize_classv_001074a0;
  postinitialize_handler((Object *)this_00);
  cVar3 = RefCounted::init_ref();
  if (cVar3 == '\0') {
    this_00 = (BaseMaterial3D *)0x0;
    BaseMaterial3D::set_shading_mode(0,0);
    BaseMaterial3D::set_distance_fade(0,2);
    BaseMaterial3D::set_distance_fade_min_distance(_LC26);
    BaseMaterial3D::set_distance_fade_max_distance(_LC27);
    BaseMaterial3D::set_flag(0,1,1);
    BaseMaterial3D::set_flag(0,2,0);
    BaseMaterial3D::set_flag(0,0x15,1);
    local_80 = (BaseMaterial3D *)0x0;
  }
  else {
    BaseMaterial3D::set_shading_mode(this_00,0);
    BaseMaterial3D::set_distance_fade(this_00,2);
    BaseMaterial3D::set_distance_fade_min_distance(_LC26);
    BaseMaterial3D::set_distance_fade_max_distance(_LC27);
    BaseMaterial3D::set_flag(this_00,1,1);
    BaseMaterial3D::set_flag(this_00,2,0);
    BaseMaterial3D::set_flag(this_00,0x15,1);
    local_80 = this_00;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      local_80 = (BaseMaterial3D *)0x0;
    }
  }
  local_88 = 0;
  local_78 = "lightmap_probe_material";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_88);
  EditorNode3DGizmoPlugin::add_material(this,(StrRange *)&local_88,(StrRange *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (((local_80 != (BaseMaterial3D *)0x0) &&
      (cVar3 = RefCounted::unreference(), pBVar2 = local_80, cVar3 != '\0')) &&
     (cVar3 = predelete_handler((Object *)local_80), cVar3 != '\0')) {
    (**(code **)(*(long *)pBVar2 + 0x140))(pBVar2);
    Memory::free_static(pBVar2,false);
  }
  pOVar5 = *(Object **)(EditorNode::singleton + 0x838);
  local_58 = _LC30;
  uStack_54 = _LC30;
  uStack_50 = _LC30;
  uStack_4c = _LC30;
  if (pOVar5 != (Object *)0x0) {
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      pOVar5 = (Object *)0x0;
    }
    pcVar1 = *(code **)(*(long *)pOVar5 + 0x1c8);
    if ((LightmapGIGizmoPlugin()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&LightmapGIGizmoPlugin()::{lambda()#1}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&LightmapGIGizmoPlugin()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &LightmapGIGizmoPlugin()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&LightmapGIGizmoPlugin()::{lambda()#1}::operator()()::sname);
    }
    (*pcVar1)((StrRange *)&local_80,pOVar5,
              &LightmapGIGizmoPlugin()::{lambda()#1}::operator()()::sname);
    local_78 = "baked_indirect_light_icon";
    local_88 = 0;
    local_70 = 0x19;
    String::parse_latin1((StrRange *)&local_88);
    EditorNode3DGizmoPlugin::create_icon_material
              ((String *)this,(StrRange *)&local_88,SUB81((StrRange *)&local_80,0),(Color *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (((local_80 == (BaseMaterial3D *)0x0) ||
        (cVar3 = RefCounted::unreference(), pBVar2 = local_80, cVar3 == '\0')) ||
       (cVar3 = predelete_handler((Object *)local_80), cVar3 == '\0')) {
      cVar3 = RefCounted::unreference();
    }
    else {
      (**(code **)(*(long *)pBVar2 + 0x140))(pBVar2);
      Memory::free_static(pBVar2,false);
      cVar3 = RefCounted::unreference();
    }
    if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    if (((this_00 != (BaseMaterial3D *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
       && (cVar3 = predelete_handler((Object *)this_00), cVar3 != '\0')) {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      Memory::free_static(this_00,false);
    }
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

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
    if ((code *)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* LightmapGIGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
LightmapGIGizmoPlugin::redraw(LightmapGIGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  undefined4 uVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  code *pcVar14;
  int iVar15;
  EditorNode3DGizmo *pEVar16;
  undefined8 uVar17;
  int iVar18;
  char cVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  Object *pOVar23;
  long lVar24;
  Vector2i *pVVar25;
  Vector2i *pVVar26;
  float *pfVar27;
  Variant *pVVar28;
  Object *pOVar29;
  undefined8 *puVar30;
  ulong uVar31;
  long lVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  ulong uVar36;
  int iVar37;
  long lVar38;
  uint uVar39;
  long lVar40;
  uint uVar41;
  long in_FS_OFFSET;
  byte bVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  Vector *local_220;
  float local_1c0;
  float local_1bc;
  Object *local_1b8;
  Object *local_1b0;
  Object *local_1a8;
  Object *local_1a0;
  Array local_198 [8];
  Object *local_190;
  Array local_188 [8];
  Object *local_180;
  undefined8 local_178;
  Object *local_170;
  undefined1 local_168 [8];
  undefined8 local_160 [2];
  long local_150 [2];
  long local_140 [2];
  long local_130;
  Vector local_128 [8];
  long local_120;
  undefined8 local_118;
  long local_110;
  EditorNode3DGizmo *local_108;
  undefined8 local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_c8;
  float local_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 uStack_a0;
  float local_98;
  undefined8 local_94;
  float local_8c;
  undefined8 local_88;
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  undefined8 local_64;
  float local_5c;
  undefined8 local_58;
  float local_50;
  Vector2i local_4c [12];
  long local_40;
  
  bVar42 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (EditorNode3DGizmo *)0x0) ||
     (local_108 = param_1, cVar19 = RefCounted::init_ref(), cVar19 == '\0')) {
    local_108 = (EditorNode3DGizmo *)0x0;
  }
  local_118 = 0;
  local_f8._8_8_ = 0x19;
  local_f8._0_8_ = "baked_indirect_light_icon";
  String::parse_latin1((StrRange *)&local_118);
  EditorNode3DGizmoPlugin::get_material((String *)local_f8,this);
  local_1b8 = (Object *)0x0;
  if (local_f8._0_8_ != 0) {
    pOVar23 = (Object *)__dynamic_cast(local_f8._0_8_,&Object::typeinfo,&Material::typeinfo,0);
    if (pOVar23 != (Object *)0x0) {
      local_1b8 = pOVar23;
      cVar19 = RefCounted::reference();
      if (cVar19 == '\0') {
        local_1b8 = (Object *)0x0;
      }
      if (local_f8._0_8_ == 0) goto LAB_00100f99;
    }
    cVar19 = RefCounted::unreference();
    if (cVar19 != '\0') {
      uVar5 = local_f8._0_8_;
      cVar19 = predelete_handler((Object *)local_f8._0_8_);
      if (cVar19 != '\0') {
        (**(code **)(*(long *)uVar5 + 0x140))(uVar5);
        Memory::free_static((void *)uVar5,false);
      }
    }
  }
LAB_00100f99:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  if (((local_108 != (EditorNode3DGizmo *)0x0) &&
      (cVar19 = RefCounted::unreference(), pEVar16 = local_108, cVar19 != '\0')) &&
     (cVar19 = predelete_handler((Object *)local_108), cVar19 != '\0')) {
    (**(code **)(*(long *)pEVar16 + 0x140))(pEVar16);
    Memory::free_static(pEVar16,false);
  }
  if (*(long *)(param_1 + 0x1f0) != 0) {
    __dynamic_cast(*(long *)(param_1 + 0x1f0),&Object::typeinfo,&LightmapGI::typeinfo,0);
  }
  LightmapGI::get_light_data();
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  local_b8 = _LC30;
  fStack_b4 = _UNK_00107b44;
  fStack_b0 = (float)_UNK_00107b48;
  fStack_ac = (float)((ulong)_UNK_00107b48 >> 0x20);
  EditorNode3DGizmo::add_unscaled_billboard(param_1,_LC47,(Ref<Material> *)&local_1b8);
  if (local_1b0 == (Object *)0x0) goto joined_r0x0010106d;
  if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
    local_108 = param_1;
    cVar19 = RefCounted::init_ref();
    if (cVar19 == '\0') {
      local_108 = (EditorNode3DGizmo *)0x0;
    }
    local_118 = 0;
    local_f8._8_8_ = 0xe;
    local_f8._0_8_ = "lightmap_lines";
    String::parse_latin1((StrRange *)&local_118);
    EditorNode3DGizmoPlugin::get_material((String *)local_f8,this);
    local_1a8 = (Object *)0x0;
    if (local_f8._0_8_ != 0) {
      pOVar23 = (Object *)__dynamic_cast(local_f8._0_8_,&Object::typeinfo,&Material::typeinfo,0);
      if (pOVar23 != (Object *)0x0) {
        local_1a8 = pOVar23;
        cVar19 = RefCounted::reference();
        if (cVar19 == '\0') {
          local_1a8 = (Object *)0x0;
        }
        if (local_f8._0_8_ == 0) goto LAB_001011a7;
      }
      cVar19 = RefCounted::unreference();
      if (cVar19 != '\0') {
        uVar5 = local_f8._0_8_;
        cVar19 = predelete_handler((Object *)local_f8._0_8_);
        if (cVar19 != '\0') {
          (**(code **)(*(long *)uVar5 + 0x140))(uVar5);
          Memory::free_static((void *)uVar5,false);
        }
      }
    }
LAB_001011a7:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    if (((local_108 != (EditorNode3DGizmo *)0x0) &&
        (cVar19 = RefCounted::unreference(), pEVar16 = local_108, cVar19 != '\0')) &&
       (cVar19 = predelete_handler((Object *)local_108), cVar19 != '\0')) {
      (**(code **)(*(long *)pEVar16 + 0x140))(pEVar16);
      Memory::free_static(pEVar16,false);
    }
    local_108 = param_1;
    cVar19 = RefCounted::init_ref();
    if (cVar19 == '\0') {
      local_108 = (EditorNode3DGizmo *)0x0;
    }
    local_118 = 0;
    local_f8._8_8_ = 0x17;
    local_f8._0_8_ = "lightmap_probe_material";
    String::parse_latin1((StrRange *)&local_118);
    EditorNode3DGizmoPlugin::get_material((String *)local_f8,this);
    local_1a0 = (Object *)0x0;
    if (local_f8._0_8_ != 0) {
      pOVar23 = (Object *)__dynamic_cast(local_f8._0_8_,&Object::typeinfo,&Material::typeinfo);
      if (pOVar23 != (Object *)0x0) {
        local_1a0 = pOVar23;
        cVar19 = RefCounted::reference();
        if (cVar19 == '\0') {
          local_1a0 = (Object *)0x0;
        }
        if (local_f8._0_8_ == 0) goto LAB_00101290;
      }
      cVar19 = RefCounted::unreference();
      if (cVar19 != '\0') {
        uVar5 = local_f8._0_8_;
        cVar19 = predelete_handler((Object *)local_f8._0_8_);
        if (cVar19 != '\0') {
          (**(code **)(*(long *)uVar5 + 0x140))(uVar5);
          Memory::free_static((void *)uVar5,false);
        }
      }
    }
LAB_00101290:
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
    if (((local_108 != (EditorNode3DGizmo *)0x0) &&
        (cVar19 = RefCounted::unreference(), pEVar16 = local_108, cVar19 != '\0')) &&
       (cVar19 = predelete_handler((Object *)local_108), cVar19 != '\0')) {
      (**(code **)(*(long *)pEVar16 + 0x140))(pEVar16);
      Memory::free_static(pEVar16,false);
    }
    local_160[0] = 0;
    local_d8 = 2;
    local_f8 = (undefined1  [16])0x0;
    local_e8 = (undefined1  [16])0x0;
    LightmapGIData::get_capture_points();
    if ((local_150[0] != 0) && (*(long *)(local_150[0] + -8) != 0)) {
      LightmapGIData::get_capture_sh();
      if (local_140[0] == 0) {
        if (local_150[0] == 0) goto LAB_00101658;
        lVar32 = 0;
LAB_0010141b:
        lVar40 = *(long *)(local_150[0] + -8) * 9;
      }
      else {
        lVar32 = *(long *)(local_140[0] + -8);
        if (local_150[0] != 0) goto LAB_0010141b;
        lVar40 = 0;
      }
      if (lVar40 == lVar32) {
LAB_00101658:
        lVar40 = 0;
        LightmapGIData::get_capture_tetrahedra();
        lVar32 = local_130;
        if (local_130 != 0) {
          while (lVar40 < *(long *)(lVar32 + -8)) {
            iVar33 = 0;
            lVar24 = lVar40;
            while (lVar34 = lVar24, iVar33 = iVar33 + 1, iVar33 != 4) {
              lVar38 = lVar34 + 1;
              do {
                local_b8 = 0.0;
                fStack_b4 = 0.0;
                lVar24 = lVar34;
                if (lVar32 == 0) {
                  lVar35 = 0;
                  goto LAB_001019be;
                }
                lVar35 = *(long *)(lVar32 + -8);
                if ((lVar35 <= lVar34) ||
                   (local_b8 = *(float *)(lVar32 + lVar34 * 4), lVar24 = lVar38, lVar35 <= lVar38))
                goto LAB_001019be;
                fVar2 = *(float *)(lVar32 + lVar38 * 4);
                fVar43 = fVar2;
                fStack_b4 = local_b8;
                if ((int)local_b8 <= (int)fVar2) {
                  fVar43 = local_b8;
                  fStack_b4 = fVar2;
                }
                local_b8 = fVar43;
                uVar5 = local_f8._0_8_;
                if ((local_f8._0_8_ != 0) && (local_d8._4_4_ != 0)) {
                  uVar3 = *(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4);
                  uVar36 = CONCAT44(0,uVar3);
                  uVar4 = *(ulong *)(hash_table_size_primes_inv + (local_d8 & 0xffffffff) * 8);
                  uVar20 = ((int)local_b8 * 0x16a88000 | (uint)((int)local_b8 * -0x3361d2af) >> 0x11
                           ) * 0x1b873593 ^ 0x7f07c65;
                  uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64 ^
                           ((int)fStack_b4 * 0x16a88000 |
                           (uint)((int)fStack_b4 * -0x3361d2af) >> 0x11) * 0x1b873593;
                  uVar20 = (uVar20 << 0xd | uVar20 >> 0x13) * 5 + 0xe6546b64;
                  uVar20 = (uVar20 >> 0x10 ^ uVar20) * -0x7a143595;
                  uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
                  uVar41 = uVar20 ^ uVar20 >> 0x10;
                  if (uVar20 == uVar20 >> 0x10) {
                    uVar41 = 1;
                    uVar31 = uVar4;
                  }
                  else {
                    uVar31 = uVar41 * uVar4;
                  }
                  uVar17 = local_e8._8_8_;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar36;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = uVar31;
                  lVar32 = SUB168(auVar6 * auVar10,8);
                  uVar20 = *(uint *)(local_e8._8_8_ + lVar32 * 4);
                  if (uVar20 != 0) {
                    uVar39 = 0;
                    iVar22 = SUB164(auVar6 * auVar10,8);
                    do {
                      if (uVar41 == uVar20) {
                        cVar19 = Vector2i::operator==
                                           ((Vector2i *)
                                            (uVar5 + (ulong)*(uint *)(local_f8._8_8_ + lVar32 * 4) *
                                                     8),(Vector2i *)&local_b8);
                        if (cVar19 != '\0') goto LAB_00101962;
                      }
                      uVar39 = uVar39 + 1;
                      auVar7._8_8_ = 0;
                      auVar7._0_8_ = (iVar22 + 1) * uVar4;
                      auVar11._8_8_ = 0;
                      auVar11._0_8_ = uVar36;
                      lVar32 = SUB168(auVar7 * auVar11,8);
                      uVar20 = *(uint *)(uVar17 + lVar32 * 4);
                      iVar22 = SUB164(auVar7 * auVar11,8);
                    } while ((uVar20 != 0) &&
                            (auVar8._8_8_ = 0, auVar8._0_8_ = uVar20 * uVar4, auVar12._8_8_ = 0,
                            auVar12._0_8_ = uVar36, auVar9._8_8_ = 0,
                            auVar9._0_8_ = ((uVar3 + iVar22) - SUB164(auVar8 * auVar12,8)) * uVar4,
                            auVar13._8_8_ = 0, auVar13._0_8_ = uVar36,
                            uVar39 <= SUB164(auVar9 * auVar13,8)));
                  }
                }
                HashSet<Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>>::insert
                          ((Vector2i *)&local_108);
                lVar24 = (long)(int)local_b8;
                if (lVar24 < 0) {
                  if (local_150[0] == 0) {
LAB_00101fad:
                    lVar35 = 0;
                  }
                  else {
LAB_00101f70:
                    lVar35 = *(long *)(local_150[0] + -8);
                  }
                  goto LAB_001019be;
                }
                if (local_150[0] == 0) goto LAB_00101fad;
                if (*(long *)(local_150[0] + -8) <= lVar24) goto LAB_00101f70;
                puVar30 = (undefined8 *)(local_150[0] + lVar24 * 0xc);
                Vector<Vector3>::push_back(*puVar30,*(undefined4 *)(puVar30 + 1),local_168);
                lVar24 = (long)(int)fStack_b4;
                if (lVar24 < 0) {
                  if (local_150[0] == 0) {
LAB_00101ff6:
                    lVar35 = 0;
                  }
                  else {
LAB_00101fb2:
                    lVar35 = *(long *)(local_150[0] + -8);
                  }
                  goto LAB_001019be;
                }
                if (local_150[0] == 0) goto LAB_00101ff6;
                if (*(long *)(local_150[0] + -8) <= lVar24) goto LAB_00101fb2;
                puVar30 = (undefined8 *)(local_150[0] + lVar24 * 0xc);
                Vector<Vector3>::push_back(*puVar30,*(undefined4 *)(puVar30 + 1),local_168);
LAB_00101962:
                lVar38 = lVar38 + 1;
                lVar32 = local_130;
                lVar24 = lVar34 + 1;
              } while (lVar34 + 2 + (ulong)(3 - iVar33) != lVar38);
            }
            lVar40 = lVar40 + 4;
            if (lVar32 == 0) break;
          }
        }
        local_b8 = _LC30;
        fStack_b4 = _UNK_00107b44;
        fStack_b0 = (float)_UNK_00107b48;
        fStack_ac = (float)((ulong)_UNK_00107b48 >> 0x20);
        EditorNode3DGizmo::add_lines
                  ((Vector *)param_1,local_168,SUB81((Ref<Material> *)&local_1a8,0),(Color *)0x0);
        local_120 = 0;
        local_110 = 0;
        local_100 = 0;
        fVar2 = _LC30;
        if (local_150[0] != 0) {
          lVar32 = 0;
          lVar40 = 0;
LAB_00101a6d:
          fVar2 = _LC30;
          if (lVar32 < *(long *)(local_150[0] + -8)) {
            if (local_120 == 0) {
              iVar33 = 0;
            }
            else {
              iVar33 = (int)*(undefined8 *)(local_120 + -8);
            }
            pVVar25 = (Vector2i *)&local_b8;
            for (lVar24 = 0xd; lVar24 != 0; lVar24 = lVar24 + -1) {
              *(undefined8 *)pVVar25 = 0;
              pVVar25 = pVVar25 + (ulong)bVar42 * -0x10 + 8;
            }
            *(undefined4 *)pVVar25 = 0;
            lVar24 = lVar40;
            if (local_140[0] == 0) {
              lVar35 = 0;
LAB_001019be:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar24,lVar35,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar14 = (code *)invalidInstructionException();
              (*pcVar14)();
            }
            lVar35 = *(long *)(local_140[0] + -8);
            puVar30 = (undefined8 *)(lVar40 * 0x10 + local_140[0]);
            pVVar25 = (Vector2i *)&local_b8;
            do {
              if (lVar35 <= lVar24) goto LAB_001019be;
              uVar5 = *puVar30;
              uVar1 = *(undefined4 *)(puVar30 + 1);
              pVVar26 = pVVar25 + 0xc;
              lVar24 = lVar24 + 1;
              puVar30 = puVar30 + 2;
              *(undefined8 *)pVVar25 = uVar5;
              *(undefined4 *)(pVVar25 + 8) = uVar1;
              fVar2 = _LC30;
              pVVar25 = pVVar26;
            } while (local_4c != pVVar26);
            iVar22 = 0;
            fVar43 = _LC30;
            fVar48 = _LC45;
LAB_00101b43:
            fVar48 = fVar48 * __LC50;
            iVar37 = 0;
            fVar43 = fVar43 * __LC50;
            fVar51 = fVar2;
            fVar55 = 0.0;
            do {
              fVar51 = fVar51 * fVar48;
              fVar55 = fVar55 * fVar48;
              lVar24 = lVar32;
              if (local_150[0] == 0) {
                lVar35 = 0;
                goto LAB_001019be;
              }
              lVar35 = *(long *)(local_150[0] + -8);
              if (lVar35 <= lVar32) goto LAB_001019be;
              pfVar27 = (float *)(local_150[0] + lVar32 * 0xc);
              local_c0 = fVar55 + pfVar27[2];
              local_c8 = CONCAT44(fVar43 + pfVar27[1],fVar51 + *pfVar27);
              Vector<Vector3>::push_back(local_c8,local_c0,local_128);
              fVar46 = fVar51 * fVar51 + fVar43 * fVar43 + fVar55 * fVar55;
              if (fVar46 == 0.0) {
                fVar46 = 0.0;
                fVar55 = 0.0;
                fVar49 = 0.0;
                fVar51 = 0.0;
              }
              else {
                fVar46 = SQRT(fVar46);
                fVar51 = fVar51 / fVar46;
                fVar49 = fVar43 / fVar46;
                fVar55 = fVar55 / fVar46;
                fVar46 = fVar51 * fVar51 - fVar49 * fVar49;
              }
              fVar44 = _LC58 * (float)local_70;
              fVar78 = (float)((ulong)local_70 >> 0x20);
              fVar47 = _UNK_00107b74 * fVar78;
              fVar61 = (float)local_58 * _LC57;
              fVar69 = (float)((ulong)local_58 >> 0x20) * _UNK_00107b7c;
              fVar62 = local_b8 * _LC59;
              fVar70 = fStack_b4 * _UNK_00107b84;
              fVar77 = (float)local_70 * (float)_LC60;
              fVar78 = fVar78 * _LC60._4_4_;
              fVar63 = (float)local_88 * _LC61;
              fVar71 = (float)((ulong)local_88 >> 0x20) * _UNK_00107b94;
              fVar64 = (float)local_64 * _LC61;
              fVar72 = (float)((ulong)local_64 >> 0x20) * _UNK_00107b94;
              fVar65 = (float)local_7c * _LC61;
              fVar73 = (float)((ulong)local_7c >> 0x20) * _UNK_00107b94;
              fVar66 = (float)local_94 * _LC62;
              fVar74 = (float)((ulong)local_94 >> 0x20) * _UNK_00107b9c;
              fVar67 = fStack_ac * _LC62;
              fVar75 = fStack_a8 * _UNK_00107b9c;
              fVar68 = (float)uStack_a0 * _LC62;
              fVar76 = (float)((ulong)uStack_a0 >> 0x20) * _UNK_00107b9c;
              fVar45 = _LC57 * local_50;
              fVar56 = _LC58 * local_68;
              fVar52 = local_68 * (float)_LC60;
              fVar57 = _LC59 * fStack_b0;
              fVar58 = local_80 * _LC61;
              fVar59 = local_5c * _LC61;
              fVar53 = _LC61 * local_74;
              fVar60 = local_8c * _LC62;
              fVar50 = fStack_a4 * _LC62;
              fVar54 = _LC62 * local_98;
              if (local_110 == 0) {
                lVar24 = 0;
              }
              else {
                lVar24 = *(long *)(local_110 + -8);
              }
              iVar21 = CowData<Color>::resize<false>((CowData<Color> *)&local_110,lVar24 + 1);
              if (iVar21 == 0) {
                if (local_110 == 0) {
                  lVar34 = -1;
                  lVar24 = 0;
                }
                else {
                  lVar24 = *(long *)(local_110 + -8);
                  lVar34 = lVar24 + -1;
                  if (-1 < lVar34) {
                    CowData<Color>::_copy_on_write((CowData<Color> *)&local_110);
                    puVar30 = (undefined8 *)(lVar34 * 0x10 + local_110);
                    *puVar30 = CONCAT44(((fVar47 * fVar55 * fVar55 + fVar69 * fVar46 + fVar70) -
                                        fVar78) + fVar71 * fVar51 * fVar49 +
                                        fVar72 * fVar51 * fVar55 + fVar73 * fVar49 * fVar55 +
                                        fVar74 * fVar51 + fVar75 * fVar49 + fVar76 * fVar55,
                                        ((fVar44 * fVar55 * fVar55 + fVar61 * fVar46 + fVar62) -
                                        fVar77) + fVar63 * fVar51 * fVar49 +
                                        fVar64 * fVar51 * fVar55 + fVar65 * fVar49 * fVar55 +
                                        fVar66 * fVar51 + fVar67 * fVar49 + fVar68 * fVar55);
                    *(float *)(puVar30 + 1) =
                         ((fVar45 * fVar46 + fVar56 * fVar55 * fVar55 + fVar57) - fVar52) +
                         fVar58 * fVar51 * fVar49 + fVar59 * fVar51 * fVar55 +
                         fVar53 * fVar49 * fVar55 + fVar51 * fVar60 + fVar49 * fVar50 +
                         fVar54 * fVar55;
                    *(float *)((long)puVar30 + 0xc) = fVar2;
                    goto LAB_00101e0b;
                  }
                }
                _err_print_index_error
                          ("set","./core/templates/cowdata.h",0xcf,lVar34,lVar24,"p_index","size()",
                           "",false,false);
              }
              else {
                _err_print_error("push_back","./core/templates/vector.h",0x142,
                                 "Condition \"err\" is true. Returning: true",0,0);
              }
LAB_00101e0b:
              iVar37 = iVar37 + 1;
              if (iVar37 == 0x11) goto LAB_0010252b;
              sincosf((float)iVar37 * __LC63,&local_1bc,&local_1c0);
              fVar51 = local_1c0;
              fVar55 = local_1bc;
            } while( true );
          }
        }
LAB_00102116:
        local_220 = local_128;
        Array::Array(local_198);
        iVar33 = (int)local_198;
        Array::resize(iVar33);
        Variant::Variant((Variant *)&local_b8,local_220);
        pVVar28 = (Variant *)Array::operator[](iVar33);
        Variant::operator=(pVVar28,(Variant *)&local_b8);
        if (Variant::needs_deinit[(int)local_b8] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_b8,(Vector *)&local_108);
        pVVar28 = (Variant *)Array::operator[](iVar33);
        Variant::operator=(pVVar28,(Variant *)&local_b8);
        if (Variant::needs_deinit[(int)local_b8] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_b8,(Vector *)&local_118);
        pVVar28 = (Variant *)Array::operator[](iVar33);
        Variant::operator=(pVVar28,(Variant *)&local_b8);
        if (Variant::needs_deinit[(int)local_b8] != '\0') {
          Variant::_clear_internal();
        }
        local_190 = (Object *)0x0;
        Ref<ArrayMesh>::instantiate<>((Ref<ArrayMesh> *)&local_190);
        pOVar23 = local_190;
        Dictionary::Dictionary((Dictionary *)&local_180);
        Array::Array(local_188);
        Array::Array((Array *)&local_178);
        local_b8 = 0.0;
        fStack_b4 = 0.0;
        local_170 = (Object *)0x0;
        fStack_b0 = 0.0;
        fStack_ac = 0.0;
        fStack_a8 = 0.0;
        fStack_a4 = 0.0;
        Array::set_typed((uint)(Array *)&local_178,(StringName *)0x1c,(Variant *)&local_170);
        if ((StringName::configured != '\0') && (local_170 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_b8] != '\0') {
          Variant::_clear_internal();
        }
        cVar19 = Array::is_same_typed((Array *)&local_178);
        if (cVar19 == '\0') {
          Array::assign((Array *)&local_178);
        }
        else {
          Array::_ref((Array *)&local_178);
        }
        ArrayMesh::add_surface_from_arrays(pOVar23,3,local_198,(Array *)&local_178);
        Array::~Array((Array *)&local_178);
        Array::~Array(local_188);
        Dictionary::~Dictionary((Dictionary *)&local_180);
        (**(code **)(*(long *)pOVar23 + 0x208))(pOVar23,0,(Ref<Material> *)&local_1a0);
        local_170 = (Object *)0x0;
        local_94 = 0;
        local_8c = 0.0;
        local_178 = 0;
        local_180 = (Object *)0x0;
        local_b8 = _LC65;
        fStack_b4 = 0.0;
        fStack_b0 = 0.0;
        fStack_ac = 0.0;
        fStack_a8 = _LC65;
        fStack_a4 = 0.0;
        uStack_a0 = 0;
        local_98 = fVar2;
        pOVar29 = (Object *)__dynamic_cast(pOVar23,&Object::typeinfo,&Mesh::typeinfo,0);
        if ((pOVar29 != (Object *)0x0) &&
           (local_180 = pOVar29, cVar19 = RefCounted::reference(), cVar19 == '\0')) {
          local_180 = (Object *)0x0;
        }
        EditorNode3DGizmo::add_mesh
                  (param_1,(Dictionary *)&local_180,(Transform3D *)&local_178,(Vector2i *)&local_b8)
        ;
        if (((local_180 != (Object *)0x0) &&
            (cVar19 = RefCounted::unreference(), pOVar29 = local_180, cVar19 != '\0')) &&
           (cVar19 = predelete_handler(local_180), cVar19 != '\0')) {
          (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
          Memory::free_static(pOVar29,false);
        }
        Ref<Material>::unref((Ref<Material> *)&local_178);
        if (((local_170 != (Object *)0x0) &&
            (cVar19 = RefCounted::unreference(), pOVar29 = local_170, cVar19 != '\0')) &&
           (cVar19 = predelete_handler(local_170), cVar19 != '\0')) {
          (**(code **)(*(long *)pOVar29 + 0x140))(pOVar29);
          Memory::free_static(pOVar29,false);
        }
        cVar19 = RefCounted::unreference();
        if ((cVar19 != '\0') && (cVar19 = predelete_handler(pOVar23), cVar19 != '\0')) {
          (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
          Memory::free_static(pOVar23,false);
        }
        Array::~Array(local_198);
        CowData<int>::_unref((CowData<int> *)&local_100);
        CowData<Color>::_unref((CowData<Color> *)&local_110);
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_120);
        CowData<int>::_unref((CowData<int> *)&local_130);
        CowData<Color>::_unref((CowData<Color> *)local_140);
        CowData<Vector3>::_unref((CowData<Vector3> *)local_150);
        if ((void *)local_f8._0_8_ != (void *)0x0) {
          uVar5 = local_e8._8_8_;
          if (local_d8._4_4_ != 0) {
            uVar20 = *(uint *)(hash_table_size_primes + (local_d8 & 0xffffffff) * 4);
            for (lVar32 = 0; (uint)lVar32 < uVar20; lVar32 = lVar32 + 1) {
              *(undefined4 *)(local_e8._8_8_ + lVar32 * 4) = 0;
            }
          }
          Memory::free_static((void *)local_f8._0_8_,false);
          Memory::free_static((void *)local_e8._0_8_,false);
          Memory::free_static((void *)local_f8._8_8_,false);
          Memory::free_static((void *)uVar5,false);
        }
        CowData<Vector3>::_unref((CowData<Vector3> *)local_160);
        Ref<Material>::unref((Ref<Material> *)&local_1a0);
        Ref<Material>::unref((Ref<Material> *)&local_1a8);
        if (((local_1b0 != (Object *)0x0) && (cVar19 = RefCounted::unreference(), cVar19 != '\0'))
           && (cVar19 = predelete_handler(local_1b0), cVar19 != '\0')) {
          (**(code **)(*(long *)local_1b0 + 0x140))(local_1b0);
          Memory::free_static(local_1b0,false);
        }
        Ref<Material>::unref((Ref<Material> *)&local_1b8);
        goto LAB_0010107c;
      }
      CowData<Color>::_unref((CowData<Color> *)local_140);
    }
    CowData<Vector3>::_unref((CowData<Vector3> *)local_150);
    CowData<Vector3>::_unref((CowData<Vector3> *)local_160);
    if (((local_1a0 != (Object *)0x0) &&
        (cVar19 = RefCounted::unreference(), pOVar23 = local_1a0, cVar19 != '\0')) &&
       (cVar19 = predelete_handler(local_1a0), cVar19 != '\0')) {
      (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
      Memory::free_static(pOVar23,false);
    }
    if (((local_1a8 != (Object *)0x0) &&
        (cVar19 = RefCounted::unreference(), pOVar23 = local_1a8, cVar19 != '\0')) &&
       (cVar19 = predelete_handler(local_1a8), cVar19 != '\0')) {
      (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
      Memory::free_static(pOVar23,false);
    }
    if (local_1b0 == (Object *)0x0) goto joined_r0x0010106d;
  }
  cVar19 = RefCounted::unreference();
  if ((cVar19 != '\0') && (cVar19 = predelete_handler(local_1b0), cVar19 != '\0')) {
    (**(code **)(*(long *)local_1b0 + 0x140))(local_1b0);
    Memory::free_static(local_1b0,false);
  }
joined_r0x0010106d:
  if (((local_1b8 != (Object *)0x0) &&
      (cVar19 = RefCounted::unreference(), pOVar23 = local_1b8, cVar19 != '\0')) &&
     (cVar19 = predelete_handler(local_1b8), cVar19 != '\0')) {
    (**(code **)(*(long *)pOVar23 + 0x140))(pOVar23);
    Memory::free_static(pOVar23,false);
  }
LAB_0010107c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_0010252b:
  iVar22 = iVar22 + 1;
  if (iVar22 == 9) {
    iVar22 = 0;
    do {
      iVar37 = iVar33 + 0x11;
      iVar33 = iVar33 + 1;
      do {
        iVar21 = iVar33 + 0x10;
        iVar18 = iVar33;
        iVar15 = iVar33 + -1;
        if (iVar22 != 0) {
          while( true ) {
            iVar33 = iVar18;
            Vector<int>::push_back((Vector<int> *)&local_108,iVar15);
            Vector<int>::push_back((Vector<int> *)&local_108,iVar21);
            Vector<int>::push_back((Vector<int> *)&local_108,iVar33);
            if (iVar22 != 7) break;
            if (iVar37 == iVar33 + 1) {
              lVar40 = lVar40 + 9;
              lVar32 = lVar32 + 1;
              if (local_150[0] != 0) goto LAB_00101a6d;
              goto LAB_00102116;
            }
            iVar21 = iVar33 + 0x11;
            iVar18 = iVar33 + 1;
            iVar15 = iVar33;
          }
        }
        Vector<int>::push_back((Vector<int> *)&local_108,iVar33);
        Vector<int>::push_back((Vector<int> *)&local_108,iVar21);
        iVar21 = iVar33 + 0x11;
        iVar33 = iVar33 + 1;
        Vector<int>::push_back((Vector<int> *)&local_108,iVar21);
      } while (iVar37 != iVar33);
      iVar22 = iVar22 + 1;
      iVar33 = iVar37;
    } while( true );
  }
  sincosf((float)(_LC64 - (double)((float)iVar22 * __LC63)),&local_1bc,&local_1c0);
  fVar43 = local_1bc;
  fVar48 = local_1c0;
  goto LAB_00101b43;
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
  
  return (uint)CONCAT71(0x1079,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1079,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1079,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1079,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1079,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
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



/* LightmapGIGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall LightmapGIGizmoPlugin::is_class_ptr(LightmapGIGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1079,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1079,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1079,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1079,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1079,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* LightmapGIGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 LightmapGIGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* LightmapGIGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 LightmapGIGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* LightmapGIGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void LightmapGIGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* LightmapGIGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 LightmapGIGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* LightmapGIGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 LightmapGIGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* LightmapGIGizmoPlugin::_notificationv(int, bool) */

void LightmapGIGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001074a0;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001074a0;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_0010a010 != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* LightmapGIGizmoPlugin::~LightmapGIGizmoPlugin() */

void __thiscall LightmapGIGizmoPlugin::~LightmapGIGizmoPlugin(LightmapGIGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001076a0;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* LightmapGIGizmoPlugin::~LightmapGIGizmoPlugin() */

void __thiscall LightmapGIGizmoPlugin::~LightmapGIGizmoPlugin(LightmapGIGizmoPlugin *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001076a0;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
  return;
}



/* LightmapGIGizmoPlugin::_get_class_namev() const */

undefined8 * LightmapGIGizmoPlugin::_get_class_namev(void)

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
LAB_00102b13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102b13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"LightmapGIGizmoPlugin");
      goto LAB_00102b7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"LightmapGIGizmoPlugin");
LAB_00102b7e:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010a018 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
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
LAB_00102c53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102c53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_00102cbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_00102cbe:
  return &_get_class_namev()::_class_name_static;
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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* LightmapGIGizmoPlugin::LightmapGIGizmoPlugin() [clone .cold] */

void __thiscall LightmapGIGizmoPlugin::LightmapGIGizmoPlugin(LightmapGIGizmoPlugin *this)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* LightmapGIGizmoPlugin::get_class() const */

void LightmapGIGizmoPlugin::get_class(void)

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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
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
            if (lVar5 == 0) goto LAB_001031df;
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
LAB_001031df:
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
    if (cVar6 != '\0') goto LAB_00103293;
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
              if (lVar5 == 0) goto LAB_00103343;
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
LAB_00103343:
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
      if (cVar6 != '\0') goto LAB_00103293;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103293:
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
LAB_00103568:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103568;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103586;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103586:
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
            if (lVar4 == 0) goto LAB_0010385f;
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
LAB_0010385f:
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
    if (cVar5 != '\0') goto LAB_00103913;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00103913:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LightmapGIGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall LightmapGIGizmoPlugin::is_class(LightmapGIGizmoPlugin *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001039ff;
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
LAB_001039ff:
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
    if (cVar6 != '\0') goto LAB_00103ab3;
  }
  cVar6 = String::operator==(param_1,"LightmapGIGizmoPlugin");
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
              if (lVar5 == 0) goto LAB_00103b73;
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
LAB_00103b73:
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
      if (cVar6 != '\0') goto LAB_00103ab3;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_00103c1c;
    }
  }
LAB_00103ab3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103c1c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BaseMaterial3D::is_class(String const&) const */

undefined8 __thiscall BaseMaterial3D::is_class(BaseMaterial3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00103c9f;
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
LAB_00103c9f:
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
    if (cVar6 != '\0') goto LAB_00103d53;
  }
  cVar6 = String::operator==(param_1,"BaseMaterial3D");
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
              if (lVar5 == 0) goto LAB_00103e13;
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
LAB_00103e13:
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
      if (cVar6 != '\0') goto LAB_00103d53;
    }
    cVar6 = String::operator==(param_1,"Material");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Resource::is_class((Resource *)this,param_1);
        return uVar7;
      }
      goto LAB_00103ebc;
    }
  }
LAB_00103d53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103ebc:
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
            if (lVar4 == 0) goto LAB_00103f3f;
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
LAB_00103f3f:
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
    if (cVar5 != '\0') goto LAB_00103ff3;
  }
  cVar5 = String::operator==(param_1,"StandardMaterial3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BaseMaterial3D::is_class((BaseMaterial3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00103ff3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<Vector2i, HashMapHasherDefault, HashMapComparatorDefault<Vector2i> >::insert(Vector2i
   const&) */

Vector2i *
HashSet<Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>>::insert(Vector2i *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
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
  char cVar30;
  uint uVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  uint *puVar36;
  int iVar37;
  Vector2i *in_RDX;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  uint uVar42;
  long *in_RSI;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  undefined4 uVar46;
  uint uVar47;
  uint local_88;
  
  uVar44 = (ulong)*(uint *)(in_RSI + 4);
  uVar43 = *(uint *)(hash_table_size_primes + uVar44 * 4);
  if (*in_RSI == 0) {
    uVar44 = (ulong)uVar43 * 4;
    lVar33 = Memory::alloc_static(uVar44,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::alloc_static((ulong)uVar43 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar44,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::alloc_static(uVar44,false);
    in_RSI[1] = lVar33;
    if (uVar43 != 0) {
      memset((void *)in_RSI[3],0,uVar44);
    }
    uVar31 = *(uint *)((long)in_RSI + 0x24);
    uVar44 = (ulong)*(uint *)(in_RSI + 4);
    uVar40 = (ulong)uVar31;
    if (*in_RSI != 0) goto LAB_0010414c;
  }
  else {
    uVar31 = *(uint *)((long)in_RSI + 0x24);
LAB_0010414c:
    uVar40 = (ulong)uVar31;
    if (uVar31 != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + uVar44 * 4);
      uVar45 = CONCAT44(0,uVar1);
      uVar41 = *(ulong *)(hash_table_size_primes_inv + uVar44 * 8);
      uVar31 = (*(int *)in_RDX * 0x16a88000 | (uint)(*(int *)in_RDX * -0x3361d2af) >> 0x11) *
               0x1b873593 ^ 0x7f07c65;
      uVar31 = (uVar31 << 0xd | uVar31 >> 0x13) * 5 + 0xe6546b64 ^
               (*(int *)(in_RDX + 4) * 0x16a88000 |
               (uint)(*(int *)(in_RDX + 4) * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar31 = (uVar31 << 0xd | uVar31 >> 0x13) * 5 + 0xe6546b64;
      uVar31 = (uVar31 >> 0x10 ^ uVar31) * -0x7a143595;
      uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
      uVar47 = uVar31 ^ uVar31 >> 0x10;
      if (uVar31 == uVar31 >> 0x10) {
        uVar47 = 1;
        uVar38 = uVar41;
      }
      else {
        uVar38 = uVar47 * uVar41;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar45;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      lVar39 = SUB168(auVar6 * auVar18,8);
      lVar33 = in_RSI[3];
      iVar37 = SUB164(auVar6 * auVar18,8);
      uVar31 = *(uint *)(lVar33 + lVar39 * 4);
      uVar38 = (ulong)uVar31;
      if (uVar31 != 0) {
        uVar31 = 0;
        do {
          if (uVar47 == (uint)uVar38) {
            cVar30 = Vector2i::operator==
                               ((Vector2i *)(*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar39 * 4) * 8)
                                ,in_RDX);
            if (cVar30 != '\0') {
              iVar37 = *(int *)((long)in_RSI + 0x24);
              lVar33 = *in_RSI;
              iVar32 = *(int *)(in_RSI[1] + lVar39 * 4);
              goto LAB_00104681;
            }
            lVar33 = in_RSI[3];
          }
          uVar31 = uVar31 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (iVar37 + 1) * uVar41;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar45;
          lVar39 = SUB168(auVar7 * auVar19,8);
          uVar42 = *(uint *)(lVar33 + lVar39 * 4);
          uVar38 = (ulong)uVar42;
          iVar37 = SUB164(auVar7 * auVar19,8);
        } while ((uVar42 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = uVar38 * uVar41, auVar20._8_8_ = 0,
                auVar20._0_8_ = uVar45, auVar9._8_8_ = 0,
                auVar9._0_8_ = ((uVar1 + iVar37) - SUB164(auVar8 * auVar20,8)) * uVar41,
                auVar21._8_8_ = 0, auVar21._0_8_ = uVar45, uVar31 <= SUB164(auVar9 * auVar21,8)));
        uVar40 = (ulong)*(uint *)((long)in_RSI + 0x24);
        uVar44 = (ulong)*(uint *)(in_RSI + 4);
      }
    }
  }
  if ((float)uVar43 * __LC17 < (float)((int)uVar40 + 1)) {
    if ((int)uVar44 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar37 = *(int *)((long)in_RSI + 0x24);
      lVar33 = *in_RSI;
      iVar32 = -1;
      goto LAB_00104681;
    }
    uVar43 = (int)uVar44 + 1;
    uVar44 = (ulong)uVar43;
    if (uVar43 < 2) {
      uVar44 = 2;
    }
    pvVar2 = (void *)in_RSI[2];
    uVar43 = *(uint *)(hash_table_size_primes + uVar44 * 4);
    pvVar3 = (void *)in_RSI[3];
    *(int *)(in_RSI + 4) = (int)uVar44;
    uVar44 = (ulong)uVar43 * 4;
    lVar33 = Memory::alloc_static(uVar44,false);
    in_RSI[3] = lVar33;
    lVar33 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar43 * 8,false);
    *in_RSI = lVar33;
    lVar33 = Memory::alloc_static(uVar44,false);
    in_RSI[2] = lVar33;
    lVar33 = Memory::realloc_static((void *)in_RSI[1],uVar44,false);
    in_RSI[1] = lVar33;
    if (uVar43 != 0) {
      memset((void *)in_RSI[3],0,uVar44);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar44 = 0;
      lVar39 = in_RSI[3];
      lVar4 = in_RSI[2];
      do {
        uVar45 = uVar44 & 0xffffffff;
        uVar46 = (undefined4)uVar44;
        uVar47 = 0;
        uVar43 = *(uint *)((long)pvVar3 + (ulong)*(uint *)((long)pvVar2 + uVar44 * 4) * 4);
        uVar40 = (ulong)uVar43;
        uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar31);
        lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar40 * lVar34;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar41;
        lVar35 = SUB168(auVar10 * auVar22,8) * 4;
        iVar37 = SUB164(auVar10 * auVar22,8);
        puVar36 = (uint *)(lVar39 + lVar35);
        uVar1 = *puVar36;
        if (uVar1 == 0) {
          lVar34 = uVar44 * 4;
        }
        else {
          do {
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar1 * lVar34;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar41;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)((uVar31 + iVar37) - SUB164(auVar11 * auVar23,8)) * lVar34;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar41;
            local_88 = SUB164(auVar12 * auVar24,8);
            if (local_88 < uVar47) {
              *(int *)(lVar4 + uVar45 * 4) = iVar37;
              uVar43 = *puVar36;
              *puVar36 = (uint)uVar40;
              uVar1 = *(uint *)(lVar35 + lVar33);
              uVar40 = (ulong)uVar43;
              *(uint *)(lVar35 + lVar33) = (uint)uVar45;
              uVar45 = (ulong)uVar1;
              uVar47 = local_88;
            }
            uVar46 = (undefined4)uVar45;
            uVar43 = (uint)uVar40;
            uVar47 = uVar47 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar34;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar41;
            lVar35 = SUB168(auVar13 * auVar25,8) * 4;
            iVar37 = SUB164(auVar13 * auVar25,8);
            puVar36 = (uint *)(lVar39 + lVar35);
            uVar1 = *puVar36;
          } while (uVar1 != 0);
          lVar34 = uVar45 << 2;
        }
        *puVar36 = uVar43;
        uVar44 = uVar44 + 1;
        *(int *)(lVar4 + lVar34) = iVar37;
        *(undefined4 *)(lVar33 + lVar35) = uVar46;
      } while ((uint)uVar44 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(pvVar2,false);
    uVar40 = (ulong)*(uint *)((long)in_RSI + 0x24);
    uVar44 = (ulong)*(uint *)(in_RSI + 4);
  }
  uVar46 = (undefined4)uVar40;
  uVar43 = (*(int *)in_RDX * 0x16a88000 | (uint)(*(int *)in_RDX * -0x3361d2af) >> 0x11) * 0x1b873593
           ^ 0x7f07c65;
  uVar43 = (uVar43 << 0xd | uVar43 >> 0x13) * 5 + 0xe6546b64 ^
           (*(int *)(in_RDX + 4) * 0x16a88000 | (uint)(*(int *)(in_RDX + 4) * -0x3361d2af) >> 0x11)
           * 0x1b873593;
  uVar43 = (uVar43 << 0xd | uVar43 >> 0x13) * 5 + 0xe6546b64;
  uVar43 = (uVar43 >> 0x10 ^ uVar43) * -0x7a143595;
  uVar31 = (uVar43 ^ uVar43 >> 0xd) * -0x3d4d51cb;
  uVar43 = uVar31 ^ uVar31 >> 0x10;
  if (uVar31 == uVar31 >> 0x10) {
    uVar41 = 1;
    uVar43 = 1;
  }
  else {
    uVar41 = (ulong)uVar43;
  }
  uVar47 = 0;
  lVar33 = *in_RSI;
  lVar4 = in_RSI[3];
  *(undefined8 *)(lVar33 + uVar40 * 8) = *(undefined8 *)in_RDX;
  uVar31 = *(uint *)(hash_table_size_primes + uVar44 * 4);
  uVar45 = CONCAT44(0,uVar31);
  lVar35 = *(long *)(hash_table_size_primes_inv + uVar44 * 8);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar41 * lVar35;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar45;
  lVar39 = SUB168(auVar14 * auVar26,8) * 4;
  iVar37 = SUB164(auVar14 * auVar26,8);
  lVar34 = in_RSI[2];
  lVar5 = in_RSI[1];
  puVar36 = (uint *)(lVar4 + lVar39);
  uVar1 = *puVar36;
  uVar44 = uVar40;
  while (uVar1 != 0) {
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)uVar1 * lVar35;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)((uVar31 + iVar37) - SUB164(auVar15 * auVar27,8)) * lVar35;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    local_88 = SUB164(auVar16 * auVar28,8);
    uVar42 = uVar43;
    if (local_88 < uVar47) {
      *(int *)(lVar34 + uVar44 * 4) = iVar37;
      uVar42 = *puVar36;
      *puVar36 = uVar43;
      puVar36 = (uint *)(lVar39 + lVar5);
      uVar43 = *puVar36;
      *puVar36 = (uint)uVar40;
      uVar40 = (ulong)uVar43;
      uVar44 = uVar40;
      uVar47 = local_88;
    }
    uVar46 = (undefined4)uVar40;
    uVar47 = uVar47 + 1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)(iVar37 + 1) * lVar35;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar45;
    lVar39 = SUB168(auVar17 * auVar29,8) * 4;
    iVar37 = SUB164(auVar17 * auVar29,8);
    puVar36 = (uint *)(lVar4 + lVar39);
    uVar43 = uVar42;
    uVar1 = *puVar36;
  }
  *puVar36 = uVar43;
  *(int *)(lVar34 + uVar44 * 4) = iVar37;
  *(undefined4 *)(lVar5 + lVar39) = uVar46;
  iVar32 = *(int *)((long)in_RSI + 0x24);
  iVar37 = iVar32 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar37;
LAB_00104681:
  *(int *)(param_1 + 0xc) = iVar32;
  *(long *)param_1 = lVar33;
  *(int *)(param_1 + 8) = iVar37;
  return param_1;
}



/* void Ref<ArrayMesh>::instantiate<>() */

void __thiscall Ref<ArrayMesh>::instantiate<>(Ref<ArrayMesh> *this)

{
  char cVar1;
  ArrayMesh *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ArrayMesh *)operator_new(0x430,"");
  ArrayMesh::ArrayMesh(this_00);
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
    this_00 = (ArrayMesh *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ArrayMesh *)pOVar3) goto LAB_00104895;
    *(ArrayMesh **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00104895;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ArrayMesh *)0x0) {
    return;
  }
LAB_00104895:
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



/* LightmapGIGizmoPlugin::_initialize_classv() */

void LightmapGIGizmoPlugin::_initialize_classv(void)

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
  if (initialize_class()::initialized == '\0') {
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "EditorNode3DGizmoPlugin";
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
      if ((code *)PTR__bind_methods_0010a020 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_48 = "EditorNode3DGizmoPlugin";
    local_58 = 0;
    local_40 = 0x17;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "LightmapGIGizmoPlugin";
    local_60 = 0;
    local_40 = 0x15;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
      if ((code *)PTR__bind_methods_0010a028 != Material::_bind_methods) {
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
  if (local_90 == 0) {
LAB_00105105:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105105;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105127;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105127:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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



/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Material::_get_property_listv(Material *this,List *param_1,bool param_2)

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
  if (local_90 == 0) {
LAB_00105528:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105528;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105545;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105545:
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
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
  if (local_90 == 0) {
LAB_00105985:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105985;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001059a7;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001059a7:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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
  if (local_90 == 0) {
LAB_00105da8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105da8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105dc5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105dc5:
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



/* EditorNode3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorNode3DGizmoPlugin::_get_property_listv
          (EditorNode3DGizmoPlugin *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorNode3DGizmoPlugin";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorNode3DGizmoPlugin";
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
  if (local_90 == 0) {
LAB_001061f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001061f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106215;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106215:
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
  StringName::StringName((StringName *)&local_78,"EditorNode3DGizmoPlugin",false);
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



/* LightmapGIGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
LightmapGIGizmoPlugin::_get_property_listv(LightmapGIGizmoPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a0;
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
    EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "LightmapGIGizmoPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "LightmapGIGizmoPlugin";
  local_98 = 0;
  local_70 = 0x15;
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
LAB_00106655:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00106655;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00106677;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00106677:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a0);
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
  StringName::StringName((StringName *)&local_78,"LightmapGIGizmoPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,true);
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
LAB_00106d30:
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
  if (lVar7 == 0) goto LAB_00106d30;
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
LAB_00106c9c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00106c2b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_00106c9c;
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
LAB_00106c2b:
  puVar9[-1] = param_1;
  return 0;
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



/* CowData<Color>::_unref() */

void __thiscall CowData<Color>::_unref(CowData<Color> *this)

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
LAB_001070a0:
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
  if (lVar8 == 0) goto LAB_001070a0;
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
        goto LAB_00106fb1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00106fb1:
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



/* CowData<Color>::_realloc(long) */

undefined8 __thiscall CowData<Color>::_realloc(CowData<Color> *this,long param_1)

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
/* Error CowData<Color>::resize<false>(long) */

undefined8 __thiscall CowData<Color>::resize<false>(CowData<Color> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
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
    lVar10 = 0;
    lVar4 = 0;
  }
  else {
    lVar10 = *(long *)(lVar4 + -8);
    if (param_1 == lVar10) {
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
    lVar4 = lVar10 * 0x10;
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
LAB_001073c0:
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
  lVar11 = uVar5 + 1;
  if (lVar11 == 0) goto LAB_001073c0;
  if (param_1 <= lVar10) {
    if ((lVar11 != lVar4) && (uVar7 = _realloc(this,lVar11), (int)uVar7 != 0)) {
      return uVar7;
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
  if (lVar11 == lVar4) {
LAB_0010732c:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar8[-1];
    if (param_1 <= lVar4) goto LAB_001072c4;
  }
  else {
    if (lVar10 != 0) {
      uVar7 = _realloc(this,lVar11);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      goto LAB_0010732c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar4 = 0;
  }
  uVar3 = _UNK_00107b58;
  uVar7 = __LC44;
  puVar6 = puVar8 + lVar4 * 2;
  puVar9 = puVar6 + (param_1 - lVar4) * 2;
  do {
    *puVar6 = uVar7;
    puVar6[1] = uVar3;
    puVar6 = puVar6 + 2;
  } while (puVar9 != puVar6);
LAB_001072c4:
  puVar8[-1] = param_1;
  return 0;
}



/* WARNING: Control flow encountered bad instruction data */
/* LightmapGIGizmoPlugin::~LightmapGIGizmoPlugin() */

void __thiscall LightmapGIGizmoPlugin::~LightmapGIGizmoPlugin(LightmapGIGizmoPlugin *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


