
/* SpringBoneCollision3DGizmoPlugin::get_priority() const */

undefined8 SpringBoneCollision3DGizmoPlugin::get_priority(void)

{
  return 0xffffffff;
}



/* LocalVector<Vector3, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */

void LocalVector<Vector3,unsigned_int,false,false>::resize(uint param_1)

{
  code *pcVar1;
  
  _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                   "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SpringBoneSimulator3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
SpringBoneSimulator3DGizmoPlugin::has_gizmo(SpringBoneSimulator3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&SpringBoneSimulator3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* SpringBoneCollision3DGizmoPlugin::has_gizmo(Node3D*) */

bool __thiscall
SpringBoneCollision3DGizmoPlugin::has_gizmo(SpringBoneCollision3DGizmoPlugin *this,Node3D *param_1)

{
  long lVar1;
  
  if (param_1 != (Node3D *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&SpringBoneCollision3D::typeinfo,0);
    return lVar1 != 0;
  }
  return false;
}



/* SpringBoneSimulator3DGizmoPlugin::~SpringBoneSimulator3DGizmoPlugin() */

void __thiscall
SpringBoneSimulator3DGizmoPlugin::~SpringBoneSimulator3DGizmoPlugin
          (SpringBoneSimulator3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001089d0;
  if (selection_materials != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = selection_materials;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(selection_materials);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  selection_materials = (Object *)0x0;
  if (DAT_00104038 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = DAT_00104038;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(DAT_00104038);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  DAT_00104038 = (Object *)0x0;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* SpringBoneCollision3DGizmoPlugin::~SpringBoneCollision3DGizmoPlugin() */

void __thiscall
SpringBoneCollision3DGizmoPlugin::~SpringBoneCollision3DGizmoPlugin
          (SpringBoneCollision3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00108c38;
  if (selection_materials != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = selection_materials;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(selection_materials);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  selection_materials = (Object *)0x0;
  if (DAT_00104028 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = DAT_00104028;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(DAT_00104028);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  DAT_00104028 = (Object *)0x0;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  return;
}



/* SpringBoneCollision3DGizmoPlugin::~SpringBoneCollision3DGizmoPlugin() */

void __thiscall
SpringBoneCollision3DGizmoPlugin::~SpringBoneCollision3DGizmoPlugin
          (SpringBoneCollision3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00108c38;
  if (selection_materials != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = selection_materials;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(selection_materials);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  selection_materials = (Object *)0x0;
  if (DAT_00104028 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = DAT_00104028;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(DAT_00104028);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  DAT_00104028 = (Object *)0x0;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
  return;
}



/* SpringBoneSimulator3DGizmoPlugin::~SpringBoneSimulator3DGizmoPlugin() */

void __thiscall
SpringBoneSimulator3DGizmoPlugin::~SpringBoneSimulator3DGizmoPlugin
          (SpringBoneSimulator3DGizmoPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001089d0;
  if (selection_materials != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = selection_materials;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(selection_materials);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  selection_materials = (Object *)0x0;
  if (DAT_00104038 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = DAT_00104038;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(DAT_00104038);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  DAT_00104038 = (Object *)0x0;
  EditorNode3DGizmoPlugin::~EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  operator_delete(this,0x450);
  return;
}



/* SpringBoneSimulator3DGizmoPlugin::get_gizmo_name() const */

SpringBoneSimulator3DGizmoPlugin * __thiscall
SpringBoneSimulator3DGizmoPlugin::get_gizmo_name(SpringBoneSimulator3DGizmoPlugin *this)

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



/* SpringBoneCollision3DGizmoPlugin::get_gizmo_name() const */

SpringBoneCollision3DGizmoPlugin * __thiscall
SpringBoneCollision3DGizmoPlugin::get_gizmo_name(SpringBoneCollision3DGizmoPlugin *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringBoneSimulator3DGizmoPlugin::draw_sphere(Ref<SurfaceTool>&, Basis const&, Vector3 const&,
   float, Color const&) */

void SpringBoneSimulator3DGizmoPlugin::draw_sphere
               (Ref *param_1,Basis *param_2,Vector3 *param_3,float param_4,Color *param_5)

{
  Basis *pBVar1;
  Basis *pBVar2;
  Vector3 *pVVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [12];
  undefined8 local_80;
  float local_78;
  undefined8 local_70;
  float local_68;
  undefined1 local_60 [12];
  undefined8 local_50;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::VECTOR3_RIGHT
       == '\0') &&
     (iVar6 = __cxa_guard_acquire(&draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                                   ::VECTOR3_RIGHT), iVar6 != 0)) {
    _VECTOR3_RIGHT = 0x3f800000;
    DAT_00104128 = 0.0;
    __cxa_guard_release(&draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                         ::VECTOR3_RIGHT);
  }
  if ((draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::VECTOR3_UP ==
       '\0') &&
     (iVar6 = __cxa_guard_acquire(&draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                                   ::VECTOR3_UP), iVar6 != 0)) {
    DAT_00104110 = 0.0;
    draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::VECTOR3_UP =
         _LC14;
    __cxa_guard_release(&draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                         ::VECTOR3_UP);
  }
  if ((draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::
       VECTOR3_FORWARD == '\0') &&
     (iVar6 = __cxa_guard_acquire(&draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                                   ::VECTOR3_FORWARD), iVar6 != 0)) {
    _VECTOR3_FORWARD = 0;
    DAT_001040f8 = 1.0;
    __cxa_guard_release(&draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                         ::VECTOR3_FORWARD);
  }
  uVar7 = 1;
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8),*(undefined8 *)param_1);
    fVar8 = (float)draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::
                   VECTOR3_UP * param_4;
    fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar12 = draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::
             VECTOR3_UP._4_4_ * param_4;
    pVVar3 = *(Vector3 **)param_1;
    fVar11 = DAT_00104110 * param_4;
    fVar9 = (float)*(undefined8 *)(param_2 + 8);
    fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    local_78 = fVar8 * *(float *)(param_2 + 0x18) + fVar12 * *(float *)(param_2 + 0x1c) +
               fVar11 * *(float *)(param_2 + 0x20);
    local_80 = CONCAT44(fVar8 * fVar10 + fVar12 * *(float *)(param_2 + 0x10) + fVar11 * fVar4,
                        fVar8 * (float)*(undefined8 *)param_2 + fVar12 * *(float *)(param_2 + 4) +
                        fVar11 * fVar9);
    fVar8 = (float)_VECTOR3_RIGHT;
    fVar11 = (float)((ulong)_VECTOR3_RIGHT >> 0x20);
    local_70 = CONCAT44(fVar4 * DAT_00104128 + fVar8 * fVar10 + fVar11 * *(float *)(param_2 + 0x10),
                        fVar9 * DAT_00104128 +
                        fVar8 * (float)*(undefined8 *)param_2 + fVar11 * *(float *)(param_2 + 4));
    local_68 = fVar11 * *(float *)(param_2 + 0x1c) + fVar8 * *(float *)(param_2 + 0x18) +
               DAT_00104128 * *(float *)(param_2 + 0x20);
    auVar13 = Vector3::rotated((Vector3 *)&local_80,(float)(int)(uVar7 - 1) * __LC16);
    local_48 = *(float *)(param_3 + 8) + auVar13._8_4_;
    local_50 = CONCAT44(auVar13._4_4_ + (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                        auVar13._0_4_ + (float)*(undefined8 *)param_3);
    local_60 = auVar13;
    SurfaceTool::add_vertex(pVVar3);
    SurfaceTool::set_color
              (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8),*(undefined8 *)param_1);
    pVVar3 = *(Vector3 **)param_1;
    fVar11 = DAT_00104110 * param_4;
    fVar12 = draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::
             VECTOR3_UP._4_4_ * param_4;
    fVar10 = (float)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20);
    fVar8 = param_4 * (float)draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                             ::VECTOR3_UP;
    uVar5 = uVar7 & 0xf;
    uVar7 = uVar7 + 1;
    fVar9 = (float)*(undefined8 *)(param_2 + 8);
    fVar4 = (float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20);
    local_78 = fVar8 * *(float *)(param_2 + 0x18) + fVar12 * *(float *)(param_2 + 0x1c) +
               fVar11 * *(float *)(param_2 + 0x20);
    local_80 = CONCAT44(fVar8 * fVar10 + fVar12 * *(float *)(param_2 + 0x10) + fVar11 * fVar4,
                        fVar8 * (float)*(undefined8 *)param_2 + fVar12 * *(float *)(param_2 + 4) +
                        fVar11 * fVar9);
    fVar8 = (float)_VECTOR3_RIGHT;
    fVar11 = (float)((ulong)_VECTOR3_RIGHT >> 0x20);
    local_70 = CONCAT44(fVar4 * DAT_00104128 + fVar8 * fVar10 + fVar11 * *(float *)(param_2 + 0x10),
                        fVar9 * DAT_00104128 +
                        fVar8 * (float)*(undefined8 *)param_2 + fVar11 * *(float *)(param_2 + 4));
    local_68 = fVar11 * *(float *)(param_2 + 0x1c) + fVar8 * *(float *)(param_2 + 0x18) +
               DAT_00104128 * *(float *)(param_2 + 0x20);
    auVar13 = Vector3::rotated((Vector3 *)&local_80,(float)uVar5 * __LC16);
    local_50 = CONCAT44(auVar13._4_4_ + (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                        auVar13._0_4_ + (float)*(undefined8 *)param_3);
    local_48 = auVar13._8_4_ + *(float *)(param_3 + 8);
    local_60 = auVar13;
    SurfaceTool::add_vertex(pVVar3);
  } while (uVar7 != 0x11);
  uVar7 = 1;
  pBVar2 = param_2 + 8;
  pBVar1 = param_2 + 0x10;
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8),*(undefined8 *)param_1);
    pVVar3 = *(Vector3 **)param_1;
    fVar10 = (float)((ulong)*(undefined8 *)pBVar2 >> 0x20);
    fVar12 = DAT_00104124 * param_4;
    fVar8 = draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::
            VECTOR3_RIGHT * param_4;
    fVar9 = (float)*(undefined8 *)pBVar2;
    fVar4 = (float)((ulong)*(undefined8 *)pBVar1 >> 0x20);
    fVar11 = DAT_00104128 * param_4;
    local_78 = fVar8 * *(float *)(param_2 + 0x18) + fVar12 * *(float *)(param_2 + 0x1c) +
               fVar11 * *(float *)(param_2 + 0x20);
    local_80 = CONCAT44(fVar8 * fVar10 + fVar12 * *(float *)(param_2 + 0x10) + fVar11 * fVar4,
                        fVar8 * (float)*(undefined8 *)param_2 + fVar12 * *(float *)(param_2 + 4) +
                        fVar11 * fVar9);
    fVar8 = (float)_VECTOR3_FORWARD;
    fVar11 = (float)((ulong)_VECTOR3_FORWARD >> 0x20);
    local_70 = CONCAT44(fVar4 * DAT_001040f8 + fVar8 * fVar10 + fVar11 * *(float *)(param_2 + 0x10),
                        fVar9 * DAT_001040f8 +
                        fVar8 * (float)*(undefined8 *)param_2 + fVar11 * *(float *)(param_2 + 4));
    local_68 = fVar11 * *(float *)(param_2 + 0x1c) + fVar8 * *(float *)(param_2 + 0x18) +
               DAT_001040f8 * *(float *)(param_2 + 0x20);
    auVar13 = Vector3::rotated((Vector3 *)&local_80,(float)(int)(uVar7 - 1) * __LC16);
    local_48 = *(float *)(param_3 + 8) + auVar13._8_4_;
    local_50 = CONCAT44(auVar13._4_4_ + (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                        auVar13._0_4_ + (float)*(undefined8 *)param_3);
    local_60 = auVar13;
    SurfaceTool::add_vertex(pVVar3);
    SurfaceTool::set_color
              (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8),*(undefined8 *)param_1);
    fVar11 = DAT_00104128 * param_4;
    fVar12 = DAT_00104124 * param_4;
    fVar10 = (float)((ulong)*(undefined8 *)pBVar2 >> 0x20);
    pVVar3 = *(Vector3 **)param_1;
    fVar8 = param_4 * draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                      ::VECTOR3_RIGHT;
    uVar5 = uVar7 & 0xf;
    uVar7 = uVar7 + 1;
    fVar9 = (float)*(undefined8 *)pBVar2;
    fVar4 = (float)((ulong)*(undefined8 *)pBVar1 >> 0x20);
    local_78 = fVar8 * *(float *)(param_2 + 0x18) + fVar12 * *(float *)(param_2 + 0x1c) +
               fVar11 * *(float *)(param_2 + 0x20);
    local_80 = CONCAT44(fVar8 * fVar10 + fVar12 * *(float *)(param_2 + 0x10) + fVar11 * fVar4,
                        fVar8 * (float)*(undefined8 *)param_2 + fVar12 * *(float *)(param_2 + 4) +
                        fVar11 * fVar9);
    fVar8 = (float)_VECTOR3_FORWARD;
    fVar11 = (float)((ulong)_VECTOR3_FORWARD >> 0x20);
    local_70 = CONCAT44(fVar4 * DAT_001040f8 + fVar8 * fVar10 + fVar11 * *(float *)(param_2 + 0x10),
                        fVar9 * DAT_001040f8 +
                        fVar8 * (float)*(undefined8 *)param_2 + fVar11 * *(float *)(param_2 + 4));
    local_68 = fVar11 * *(float *)(param_2 + 0x1c) + fVar8 * *(float *)(param_2 + 0x18) +
               DAT_001040f8 * *(float *)(param_2 + 0x20);
    auVar13 = Vector3::rotated((Vector3 *)&local_80,(float)uVar5 * __LC16);
    local_48 = *(float *)(param_3 + 8) + auVar13._8_4_;
    local_50 = CONCAT44(auVar13._4_4_ + (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                        auVar13._0_4_ + (float)*(undefined8 *)param_3);
    local_60 = auVar13;
    SurfaceTool::add_vertex(pVVar3);
  } while (uVar7 != 0x11);
  uVar7 = 1;
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8),*(undefined8 *)param_1);
    pVVar3 = *(Vector3 **)param_1;
    fVar10 = (float)((ulong)*(undefined8 *)pBVar2 >> 0x20);
    fVar12 = DAT_001040f4 * param_4;
    fVar8 = draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::
            VECTOR3_FORWARD * param_4;
    fVar9 = (float)*(undefined8 *)pBVar2;
    fVar4 = (float)((ulong)*(undefined8 *)pBVar1 >> 0x20);
    fVar11 = DAT_001040f8 * param_4;
    local_78 = fVar8 * *(float *)(param_2 + 0x18) + fVar12 * *(float *)(param_2 + 0x1c) +
               fVar11 * *(float *)(param_2 + 0x20);
    local_80 = CONCAT44(fVar8 * fVar10 + fVar12 * *(float *)(param_2 + 0x10) + fVar11 * fVar4,
                        fVar8 * (float)*(undefined8 *)param_2 + fVar12 * *(float *)(param_2 + 4) +
                        fVar11 * fVar9);
    fVar8 = (float)draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::
                   VECTOR3_UP;
    fVar11 = (float)((ulong)draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                            ::VECTOR3_UP >> 0x20);
    local_70 = CONCAT44(fVar4 * DAT_00104110 + fVar8 * fVar10 + fVar11 * *(float *)(param_2 + 0x10),
                        fVar9 * DAT_00104110 +
                        fVar8 * (float)*(undefined8 *)param_2 + fVar11 * *(float *)(param_2 + 4));
    local_68 = fVar11 * *(float *)(param_2 + 0x1c) + fVar8 * *(float *)(param_2 + 0x18) +
               DAT_00104110 * *(float *)(param_2 + 0x20);
    auVar13 = Vector3::rotated((Vector3 *)&local_80,(float)(int)(uVar7 - 1) * __LC16);
    local_48 = *(float *)(param_3 + 8) + auVar13._8_4_;
    local_50 = CONCAT44(auVar13._4_4_ + (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                        auVar13._0_4_ + (float)*(undefined8 *)param_3);
    local_60 = auVar13;
    SurfaceTool::add_vertex(pVVar3);
    SurfaceTool::set_color
              (*(undefined8 *)param_5,*(undefined8 *)(param_5 + 8),*(undefined8 *)param_1);
    fVar11 = DAT_001040f8 * param_4;
    fVar12 = DAT_001040f4 * param_4;
    fVar10 = (float)((ulong)*(undefined8 *)pBVar2 >> 0x20);
    pVVar3 = *(Vector3 **)param_1;
    fVar8 = param_4 * draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                      ::VECTOR3_FORWARD;
    uVar5 = uVar7 & 0xf;
    uVar7 = uVar7 + 1;
    fVar9 = (float)*(undefined8 *)pBVar2;
    fVar4 = (float)((ulong)*(undefined8 *)pBVar1 >> 0x20);
    local_78 = fVar8 * *(float *)(param_2 + 0x18) + fVar12 * *(float *)(param_2 + 0x1c) +
               fVar11 * *(float *)(param_2 + 0x20);
    local_80 = CONCAT44(fVar8 * fVar10 + fVar12 * *(float *)(param_2 + 0x10) + fVar11 * fVar4,
                        fVar8 * (float)*(undefined8 *)param_2 + fVar12 * *(float *)(param_2 + 4) +
                        fVar11 * fVar9);
    fVar8 = (float)draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)::
                   VECTOR3_UP;
    fVar11 = (float)((ulong)draw_sphere(Ref<SurfaceTool>&,Basis_const&,Vector3_const&,float,Color_const&)
                            ::VECTOR3_UP >> 0x20);
    local_70 = CONCAT44(fVar4 * DAT_00104110 + fVar8 * fVar10 + fVar11 * *(float *)(param_2 + 0x10),
                        fVar9 * DAT_00104110 +
                        fVar8 * (float)*(undefined8 *)param_2 + fVar11 * *(float *)(param_2 + 4));
    local_68 = fVar11 * *(float *)(param_2 + 0x1c) + fVar8 * *(float *)(param_2 + 0x18) +
               DAT_00104110 * *(float *)(param_2 + 0x20);
    auVar13 = Vector3::rotated((Vector3 *)&local_80,(float)uVar5 * __LC16);
    local_48 = *(float *)(param_3 + 8) + auVar13._8_4_;
    local_50 = CONCAT44(auVar13._4_4_ + (float)((ulong)*(undefined8 *)param_3 >> 0x20),
                        auVar13._0_4_ + (float)*(undefined8 *)param_3);
    local_60 = auVar13;
    SurfaceTool::add_vertex(pVVar3);
  } while (uVar7 != 0x11);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SpringBoneSimulator3DGizmoPlugin::draw_line(Ref<SurfaceTool>&, Vector3 const&, Vector3 const&,
   Color const&) */

void SpringBoneSimulator3DGizmoPlugin::draw_line
               (Ref *param_1,Vector3 *param_2,Vector3 *param_3,Color *param_4)

{
  SurfaceTool::set_color(*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1)
  ;
  SurfaceTool::add_vertex(*(Vector3 **)param_1);
  SurfaceTool::set_color(*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1)
  ;
  SurfaceTool::add_vertex(*(Vector3 **)param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringBoneCollision3DGizmoPlugin::draw_sphere(Ref<SurfaceTool>&, float, Color const&) */

void SpringBoneCollision3DGizmoPlugin::draw_sphere(Ref *param_1,float param_2,Color *param_3)

{
  Vector3 *pVVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [12];
  undefined8 local_58;
  float local_50;
  undefined1 local_4c [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_RIGHT == '\0') &&
     (iVar3 = __cxa_guard_acquire(&draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_RIGHT)
     , iVar3 != 0)) {
    draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_RIGHT = 0x3f800000;
    _DAT_001040e0 = 0.0;
    __cxa_guard_release(&draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_RIGHT);
  }
  if ((draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_UP == '\0') &&
     (iVar3 = __cxa_guard_acquire(&draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_UP),
     iVar3 != 0)) {
    _DAT_001040c8 = 0.0;
    draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_UP = _LC14;
    __cxa_guard_release(&draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_UP);
  }
  if ((draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_FORWARD == '\0') &&
     (iVar3 = __cxa_guard_acquire(&draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::
                                   VECTOR3_FORWARD), iVar3 != 0)) {
    draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_FORWARD = 0;
    _DAT_001040b0 = 1.0;
    __cxa_guard_release(&draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_FORWARD);
  }
  uVar4 = 1;
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8),*(undefined8 *)param_1);
    pVVar1 = *(Vector3 **)param_1;
    local_50 = param_2 * _DAT_001040c8;
    local_58 = CONCAT44((float)((ulong)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_UP
                               >> 0x20) * param_2,
                        (float)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_UP *
                        param_2);
    auVar5 = Vector3::rotated((Vector3 *)&local_58,(float)(int)(uVar4 - 1) * __LC16);
    local_4c = auVar5;
    SurfaceTool::add_vertex(pVVar1);
    SurfaceTool::set_color
              (*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8),*(undefined8 *)param_1);
    pVVar1 = *(Vector3 **)param_1;
    uVar2 = uVar4 & 0xf;
    uVar4 = uVar4 + 1;
    local_50 = param_2 * _DAT_001040c8;
    local_58 = CONCAT44((float)((ulong)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_UP
                               >> 0x20) * param_2,
                        (float)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_UP *
                        param_2);
    auVar5 = Vector3::rotated((Vector3 *)&local_58,(float)uVar2 * __LC16);
    local_4c = auVar5;
    SurfaceTool::add_vertex(pVVar1);
  } while (uVar4 != 0x11);
  uVar4 = 1;
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8),*(undefined8 *)param_1);
    pVVar1 = *(Vector3 **)param_1;
    local_58 = CONCAT44((float)((ulong)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::
                                       VECTOR3_RIGHT >> 0x20) * param_2,
                        (float)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_RIGHT *
                        param_2);
    local_50 = param_2 * _DAT_001040e0;
    auVar5 = Vector3::rotated((Vector3 *)&local_58,(float)(int)(uVar4 - 1) * __LC16);
    local_4c = auVar5;
    SurfaceTool::add_vertex(pVVar1);
    SurfaceTool::set_color
              (*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8),*(undefined8 *)param_1);
    pVVar1 = *(Vector3 **)param_1;
    uVar2 = uVar4 + 1;
    local_58 = CONCAT44((float)((ulong)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::
                                       VECTOR3_RIGHT >> 0x20) * param_2,
                        (float)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_RIGHT *
                        param_2);
    local_50 = param_2 * _DAT_001040e0;
    auVar5 = Vector3::rotated((Vector3 *)&local_58,(float)(uVar4 & 0xf) * __LC16);
    local_4c = auVar5;
    SurfaceTool::add_vertex(pVVar1);
    uVar4 = uVar2;
  } while (uVar2 != 0x11);
  uVar4 = 1;
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8),*(undefined8 *)param_1);
    pVVar1 = *(Vector3 **)param_1;
    local_50 = param_2 * _DAT_001040b0;
    local_58 = CONCAT44((float)((ulong)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::
                                       VECTOR3_FORWARD >> 0x20) * param_2,
                        (float)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_FORWARD *
                        param_2);
    auVar5 = Vector3::rotated((Vector3 *)&local_58,(float)(int)(uVar4 - 1) * __LC16);
    local_4c = auVar5;
    SurfaceTool::add_vertex(pVVar1);
    SurfaceTool::set_color
              (*(undefined8 *)param_3,*(undefined8 *)(param_3 + 8),*(undefined8 *)param_1);
    pVVar1 = *(Vector3 **)param_1;
    uVar2 = uVar4 & 0xf;
    uVar4 = uVar4 + 1;
    local_50 = param_2 * _DAT_001040b0;
    local_58 = CONCAT44((float)((ulong)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::
                                       VECTOR3_FORWARD >> 0x20) * param_2,
                        (float)draw_sphere(Ref<SurfaceTool>&,float,Color_const&)::VECTOR3_FORWARD *
                        param_2);
    auVar5 = Vector3::rotated((Vector3 *)&local_58,(float)uVar2 * __LC16);
    local_4c = auVar5;
    SurfaceTool::add_vertex(pVVar1);
  } while (uVar4 != 0x11);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringBoneCollision3DGizmoPlugin::draw_capsule(Ref<SurfaceTool>&, float, float, Color const&) */

