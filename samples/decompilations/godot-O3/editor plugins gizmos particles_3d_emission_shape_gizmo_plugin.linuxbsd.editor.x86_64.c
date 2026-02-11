
/* Particles3DEmissionShapeGizmoPlugin::get_priority() const */

undefined8 Particles3DEmissionShapeGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* Particles3DEmissionShapeGizmoPlugin::is_selectable_when_hidden() const */

undefined8 Particles3DEmissionShapeGizmoPlugin::is_selectable_when_hidden(void)

{
  return 1;
}



/* Particles3DEmissionShapeGizmoPlugin::get_handle_value(EditorNode3DGizmo const*, int, bool) const
    */

EditorNode3DGizmo *
Particles3DEmissionShapeGizmoPlugin::get_handle_value
          (EditorNode3DGizmo *param_1,int param_2,bool param_3)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  return param_1;
}



/* Particles3DEmissionShapeGizmoPlugin::set_handle(EditorNode3DGizmo const*, int, bool, Camera3D*,
   Vector2 const&) */

void Particles3DEmissionShapeGizmoPlugin::set_handle
               (EditorNode3DGizmo *param_1,int param_2,bool param_3,Camera3D *param_4,
               Vector2 *param_5)

{
  return;
}



/* Particles3DEmissionShapeGizmoPlugin::commit_handle(EditorNode3DGizmo const*, int, bool, Variant
   const&, bool) */

void Particles3DEmissionShapeGizmoPlugin::commit_handle
               (EditorNode3DGizmo *param_1,int param_2,bool param_3,Variant *param_4,bool param_5)

{
  return;
}



/* Particles3DEmissionShapeGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
Particles3DEmissionShapeGizmoPlugin::has_gizmo
          (Particles3DEmissionShapeGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 == (Node3D *)0x0) {
    return false;
  }
  lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&GPUParticles3D::typeinfo,0);
  if (lVar1 != 0) {
    return true;
  }
  lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&CPUParticles3D::typeinfo,0);
  return lVar1 != 0;
}



/* Particles3DEmissionShapeGizmoPlugin::get_handle_name(EditorNode3DGizmo const*, int, bool) const
    */

EditorNode3DGizmo *
Particles3DEmissionShapeGizmoPlugin::get_handle_name
          (EditorNode3DGizmo *param_1,int param_2,bool param_3)

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



/* Particles3DEmissionShapeGizmoPlugin::get_gizmo_name() const */

Particles3DEmissionShapeGizmoPlugin * __thiscall
Particles3DEmissionShapeGizmoPlugin::get_gizmo_name(Particles3DEmissionShapeGizmoPlugin *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Particles3DEmissionShapeGizmoPlugin::Particles3DEmissionShapeGizmoPlugin() */

void __thiscall
Particles3DEmissionShapeGizmoPlugin::Particles3DEmissionShapeGizmoPlugin
          (Particles3DEmissionShapeGizmoPlugin *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  byte bVar6;
  undefined1 auVar7 [16];
  undefined8 local_b8;
  Object *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  bVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined8 *)(this + 0x450) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00107490;
  this_00 = (RefCounted *)operator_new(0x1c8,"");
  pRVar3 = this_00;
  for (lVar2 = 0x39; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_00107330;
  *(undefined4 *)(this_00 + 0x180) = 0;
  *(undefined4 *)(this_00 + 0x1b8) = 0x3f800000;
  *(undefined8 *)(this_00 + 0x1bc) = 0;
  *(undefined4 *)(this_00 + 0x1c4) = 0;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  auVar7 = ZEXT416(_LC7);
  *(undefined1 (*) [16])(this_00 + 0x198) = auVar7;
  *(undefined1 (*) [16])(this_00 + 0x1a8) = auVar7;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)(this + 0x450);
    if (pOVar5 == (Object *)0x0) goto LAB_0010042f;
    *(undefined8 *)(this + 0x450) = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') goto LAB_0010042f;
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') goto LAB_0010042f;
LAB_00100673:
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
    pOVar4 = (Object *)this_00;
    if (this_00 == (RefCounted *)0x0) goto LAB_0010042f;
  }
  else {
    pOVar5 = *(Object **)(this + 0x450);
    pOVar4 = pOVar5;
    if (this_00 != (RefCounted *)pOVar5) {
      *(RefCounted **)(this + 0x450) = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)(this + 0x450) = 0;
      }
      pOVar4 = (Object *)this_00;
      if (((pOVar5 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar5), cVar1 != '\0')) goto LAB_00100673;
    }
  }
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
  }