void SpringBoneCollision3DGizmoPlugin::draw_capsule
               (Ref *param_1,float param_2,float param_3,Color *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  Vector3 *pVVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long in_FS_OFFSET;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [12];
  undefined4 local_88;
  undefined4 local_84;
  undefined8 *local_80;
  undefined8 local_70;
  float local_68;
  undefined1 local_60 [12];
  undefined8 local_50;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_RIGHT == '\0') &&
     (iVar8 = __cxa_guard_acquire(&draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                   VECTOR3_RIGHT), iVar8 != 0)) {
    draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_RIGHT = 0x3f800000;
    DAT_00104098 = 0.0;
    __cxa_guard_release(&draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_RIGHT);
  }
  if ((draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_UP == '\0') &&
     (iVar8 = __cxa_guard_acquire(&draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                   VECTOR3_UP), iVar8 != 0)) {
    DAT_00104080 = 0.0;
    draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_UP = _LC14;
    __cxa_guard_release(&draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_UP);
  }
  if ((draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_FORWARD == '\0') &&
     (iVar8 = __cxa_guard_acquire(&draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                   VECTOR3_FORWARD), iVar8 != 0)) {
    draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_FORWARD = 0;
    DAT_00104068 = 1.0;
    __cxa_guard_release(&draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_FORWARD);
  }
  uVar11 = 1;
  fVar14 = (float)((double)param_3 * __LC18 - (double)param_2);
  fVar17 = DAT_00104080 * fVar14;
  fVar15 = fVar14 * (float)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_UP;
  fVar14 = fVar14 * draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_UP._4_4_;
  fVar18 = (float)((uint)fVar17 ^ __LC20);
  fVar19 = (float)((uint)_LC19 ^ (uint)fVar15);
  fVar20 = (float)(_LC19._4_4_ ^ (uint)fVar14);
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1);
    local_68 = param_2 * DAT_00104080;
    local_70 = CONCAT44((float)((ulong)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                       VECTOR3_UP >> 0x20) * param_2,
                        (float)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_UP
                        * param_2);
    pVVar3 = *(Vector3 **)param_1;
    auVar21 = Vector3::rotated((Vector3 *)&local_70,(float)(int)(uVar11 - 1) * __LC16 - __LC21);
    fVar2 = fVar17;
    fVar4 = fVar15;
    fVar5 = fVar14;
    if (8 < (int)uVar11) {
      fVar2 = fVar18;
      fVar4 = fVar19;
      fVar5 = fVar20;
    }
    local_48 = fVar2 + auVar21._8_4_;
    local_50 = CONCAT44(auVar21._4_4_ + fVar5,auVar21._0_4_ + fVar4);
    local_60 = auVar21;
    SurfaceTool::add_vertex(pVVar3);
    SurfaceTool::set_color
              (*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1);
    uVar9 = uVar11 & 0xf;
    pVVar3 = *(Vector3 **)param_1;
    uVar11 = uVar11 + 1;
    local_68 = param_2 * DAT_00104080;
    local_70 = CONCAT44((float)((ulong)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                       VECTOR3_UP >> 0x20) * param_2,
                        (float)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_UP
                        * param_2);
    auVar21 = Vector3::rotated((Vector3 *)&local_70,(float)uVar9 * __LC16 - __LC21);
    local_50 = CONCAT44(auVar21._4_4_ + fVar5,auVar21._0_4_ + fVar4);
    local_48 = fVar2 + auVar21._8_4_;
    local_60 = auVar21;
    SurfaceTool::add_vertex(pVVar3);
  } while (uVar11 != 0x11);
  uVar11 = 1;
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1);
    local_68 = param_2 * DAT_00104098;
    local_70 = CONCAT44((float)((ulong)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                       VECTOR3_RIGHT >> 0x20) * param_2,
                        (float)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                               VECTOR3_RIGHT * param_2);
    pVVar3 = *(Vector3 **)param_1;
    auVar21 = Vector3::rotated((Vector3 *)&local_70,(float)(int)(uVar11 - 1) * __LC16);
    fVar2 = fVar17;
    fVar4 = fVar15;
    fVar5 = fVar14;
    if (8 < (int)uVar11) {
      fVar2 = fVar18;
      fVar4 = fVar19;
      fVar5 = fVar20;
    }
    local_48 = fVar2 + auVar21._8_4_;
    local_50 = CONCAT44(auVar21._4_4_ + fVar5,auVar21._0_4_ + fVar4);
    local_60 = auVar21;
    SurfaceTool::add_vertex(pVVar3);
    SurfaceTool::set_color
              (*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1);
    uVar9 = uVar11 & 0xf;
    pVVar3 = *(Vector3 **)param_1;
    uVar11 = uVar11 + 1;
    local_68 = param_2 * DAT_00104098;
    local_70 = CONCAT44((float)((ulong)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                       VECTOR3_RIGHT >> 0x20) * param_2,
                        (float)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                               VECTOR3_RIGHT * param_2);
    auVar21 = Vector3::rotated((Vector3 *)&local_70,(float)uVar9 * __LC16);
    local_50 = CONCAT44(auVar21._4_4_ + fVar5,auVar21._0_4_ + fVar4);
    local_48 = fVar2 + auVar21._8_4_;
    local_60 = auVar21;
    SurfaceTool::add_vertex(pVVar3);
  } while (uVar11 != 0x11);
  uVar11 = 1;
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1);
    local_70 = CONCAT44((float)((ulong)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                       VECTOR3_FORWARD >> 0x20) * param_2,
                        (float)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                               VECTOR3_FORWARD * param_2);
    pVVar3 = *(Vector3 **)param_1;
    local_68 = param_2 * DAT_00104068;
    auVar21 = Vector3::rotated((Vector3 *)&local_70,(float)(int)(uVar11 - 1) * __LC16);
    local_48 = fVar17 + auVar21._8_4_;
    local_50 = CONCAT44(auVar21._4_4_ + fVar14,auVar21._0_4_ + fVar15);
    local_60 = auVar21;
    SurfaceTool::add_vertex(pVVar3);
    SurfaceTool::set_color
              (*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1);
    pVVar3 = *(Vector3 **)param_1;
    uVar9 = uVar11 & 0xf;
    local_68 = param_2 * DAT_00104068;
    uVar11 = uVar11 + 1;
    local_70 = CONCAT44((float)((ulong)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                       VECTOR3_FORWARD >> 0x20) * param_2,
                        (float)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                               VECTOR3_FORWARD * param_2);
    auVar21 = Vector3::rotated((Vector3 *)&local_70,(float)uVar9 * __LC16);
    local_48 = fVar17 + auVar21._8_4_;
    local_50 = CONCAT44(auVar21._4_4_ + fVar14,auVar21._0_4_ + fVar15);
    local_60 = auVar21;
    SurfaceTool::add_vertex(pVVar3);
  } while (uVar11 != 0x11);
  uVar11 = 1;
  do {
    SurfaceTool::set_color
              (*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1);
    local_70 = CONCAT44((float)((ulong)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                       VECTOR3_FORWARD >> 0x20) * param_2,
                        (float)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                               VECTOR3_FORWARD * param_2);
    pVVar3 = *(Vector3 **)param_1;
    local_68 = param_2 * DAT_00104068;
    auVar21 = Vector3::rotated((Vector3 *)&local_70,(float)(int)(uVar11 - 1) * __LC16);
    local_50 = CONCAT44(auVar21._4_4_ - fVar14,auVar21._0_4_ - fVar15);
    local_48 = auVar21._8_4_ - fVar17;
    local_60 = auVar21;
    SurfaceTool::add_vertex(pVVar3);
    SurfaceTool::set_color
              (*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1);
    pVVar3 = *(Vector3 **)param_1;
    uVar9 = uVar11 & 0xf;
    local_68 = param_2 * DAT_00104068;
    uVar11 = uVar11 + 1;
    local_70 = CONCAT44((float)((ulong)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                                       VECTOR3_FORWARD >> 0x20) * param_2,
                        (float)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::
                               VECTOR3_FORWARD * param_2);
    auVar21 = Vector3::rotated((Vector3 *)&local_70,(float)uVar9 * __LC16);
    local_50 = CONCAT44(auVar21._4_4_ - fVar14,auVar21._0_4_ - fVar15);
    local_48 = auVar21._8_4_ - fVar17;
    local_60 = auVar21;
    SurfaceTool::add_vertex(pVVar3);
  } while (uVar11 != 0x11);
  uVar10 = 0;
  local_84 = 4;
  local_80 = (undefined8 *)Memory::realloc_static((void *)0x0,0x30,false);
  uVar9 = _LC19._4_4_;
  uVar11 = (uint)_LC19;
  if (local_80 == (undefined8 *)0x0) {
    LocalVector<Vector3,unsigned_int,false,false>::resize(uVar10);
  }
  else {
    local_88 = 4;
    puVar1 = local_80 + 6;
    *local_80 = draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_RIGHT;
    uVar10 = (uint)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_RIGHT;
    uVar7 = draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_RIGHT._4_4_;
    *(float *)(local_80 + 1) = DAT_00104098;
    uVar6 = draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_FORWARD;
    uVar16 = (uint)DAT_00104098 ^ __LC20;
    *(ulong *)((long)local_80 + 0xc) = CONCAT44(uVar7 ^ uVar9,uVar10 ^ uVar11);
    uVar10 = (uint)draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_FORWARD;
    uVar7 = draw_capsule(Ref<SurfaceTool>&,float,float,Color_const&)::VECTOR3_FORWARD._4_4_;
    local_80[3] = uVar6;
    fVar18 = DAT_00104068;
    *(uint *)((long)local_80 + 0x14) = uVar16;
    uVar16 = (uint)DAT_00104068 ^ __LC20;
    *(float *)(local_80 + 4) = fVar18;
    *(ulong *)((long)local_80 + 0x24) = CONCAT44(uVar7 ^ uVar9,uVar10 ^ uVar11);
    *(uint *)((long)local_80 + 0x2c) = uVar16;
    puVar12 = local_80;
    do {
      fVar18 = *(float *)(puVar12 + 1);
      puVar13 = (undefined8 *)((long)puVar12 + 0xc);
      fVar19 = (float)*puVar12 * param_2;
      fVar20 = (float)((ulong)*puVar12 >> 0x20) * param_2;
      SurfaceTool::set_color
                (*(undefined8 *)param_4,*(undefined8 *)(param_4 + 8),*(undefined8 *)param_1);
      local_48 = fVar17 + param_2 * fVar18;
      local_50 = CONCAT44(fVar20 + fVar14,fVar19 + fVar15);
      SurfaceTool::add_vertex(*(Vector3 **)param_1);
      local_48 = param_2 * fVar18 - fVar17;
      local_50 = CONCAT44(fVar20 - fVar14,fVar19 - fVar15);
      SurfaceTool::add_vertex(*(Vector3 **)param_1);
      puVar12 = puVar13;
    } while (puVar13 != puVar1);
    LocalVector<Vector3,unsigned_int,false,false>::resize
              ((LocalVector<Vector3,unsigned_int,false,false> *)&local_88,0);
    if (local_80 == (undefined8 *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(local_80,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SpringBoneCollision3DGizmoPlugin::draw_plane(Ref<SurfaceTool>&, Color const&) */

void SpringBoneCollision3DGizmoPlugin::draw_plane(Ref *param_1,Color *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 *local_80;
  undefined8 local_78;
  float local_70;
  Vector3 local_68 [4];
  float fStack_64;
  undefined1 local_58 [12];
  float fStack_4c;
  float local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (draw_plane(Ref<SurfaceTool>&,Color_const&)::VECTOR3_UP == '\0') {
    iVar7 = __cxa_guard_acquire(&draw_plane(Ref<SurfaceTool>&,Color_const&)::VECTOR3_UP);
    if (iVar7 != 0) {
      draw_plane(Ref<SurfaceTool>&,Color_const&)::VECTOR3_UP._8_4_ = 0;
      draw_plane(Ref<SurfaceTool>&,Color_const&)::VECTOR3_UP._0_8_ = _LC14;
      __cxa_guard_release(&draw_plane(Ref<SurfaceTool>&,Color_const&)::VECTOR3_UP);
    }
  }
  SurfaceTool::set_color(*(undefined8 *)param_2,*(undefined8 *)(param_2 + 8));
  uVar6 = 0;
  local_84 = 8;
  puVar5 = (undefined8 *)Memory::realloc_static((void *)0x0,0x60,false);
  uVar2 = _UNK_00109068;
  local_80 = puVar5;
  if (puVar5 == (undefined8 *)0x0) {
    LocalVector<Vector3,unsigned_int,false,false>::resize(uVar6);
  }
  else {
    uVar3 = CONCAT44(_LC30,__LC23);
    *(undefined4 *)(puVar5 + 10) = 0;
    bVar4 = false;
    local_88 = 7;
    *puVar5 = uVar3;
    puVar5[1] = uVar2;
    uVar2 = _UNK_00109078;
    puVar5[2] = __LC24;
    puVar5[3] = uVar2;
    uVar2 = _UNK_00109088;
    puVar5[4] = __LC25;
    puVar5[5] = uVar2;
    uVar2 = _UNK_00109098;
    puVar5[6] = __LC26;
    puVar5[7] = uVar2;
    uVar2 = _UNK_001090a8;
    puVar5[8] = __LC27;
    puVar5[9] = uVar2;
    while( true ) {
      uVar6 = 0;
      _local_68 = ZEXT416(_LC28);
      local_48 = 1.0;
      _local_58 = _local_68;
      Basis::set_axis_angle(local_68,(float)bVar4 * __LC21);
      puVar9 = puVar5;
      do {
        uVar6 = uVar6 + 1;
        uVar2 = *puVar9;
        fVar13 = *(float *)(puVar9 + 1);
        puVar9 = (undefined8 *)((long)puVar9 + 0xc);
        fVar11 = (float)uVar2;
        fVar12 = (float)((ulong)uVar2 >> 0x20);
        puVar1 = (undefined8 *)((long)puVar5 + (ulong)(uVar6 % 7) * 0xc);
        uVar2 = *puVar1;
        fVar14 = *(float *)(puVar1 + 1);
        local_70 = (float)local_58._8_4_ * fVar11 + fVar12 * fStack_4c + local_48 * fVar13;
        fVar10 = (float)uVar2;
        fVar15 = (float)((ulong)uVar2 >> 0x20);
        local_78 = CONCAT44((float)local_58._0_4_ * fVar12 + SUB164(_local_68,0xc) * fVar11 +
                            SUB164(_local_58,4) * fVar13,
                            fStack_64 * fVar12 + SUB164(_local_68,0) * fVar11 +
                            SUB164(_local_68,8) * fVar13);
        SurfaceTool::add_vertex(*(Vector3 **)param_1);
        local_70 = fVar15 * fStack_4c + (float)local_58._8_4_ * fVar10 + fVar14 * local_48;
        local_78 = CONCAT44((float)local_58._0_4_ * fVar15 + SUB164(_local_68,0xc) * fVar10 +
                            SUB164(_local_58,4) * fVar14,
                            fStack_64 * fVar15 + SUB164(_local_68,0) * fVar10 +
                            SUB164(_local_68,8) * fVar14);
        SurfaceTool::add_vertex(*(Vector3 **)param_1);
      } while (uVar6 != 7);
      if (bVar4) break;
      bVar4 = true;
    }
    iVar7 = 0;
    do {
      _local_68 = ZEXT416(_LC28);
      local_48 = 1.0;
      _local_58 = _local_68;
      Basis::set_axis_angle(local_68,(float)iVar7 * __LC21);
      uVar6 = 0;
      do {
        uVar8 = uVar6 + 1;
        if ((uVar6 & 1) == 0) {
          fVar14 = _LC30 - (float)(int)uVar6 * __LC29;
          fVar13 = _LC30 - (float)(int)uVar8 * __LC29;
          local_70 = _LC30 * (float)local_58._8_4_ + fStack_4c * 0.0 + local_48 * fVar14;
          local_78 = CONCAT44(SUB164(_local_68,0xc) * _LC31._4_4_ + (float)local_58._0_4_ * 0.0 +
                              SUB164(_local_58,4) * fVar14,
                              SUB164(_local_68,0) * (float)_LC31 + fStack_64 * 0.0 +
                              SUB164(_local_68,8) * fVar14);
          SurfaceTool::add_vertex(*(Vector3 **)param_1);
          local_70 = _LC30 * (float)local_58._8_4_ + fStack_4c * 0.0 + fVar13 * local_48;
          local_78 = CONCAT44(SUB164(_local_68,0xc) * _LC31._4_4_ + (float)local_58._0_4_ * 0.0 +
                              SUB164(_local_58,4) * fVar13,
                              SUB164(_local_68,0) * (float)_LC31 + fStack_64 * 0.0 +
                              SUB164(_local_68,8) * fVar13);
          SurfaceTool::add_vertex(*(Vector3 **)param_1);
        }
        uVar6 = uVar8;
      } while (uVar8 != 9);
      iVar7 = iVar7 + 1;
    } while (iVar7 != 4);
    LocalVector<Vector3,unsigned_int,false,false>::resize
              ((LocalVector<Vector3,unsigned_int,false,false> *)&local_88,0);
    if (local_80 == (undefined8 *)0x0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(local_80,false);
      return;
    }
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
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
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



/* SpringBoneSimulator3DGizmoPlugin::SpringBoneSimulator3DGizmoPlugin() */

void __thiscall
SpringBoneSimulator3DGizmoPlugin::SpringBoneSimulator3DGizmoPlugin
          (SpringBoneSimulator3DGizmoPlugin *this)

{
  String *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  String *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_001089d0;
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)&selection_materials);
  BaseMaterial3D::set_shading_mode(selection_materials,0);
  BaseMaterial3D::set_transparency(selection_materials,1);
  BaseMaterial3D::set_flag(selection_materials,1,1);
  BaseMaterial3D::set_flag(selection_materials,2,1);
  BaseMaterial3D::set_flag(selection_materials,0x15,1);
  Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&DAT_00104038);
  local_48 = (String *)0x0;
  Ref<Shader>::instantiate<>((Ref<Shader> *)&local_48);
  pSVar1 = local_48;
  local_40 = 0;
  local_38 = 
  "\n// Skeleton 3D gizmo bones shader.\n\nshader_type spatial;\nrender_mode unshaded, shadows_disabled;\nvoid vertex() {\n\tif (!OUTPUT_IS_SRGB) {\n\t\tCOLOR.rgb = mix( pow((COLOR.rgb + vec3(0.055)) * (1.0 / (1.0 + 0.055)), vec3(2.4)), COLOR.rgb* (1.0 / 12.92), lessThan(COLOR.rgb,vec3(0.04045)) );\n\t}\n\tVERTEX = VERTEX;\n\tPOSITION = PROJECTION_MATRIX * VIEW_MATRIX * MODEL_MATRIX * vec4(VERTEX.xyz, 1.0);\n\tPOSITION.z = mix(POSITION.z, POSITION.w, 0.998);\n}\nvoid fragment() {\n\tALBEDO = COLOR.rgb;\n\tALPHA = COLOR.a;\n}\n"
  ;
  local_30 = 0x1f7;
  String::parse_latin1((StrRange *)&local_40);
  Shader::set_code(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  ShaderMaterial::set_shader(DAT_00104038);
  if (local_48 != (String *)0x0) {
    cVar2 = RefCounted::unreference();
    pSVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object *)local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
        Memory::free_static(pSVar1,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SpringBoneCollision3DGizmoPlugin::SpringBoneCollision3DGizmoPlugin() */

void __thiscall
SpringBoneCollision3DGizmoPlugin::SpringBoneCollision3DGizmoPlugin
          (SpringBoneCollision3DGizmoPlugin *this)

{
  String *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  String *local_48;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  EditorNode3DGizmoPlugin::EditorNode3DGizmoPlugin((EditorNode3DGizmoPlugin *)this);
  *(undefined ***)this = &PTR__initialize_classv_00108c38;
  Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D> *)&selection_materials);
  BaseMaterial3D::set_shading_mode(selection_materials,0);
  BaseMaterial3D::set_transparency(selection_materials,1);
  BaseMaterial3D::set_flag(selection_materials,1,1);
  BaseMaterial3D::set_flag(selection_materials,2,1);
  BaseMaterial3D::set_flag(selection_materials,0x15,1);
  Ref<ShaderMaterial>::instantiate<>((Ref<ShaderMaterial> *)&DAT_00104028);
  local_48 = (String *)0x0;
  Ref<Shader>::instantiate<>((Ref<Shader> *)&local_48);
  pSVar1 = local_48;
  local_40 = 0;
  local_38 = 
  "\n// Skeleton 3D gizmo bones shader.\n\nshader_type spatial;\nrender_mode unshaded, shadows_disabled;\nvoid vertex() {\n\tif (!OUTPUT_IS_SRGB) {\n\t\tCOLOR.rgb = mix( pow((COLOR.rgb + vec3(0.055)) * (1.0 / (1.0 + 0.055)), vec3(2.4)), COLOR.rgb* (1.0 / 12.92), lessThan(COLOR.rgb,vec3(0.04045)) );\n\t}\n\tVERTEX = VERTEX;\n\tPOSITION = PROJECTION_MATRIX * VIEW_MATRIX * MODEL_MATRIX * vec4(VERTEX.xyz, 1.0);\n\tPOSITION.z = mix(POSITION.z, POSITION.w, 0.998);\n}\nvoid fragment() {\n\tALBEDO = COLOR.rgb;\n\tALPHA = COLOR.a;\n}\n"
  ;
  local_30 = 0x1f7;
  String::parse_latin1((StrRange *)&local_40);
  Shader::set_code(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  ShaderMaterial::set_shader(DAT_00104028);
  if (local_48 != (String *)0x0) {
    cVar2 = RefCounted::unreference();
    pSVar1 = local_48;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object *)local_48);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pSVar1 + 0x140))(pSVar1);
        Memory::free_static(pSVar1,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SpringBoneCollision3DGizmoPlugin::get_collision_mesh(SpringBoneCollision3D*, bool) */

SpringBoneCollision3DGizmoPlugin * __thiscall
SpringBoneCollision3DGizmoPlugin::get_collision_mesh
          (SpringBoneCollision3DGizmoPlugin *this,SpringBoneCollision3D *param_1,bool param_2)

{
  Ref *pRVar1;
  char cVar2;
  Object *pOVar3;
  long lVar4;
  Color *pCVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  Ref *local_88;
  Object *local_80;
  undefined8 local_78 [2];
  undefined8 local_68 [2];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (Object *)0x0;
  String::parse_latin1((String *)&local_80,"editors/3d_gizmos/gizmo_colors/spring_bone_collision");
  _EDITOR_GET((String *)local_58);
  local_78[0] = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_80 = (Object *)0x0;
  String::parse_latin1
            ((String *)&local_80,"editors/3d_gizmos/gizmo_colors/spring_bone_inside_collision");
  _EDITOR_GET((String *)local_58);
  local_68[0] = Variant::operator_cast_to_Color((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  local_88 = (Ref *)0x0;
  Ref<SurfaceTool>::instantiate<>((Ref<SurfaceTool> *)&local_88);
  pRVar1 = local_88;
  SurfaceTool::begin(local_88,1);
  pCVar5 = DAT_00104028;
  if (!param_2) {
    BaseMaterial3D::set_albedo(selection_materials);
    pCVar5 = selection_materials;
  }
  local_80 = (Object *)0x0;
  if (pCVar5 != (Color *)0x0) {
    local_80 = (Object *)0x0;
    pOVar3 = (Object *)__dynamic_cast(pCVar5,&Object::typeinfo,&Material::typeinfo,0);
    if ((pOVar3 != (Object *)0x0) &&
       (local_80 = pOVar3, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_80 = (Object *)0x0;
    }
  }
  SurfaceTool::set_material(pRVar1);
  if (((local_80 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar3 = local_80, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_80), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if (param_1 == (SpringBoneCollision3D *)0x0) {
LAB_00102ba6:
    local_80 = (Object *)0x0;
    SurfaceTool::commit((Ref *)this,(ulong)pRVar1);
    Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_80);
    cVar2 = RefCounted::unreference();
  }
  else {
    lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&SpringBoneCollisionSphere3D::typeinfo,0);
    if (lVar4 == 0) {
      lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&SpringBoneCollisionCapsule3D::typeinfo,0);
      if (lVar4 == 0) {
        lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&SpringBoneCollisionPlane3D::typeinfo,0);
        if (lVar4 != 0) {
          draw_plane((Ref *)&local_88,(Color *)local_78);
        }
        goto LAB_00102ba6;
      }
      cVar2 = SpringBoneCollisionCapsule3D::is_inside();
      pCVar5 = (Color *)local_78;
      if (cVar2 != '\0') {
        pCVar5 = (Color *)local_68;
      }
      fVar6 = (float)SpringBoneCollisionCapsule3D::get_height();
      fVar7 = (float)SpringBoneCollisionCapsule3D::get_radius();
      draw_capsule((Ref *)&local_88,fVar7,fVar6,pCVar5);
    }
    else {
      cVar2 = SpringBoneCollisionSphere3D::is_inside();
      pCVar5 = (Color *)local_78;
      if (cVar2 != '\0') {
        pCVar5 = (Color *)local_68;
      }
      fVar6 = (float)SpringBoneCollisionSphere3D::get_radius();
      draw_sphere((Ref *)&local_88,fVar6,pCVar5);
    }
    local_80 = (Object *)0x0;
    SurfaceTool::commit((Ref *)this,(ulong)pRVar1);
    if (((local_80 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar3 = local_80, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_80), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
    cVar2 = RefCounted::unreference();
  }
  if ((cVar2 != '\0') && (cVar2 = predelete_handler((Object *)pRVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pRVar1 + 0x140))(pRVar1);
    Memory::free_static(pRVar1,false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* SpringBoneCollision3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
SpringBoneCollision3DGizmoPlugin::redraw
          (SpringBoneCollision3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  char cVar1;
  SpringBoneCollision3D *pSVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_78;
  Object *local_70;
  Object *local_68;
  Object *local_60;
  Ref local_58 [16];
  undefined1 local_48 [16];
  undefined4 local_38;
  undefined8 local_34;
  undefined4 local_2c;
  long local_20;
  
  pSVar2 = *(SpringBoneCollision3D **)(param_1 + 0x1f0);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar2 != (SpringBoneCollision3D *)0x0) {
    pSVar2 = (SpringBoneCollision3D *)
             __dynamic_cast(pSVar2,&Object::typeinfo,&SpringBoneCollision3D::typeinfo,0);
  }
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  get_collision_mesh((SpringBoneCollision3DGizmoPlugin *)&local_78,pSVar2,(bool)param_1[0x17c]);
  local_60 = (Object *)0x0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_2c = 0;
  local_68 = (Object *)0x0;
  local_70 = (Object *)0x0;
  local_58 = (Ref  [16])ZEXT416(_LC28);
  local_48 = ZEXT416(_LC28);
  if (local_78 != (Object *)0x0) {
    pOVar3 = (Object *)__dynamic_cast(local_78,&Object::typeinfo,&Mesh::typeinfo,0);
    if (pOVar3 != (Object *)0x0) {
      local_70 = pOVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_70 = (Object *)0x0;
      }
    }
  }
  EditorNode3DGizmo::add_mesh((Ref *)param_1,(Ref *)&local_70,(Transform3D *)&local_68,local_58);
  if (local_70 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    pOVar3 = local_70;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_70);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_68 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    pOVar3 = local_68;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_68);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_60 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    pOVar3 = local_60;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_60);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  if (local_78 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_78);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
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
  __n = lVar1 * 4;
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



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
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
  __n = lVar1 * 4;
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



/* Error CowData<int>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  int iVar1;
  CowData<int> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  CowData<int> *pCVar8;
  CowData<int> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    pCVar2 = (CowData<int> *)0x0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<int> *)(lVar10 * 4);
    if (pCVar2 != (CowData<int> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<int> *)((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar3 = param_1 * 4 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar9 = (CowData<int> *)(uVar3 | uVar3 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<int> *)0x0) {
      if (param_1 <= lVar10) {
        if ((pCVar8 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar8), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_0010850e();
        return;
      }
      if (pCVar8 != pCVar2) {
        if (lVar10 == 0) {
          puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
          if (puVar4 != (undefined8 *)0x0) {
            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8 **)this = puVar6;
            goto LAB_0010320d;
          }
          uVar7 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_001032d2;
        }
        pCVar9 = this;
        iVar1 = _realloc(this,(long)pCVar8);
        if (iVar1 != 0) {
          return;
        }
      }
      puVar6 = *(undefined8 **)this;
      if (puVar6 == (undefined8 *)0x0) {
        resize<false>((long)pCVar9);
        return;
      }
LAB_0010320d:
      puVar6[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001032d2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar5,0,0);
  return;
}



/* Error CowData<float>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<float>::resize<false>(CowData<float> *this,long param_1)

{
  int iVar1;
  CowData<float> *pCVar2;
  ulong uVar3;
  undefined8 *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  CowData<float> *pCVar8;
  CowData<float> *pCVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar10 = 0;
    pCVar2 = (CowData<float> *)0x0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return;
    }
    if (param_1 == 0) {
      _unref(this);
      return;
    }
    _copy_on_write(this);
    pCVar2 = (CowData<float> *)(lVar10 * 4);
    if (pCVar2 != (CowData<float> *)0x0) {
      uVar3 = (ulong)(pCVar2 + -1) | (ulong)(pCVar2 + -1) >> 1;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = uVar3 | uVar3 >> 0x10;
      pCVar2 = (CowData<float> *)((uVar3 | uVar3 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar3 = param_1 * 4 - 1;
    uVar3 = uVar3 | uVar3 >> 1;
    uVar3 = uVar3 | uVar3 >> 2;
    uVar3 = uVar3 | uVar3 >> 4;
    uVar3 = uVar3 | uVar3 >> 8;
    uVar3 = uVar3 | uVar3 >> 0x10;
    pCVar9 = (CowData<float> *)(uVar3 | uVar3 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<float> *)0x0) {
      if (param_1 <= lVar10) {
        if ((pCVar8 != pCVar2) && (iVar1 = _realloc(this,(long)pCVar8), iVar1 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00108526();
        return;
      }
      if (pCVar8 != pCVar2) {
        if (lVar10 == 0) {
          puVar4 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
          if (puVar4 != (undefined8 *)0x0) {
            puVar6 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8 **)this = puVar6;
            goto LAB_0010342d;
          }
          uVar7 = 0x171;
          pcVar5 = "Parameter \"mem_new\" is null.";
          goto LAB_001034f2;
        }
        pCVar9 = this;
        iVar1 = _realloc(this,(long)pCVar8);
        if (iVar1 != 0) {
          return;
        }
      }
      puVar6 = *(undefined8 **)this;
      if (puVar6 == (undefined8 *)0x0) {
        resize<false>((long)pCVar9);
        return;
      }
LAB_0010342d:
      puVar6[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar5 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001034f2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar5,0,0);
  return;
}



/* SpringBoneSimulator3DGizmoPlugin::get_joints_mesh(Skeleton3D*, SpringBoneSimulator3D*, bool) */

SpringBoneSimulator3DGizmoPlugin * __thiscall
SpringBoneSimulator3DGizmoPlugin::get_joints_mesh
          (SpringBoneSimulator3DGizmoPlugin *this,Skeleton3D *param_1,SpringBoneSimulator3D *param_2
          ,bool param_3)

{
  long *plVar1;
  undefined8 uVar2;
  Color *pCVar3;
  Ref *pRVar4;
  undefined1 (*pauVar5) [16];
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  undefined1 (*pauVar11) [16];
  undefined8 *puVar12;
  Ref *pRVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  long in_FS_OFFSET;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [12];
  Ref *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined1 (*local_c0) [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [8];
  float local_a0;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined8 local_54;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"editors/3d_gizmos/gizmo_colors/spring_bone_joint");
  _EDITOR_GET((String *)&local_78);
  local_b8 = Variant::operator_cast_to_Color((Variant *)&local_78);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  local_d8 = (Ref *)0x0;
  Ref<SurfaceTool>::instantiate<>((Ref<SurfaceTool> *)&local_d8);
  pRVar4 = local_d8;
  SurfaceTool::begin(local_d8,1);
  pCVar3 = DAT_00104038;
  if (!param_3) {
    BaseMaterial3D::set_albedo(selection_materials);
    pCVar3 = selection_materials;
  }
  local_d0 = 0;
  if (pCVar3 != (Color *)0x0) {
    local_d0 = 0;
    lVar10 = __dynamic_cast(pCVar3,&Object::typeinfo,&Material::typeinfo,0);
    if (lVar10 != 0) {
      local_c8 = 0;
      local_d0 = lVar10;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_d0 = 0;
      }
      Ref<Material>::unref((Ref<Material> *)&local_c8);
    }
  }
  SurfaceTool::set_material(pRVar4);
  Ref<Material>::unref((Ref<Material> *)&local_d0);
  uVar16 = 0;
  pauVar11 = (undefined1 (*) [16])Memory::realloc_static((void *)0x0,0x10,false);
  if (pauVar11 != (undefined1 (*) [16])0x0) {
    uVar16 = 0;
    puVar12 = (undefined8 *)Memory::realloc_static((void *)0x0,0x10,false);
    if (puVar12 != (undefined8 *)0x0) {
      if ((ulong)((long)puVar12 + (0xf - (long)pauVar11)) < 0x1f) {
        lVar10 = 0;
        do {
          *(undefined4 *)(*pauVar11 + lVar10) = 0;
          *(undefined4 *)((long)puVar12 + lVar10) = 0;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0x10);
      }
      else {
        *pauVar11 = (undefined1  [16])0x0;
        *(undefined8 *)((long)puVar12 + 4) = 0;
        *(undefined4 *)((long)puVar12 + 0xc) = 0;
      }
      *(undefined4 *)puVar12 = 0x3f800000;
      iVar18 = 0;
      pRVar13 = pRVar4;
      while( true ) {
        iVar7 = SpringBoneSimulator3D::get_setting_count();
        if (iVar7 <= iVar18) break;
        iVar14 = (int)param_2;
        iVar7 = SpringBoneSimulator3D::get_joint_count(iVar14);
        if (-1 < iVar7 + -1) {
          iVar17 = 0;
          uVar8 = SpringBoneSimulator3D::get_joint_bone(iVar14,iVar18);
          do {
            iVar15 = (int)(String *)&local_78;
            if (iVar7 + -1 == iVar17) {
              cVar6 = SpringBoneSimulator3D::is_end_bone_extended(iVar14);
              if (cVar6 != '\0') {
                fVar19 = (float)SpringBoneSimulator3D::get_end_bone_length(iVar14);
                if (0.0 < fVar19) {
                  uVar9 = SpringBoneSimulator3D::get_end_bone_direction(iVar14);
                  auVar22 = SpringBoneSimulator3D::get_end_bone_axis(param_2,uVar8,uVar9);
                  _local_a8 = auVar22;
                  cVar6 = Vector3::is_zero_approx();
                  if (cVar6 == '\0') {
                    *(undefined4 *)*pauVar11 = uVar8;
                    local_c0 = (undefined1 (*) [16])0x0;
                    CowData<int>::resize<false>((CowData<int> *)&local_c0,4);
                    CowData<int>::_copy_on_write((CowData<int> *)&local_c0);
                    if (local_c0 != (undefined1 (*) [16])0x0) {
                      uVar2 = *(undefined8 *)(*pauVar11 + 8);
                      *(undefined8 *)local_c0 = *(undefined8 *)*pauVar11;
                      *(undefined8 *)((long)local_c0 + 8) = uVar2;
                    }
                    SurfaceTool::set_bones((Vector *)pRVar13);
                    CowData<int>::_unref((CowData<int> *)&local_c0);
                    local_c0 = (undefined1 (*) [16])0x0;
                    CowData<float>::resize<false>((CowData<float> *)&local_c0,4);
                    CowData<float>::_copy_on_write((CowData<float> *)&local_c0);
                    if (local_c0 != (undefined1 (*) [16])0x0) {
                      uVar2 = puVar12[1];
                      *(undefined8 *)local_c0 = *puVar12;
                      *(undefined8 *)((long)local_c0 + 8) = uVar2;
                    }
                    SurfaceTool::set_weights((Vector *)pRVar13);
                    CowData<float>::_unref((CowData<float> *)&local_c0);
                    Skeleton3D::get_bone_global_rest(iVar15);
                    fVar19 = (float)SpringBoneSimulator3D::get_end_bone_length(iVar14);
                    fVar20 = local_a0 * fVar19;
                    fVar21 = (float)local_a8._4_4_ * fVar19;
                    fVar19 = fVar19 * (float)local_a8._0_4_;
                    local_a0 = local_58 * fVar20 + local_60 * fVar19 + local_5c * fVar21 + local_4c;
                    local_a8 = (undefined1  [8])
                               CONCAT44(fVar19 * (float)((ulong)local_70 >> 0x20) +
                                        local_68 * fVar21 + fStack_64 * fVar20 +
                                        (float)((ulong)local_54 >> 0x20),
                                        fVar19 * local_78 + fStack_74 * fVar21 +
                                        (float)local_70 * fVar20 + (float)local_54);
                    draw_line((Ref *)&local_d8,(Vector3 *)&local_54,(Vector3 *)local_a8,
                              (Color *)local_b8);
                    fVar19 = (float)SpringBoneSimulator3D::get_joint_radius(iVar14,iVar18);
                    draw_sphere((Ref *)&local_d8,(Basis *)&local_78,(Vector3 *)local_a8,fVar19,
                                (Color *)local_b8);
                  }
                  break;
                }
              }
            }
            *(undefined4 *)*pauVar11 = uVar8;
            local_c0 = (undefined1 (*) [16])0x0;
            CowData<int>::resize<false>((CowData<int> *)&local_c0,4);
            CowData<int>::_copy_on_write((CowData<int> *)&local_c0);
            if (local_c0 != (undefined1 (*) [16])0x0) {
              *local_c0 = *pauVar11;
            }
            SurfaceTool::set_bones((Vector *)pRVar13);
            pauVar5 = local_c0;
            if (local_c0 != (undefined1 (*) [16])0x0) {
              LOCK();
              local_c0 = local_c0 + -1;
              *(long *)*local_c0 = *(long *)*local_c0 + -1;
              UNLOCK();
              if (*(long *)*local_c0 == 0) {
                local_c0 = (undefined1 (*) [16])0x0;
                Memory::free_static(pauVar5 + -1,false);
              }
            }
            local_c0 = (undefined1 (*) [16])0x0;
            CowData<float>::resize<false>((CowData<float> *)&local_c0,4);
            CowData<float>::_copy_on_write((CowData<float> *)&local_c0);
            if (local_c0 != (undefined1 (*) [16])0x0) {
              uVar2 = puVar12[1];
              *(undefined8 *)local_c0 = *puVar12;
              *(undefined8 *)((long)local_c0 + 8) = uVar2;
            }
            SurfaceTool::set_weights((Vector *)pRVar13);
            pauVar5 = local_c0;
            if (local_c0 != (undefined1 (*) [16])0x0) {
              LOCK();
              plVar1 = (long *)((long)local_c0 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_c0 = (undefined1 (*) [16])0x0;
                Memory::free_static((undefined8 *)((long)pauVar5 + -0x10),false);
              }
            }
            pRVar13 = local_d8;
            iVar17 = iVar17 + 1;
            if (iVar7 == iVar17) break;
            uVar8 = SpringBoneSimulator3D::get_joint_bone(iVar14,iVar18);
            Skeleton3D::get_bone_global_rest((int)local_a8);
            Skeleton3D::get_bone_global_rest(iVar15);
            SurfaceTool::set_color(local_b8._0_8_,local_b8._8_8_,pRVar13);
            SurfaceTool::add_vertex((Vector3 *)pRVar13);
            SurfaceTool::set_color(local_b8._0_8_,local_b8._8_8_,pRVar13);
            SurfaceTool::add_vertex((Vector3 *)pRVar13);
            fVar19 = (float)SpringBoneSimulator3D::get_joint_radius(iVar14,iVar18);
            draw_sphere((Ref *)&local_d8,(Basis *)&local_78,(Vector3 *)&local_54,fVar19,
                        (Color *)local_b8);
          } while( true );
        }
        iVar18 = iVar18 + 1;
      }
      local_c8 = 0;
      SurfaceTool::commit((Ref *)this,(ulong)pRVar4);
      Ref<ArrayMesh>::unref((Ref<ArrayMesh> *)&local_c8);
      Memory::free_static(puVar12,false);
      Memory::free_static(pauVar11,false);
      if (pRVar13 != (Ref *)0x0) {
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler((Object *)pRVar13);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pRVar13 + 0x140))(pRVar13);
            Memory::free_static(pRVar13,false);
          }
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return this;
      }
      goto LAB_00103d2d;
    }
    LocalVector<Vector3,unsigned_int,false,false>::resize(uVar16);
  }
  LocalVector<Vector3,unsigned_int,false,false>::resize(uVar16);
LAB_00103d2d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SpringBoneSimulator3DGizmoPlugin::redraw(EditorNode3DGizmo*) */

void __thiscall
SpringBoneSimulator3DGizmoPlugin::redraw
          (SpringBoneSimulator3DGizmoPlugin *this,EditorNode3DGizmo *param_1)

{
  char cVar1;
  int iVar2;
  SpringBoneSimulator3D *pSVar3;
  Skeleton3D *pSVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  Object *local_130;
  Object *local_128;
  Object *local_120;
  Object *local_118;
  Object *local_110;
  Transform3D local_108 [96];
  Transform3D local_a8 [104];
  long local_40;
  
  pSVar3 = *(SpringBoneSimulator3D **)(param_1 + 0x1f0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pSVar3 != (SpringBoneSimulator3D *)0x0) {
    pSVar3 = (SpringBoneSimulator3D *)
             __dynamic_cast(pSVar3,&Object::typeinfo,&SpringBoneSimulator3D::typeinfo,0);
  }
  (**(code **)(*(long *)param_1 + 0x160))(param_1);
  iVar2 = SpringBoneSimulator3D::get_setting_count();
  if (iVar2 != 0) {
    pSVar4 = (Skeleton3D *)SkeletonModifier3D::get_skeleton();
    if (pSVar4 != (Skeleton3D *)0x0) {
      get_joints_mesh((SpringBoneSimulator3DGizmoPlugin *)&local_130,pSVar4,pSVar3,
                      (bool)param_1[0x17c]);
      Node3D::get_global_transform();
      Node3D::get_global_transform();
      Transform3D::inverse();
      Transform3D::operator*(local_108,local_a8);
      Skeleton3D::create_skin_from_rest_transforms();
      Skeleton3D::register_skin((Ref *)&local_118);
      local_128 = (Object *)0x0;
      local_110 = (Object *)0x0;
      if (local_130 != (Object *)0x0) {
        pOVar5 = (Object *)__dynamic_cast(local_130,&Object::typeinfo,&Mesh::typeinfo,0);
        if (pOVar5 != (Object *)0x0) {
          local_110 = pOVar5;
          cVar1 = RefCounted::reference();
          if (cVar1 == '\0') {
            local_110 = (Object *)0x0;
          }
        }
      }
      EditorNode3DGizmo::add_mesh
                ((Ref *)param_1,(Ref *)&local_110,(Transform3D *)&local_128,(Ref *)local_108);
      if (local_110 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        pOVar5 = local_110;
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_110);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_128 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        pOVar5 = local_128;
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_128);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_118 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_118);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_118 + 0x140))(local_118);
            Memory::free_static(local_118,false);
          }
        }
      }
      if (local_120 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_120);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_120 + 0x140))(local_120);
            Memory::free_static(local_120,false);
          }
        }
      }
      if (local_130 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(local_130);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)local_130 + 0x140))(local_130);
            Memory::free_static(local_130,false);
          }
        }
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Resource::set_last_modified_time(unsigned long) */

void Resource::set_last_modified_time(ulong param_1)

{
  undefined8 in_RSI;
  
  *(undefined8 *)(param_1 + 0x198) = in_RSI;
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
  
  return (uint)CONCAT71(0x108f,in_RSI == &BaseMaterial3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,in_RSI == &Material::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
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



/* SpringBoneSimulator3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
SpringBoneSimulator3DGizmoPlugin::is_class_ptr(SpringBoneSimulator3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x108f,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SpringBoneSimulator3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 SpringBoneSimulator3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SpringBoneSimulator3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 SpringBoneSimulator3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SpringBoneSimulator3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void SpringBoneSimulator3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SpringBoneSimulator3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 SpringBoneSimulator3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SpringBoneSimulator3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
SpringBoneSimulator3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SpringBoneSimulator3DGizmoPlugin::_notificationv(int, bool) */

void SpringBoneSimulator3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* SpringBoneCollision3DGizmoPlugin::is_class_ptr(void*) const */

uint __thiscall
SpringBoneCollision3DGizmoPlugin::is_class_ptr(SpringBoneCollision3DGizmoPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x108f,(undefined4 *)param_1 ==
                               &EditorNode3DGizmoPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108e,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x108f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SpringBoneCollision3DGizmoPlugin::_getv(StringName const&, Variant&) const */

undefined8 SpringBoneCollision3DGizmoPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SpringBoneCollision3DGizmoPlugin::_setv(StringName const&, Variant const&) */

undefined8 SpringBoneCollision3DGizmoPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SpringBoneCollision3DGizmoPlugin::_validate_propertyv(PropertyInfo&) const */

void SpringBoneCollision3DGizmoPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SpringBoneCollision3DGizmoPlugin::_property_can_revertv(StringName const&) const */

undefined8 SpringBoneCollision3DGizmoPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SpringBoneCollision3DGizmoPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8
SpringBoneCollision3DGizmoPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SpringBoneCollision3DGizmoPlugin::_notificationv(int, bool) */

void SpringBoneCollision3DGizmoPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001087d0;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  return;
}



/* StandardMaterial3D::~StandardMaterial3D() */

void __thiscall StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001087d0;
  BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D *)this);
  operator_delete(this,0x558);
  return;
}