LAB_0010042f:
  local_88 = __LC37;
  uStack_80 = _UNK_00107898;
  Variant::Variant((Variant *)local_58,(Color *)&local_88);
  local_a8 = "editors/3d_gizmos/gizmo_colors/particles_emission_shape";
  local_b0 = (Object *)0x0;
  local_a0 = 0x37;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_78,(Variant *)&local_b0,SUB81((Variant *)local_58,0),true);
  local_98[0] = Variant::operator_cast_to_Color((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_a8 = "particles_emission_shape_material";
  local_b0 = (Object *)0x0;
  local_a0 = 0x21;
  String::parse_latin1((StrRange *)&local_b0);
  EditorNode3DGizmoPlugin::create_material
            ((String *)this,(Color *)&local_b0,SUB81(local_98,0),false,false);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  local_a8 = "handles";
  local_b0 = (Object *)0x0;
  local_b8 = 0;
  local_a0 = 7;
  String::parse_latin1((StrRange *)&local_b8);
  EditorNode3DGizmoPlugin::create_handle_material((String *)this,SUB81(&local_b8,0),(Ref *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if (((local_b0 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar5 = local_b0, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_b0), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 0xc;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Particles3DEmissionShapeGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
Particles3DEmissionShapeGizmoPlugin::redraw
          (Particles3DEmissionShapeGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  Object *pOVar1;
  undefined1 auVar2 [12];
  undefined4 uVar3;
  undefined1 auVar4 [12];
  undefined4 uVar5;
  undefined1 auVar6 [12];
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  int iVar10;
  long lVar11;
  Object *pOVar12;
  long lVar13;
  Vector3 *pVVar14;
  uint uVar15;
  long in_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float local_368;
  float local_360;
  float local_2a4;
  float local_294;
  Object *local_290;
  float local_280;
  float local_27c [3];
  Object *local_270;
  Object *local_268;
  Object *local_260;
  undefined8 local_258;
  Object *local_250;
  Object *local_248;
  undefined8 local_240;
  undefined8 local_238;
  float local_230;
  undefined8 local_228;
  float local_220;
  undefined8 local_218;
  float local_210;
  undefined8 local_208;
  float local_200;
  undefined8 local_1f8;
  float local_1f0;
  undefined8 local_1e8;
  float local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  float local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  undefined8 local_188;
  float local_180;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined8 local_118;
  float local_110;
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
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [8];
  float local_90;
  undefined1 local_88 [8];
  float local_80;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float fStack_54;
  float local_50;
  float local_4c;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  lVar13 = *(long *)(param_1 + 0x1f0);
  if (lVar13 != 0) {
    lVar11 = __dynamic_cast(lVar13,&Object::typeinfo,&GPUParticles3D::typeinfo,0);
    if (lVar11 == 0) {
      lVar13 = __dynamic_cast(lVar13,&Object::typeinfo,&CPUParticles3D::typeinfo,0);
      if (lVar13 == 0) goto LAB_00100f68;
      iVar10 = CPUParticles3D::get_emission_shape();
      local_250 = (Object *)param_1;
      cVar9 = RefCounted::init_ref();
      if (cVar9 == '\0') {
        local_250 = (Object *)0x0;
      }
      local_258 = 0;
      String::parse_latin1((String *)&local_258,"particles_emission_shape_material");
      EditorNode3DGizmoPlugin::get_material((String *)&local_248,(Ref *)this);
      local_268 = (Object *)0x0;
      if (local_248 != (Object *)0x0) {
        pOVar12 = (Object *)__dynamic_cast(local_248,&Object::typeinfo,&Material::typeinfo,0);
        if (pOVar12 != (Object *)0x0) {
          local_268 = pOVar12;
          cVar9 = RefCounted::reference();
          if (cVar9 == '\0') {
            local_268 = (Object *)0x0;
          }
          if (local_248 == (Object *)0x0) goto LAB_00100e2e;
        }
        cVar9 = RefCounted::unreference();
        pOVar12 = local_248;
        if ((cVar9 != '\0') && (cVar9 = predelete_handler(local_248), cVar9 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))();
          Memory::free_static(pOVar12,false);
        }
      }
LAB_00100e2e:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
      if (((local_250 != (Object *)0x0) &&
          (cVar9 = RefCounted::unreference(), pOVar12 = local_250, cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_250), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))();
        Memory::free_static(pOVar12,false);
      }
      local_250 = (Object *)0x0;
      local_258 = 0;
      String::parse_latin1((String *)&local_258,"handles");
      EditorNode3DGizmoPlugin::get_material((String *)&local_248,(Ref *)this);
      local_260 = (Object *)0x0;
      if (local_248 == (Object *)0x0) {
        pOVar12 = (Object *)0x0;
      }
      else {
        pOVar12 = (Object *)__dynamic_cast(local_248,&Object::typeinfo,&Material::typeinfo);
        if (pOVar12 != (Object *)0x0) {
          cVar9 = RefCounted::reference();
          if (cVar9 == '\0') {
            pOVar12 = (Object *)0x0;
          }
          local_260 = pOVar12;
          if (local_248 == (Object *)0x0) goto LAB_00100ef9;
        }
        cVar9 = RefCounted::unreference();
        pOVar12 = local_260;
        if ((cVar9 != '\0') &&
           (cVar9 = predelete_handler(local_248), pOVar12 = local_260, cVar9 != '\0')) {
          (**(code **)(*(long *)local_248 + 0x140))(local_248);
          Memory::free_static(local_248,false);
        }
      }
LAB_00100ef9:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
      if (((local_250 != (Object *)0x0) &&
          (cVar9 = RefCounted::unreference(), pOVar1 = local_250, cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_250), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      if (iVar10 - 1U < 2) {
        iVar10 = 6;
        fVar35 = (float)CPUParticles3D::get_emission_sphere_radius();
        local_240 = 0;
        fVar16 = (float)_LC33;
        fVar17 = _LC33._4_4_;
        fVar18 = (float)_LC30;
        fVar19 = _LC30._4_4_;
        while( true ) {
          fVar16 = fVar16 * fVar35;
          fVar17 = fVar17 * fVar35;
          fVar29 = fVar35 * fVar18;
          fVar37 = fVar35 * fVar19;
          local_68 = (ulong)(uint)fVar16;
          fStack_60 = fVar17;
          Vector<Vector3>::push_back(local_68,fVar17,(String *)&local_248);
          local_68 = (ulong)(uint)fVar29;
          fStack_60 = fVar37;
          Vector<Vector3>::push_back(local_68,fVar37,(String *)&local_248);
          local_68 = (ulong)(uint)fVar16 << 0x20;
          fStack_60 = fVar17;
          Vector<Vector3>::push_back(local_68,fVar17,(String *)&local_248);
          local_68 = (ulong)(uint)fVar29 << 0x20;
          fStack_60 = fVar37;
          Vector<Vector3>::push_back(local_68,fVar37,(String *)&local_248);
          fStack_60 = 0.0;
          local_68 = CONCAT44(fVar17,fVar16);
          Vector<Vector3>::push_back(CONCAT44(fVar17,fVar16),0,(String *)&local_248);
          fStack_60 = 0.0;
          local_68 = CONCAT44(fVar37,fVar29);
          Vector<Vector3>::push_back(CONCAT44(fVar37,fVar29),0,(String *)&local_248);
          if (iVar10 == 0x16e) break;
          fVar16 = (float)iVar10;
          iVar10 = iVar10 + 3;
          sincosf(fVar16 * __LC35,local_27c,&local_280);
          fVar16 = fVar18;
          fVar17 = fVar19;
          fVar18 = local_27c[0];
          fVar19 = local_280;
        }
        if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
          local_68 = CONCAT44(_LC7,_LC7);
          fStack_60 = _LC7;
          fStack_5c = _LC7;
          EditorNode3DGizmo::add_lines
                    ((Vector *)param_1,(Ref *)&local_248,SUB81(&local_268,0),(Color *)0x0);
        }
LAB_00101313:
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_240);
      }
      else if (iVar10 == 3) {
        uVar15 = 0;
        local_a8._0_12_ = CPUParticles3D::get_emission_box_extents();
        local_250 = (Object *)0x0;
        Ref<BoxMesh>::instantiate<>((Ref<BoxMesh> *)&local_250);
        (**(code **)(*(long *)local_250 + 0x230))(&local_68);
        auVar2 = local_a8._0_12_;
        uVar3 = local_a8._8_4_;
        local_240 = 0;
        do {
          pVVar14 = (Vector3 *)(ulong)uVar15;
          local_98 = (undefined1  [8])0x0;
          uVar15 = uVar15 + 1;
          local_90 = 0.0;
          local_78 = (undefined1  [8])0x0;
          fStack_70 = 0.0;
          AABB::get_edge((int)&local_68,pVVar14,local_98);
          local_150 = (float)uVar3 * (local_90 + local_90);
          fVar16 = auVar2._0_4_;
          fVar17 = auVar2._4_4_;
          local_158 = CONCAT44((local_98._4_4_ + local_98._4_4_) * fVar17,
                               (local_98._0_4_ + local_98._0_4_) * fVar16);
          Vector<Vector3>::push_back((String *)&local_248);
          local_80 = (float)uVar3 * (fStack_70 + fStack_70);
          local_88 = (undefined1  [8])
                     CONCAT44((local_78._4_4_ + local_78._4_4_) * fVar17,
                              (local_78._0_4_ + local_78._0_4_) * fVar16);
          Vector<Vector3>::push_back((String *)&local_248);
        } while (uVar15 != 0xc);
        if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
          local_78._4_4_ = _LC7;
          local_78._0_4_ = _LC7;
          fStack_70 = _LC7;
          fStack_6c = _LC7;
          EditorNode3DGizmo::add_lines
                    ((Vector *)param_1,(Ref *)&local_248,SUB81(&local_268,0),(Color *)0x0);
        }
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_240);
        Ref<BoxMesh>::unref((Ref<BoxMesh> *)&local_250);
      }
      else if (iVar10 == 6) {
        fVar16 = (float)CPUParticles3D::get_emission_ring_height();
        fVar35 = fVar16 * __LC37;
        fVar17 = (float)CPUParticles3D::get_emission_ring_radius();
        fVar18 = (float)CPUParticles3D::get_emission_ring_inner_radius();
        _local_88 = CPUParticles3D::get_emission_ring_axis();
        fVar19 = (float)CPUParticles3D::get_emission_ring_cone_angle();
        dVar23 = tan((_LC38 - (double)fVar19) * __LC39);
        uVar15 = _LC41;
        dVar23 = (double)fVar17 - (double)fVar16 * dVar23;
        if (dVar23 <= 0.0) {
          local_2a4 = 0.0;
        }
        else {
          local_2a4 = (float)dVar23;
        }
        fVar16 = (fVar18 / fVar17) * local_2a4;
        local_240 = 0;
        fStack_5c = (float)local_88._0_4_ * (float)local_88._0_4_ +
                    (float)local_88._4_4_ * (float)local_88._4_4_ + local_80 * local_80;
        if (fStack_5c == 0.0) {
          fStack_54 = 0.0;
          local_58 = 0.0;
          fStack_5c = 0.0;
LAB_00103014:
          fStack_60 = 0.0;
          fVar29 = 0.0;
          fVar19 = 0.0;
        }
        else {
          fStack_5c = SQRT(fStack_5c);
          fStack_54 = local_80 / fStack_5c;
          local_58 = (float)local_88._4_4_ / fStack_5c;
          fStack_5c = (float)local_88._0_4_ / fStack_5c;
          fVar19 = local_58 * local_58 + fStack_54 * fStack_54 + fStack_5c * fStack_5c;
          if (fVar19 == 0.0) goto LAB_00103014;
          fVar19 = SQRT(fVar19);
          fVar29 = (float)((uint)fStack_54 ^ _LC41) / fVar19;
          fStack_60 = (float)((uint)fStack_5c ^ _LC41) / fVar19;
          fVar37 = (local_58 / fVar19) * fStack_5c + fVar29 * local_58 + fStack_60 * fStack_54;
          fVar29 = fVar29 - local_58 * fVar37;
          fVar19 = local_58 / fVar19 - fStack_5c * fVar37;
          fStack_60 = fStack_60 - fVar37 * fStack_54;
          fVar37 = fVar19 * fVar19 + fVar29 * fVar29 + fStack_60 * fStack_60;
          if (fVar37 == 0.0) goto LAB_00103014;
          fVar37 = SQRT(fVar37);
          fVar19 = fVar19 / fVar37;
          fVar29 = fVar29 / fVar37;
          fStack_60 = fStack_60 / fVar37;
        }
        local_68 = CONCAT44(fVar29,fVar19);
        local_48 = local_58 * fVar19 - fVar29 * fStack_5c;
        local_4c = fStack_5c * fStack_60 - fVar19 * fStack_54;
        local_50 = fVar29 * fStack_54 - fStack_60 * local_58;
        fVar19 = local_50 * local_50 + local_4c * local_4c + local_48 * local_48;
        if (fVar19 == 0.0) {
          local_48 = 0.0;
          local_4c = 0.0;
          local_50 = 0.0;
        }
        else {
          fVar19 = SQRT(fVar19);
          local_50 = local_50 / fVar19;
          local_4c = local_4c / fVar19;
          local_48 = local_48 / fVar19;
        }
        Basis::invert();
        fVar19 = _LC7;
        fVar28 = (float)(uVar15 ^ (uint)fVar35);
        iVar10 = 6;
        fVar37 = _LC30._4_4_;
        fVar20 = (float)_LC30;
        fVar29 = _LC7;
        fVar21 = 0.0;
        while( true ) {
          fVar36 = fVar20;
          fVar27 = fVar37;
          fVar32 = fVar17 * fVar21;
          fVar43 = fVar17 * fVar29;
          fVar26 = fVar17 * fVar36;
          fVar41 = fVar17 * fVar27;
          fVar34 = local_2a4 * fVar29;
          fVar38 = local_2a4 * fVar36;
          fVar33 = local_2a4 * fVar27;
          fVar31 = local_2a4 * fVar21;
          fVar37 = fVar18 * fVar21;
          fVar30 = fVar18 * fVar29;
          fVar22 = fVar18 * fVar36;
          fVar20 = fVar18 * fVar27;
          fVar29 = fVar29 * fVar16;
          fVar21 = fVar21 * fVar16;
          fVar24 = fVar16 * fVar27;
          fVar25 = fVar16 * fVar36;
          local_140 = fVar35 * local_4c + local_50 * fVar31 + local_48 * fVar34;
          local_148 = CONCAT44(fStack_54 * fVar34 + fVar31 * fStack_5c + local_58 * fVar35,
                               fStack_60 * fVar34 +
                               fVar31 * (float)local_68 + local_68._4_4_ * fVar35);
          Vector<Vector3>::push_back((String *)&local_248);
          local_130 = fVar35 * local_4c + fVar38 * local_50 + fVar33 * local_48;
          local_138 = CONCAT44(fStack_5c * fVar38 + fVar35 * local_58 + fStack_54 * fVar33,
                               (float)local_68 * fVar38 + fVar35 * local_68._4_4_ +
                               fStack_60 * fVar33);
          Vector<Vector3>::push_back(local_138,local_130,(String *)&local_248);
          local_120 = fVar28 * local_4c + fVar32 * local_50 + fVar43 * local_48;
          local_128 = CONCAT44(fStack_5c * fVar32 + local_58 * fVar28 + fStack_54 * fVar43,
                               (float)local_68 * fVar32 + local_68._4_4_ * fVar28 +
                               fStack_60 * fVar43);
          Vector<Vector3>::push_back(local_128,local_120,(String *)&local_248);
          local_110 = fVar28 * local_4c + fVar26 * local_50 + fVar41 * local_48;
          local_118 = CONCAT44(fStack_54 * fVar41 + local_58 * fVar28 + fStack_5c * fVar26,
                               fStack_60 * fVar41 +
                               local_68._4_4_ * fVar28 + (float)local_68 * fVar26);
          Vector<Vector3>::push_back(local_118,local_110,(String *)&local_248);
          local_100 = fVar29 * local_48 + fVar35 * local_4c + fVar21 * local_50;
          local_108 = CONCAT44(fStack_54 * fVar29 + local_58 * fVar35 + fStack_5c * fVar21,
                               fStack_60 * fVar29 +
                               local_68._4_4_ * fVar35 + (float)local_68 * fVar21);
          Vector<Vector3>::push_back(local_108,local_100,(String *)&local_248);
          local_f0 = fVar24 * local_48 + fVar35 * local_4c + fVar25 * local_50;
          local_f8 = CONCAT44(fStack_54 * fVar24 + local_58 * fVar35 + fStack_5c * fVar25,
                              fStack_60 * fVar24 +
                              local_68._4_4_ * fVar35 + (float)local_68 * fVar25);
          Vector<Vector3>::push_back(local_f8,local_f0,(String *)&local_248);
          local_e0 = fVar37 * local_50 + fVar28 * local_4c + fVar30 * local_48;
          local_e8 = CONCAT44(local_58 * fVar28 + fStack_5c * fVar37 + fStack_54 * fVar30,
                              local_68._4_4_ * fVar28 + (float)local_68 * fVar37 +
                              fStack_60 * fVar30);
          Vector<Vector3>::push_back((String *)&local_248);
          local_d0 = fVar22 * local_50 + fVar28 * local_4c + fVar20 * local_48;
          local_d8 = CONCAT44(local_58 * fVar28 + fStack_5c * fVar22 + fStack_54 * fVar20,
                              local_68._4_4_ * fVar28 + (float)local_68 * fVar22 +
                              fStack_60 * fVar20);
          Vector<Vector3>::push_back(local_d8,local_d0,(String *)&local_248);
          if (iVar10 == 0x16e) break;
          fVar29 = (float)iVar10;
          iVar10 = iVar10 + 3;
          sincosf(fVar29 * __LC35,local_27c,&local_280);
          fVar37 = local_280;
          fVar20 = local_27c[0];
          fVar29 = fVar27;
          fVar21 = fVar36;
        }
        iVar10 = 0x5a;
        fVar29 = 0.0;
        while( true ) {
          fVar20 = fVar17 * fVar19;
          fVar36 = fVar17 * fVar29;
          fVar21 = local_2a4 * fVar29;
          fVar38 = local_2a4 * fVar19;
          fVar37 = fVar18 * fVar19;
          fVar27 = fVar18 * fVar29;
          fVar19 = fVar19 * fVar16;
          fVar29 = fVar29 * fVar16;
          local_c0 = local_48 * fVar38 + fVar35 * local_4c + local_50 * fVar21;
          local_c8 = CONCAT44(fStack_54 * fVar38 + fVar21 * fStack_5c + fVar35 * local_58,
                              fStack_60 * fVar38 +
                              fVar21 * (float)local_68 + fVar35 * local_68._4_4_);
          Vector<Vector3>::push_back(local_c8,local_c0,(String *)&local_248);
          local_b8._8_4_ = fVar36 * local_50 + fVar28 * local_4c + fVar20 * local_48;
          local_b8._0_8_ =
               CONCAT44(fStack_54 * fVar20 + fStack_5c * fVar36 + fVar28 * local_58,
                        fStack_60 * fVar20 + (float)local_68 * fVar36 + fVar28 * local_68._4_4_);
          Vector<Vector3>::push_back(local_b8._0_8_,local_b8._8_4_,(String *)&local_248);
          local_a8._8_4_ = fVar29 * local_50 + fVar35 * local_4c + fVar19 * local_48;
          local_a8._0_8_ =
               CONCAT44(local_58 * fVar35 + fStack_5c * fVar29 + fStack_54 * fVar19,
                        local_68._4_4_ * fVar35 + (float)local_68 * fVar29 + fStack_60 * fVar19);
          Vector<Vector3>::push_back(local_a8._0_8_,local_a8._8_4_,(String *)&local_248);
          local_90 = fVar27 * local_50 + fVar28 * local_4c + fVar37 * local_48;
          local_98 = (undefined1  [8])
                     CONCAT44(local_58 * fVar28 + fStack_5c * fVar27 + fStack_54 * fVar37,
                              local_68._4_4_ * fVar28 + (float)local_68 * fVar27 +
                              fStack_60 * fVar37);
          Vector<Vector3>::push_back((String *)&local_248);
          if (iVar10 == 0x1c2) break;
          fVar19 = (float)iVar10;
          iVar10 = iVar10 + 0x5a;
          sincosf(fVar19 * __LC35,local_27c,&local_280);
          fVar19 = local_280;
          fVar29 = local_27c[0];
        }
        if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
          local_78._4_4_ = _LC7;
          local_78._0_4_ = _LC7;
          fStack_70 = _LC7;
          fStack_6c = _LC7;
          EditorNode3DGizmo::add_lines
                    ((Vector *)param_1,(Ref *)&local_248,SUB81(&local_268,0),(Color *)0x0);
        }
        goto LAB_00101313;
      }
      if (pOVar12 != (Object *)0x0) {
        cVar9 = RefCounted::unreference();
        if (cVar9 != '\0') {
          cVar9 = predelete_handler(pOVar12);
          if (cVar9 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
      }
      if (local_268 != (Object *)0x0) {
        cVar9 = RefCounted::unreference();
        pOVar12 = local_268;
        if (cVar9 != '\0') {
          cVar9 = predelete_handler(local_268);
          if (cVar9 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
      }
    }
    else {
      GPUParticles3D::get_process_material();
      local_270 = (Object *)0x0;
      if (local_248 == (Object *)0x0) goto LAB_00100f68;
      local_290 = (Object *)
                  __dynamic_cast(local_248,&Object::typeinfo,&ParticleProcessMaterial::typeinfo,0);
      if (local_290 == (Object *)0x0) {
LAB_001009db:
        cVar9 = RefCounted::unreference();
        local_290 = local_270;
        pOVar12 = local_248;
joined_r0x001009e5:
        local_270 = local_290;
        local_248 = pOVar12;
        if (cVar9 != '\0') {
          cVar9 = predelete_handler(pOVar12);
          local_290 = local_270;
          if (cVar9 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
        if (local_290 == (Object *)0x0) goto LAB_00100f68;
      }
      else {
        cVar9 = RefCounted::reference();
        if (cVar9 == '\0') {
          local_270 = (Object *)0x0;
          if (local_248 == (Object *)0x0) goto LAB_00100f68;
          goto LAB_001009db;
        }
        local_270 = local_290;
        if (local_248 != (Object *)0x0) {
          cVar9 = RefCounted::unreference();
          local_290 = local_270;
          pOVar12 = local_248;
          goto joined_r0x001009e5;
        }
      }
      iVar10 = ParticleProcessMaterial::get_emission_shape();
      local_250 = (Object *)param_1;
      cVar9 = RefCounted::init_ref();
      if (cVar9 == '\0') {
        local_250 = (Object *)0x0;
      }
      local_258 = 0;
      String::parse_latin1((String *)&local_258,"particles_emission_shape_material");
      EditorNode3DGizmoPlugin::get_material((String *)&local_248,(Ref *)this);
      local_268 = (Object *)0x0;
      if (local_248 != (Object *)0x0) {
        pOVar12 = (Object *)__dynamic_cast(local_248,&Object::typeinfo,&Material::typeinfo,0);
        if (pOVar12 != (Object *)0x0) {
          local_268 = pOVar12;
          cVar9 = RefCounted::reference();
          if (cVar9 == '\0') {
            local_268 = (Object *)0x0;
          }
          if (local_248 == (Object *)0x0) goto LAB_00100b18;
        }
        cVar9 = RefCounted::unreference();
        pOVar12 = local_248;
        if ((cVar9 != '\0') && (cVar9 = predelete_handler(local_248), cVar9 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))();
          Memory::free_static(pOVar12,false);
        }
      }
LAB_00100b18:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
      if (((local_250 != (Object *)0x0) &&
          (cVar9 = RefCounted::unreference(), pOVar12 = local_250, cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_250), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))();
        Memory::free_static(pOVar12,false);
      }
      local_250 = (Object *)0x0;
      local_258 = 0;
      String::parse_latin1((String *)&local_258,"handles");
      EditorNode3DGizmoPlugin::get_material((String *)&local_248,(Ref *)this);
      local_260 = (Object *)0x0;
      if (local_248 == (Object *)0x0) {
        pOVar12 = (Object *)0x0;
      }
      else {
        pOVar12 = (Object *)__dynamic_cast(local_248,&Object::typeinfo,&Material::typeinfo);
        if (pOVar12 != (Object *)0x0) {
          cVar9 = RefCounted::reference();
          if (cVar9 == '\0') {
            pOVar12 = (Object *)0x0;
          }
          local_260 = pOVar12;
          if (local_248 == (Object *)0x0) goto LAB_00100c22;
        }
        cVar9 = RefCounted::unreference();
        pOVar12 = local_260;
        if ((cVar9 != '\0') &&
           (cVar9 = predelete_handler(local_248), pOVar12 = local_260, cVar9 != '\0')) {
          (**(code **)(*(long *)local_248 + 0x140))(local_248);
          Memory::free_static(local_248,false);
        }
      }
LAB_00100c22:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_258);
      if (((local_250 != (Object *)0x0) &&
          (cVar9 = RefCounted::unreference(), pOVar1 = local_250, cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_250), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
      if (iVar10 - 1U < 2) {
        _local_88 = ParticleProcessMaterial::get_emission_shape_offset();
        _local_78 = ParticleProcessMaterial::get_emission_shape_scale();
        iVar10 = 6;
        fVar35 = (float)ParticleProcessMaterial::get_emission_sphere_radius();
        fVar18 = fStack_70;
        fVar17 = local_80;
        local_240 = 0;
        uVar5 = local_88._4_4_;
        local_360 = (float)_LC30;
        uVar7 = local_78._0_4_;
        uVar3 = local_88._0_4_;
        uVar8 = local_78._4_4_;
        local_368 = _LC30._4_4_;
        fVar16 = _LC7;
        fVar19 = 0.0;
        while( true ) {
          fVar37 = local_360;
          fVar29 = local_368;
          fVar27 = fVar18 * fVar16 * fVar35 + fVar17;
          fVar21 = (float)uVar3 + (float)uVar7 * fVar19 * fVar35;
          local_68 = CONCAT44(uVar5,fVar21);
          fStack_60 = fVar27;
          Vector<Vector3>::push_back(local_68,fVar27,(String *)&local_248);
          fVar28 = fVar18 * local_368 * fVar35 + fVar17;
          fVar20 = (float)uVar3 + (float)uVar7 * fVar35 * local_360;
          local_68 = CONCAT44(uVar5,fVar20);
          fStack_60 = fVar28;
          Vector<Vector3>::push_back(local_68,fVar28,(String *)&local_248);
          local_68 = CONCAT44(fVar19 * fVar35 * (float)uVar8 + (float)uVar5,uVar3);
          fStack_60 = fVar27;
          Vector<Vector3>::push_back(local_68,fVar27,(String *)&local_248);
          local_68 = CONCAT44(fVar35 * local_360 * (float)uVar8 + (float)uVar5,uVar3);
          fStack_60 = fVar28;
          Vector<Vector3>::push_back(local_68,fVar28,(String *)&local_248);
          fStack_60 = fVar17;
          local_68 = CONCAT44(fVar16 * fVar35 * (float)uVar8 + (float)uVar5,fVar21);
          Vector<Vector3>::push_back(local_68,fVar17,(String *)&local_248);
          local_68 = CONCAT44(local_368 * fVar35 * (float)uVar8 + (float)uVar5,fVar20);
          fStack_60 = fVar17;
          Vector<Vector3>::push_back(local_68,fVar17,(String *)&local_248);
          if (iVar10 == 0x16e) break;
          fVar16 = (float)iVar10;
          iVar10 = iVar10 + 3;
          sincosf(fVar16 * __LC35,local_27c,&local_280);
          local_360 = local_27c[0];
          local_368 = local_280;
          fVar16 = fVar29;
          fVar19 = fVar37;
        }
        if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
          local_68 = CONCAT44(_LC7,_LC7);
          fStack_60 = _LC7;
          fStack_5c = _LC7;
          EditorNode3DGizmo::add_lines
                    ((Vector *)param_1,(Ref *)&local_248,SUB81(&local_268,0),(Color *)0x0);
        }
LAB_001016b9:
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_240);
      }
      else if (iVar10 == 3) {
        uVar15 = 0;
        local_b8._0_12_ = ParticleProcessMaterial::get_emission_shape_offset();
        local_a8._0_12_ = ParticleProcessMaterial::get_emission_shape_scale();
        _local_98 = ParticleProcessMaterial::get_emission_box_extents();
        local_250 = (Object *)0x0;
        Ref<BoxMesh>::instantiate<>((Ref<BoxMesh> *)&local_250);
        (**(code **)(*(long *)local_250 + 0x230))(&local_68);
        auVar6 = _local_98;
        auVar4 = local_a8._0_12_;
        auVar2 = local_b8._0_12_;
        fVar16 = local_90;
        uVar5 = local_a8._8_4_;
        uVar3 = local_b8._8_4_;
        local_240 = 0;
        do {
          pVVar14 = (Vector3 *)(ulong)uVar15;
          local_88 = (undefined1  [8])0x0;
          uVar15 = uVar15 + 1;
          local_80 = 0.0;
          local_78 = (undefined1  [8])0x0;
          fStack_70 = 0.0;
          AABB::get_edge((int)&local_68,pVVar14,local_88);
          local_230 = (float)uVar5 * (local_80 + local_80) * fVar16 + (float)uVar3;
          fVar29 = auVar4._0_4_;
          fVar37 = auVar4._4_4_;
          fVar19 = auVar6._0_4_;
          fVar35 = auVar6._4_4_;
          fVar17 = auVar2._0_4_;
          fVar18 = auVar2._4_4_;
          local_238 = CONCAT44((local_88._4_4_ + local_88._4_4_) * fVar37 * fVar35 + fVar18,
                               (local_88._0_4_ + local_88._0_4_) * fVar29 * fVar19 + fVar17);
          Vector<Vector3>::push_back((String *)&local_248);
          local_220 = (float)uVar5 * (fStack_70 + fStack_70) * fVar16 + (float)uVar3;
          local_228 = CONCAT44((local_78._4_4_ + local_78._4_4_) * fVar37 * fVar35 + fVar18,
                               (local_78._0_4_ + local_78._0_4_) * fVar29 * fVar19 + fVar17);
          Vector<Vector3>::push_back((String *)&local_248);
        } while (uVar15 != 0xc);
        if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
          local_78._4_4_ = _LC7;
          local_78._0_4_ = _LC7;
          fStack_70 = _LC7;
          fStack_6c = _LC7;
          EditorNode3DGizmo::add_lines
                    ((Vector *)param_1,(Ref *)&local_248,SUB81(&local_268,0),(Color *)0x0);
        }
        CowData<Vector3>::_unref((CowData<Vector3> *)&local_240);
        Ref<BoxMesh>::unref((Ref<BoxMesh> *)&local_250);
      }
      else if (iVar10 == 6) {
        local_a8._0_12_ = ParticleProcessMaterial::get_emission_shape_offset();
        _local_98 = ParticleProcessMaterial::get_emission_shape_scale();
        fVar16 = (float)ParticleProcessMaterial::get_emission_ring_height();
        fVar35 = fVar16 * __LC37;
        fVar17 = (float)ParticleProcessMaterial::get_emission_ring_radius();
        fVar18 = (float)ParticleProcessMaterial::get_emission_ring_inner_radius();
        _local_88 = ParticleProcessMaterial::get_emission_ring_axis();
        fVar19 = (float)ParticleProcessMaterial::get_emission_ring_cone_angle();
        dVar23 = tan((_LC38 - (double)fVar19) * __LC39);
        uVar15 = _LC41;
        dVar23 = (double)fVar17 - (double)fVar16 * dVar23;
        if (dVar23 <= 0.0) {
          local_294 = 0.0;
        }
        else {
          local_294 = (float)dVar23;
        }
        fVar16 = (fVar18 / fVar17) * local_294;
        local_240 = 0;
        fStack_5c = (float)local_88._0_4_ * (float)local_88._0_4_ +
                    (float)local_88._4_4_ * (float)local_88._4_4_ + local_80 * local_80;
        if (fStack_5c == 0.0) {
          fStack_54 = 0.0;
          local_58 = 0.0;
          fStack_5c = 0.0;
LAB_00101e69:
          fStack_60 = 0.0;
          fVar29 = 0.0;
          fVar19 = 0.0;
        }
        else {
          fStack_5c = SQRT(fStack_5c);
          local_58 = (float)local_88._4_4_ / fStack_5c;
          fStack_54 = local_80 / fStack_5c;
          fStack_5c = (float)local_88._0_4_ / fStack_5c;
          fVar19 = local_58 * local_58 + fStack_54 * fStack_54 + fStack_5c * fStack_5c;
          if (fVar19 == 0.0) goto LAB_00101e69;
          fVar19 = SQRT(fVar19);
          fVar29 = (float)((uint)fStack_54 ^ _LC41) / fVar19;
          fStack_60 = (float)((uint)fStack_5c ^ _LC41) / fVar19;
          fVar37 = (local_58 / fVar19) * fStack_5c + fVar29 * local_58 + fStack_60 * fStack_54;
          fVar29 = fVar29 - local_58 * fVar37;
          fVar19 = local_58 / fVar19 - fStack_5c * fVar37;
          fStack_60 = fStack_60 - fVar37 * fStack_54;
          fVar37 = fVar19 * fVar19 + fVar29 * fVar29 + fStack_60 * fStack_60;
          if (fVar37 == 0.0) goto LAB_00101e69;
          fVar37 = SQRT(fVar37);
          fVar19 = fVar19 / fVar37;
          fVar29 = fVar29 / fVar37;
          fStack_60 = fStack_60 / fVar37;
        }
        local_68 = CONCAT44(fVar29,fVar19);
        local_4c = fStack_5c * fStack_60 - fVar19 * fStack_54;
        local_50 = fVar29 * fStack_54 - fStack_60 * local_58;
        local_48 = fVar19 * local_58 - fVar29 * fStack_5c;
        fVar19 = local_50 * local_50 + local_4c * local_4c + local_48 * local_48;
        if (fVar19 == 0.0) {
          local_48 = 0.0;
          local_4c = 0.0;
          local_50 = 0.0;
        }
        else {
          fVar19 = SQRT(fVar19);
          local_50 = local_50 / fVar19;
          local_4c = local_4c / fVar19;
          local_48 = local_48 / fVar19;
        }
        Basis::invert();
        auVar4 = _local_98;
        auVar2 = local_a8._0_12_;
        fVar19 = _LC7;
        fVar37 = local_90;
        uVar3 = local_a8._8_4_;
        fVar27 = (float)(uVar15 ^ (uint)fVar35);
        iVar10 = 6;
        fVar20 = _LC30._4_4_;
        fVar21 = (float)_LC30;
        fVar29 = _LC7;
        fVar28 = 0.0;
        while( true ) {
          fVar38 = fVar21;
          fVar36 = fVar20;
          fVar45 = fVar17 * fVar28;
          fVar44 = fVar17 * fVar29;
          fVar42 = fVar17 * fVar36;
          fVar32 = fVar17 * fVar38;
          fVar26 = local_294 * fVar29;
          fVar24 = local_294 * fVar38;
          fVar20 = local_294 * fVar36;
          fVar33 = local_294 * fVar28;
          fVar21 = fVar18 * fVar28;
          fVar39 = fVar18 * fVar29;
          fVar25 = fVar18 * fVar38;
          fVar22 = fVar18 * fVar36;
          fVar29 = fVar29 * fVar16;
          fVar28 = fVar28 * fVar16;
          fVar30 = fVar16 * fVar38;
          fVar40 = fVar16 * fVar36;
          local_210 = (fVar35 * local_4c + local_50 * fVar33 + local_48 * fVar26) * fVar37 +
                      (float)uVar3;
          fVar41 = auVar4._0_4_;
          fVar43 = auVar4._4_4_;
          fVar31 = auVar2._0_4_;
          fVar34 = auVar2._4_4_;
          local_218 = CONCAT44((fStack_54 * fVar26 + fStack_5c * fVar33 + local_58 * fVar35) *
                               fVar43 + fVar34,
                               (fStack_60 * fVar26 +
                               (float)local_68 * fVar33 + local_68._4_4_ * fVar35) * fVar41 + fVar31
                              );
          Vector<Vector3>::push_back(local_218,local_210,(String *)&local_248);
          local_200 = (fVar35 * local_4c + fVar24 * local_50 + fVar20 * local_48) * fVar37 +
                      (float)uVar3;
          local_208 = CONCAT44((fStack_54 * fVar20 + local_58 * fVar35 + fStack_5c * fVar24) *
                               fVar43 + fVar34,
                               (fStack_60 * fVar20 +
                               local_68._4_4_ * fVar35 + (float)local_68 * fVar24) * fVar41 + fVar31
                              );
          Vector<Vector3>::push_back(local_208,local_200,(String *)&local_248);
          local_1f0 = (fVar27 * local_4c + fVar45 * local_50 + fVar44 * local_48) * fVar37 +
                      (float)uVar3;
          local_1f8 = CONCAT44((fStack_5c * fVar45 + local_58 * fVar27 + fStack_54 * fVar44) *
                               fVar43 + fVar34,
                               ((float)local_68 * fVar45 + local_68._4_4_ * fVar27 +
                               fStack_60 * fVar44) * fVar41 + fVar31);
          Vector<Vector3>::push_back(local_1f8,local_1f0,(String *)&local_248);
          local_1e0 = (fVar27 * local_4c + fVar32 * local_50 + fVar42 * local_48) * fVar37 +
                      (float)uVar3;
          local_1e8 = CONCAT44((fStack_54 * fVar42 + local_58 * fVar27 + fStack_5c * fVar32) *
                               fVar43 + fVar34,
                               (fStack_60 * fVar42 +
                               local_68._4_4_ * fVar27 + (float)local_68 * fVar32) * fVar41 + fVar31
                              );
          Vector<Vector3>::push_back(local_1e8,local_1e0,(String *)&local_248);
          local_1d0 = (fVar35 * local_4c + fVar28 * local_50 + fVar29 * local_48) * fVar37 +
                      (float)uVar3;
          local_1d8 = CONCAT44((fStack_54 * fVar29 + local_58 * fVar35 + fStack_5c * fVar28) *
                               fVar43 + fVar34,
                               (fStack_60 * fVar29 +
                               local_68._4_4_ * fVar35 + (float)local_68 * fVar28) * fVar41 + fVar31
                              );
          Vector<Vector3>::push_back(local_1d8,local_1d0,(String *)&local_248);
          local_1c0 = (fVar35 * local_4c + fVar30 * local_50 + fVar40 * local_48) * fVar37 +
                      (float)uVar3;
          local_1c8 = CONCAT44((fStack_54 * fVar40 + fStack_5c * fVar30 + local_58 * fVar35) *
                               fVar43 + fVar34,
                               (fStack_60 * fVar40 +
                               (float)local_68 * fVar30 + local_68._4_4_ * fVar35) * fVar41 + fVar31
                              );
          Vector<Vector3>::push_back(local_1c8,local_1c0,(String *)&local_248);
          local_1b0 = (fVar21 * local_50 + fVar27 * local_4c + fVar39 * local_48) * fVar37 +
                      (float)uVar3;
          local_1b8 = CONCAT44((fStack_54 * fVar39 + fStack_5c * fVar21 + local_58 * fVar27) *
                               fVar43 + fVar34,
                               (fStack_60 * fVar39 +
                               (float)local_68 * fVar21 + local_68._4_4_ * fVar27) * fVar41 + fVar31
                              );
          Vector<Vector3>::push_back(local_1b8,local_1b0,(String *)&local_248);
          local_1a0 = (fVar25 * local_50 + fVar27 * local_4c + fVar22 * local_48) * fVar37 +
                      (float)uVar3;
          local_1a8 = CONCAT44((fStack_54 * fVar22 + fStack_5c * fVar25 + fVar27 * local_58) *
                               fVar43 + fVar34,
                               (fStack_60 * fVar22 +
                               (float)local_68 * fVar25 + fVar27 * local_68._4_4_) * fVar41 + fVar31
                              );
          Vector<Vector3>::push_back(local_1a8,local_1a0,(String *)&local_248);
          if (iVar10 == 0x16e) break;
          fVar29 = (float)iVar10;
          iVar10 = iVar10 + 3;
          sincosf(fVar29 * __LC35,local_27c,&local_280);
          fVar20 = local_280;
          fVar21 = local_27c[0];
          fVar29 = fVar36;
          fVar28 = fVar38;
        }
        iVar10 = 0x5a;
        fVar29 = 0.0;
        while( true ) {
          fVar21 = fVar17 * fVar29;
          fVar22 = fVar17 * fVar19;
          fVar28 = local_294 * fVar29;
          fVar20 = local_294 * fVar19;
          fVar38 = fVar18 * fVar29;
          fVar29 = fVar29 * fVar16;
          fVar36 = fVar18 * fVar19;
          fVar19 = fVar19 * fVar16;
          local_190 = (fVar35 * local_4c + local_50 * fVar28 + local_48 * fVar20) * fVar37 +
                      (float)uVar3;
          local_198 = CONCAT44((fStack_54 * fVar20 + fStack_5c * fVar28 + local_58 * fVar35) *
                               fVar43 + fVar34,
                               (fStack_60 * fVar20 +
                               (float)local_68 * fVar28 + local_68._4_4_ * fVar35) * fVar41 + fVar31
                              );
          Vector<Vector3>::push_back(local_198,local_190,(String *)&local_248);
          local_180 = (fVar21 * local_50 + fVar27 * local_4c + fVar22 * local_48) * fVar37 +
                      (float)uVar3;
          local_188 = CONCAT44((fStack_5c * fVar21 + local_58 * fVar27 + fStack_54 * fVar22) *
                               fVar43 + fVar34,
                               ((float)local_68 * fVar21 + local_68._4_4_ * fVar27 +
                               fStack_60 * fVar22) * fVar41 + fVar31);
          Vector<Vector3>::push_back((String *)&local_248);
          local_170 = (fVar29 * local_50 + fVar35 * local_4c + fVar19 * local_48) * fVar37 +
                      (float)uVar3;
          local_178 = CONCAT44((fStack_5c * fVar29 + local_58 * fVar35 + fStack_54 * fVar19) *
                               fVar43 + fVar34,
                               ((float)local_68 * fVar29 + local_68._4_4_ * fVar35 +
                               fStack_60 * fVar19) * fVar41 + fVar31);
          Vector<Vector3>::push_back(local_178,local_170,(String *)&local_248);
          local_160 = (fVar38 * local_50 + fVar27 * local_4c + fVar36 * local_48) * fVar37 +
                      (float)uVar3;
          local_168 = CONCAT44((fStack_5c * fVar38 + local_58 * fVar27 + fStack_54 * fVar36) *
                               fVar43 + fVar34,
                               ((float)local_68 * fVar38 + local_68._4_4_ * fVar27 +
                               fStack_60 * fVar36) * fVar41 + fVar31);
          Vector<Vector3>::push_back((String *)&local_248);
          if (iVar10 == 0x1c2) break;
          fVar19 = (float)iVar10;
          iVar10 = iVar10 + 0x5a;
          sincosf(fVar19 * __LC35,local_27c,&local_280);
          fVar19 = local_280;
          fVar29 = local_27c[0];
        }
        if (param_1[0x17c] != (EditorNode3DGizmo)0x0) {
          local_78._4_4_ = _LC7;
          local_78._0_4_ = _LC7;
          fStack_70 = _LC7;
          fStack_6c = _LC7;
          EditorNode3DGizmo::add_lines
                    ((Vector *)param_1,(Ref *)&local_248,SUB81(&local_268,0),(Color *)0x0);
        }
        goto LAB_001016b9;
      }
      if (pOVar12 != (Object *)0x0) {
        cVar9 = RefCounted::unreference();
        if (cVar9 != '\0') {
          cVar9 = predelete_handler(pOVar12);
          if (cVar9 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
      }
      if (local_268 != (Object *)0x0) {
        cVar9 = RefCounted::unreference();
        pOVar12 = local_268;
        if (cVar9 != '\0') {
          cVar9 = predelete_handler(local_268);
          if (cVar9 != '\0') {
            (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
            Memory::free_static(pOVar12,false);
          }
        }
      }
      cVar9 = RefCounted::unreference();
      if (cVar9 != '\0') {
        cVar9 = predelete_handler(local_290);
        if (cVar9 != '\0') {
          (**(code **)(*(long *)local_290 + 0x140))(local_290);
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(local_290,false);
            return;
          }
          goto LAB_001040f1;
        }
      }
    }
  }
LAB_00100f68:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001040f1:
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
  return (uint)CONCAT71(0x1077,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1077,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Gizmo3DHelper::is_class_ptr(void*) const */

uint __thiscall Gizmo3DHelper::is_class_ptr(Gizmo3DHelper *this,void *param_1)

{
  return (uint)CONCAT71(0x1077,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1077,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1077,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Gizmo3DHelper::_getv(StringName const&, Variant&) const */

undefined8 Gizmo3DHelper::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Gizmo3DHelper::_setv(StringName const&, Variant const&) */

undefined8 Gizmo3DHelper::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Gizmo3DHelper::_validate_propertyv(PropertyInfo&) const */

void Gizmo3DHelper::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Gizmo3DHelper::_property_can_revertv(StringName const&) const */

undefined8 Gizmo3DHelper::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Gizmo3DHelper::_property_get_revertv(StringName const&, Variant&) const */

undefined8 Gizmo3DHelper::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Gizmo3DHelper::_notificationv(int, bool) */

void Gizmo3DHelper::_notificationv(int param_1,bool param_2)

{
  return;
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



/* Particles3DEmissionShapeGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
Particles3DEmissionShapeGizmoPlugin::is_class_ptr
          (Particles3DEmissionShapeGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1077,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1077,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1077,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1077,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1077,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* Particles3DEmissionShapeGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 Particles3DEmissionShapeGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Particles3DEmissionShapeGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 Particles3DEmissionShapeGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Particles3DEmissionShapeGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void Particles3DEmissionShapeGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* Particles3DEmissionShapeGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 Particles3DEmissionShapeGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* Particles3DEmissionShapeGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
Particles3DEmissionShapeGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Particles3DEmissionShapeGizmoPlugin::_notificationv(int, bool) */

void Particles3DEmissionShapeGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001071d0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001071d0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107330;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_001071d0;
  Object::~Object((Object *)this);
  return;
}



/* Particles3DEmissionShapeGizmoPlugin::_get_class_namev() const */

undefined8 * Particles3DEmissionShapeGizmoPlugin::_get_class_namev(void)

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
LAB_00104473:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104473;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "Particles3DEmissionShapeGizmoPlugin");
      goto LAB_001044de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "Particles3DEmissionShapeGizmoPlugin");
LAB_001044de:
  return &_get_class_namev()::_class_name_static;
}



/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00107330;
  if (Variant::needs_deinit[*(int *)(this + 0x180)] != '\0') {
    Variant::_clear_internal();
  }
  *(undefined ***)this = &PTR__initialize_classv_001071d0;
  Object::~Object((Object *)this);
  operator_delete(this,0x1c8);
  return;
}



/* Particles3DEmissionShapeGizmoPlugin::~Particles3DEmissionShapeGizmoPlugin() */

void __thiscall
Particles3DEmissionShapeGizmoPlugin::~Particles3DEmissionShapeGizmoPlugin
          (Particles3DEmissionShapeGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00107490;
  if (*(long *)(this + 0x450) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x450);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
        return;
      }
    }
  }
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* Particles3DEmissionShapeGizmoPlugin::~Particles3DEmissionShapeGizmoPlugin() */

void __thiscall
Particles3DEmissionShapeGizmoPlugin::~Particles3DEmissionShapeGizmoPlugin
          (Particles3DEmissionShapeGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00107490;
  if (*(long *)(this + 0x450) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x450);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x458);
  return;
}



/* Gizmo3DHelper::_get_class_namev() const */

undefined8 * Gizmo3DHelper::_get_class_namev(void)

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
LAB_001046c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001046c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"Gizmo3DHelper");
      goto LAB_0010472e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"Gizmo3DHelper");