/* StandardMaterial3D::_setv(StringName const&, Variant const&) */

undefined8 StandardMaterial3D::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_set) {
    uVar1 = StandardMaterial3D::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* SpringBoneCollision3DGizmoPlugin::_get_class_namev() const */

undefined8 * SpringBoneCollision3DGizmoPlugin::_get_class_namev(void)

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
LAB_00104903:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104903;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "SpringBoneCollision3DGizmoPlugin");
      goto LAB_0010496e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "SpringBoneCollision3DGizmoPlugin");
LAB_0010496e:
  return &_get_class_namev()::_class_name_static;
}



/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */

void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1)

{
  Material::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010c008 == Material::_validate_property) {
    return;
  }
  BaseMaterial3D::_validate_property(param_1);
  return;
}



/* SpringBoneCollision3DGizmoPlugin::SelectionMaterials::~SelectionMaterials() */

void __thiscall
SpringBoneCollision3DGizmoPlugin::SelectionMaterials::~SelectionMaterials(SelectionMaterials *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        return;
      }
    }
  }
  return;
}



/* SpringBoneSimulator3DGizmoPlugin::SelectionMaterials::~SelectionMaterials() */

void __thiscall
SpringBoneSimulator3DGizmoPlugin::SelectionMaterials::~SelectionMaterials(SelectionMaterials *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)(this + 8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        return;
      }
    }
  }
  return;
}



/* SpringBoneSimulator3DGizmoPlugin::_get_class_namev() const */

undefined8 * SpringBoneSimulator3DGizmoPlugin::_get_class_namev(void)

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
LAB_00104ba3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104ba3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "SpringBoneSimulator3DGizmoPlugin");
      goto LAB_00104c0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "SpringBoneSimulator3DGizmoPlugin");
LAB_00104c0e:
  return &_get_class_namev()::_class_name_static;
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
LAB_00104c93:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104c93;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
      goto LAB_00104cfe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"StandardMaterial3D");
LAB_00104cfe:
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



/* void Ref<StandardMaterial3D>::instantiate<>() */

void __thiscall Ref<StandardMaterial3D>::instantiate<>(Ref<StandardMaterial3D> *this)

{
  char cVar1;
  BaseMaterial3D *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (BaseMaterial3D *)operator_new(0x558,"");
  BaseMaterial3D::BaseMaterial3D(this_00,false);
  *(undefined ***)this_00 = &PTR__initialize_classv_001087d0;
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
    this_00 = (BaseMaterial3D *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (BaseMaterial3D *)pOVar3) goto LAB_00104f95;
    *(BaseMaterial3D **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00104f95;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (BaseMaterial3D *)0x0) {
    return;
  }
LAB_00104f95:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<ShaderMaterial>::instantiate<>() */

void __thiscall Ref<ShaderMaterial>::instantiate<>(Ref<ShaderMaterial> *this)

{
  char cVar1;
  ShaderMaterial *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ShaderMaterial *)operator_new(0x348,"");
  ShaderMaterial::ShaderMaterial(this_00);
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
    this_00 = (ShaderMaterial *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ShaderMaterial *)pOVar3) goto LAB_001050c5;
    *(ShaderMaterial **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001050c5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ShaderMaterial *)0x0) {
    return;
  }