LAB_0010472e:
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
LAB_001047a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001047a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010480e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010480e:
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



/* Gizmo3DHelper::get_class() const */

void Gizmo3DHelper::get_class(void)

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



/* Particles3DEmissionShapeGizmoPlugin::get_class() const */

void Particles3DEmissionShapeGizmoPlugin::get_class(void)

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



/* void Ref<BoxMesh>::instantiate<>() */

void __thiscall Ref<BoxMesh>::instantiate<>(Ref<BoxMesh> *this)

{
  char cVar1;
  BoxMesh *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (BoxMesh *)operator_new(0x450,"");
  BoxMesh::BoxMesh(this_00);
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
    this_00 = (BoxMesh *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (BoxMesh *)pOVar3) goto LAB_00104cc5;
    *(BoxMesh **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00104cc5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (BoxMesh *)0x0) {
    return;
  }
LAB_00104cc5:
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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00104e8f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00104e8f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00104f43;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00104f43;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00104f43:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Gizmo3DHelper::is_class(String const&) const */

undefined8 __thiscall Gizmo3DHelper::is_class(Gizmo3DHelper *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001050bf;
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
LAB_001050bf:
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
    if (cVar5 != '\0') goto LAB_00105173;
  }
  cVar5 = String::operator==(param_1,"Gizmo3DHelper");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00105173:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
            if (lVar4 == 0) goto LAB_0010524f;
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
LAB_0010524f:
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
    if (cVar5 != '\0') goto LAB_00105303;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00105303:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Particles3DEmissionShapeGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
Particles3DEmissionShapeGizmoPlugin::is_class
          (Particles3DEmissionShapeGizmoPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001053ef;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001053ef:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001054a3;
  }
  cVar6 = String::operator==(param_1,"Particles3DEmissionShapeGizmoPlugin");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001054a3;
    }
    cVar6 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Resource::is_class((Resource *)this,param_1);
        return uVar8;
      }
      goto LAB_001055b5;
    }
  }