LAB_001050c5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<Shader>::instantiate<>() */

void __thiscall Ref<Shader>::instantiate<>(Ref<Shader> *this)

{
  char cVar1;
  Shader *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (Shader *)operator_new(0x2e8,"");
  Shader::Shader(this_00);
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
    this_00 = (Shader *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (Shader *)pOVar3) goto LAB_001051f5;
    *(Shader **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_001051f5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (Shader *)0x0) {
    return;
  }
LAB_001051f5:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* void Ref<SurfaceTool>::instantiate<>() */

void __thiscall Ref<SurfaceTool>::instantiate<>(Ref<SurfaceTool> *this)

{
  char cVar1;
  SurfaceTool *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (SurfaceTool *)operator_new(0x270,"");
  SurfaceTool::SurfaceTool(this_00);
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
    this_00 = (SurfaceTool *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (SurfaceTool *)pOVar3) goto LAB_00105325;
    *(SurfaceTool **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00105325;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (SurfaceTool *)0x0) {
    return;
  }
LAB_00105325:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
    return;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalVector<Vector3, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<Vector3,unsigned_int,false,false>::resize
          (LocalVector<Vector3,unsigned_int,false,false> *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  uint uVar4;
  
  uVar1 = *(uint *)this;
  if (uVar1 <= param_1) {
    if (param_1 <= uVar1) {
      return;
    }
    uVar4 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar1 = uVar4 >> 1 | uVar4;
      uVar1 = uVar1 | uVar1 >> 2;
      uVar1 = uVar1 | uVar1 >> 4;
      uVar1 = uVar1 | uVar1 >> 8;
      uVar1 = (uVar1 | uVar1 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar1;
      pvVar3 = *(void **)(this + 8);
      lVar2 = Memory::realloc_static(pvVar3,(ulong)uVar1 * 0xc,false);
      *(long *)(this + 8) = lVar2;
      if (lVar2 == 0) {
        resize((uint)pvVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      uVar1 = *(uint *)this;
      if (param_1 <= uVar1) goto LAB_001053f1;
    }
    memset((void *)(*(long *)(this + 8) + (ulong)uVar1 * 0xc),0,((ulong)(uVar4 - uVar1) * 3 + 3) * 4
          );
  }
LAB_001053f1:
  *(uint *)this = param_1;
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



/* StandardMaterial3D::_initialize_classv() */

void StandardMaterial3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BaseMaterial3D::initialize_class()::initialized == '\0') {
      if (Material::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          if (RefCounted::initialize_class()::initialized == '\0') {
            Object::initialize_class();
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Object");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"RefCounted");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            if ((code *)PTR__bind_methods_0010c018 != RefCounted::_bind_methods) {
              RefCounted::_bind_methods();
            }
            RefCounted::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"RefCounted");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Resource");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Resource::_bind_methods();
          Resource::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Resource");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Material");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Material::_bind_methods();
        Material::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Material");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BaseMaterial3D");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0010c010 != Material::_bind_methods) {
        BaseMaterial3D::_bind_methods();
      }
      BaseMaterial3D::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BaseMaterial3D");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"StandardMaterial3D");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* SpringBoneCollision3DGizmoPlugin::get_class() const */

void SpringBoneCollision3DGizmoPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* SpringBoneSimulator3DGizmoPlugin::get_class() const */

void SpringBoneSimulator3DGizmoPlugin::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00105cf3;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00105cf3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = String::operator==(param_1,"Object");
      return uVar5;
    }
  }
  else {
LAB_00105cf3:
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
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00105efb;
  }
  cVar4 = String::operator==(param_1,"Resource");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00105efb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BaseMaterial3D::is_class(String const&) const */

undefined8 __thiscall BaseMaterial3D::is_class(BaseMaterial3D *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00106023;
  }
  cVar4 = String::operator==(param_1,"BaseMaterial3D");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00106023;
    }
    cVar4 = String::operator==(param_1,"Material");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Resource::is_class((Resource *)this,param_1);
        return uVar5;
      }
      goto LAB_0010612e;
    }
  }
LAB_00106023:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010612e:
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
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_0010623b;
  }
  cVar4 = String::operator==(param_1,"StandardMaterial3D");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BaseMaterial3D::is_class((BaseMaterial3D *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010623b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SpringBoneSimulator3DGizmoPlugin::_initialize_classv() */

void SpringBoneSimulator3DGizmoPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"RefCounted");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_0010c018 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Resource");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Resource");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorNode3DGizmoPlugin");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((code *)PTR__bind_methods_0010c020 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_60 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"SpringBoneSimulator3DGizmoPlugin");
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SpringBoneCollision3DGizmoPlugin::_initialize_classv() */

void SpringBoneCollision3DGizmoPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorNode3DGizmoPlugin::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"RefCounted");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_0010c018 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Resource");
        StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
        if ((StringName::configured != '\0') && (local_68 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Resource");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"EditorNode3DGizmoPlugin");
      StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((code *)PTR__bind_methods_0010c020 != Resource::_bind_methods) {
        EditorNode3DGizmoPlugin::_bind_methods();
      }
      EditorNode3DGizmoPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorNode3DGizmoPlugin";
    local_60 = 0;
    local_50 = 0x17;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"SpringBoneCollision3DGizmoPlugin");
    StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00106b5f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00106b5f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = "Material";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Material";
  local_98 = 0;
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* EditorNode3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
EditorNode3DGizmoPlugin::_get_property_listv
          (EditorNode3DGizmoPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* SpringBoneCollision3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
SpringBoneCollision3DGizmoPlugin::_get_property_listv
          (SpringBoneCollision3DGizmoPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = "SpringBoneCollision3DGizmoPlugin";
  local_70 = 0x20;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SpringBoneCollision3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x20;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"SpringBoneCollision3DGizmoPlugin",false);
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



/* SpringBoneSimulator3DGizmoPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
SpringBoneSimulator3DGizmoPlugin::_get_property_listv
          (SpringBoneSimulator3DGizmoPlugin *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  local_78 = "SpringBoneSimulator3DGizmoPlugin";
  local_70 = 0x20;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SpringBoneSimulator3DGizmoPlugin";
  local_98 = 0;
  local_70 = 0x20;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"SpringBoneSimulator3DGizmoPlugin",false);
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



/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BaseMaterial3D::_get_property_listv(BaseMaterial3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
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
  }
  else {
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* SpringBoneCollision3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
SpringBoneCollision3DGizmoPlugin::is_class(SpringBoneCollision3DGizmoPlugin *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_001080c3;
  }
  cVar4 = String::operator==(param_1,"SpringBoneCollision3DGizmoPlugin");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_001080c3;
    }
    cVar4 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Resource::is_class((Resource *)this,param_1);
        return uVar5;
      }
      goto LAB_001081ce;
    }
  }
LAB_001080c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001081ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SpringBoneSimulator3DGizmoPlugin::is_class(String const&) const */

undefined8 __thiscall
SpringBoneSimulator3DGizmoPlugin::is_class(SpringBoneSimulator3DGizmoPlugin *this,String *param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_001082b3;
  }
  cVar4 = String::operator==(param_1,"SpringBoneSimulator3DGizmoPlugin");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_001082b3;
    }
    cVar4 = String::operator==(param_1,"EditorNode3DGizmoPlugin");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Resource::is_class((Resource *)this,param_1);
        return uVar5;
      }
      goto LAB_001083be;
    }
  }