LAB_001054a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001055b5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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



/* Particles3DEmissionShapeGizmoPlugin::_initialize_classv() */

void Particles3DEmissionShapeGizmoPlugin::_initialize_classv(void)

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
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
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
          if ((code *)PTR__bind_methods_0010a010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
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
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorNode3DGizmoPlugin";
      local_70 = 0;
      local_50 = 0x17;
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
      if ((code *)PTR__bind_methods_0010a008 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_68 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "Particles3DEmissionShapeGizmoPlugin";
    local_70 = 0;
    local_50 = 0x23;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Gizmo3DHelper::_initialize_classv() */

void Gizmo3DHelper::_initialize_classv(void)

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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
    local_48 = "Gizmo3DHelper";
    local_60 = 0;
    local_40 = 0xd;
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
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
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
        if (pvVar5 == (void *)0x0) goto LAB_00105eb5;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00105eb5:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
      goto LAB_0010606c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010606c:
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



/* Gizmo3DHelper::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Gizmo3DHelper::_get_property_listv(Gizmo3DHelper *this,List *param_1,bool param_2)

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
  local_78 = "Gizmo3DHelper";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Gizmo3DHelper";
  local_98 = 0;
  local_70 = 0xd;
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
      goto LAB_001062d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001062d1:
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
  StringName::StringName((StringName *)&local_78,"Gizmo3DHelper",false);
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



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
      goto LAB_00106581;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106581:
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



/* EditorNode3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorNode3DGizmoPlugin::_get_property_listv
          (EditorNode3DGizmoPlugin *this,List *param_1,bool param_2)

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
      goto LAB_00106831;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106831:
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



/* Particles3DEmissionShapeGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
Particles3DEmissionShapeGizmoPlugin::_get_property_listv
          (Particles3DEmissionShapeGizmoPlugin *this,List *param_1,bool param_2)

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
    EditorNode3DGizmoPlugin::_get_property_listv((EditorNode3DGizmoPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Particles3DEmissionShapeGizmoPlugin";
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Particles3DEmissionShapeGizmoPlugin";
  local_98 = 0;
  local_70 = 0x23;
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
      goto LAB_00106ae1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00106ae1:
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
  StringName::StringName((StringName *)&local_78,"Particles3DEmissionShapeGizmoPlugin",false);
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



/* Ref<BoxMesh>::unref() */

void __thiscall Ref<BoxMesh>::unref(Ref<BoxMesh> *this)

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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  
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
    lVar2 = 0;
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
    lVar2 = lVar7 * 0xc;
    if (lVar2 != 0) {
      uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      lVar2 = (uVar3 | uVar3 >> 0x20) + 1;
    }
  }
  if (param_1 * 0xc == 0) {
LAB_00107030:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar3 = param_1 * 0xc - 1;
  uVar3 = uVar3 >> 1 | uVar3;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar3 = uVar3 | uVar3 >> 0x20;
  lVar6 = uVar3 + 1;
  if (lVar6 == 0) goto LAB_00107030;
  if (param_1 <= lVar7) {
    if ((lVar6 != lVar2) && (uVar5 = _realloc(this,lVar6), (int)uVar5 != 0)) {
      return uVar5;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar6 == lVar2) {
LAB_00106fbc:
    puVar8 = *(undefined8 **)this;
    if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar8[-1];
    if (param_1 <= lVar7) goto LAB_00106f5f;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar6);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00106fbc;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar3 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar8 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar8;
    lVar7 = 0;
  }
  memset((void *)((long)puVar8 + lVar7 * 0xc),0,(param_1 - lVar7) * 0xc);
LAB_00106f5f:
  puVar8[-1] = param_1;
  return 0;
}



/* Particles3DEmissionShapeGizmoPlugin::Particles3DEmissionShapeGizmoPlugin() */

void Particles3DEmissionShapeGizmoPlugin::_GLOBAL__sub_I_Particles3DEmissionShapeGizmoPlugin(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Particles3DEmissionShapeGizmoPlugin::~Particles3DEmissionShapeGizmoPlugin() */

void __thiscall
Particles3DEmissionShapeGizmoPlugin::~Particles3DEmissionShapeGizmoPlugin
          (Particles3DEmissionShapeGizmoPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Gizmo3DHelper::~Gizmo3DHelper() */

void __thiscall Gizmo3DHelper::~Gizmo3DHelper(Gizmo3DHelper *this)

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