LAB_001082b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001083be:
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



/* Ref<ArrayMesh>::unref() */

void __thiscall Ref<ArrayMesh>::unref(Ref<ArrayMesh> *this)

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



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<int>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010850e(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<float>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00108526(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<float>::_unref() */

void __thiscall CowData<float>::_unref(CowData<float> *this)

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



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

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



/* SpringBoneSimulator3DGizmoPlugin::selection_materials */

void SpringBoneSimulator3DGizmoPlugin::_GLOBAL__sub_I_selection_materials(void)

{
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    PopupMenu::base_property_helper._64_8_ = 0;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  __cxa_atexit(SelectionMaterials::~SelectionMaterials,&selection_materials,&__dso_handle);
  __cxa_atexit(SpringBoneCollision3DGizmoPlugin::SelectionMaterials::~SelectionMaterials,
               &SpringBoneCollision3DGizmoPlugin::selection_materials,&__dso_handle);
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
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SpringBoneSimulator3DGizmoPlugin::SelectionMaterials::~SelectionMaterials() */

void __thiscall
SpringBoneSimulator3DGizmoPlugin::SelectionMaterials::~SelectionMaterials(SelectionMaterials *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SpringBoneCollision3DGizmoPlugin::SelectionMaterials::~SelectionMaterials() */

void __thiscall
SpringBoneCollision3DGizmoPlugin::SelectionMaterials::~SelectionMaterials(SelectionMaterials *this)

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


