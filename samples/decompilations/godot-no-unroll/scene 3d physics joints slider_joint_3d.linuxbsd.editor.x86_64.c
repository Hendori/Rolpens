
/* SliderJoint3D::set_param(SliderJoint3D::Param, float) */

void __thiscall SliderJoint3D::set_param(undefined4 param_1,SliderJoint3D *this,uint param_3)

{
  SliderJoint3D SVar1;
  long *plVar2;
  
  if (0x15 < param_3) {
    _err_print_index_error
              ("set_param","scene/3d/physics/joints/slider_joint_3d.cpp",0x59,(ulong)param_3,0x16,
               "p_param","PARAM_MAX","",false,false);
    return;
  }
  SVar1 = this[0x560];
  *(undefined4 *)(this + (long)(int)param_3 * 4 + 0x564) = param_1;
  if (SVar1 == (SliderJoint3D)0x0) {
    Node3D::update_gizmos();
    return;
  }
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  (**(code **)(*plVar2 + 0x698))(param_1,plVar2,*(undefined8 *)(this + 0x538),param_3);
  Node3D::update_gizmos();
  return;
}



/* SliderJoint3D::_configure_joint(RID, PhysicsBody3D*, PhysicsBody3D*) */

void __thiscall
SliderJoint3D::_configure_joint(SliderJoint3D *this,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  Transform3D local_138 [48];
  Transform3D local_108 [48];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  Transform3D local_a8 [104];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node3D::get_global_transform();
  Node3D::get_global_transform();
  Transform3D::affine_inverse();
  Transform3D::operator*(local_108,local_138);
  Transform3D::orthonormalize();
  local_d8 = local_168;
  uStack_d0 = uStack_160;
  local_c8 = local_158;
  uStack_c0 = uStack_150;
  local_b8 = local_148;
  uStack_b0 = uStack_140;
  if (param_4 == 0) {
    Transform3D::orthonormalize();
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    uVar5 = 0;
    pcVar3 = *(code **)(*plVar2 + 0x690);
  }
  else {
    Node3D::get_global_transform();
    Transform3D::affine_inverse();
    Transform3D::operator*((Transform3D *)&local_198,local_a8);
    local_d8 = local_198;
    uStack_d0 = uStack_190;
    local_c8 = local_188;
    uStack_c0 = uStack_180;
    local_b8 = local_178;
    uStack_b0 = uStack_170;
    Transform3D::orthonormalize();
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    uVar5 = *(undefined8 *)(param_4 + 0x538);
    pcVar3 = *(code **)(*plVar2 + 0x690);
  }
  uVar6 = 0;
  (*pcVar3)(plVar2,param_2,*(undefined8 *)(param_3 + 0x538),local_108,uVar5,&local_d8);
  do {
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    uVar4 = uVar6 & 0xffffffff;
    lVar1 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    (**(code **)(*plVar2 + 0x698))(*(undefined4 *)(this + lVar1 + 0x564),plVar2,param_2,uVar4);
  } while (uVar6 != 0x16);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SliderJoint3D::get_param(SliderJoint3D::Param) const */

undefined4 __thiscall SliderJoint3D::get_param(SliderJoint3D *this,uint param_2)

{
  if (param_2 < 0x16) {
    return *(undefined4 *)(this + (long)(int)param_2 * 4 + 0x564);
  }
  _err_print_index_error
            ("get_param","scene/3d/physics/joints/slider_joint_3d.cpp",0x62,(ulong)param_2,0x16,
             "p_param","PARAM_MAX","",false,false);
  return 0;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SliderJoint3D::SliderJoint3D() */

void __thiscall SliderJoint3D::SliderJoint3D(SliderJoint3D *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  Joint3D::Joint3D((Joint3D *)this);
  uVar2 = _UNK_00108778;
  uVar1 = __LC8;
  *(undefined ***)this = &PTR__initialize_classv_00108458;
  uVar3 = _LC13;
  *(undefined8 *)(this + 0x564) = uVar1;
  *(undefined8 *)(this + 0x56c) = uVar2;
  uVar2 = _UNK_00108788;
  uVar1 = __LC9;
  *(undefined8 *)(this + 0x5b4) = uVar3;
  *(undefined8 *)(this + 0x574) = uVar1;
  *(undefined8 *)(this + 0x57c) = uVar2;
  uVar1 = _UNK_00108798;
  *(undefined8 *)(this + 0x584) = __LC10;
  *(undefined8 *)(this + 0x58c) = uVar1;
  uVar1 = _UNK_001087a8;
  *(undefined8 *)(this + 0x594) = __LC11;
  *(undefined8 *)(this + 0x59c) = uVar1;
  uVar1 = _UNK_001087b8;
  *(undefined8 *)(this + 0x5a4) = __LC12;
  *(undefined8 *)(this + 0x5ac) = uVar1;
  return;
}



/* SliderJoint3D::_bind_methods() */

void SliderJoint3D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long lVar5;
  long *plVar6;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  long *local_98;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_78 = PTR__LC25_001087d8;
  pcStack_70 = "value";
  auStack_50._8_8_ = auStack_50._0_8_;
  auStack_50._0_8_ = &pcStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_a8,(char ***)"set_param",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<SliderJoint3D,SliderJoint3D::Param,float>(set_param);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar6 = local_98 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_98[-1];
      lVar5 = 0;
      local_98 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar5);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "param";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_a8,(char ***)"get_param",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<SliderJoint3D,float,SliderJoint3D::Param>(get_param);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar6 = local_98 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_98[-1];
      lVar5 = 0;
      local_98 = (long *)0x0;
      plVar6 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar6 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar1 != lVar5);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "-1024,1024,0.01,suffix:m";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  local_e0 = 0;
  local_a8 = "linear_limit/upper_distance";
  local_a0 = 0x1b;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"SliderJoint3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "-1024,1024,0.01,suffix:m";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "linear_limit/lower_distance";
  local_e0 = 0;
  local_a0 = 0x1b;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_c0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"0.01,16.0,0.01");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"linear_limit/softness");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,2);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.01,16.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "linear_limit/restitution";
  local_e0 = 0;
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,3);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"0,16.0,0.01");
  local_e0 = 0;
  local_a8 = "linear_limit/damping";
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"SliderJoint3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,4);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.01,16.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "linear_motion/softness";
  local_e0 = 0;
  local_a0 = 0x16;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,5);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"0.01,16.0,0.01");
  local_a8 = "linear_motion/restitution";
  local_e0 = 0;
  local_a0 = 0x19;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,6);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0,16.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0xb;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "linear_motion/damping";
  local_e0 = 0;
  local_a0 = 0x15;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,7);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_c0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"0.01,16.0,0.01");
  local_a8 = "linear_ortho/softness";
  local_e0 = 0;
  local_a0 = 0x15;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"0.01,16.0,0.01");
  local_a8 = "linear_ortho/restitution";
  local_e0 = 0;
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,9);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"0,16.0,0.01");
  local_a8 = "linear_ortho/damping";
  local_e0 = 0;
  local_a0 = 0x14;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,10);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"-180,180,0.1,radians_as_degrees");
  local_a8 = "angular_limit/upper_angle";
  local_e0 = 0;
  local_a0 = 0x19;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0xb);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_c0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "-180,180,0.1,radians_as_degrees";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "angular_limit/lower_angle";
  local_e0 = 0;
  local_a0 = 0x19;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0xc);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.01,16.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"angular_limit/softness");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0xd);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_c0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.01,16.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_e0 = 0;
  local_a8 = "angular_limit/restitution";
  local_a0 = 0x19;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"SliderJoint3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0xe);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0,16.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0xb;
  String::parse_latin1((StrRange *)&local_d8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"angular_limit/damping");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0xf);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_c0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.01,16.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "angular_motion/softness";
  local_e0 = 0;
  local_a0 = 0x17;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0x10);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.01,16.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"angular_motion/restitution");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"SliderJoint3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0x11);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"0,16.0,0.01");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"angular_motion/damping");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"SliderJoint3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0x12);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.01,16.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"angular_ortho/softness");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"SliderJoint3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0x13);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if (((StringName::configured != '\0') &&
      ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_c0 != 0)))
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"0.01,16.0,0.01");
  local_e0 = 0;
  String::parse_latin1((String *)&local_e0,"angular_ortho/restitution");
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_e8 = 0;
  String::parse_latin1((String *)&local_e8,"SliderJoint3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0x14);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_d8 = 0;
  String::parse_latin1((String *)&local_d8,"0,16.0,0.01");
  local_a8 = "angular_ortho/damping";
  local_e0 = 0;
  local_a0 = 0x15;
  String::parse_latin1((StrRange *)&local_e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_a8,3,(StrRange *)&local_e0,1,(StrRange *)&local_d8,6,
             (StrRange *)&local_d0);
  local_b8 = "SliderJoint3D";
  local_e8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0x15);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_LIMIT_UPPER",false);
  local_a8 = "PARAM_LINEAR_LIMIT_UPPER";
  local_c8 = 0;
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_LIMIT_LOWER",false);
  local_a8 = "PARAM_LINEAR_LIMIT_LOWER";
  local_c8 = 0;
  local_a0 = 0x18;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,1,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"PARAM_LINEAR_LIMIT_SOFTNESS",false);
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"PARAM_LINEAR_LIMIT_SOFTNESS");
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_c0,(StringName *)&local_a8,2,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_LIMIT_RESTITUTION",false);
  local_a8 = "PARAM_LINEAR_LIMIT_RESTITUTION";
  local_c8 = 0;
  local_a0 = 0x1e;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,3,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_LIMIT_DAMPING",false);
  local_a8 = "PARAM_LINEAR_LIMIT_DAMPING";
  local_c8 = 0;
  local_a0 = 0x1a;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,4,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_MOTION_SOFTNESS",false);
  local_a8 = "PARAM_LINEAR_MOTION_SOFTNESS";
  local_c8 = 0;
  local_a0 = 0x1c;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,5,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_MOTION_RESTITUTION",false);
  local_a8 = "PARAM_LINEAR_MOTION_RESTITUTION";
  local_c8 = 0;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,6,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_MOTION_DAMPING",false);
  local_a8 = "PARAM_LINEAR_MOTION_DAMPING";
  local_c8 = 0;
  local_a0 = 0x1b;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,7,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_ORTHOGONAL_SOFTNESS",false);
  local_a8 = "PARAM_LINEAR_ORTHOGONAL_SOFTNESS";
  local_c8 = 0;
  local_a0 = 0x20;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,8,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_ORTHOGONAL_RESTITUTION",false);
  local_a8 = "PARAM_LINEAR_ORTHOGONAL_RESTITUTION";
  local_c8 = 0;
  local_a0 = 0x23;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,9,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_LINEAR_ORTHOGONAL_DAMPING",false);
  local_a8 = "PARAM_LINEAR_ORTHOGONAL_DAMPING";
  local_c8 = 0;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,10,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_LIMIT_UPPER",false);
  local_a8 = "PARAM_ANGULAR_LIMIT_UPPER";
  local_c8 = 0;
  local_a0 = 0x19;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0xb,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_LIMIT_LOWER",false);
  local_a8 = "PARAM_ANGULAR_LIMIT_LOWER";
  local_c8 = 0;
  local_a0 = 0x19;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0xc,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_LIMIT_SOFTNESS",false);
  local_a8 = "PARAM_ANGULAR_LIMIT_SOFTNESS";
  local_c8 = 0;
  local_a0 = 0x1c;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0xd,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_LIMIT_RESTITUTION",false);
  local_a8 = "PARAM_ANGULAR_LIMIT_RESTITUTION";
  local_c8 = 0;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0xe,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_LIMIT_DAMPING",false);
  local_a8 = "PARAM_ANGULAR_LIMIT_DAMPING";
  local_c8 = 0;
  local_a0 = 0x1b;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0xf,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_MOTION_SOFTNESS",false);
  local_a8 = "PARAM_ANGULAR_MOTION_SOFTNESS";
  local_c8 = 0;
  local_a0 = 0x1d;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_a8 = "SliderJoint3D";
  local_d0 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0x10,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_MOTION_RESTITUTION",false);
  local_a8 = "PARAM_ANGULAR_MOTION_RESTITUTION";
  local_c8 = 0;
  local_a0 = 0x20;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0x11,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_MOTION_DAMPING",false);
  local_a8 = "PARAM_ANGULAR_MOTION_DAMPING";
  local_c8 = 0;
  local_a0 = 0x1c;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0x12,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_ORTHOGONAL_SOFTNESS",false);
  local_a8 = "PARAM_ANGULAR_ORTHOGONAL_SOFTNESS";
  local_c8 = 0;
  local_a0 = 0x21;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0x13,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"PARAM_ANGULAR_ORTHOGONAL_RESTITUTION",false);
  local_c8 = 0;
  String::parse_latin1((String *)&local_c8,"PARAM_ANGULAR_ORTHOGONAL_RESTITUTION");
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_b8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_c0,(StringName *)&local_a8,0x14,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_ANGULAR_ORTHOGONAL_DAMPING",false);
  local_a8 = "PARAM_ANGULAR_ORTHOGONAL_DAMPING";
  local_c8 = 0;
  local_a0 = 0x20;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0x15,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"PARAM_MAX",false);
  local_a8 = "PARAM_MAX";
  local_c8 = 0;
  local_a0 = 9;
  String::parse_latin1((StrRange *)&local_c8);
  __constant_get_enum_name<SliderJoint3D::Param>((StringName *)&local_c0);
  local_d0 = 0;
  String::parse_latin1((String *)&local_d0,"SliderJoint3D");
  StringName::StringName((StringName *)&local_a8,(String *)&local_d0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_c0,(StringName *)&local_b8,0x16,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

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



/* Node3D::set_transform_gizmo_visible(bool) */

void __thiscall Node3D::set_transform_gizmo_visible(Node3D *this,bool param_1)

{
  this[0x518] = (Node3D)((byte)this[0x518] & 0xfb | param_1 * '\x04');
  return;
}



/* Node3D::is_transform_gizmo_visible() const */

byte __thiscall Node3D::is_transform_gizmo_visible(Node3D *this)

{
  return (byte)this[0x518] >> 2 & 1;
}



/* SliderJoint3D::is_class_ptr(void*) const */

uint __thiscall SliderJoint3D::is_class_ptr(SliderJoint3D *this,void *param_1)

{
  return (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &Joint3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1086,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1087,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SliderJoint3D::_getv(StringName const&, Variant&) const */

undefined8 SliderJoint3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SliderJoint3D::_setv(StringName const&, Variant const&) */

undefined8 SliderJoint3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MethodBindTRC<float, SliderJoint3D::Param>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<float,SliderJoint3D::Param>::_gen_argument_type
          (MethodBindTRC<float,SliderJoint3D::Param> *this,int param_1)

{
  return 3 - (uint)(param_1 == 0);
}



/* MethodBindTRC<float, SliderJoint3D::Param>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<float,SliderJoint3D::Param>::get_argument_meta
          (MethodBindTRC<float,SliderJoint3D::Param> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<SliderJoint3D::Param, float>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<SliderJoint3D::Param,float>::_gen_argument_type
          (MethodBindT<SliderJoint3D::Param,float> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 3 - (uint)(param_1 == 0);
  if (1 < (uint)param_1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* MethodBindT<SliderJoint3D::Param, float>::get_argument_meta(int) const */

char __thiscall
MethodBindT<SliderJoint3D::Param,float>::get_argument_meta
          (MethodBindT<SliderJoint3D::Param,float> *this,int param_1)

{
  return (param_1 == 1) * '\t';
}



/* MethodBindT<SliderJoint3D::Param, float>::~MethodBindT() */

void __thiscall
MethodBindT<SliderJoint3D::Param,float>::~MethodBindT(MethodBindT<SliderJoint3D::Param,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108648;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<SliderJoint3D::Param, float>::~MethodBindT() */

void __thiscall
MethodBindT<SliderJoint3D::Param,float>::~MethodBindT(MethodBindT<SliderJoint3D::Param,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00108648;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, SliderJoint3D::Param>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,SliderJoint3D::Param>::~MethodBindTRC
          (MethodBindTRC<float,SliderJoint3D::Param> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001086a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, SliderJoint3D::Param>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,SliderJoint3D::Param>::~MethodBindTRC
          (MethodBindTRC<float,SliderJoint3D::Param> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001086a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* SliderJoint3D::~SliderJoint3D() */

void __thiscall SliderJoint3D::~SliderJoint3D(SliderJoint3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108458;
  Joint3D::~Joint3D((Joint3D *)this);
  return;
}



/* SliderJoint3D::~SliderJoint3D() */

void __thiscall SliderJoint3D::~SliderJoint3D(SliderJoint3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00108458;
  Joint3D::~Joint3D((Joint3D *)this);
  operator_delete(this,0x5c0);
  return;
}



/* SliderJoint3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SliderJoint3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert((StringName *)param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* SliderJoint3D::_property_can_revertv(StringName const&) const */

undefined8 SliderJoint3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010b008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert((StringName *)param_1);
    return uVar1;
  }
  return 0;
}



/* SliderJoint3D::_validate_propertyv(PropertyInfo&) const */

void SliderJoint3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010b010 == Node::_validate_property) {
    return;
  }
  Node3D::_validate_property(param_1);
  return;
}



/* SliderJoint3D::_notificationv(int, bool) */

void __thiscall SliderJoint3D::_notificationv(SliderJoint3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010b018 != Node3D::_notification) {
      Joint3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0010b018 == Node3D::_notification) {
    return;
  }
  Joint3D::_notification(iVar1);
  return;
}



/* SliderJoint3D::_get_class_namev() const */

undefined8 * SliderJoint3D::_get_class_namev(void)

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
LAB_00104643:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00104643;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SliderJoint3D");
      goto LAB_001046ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SliderJoint3D");
LAB_001046ae:
  return &_get_class_namev()::_class_name_static;
}



/* SliderJoint3D::get_class() const */

void SliderJoint3D::get_class(void)

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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x104a0d);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC15;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_00104ada;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_60 = 0;
  local_48 = &_LC15;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00104ada:
  plVar4 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar4;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar1 = (long *)(*plVar5 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar2 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::is_class(String const&) const */

undefined8 __thiscall Node3D::is_class(Node3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
            if (lVar3 == 0) goto LAB_00104cdf;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar3 == lVar8;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar8 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_00104cdf:
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
    if (cVar6 != '\0') goto LAB_00104d93;
  }
  cVar6 = String::operator==(param_1,"Node3D");
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
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
          if (*(long *)(lVar5 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_00104e6b;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar3 == lVar8;
              if (bVar9) {
                *plVar1 = lVar3 + 1;
                lVar8 = lVar3;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_00104e6b:
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
      if (cVar6 != '\0') goto LAB_00104d93;
    }
    cVar6 = String::operator==(param_1,"Node");
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
        if (cVar6 != '\0') goto LAB_00104d93;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00104fa5;
    }
  }
LAB_00104d93:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104fa5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SliderJoint3D::is_class(String const&) const */

undefined8 __thiscall SliderJoint3D::is_class(SliderJoint3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010502f;
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
LAB_0010502f:
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
    if (cVar6 != '\0') goto LAB_001050e3;
  }
  cVar6 = String::operator==(param_1,"SliderJoint3D");
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
              if (lVar5 == 0) goto LAB_001051a3;
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
LAB_001051a3:
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
      if (cVar6 != '\0') goto LAB_001050e3;
    }
    cVar6 = String::operator==(param_1,"Joint3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node3D::is_class((Node3D *)this,param_1);
        return uVar7;
      }
      goto LAB_0010524c;
    }
  }
LAB_001050e3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010524c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<SliderJoint3D::Param, float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<SliderJoint3D::Param,float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70._0_8_ = 0x14;
    local_78 = "SliderJoint3D::Param";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_88,(String *)&local_90)
    ;
    StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
    local_98 = 0;
    local_a0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_a0,0,
               (CowData<char32_t> *)&local_98,0x10006,(StringName *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  else {
    if (in_EDX != 1) goto LAB_001052bd;
    local_88 = 0;
    local_90 = 0;
    local_78 = "";
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (char *)CONCAT44(local_78._4_4_,3);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_00105530:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00105530;
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_70._8_8_ == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_70._8_8_ = local_80;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
  }
  *puVar5 = local_78._0_4_;
  if (*(long *)(puVar5 + 2) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_70._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
LAB_001052bd:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC21;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC21;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010572d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010572d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010574f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010574f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node3D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3D";
  local_98 = 0;
  local_70 = 6;
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
LAB_00105aad:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105aad;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105acf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105acf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Joint3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Joint3D::_get_property_listv(Joint3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Node3D::_get_property_listv((Node3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Joint3D";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Joint3D";
  local_98 = 0;
  local_70 = 7;
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
LAB_00105e8d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105e8d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105eaf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105eaf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Joint3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node3D::_get_property_listv((Node3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SliderJoint3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SliderJoint3D::_get_property_listv(SliderJoint3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Joint3D::_get_property_listv((Joint3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SliderJoint3D";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SliderJoint3D";
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
  if (local_90 == 0) {
LAB_0010626d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010626d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010628f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010628f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SliderJoint3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Joint3D::_get_property_listv((Joint3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, SliderJoint3D::Param>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,SliderJoint3D::Param>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a8 = 0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    local_88 = 0;
    local_78 = "SliderJoint3D::Param";
    local_80 = 6;
    local_c0 = 0;
    local_70 = 0x14;
    String::parse_latin1((StrRange *)&local_c0);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_b8,(String *)&local_c0)
    ;
    StringName::StringName((StringName *)&local_b0,(String *)&local_b8,false);
    local_c8 = 0;
    local_d0 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_d0,0,
               (CowData<char32_t> *)&local_c8,0x10006,(StringName *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
    if (local_a0._0_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      local_a0._0_8_ = local_70;
      local_70 = 0;
    }
    if (local_a0._8_8_ != local_68) {
      StringName::unref();
      local_a0._8_8_ = local_68;
      local_68 = 0;
    }
    local_90 = CONCAT44(local_90._4_4_,local_60);
    if (local_88 != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_88 = local_58;
      local_58 = 0;
    }
    local_80 = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    uVar3 = local_a0._8_8_;
    uVar2 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(long *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_001067d2;
  }
  local_b0 = 0;
  local_70 = 0;
  local_78 = "";
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar4 = 3;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar4[10] = 6;
LAB_00106797:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b0);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00106797;
    StringName::StringName((StringName *)&local_78,(String *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_78;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_001067d2:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<SliderJoint3D, SliderJoint3D::Param, float>(void
   (SliderJoint3D::*)(SliderJoint3D::Param, float)) */

MethodBind *
create_method_bind<SliderJoint3D,SliderJoint3D::Param,float>(_func_void_Param_float *param_1)

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
  *(_func_void_Param_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00108648;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SliderJoint3D";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<SliderJoint3D, float, SliderJoint3D::Param>(float
   (SliderJoint3D::*)(SliderJoint3D::Param) const) */

MethodBind *
create_method_bind<SliderJoint3D,float,SliderJoint3D::Param>(_func_float_Param *param_1)

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
  *(_func_float_Param **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001086a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SliderJoint3D";
  local_30 = 0xd;
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



/* SliderJoint3D::_bind_methods() [clone .cold] */

void SliderJoint3D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SliderJoint3D::_initialize_classv() */

void SliderJoint3D::_initialize_classv(void)

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
    if (Joint3D::initialize_class()::initialized == '\0') {
      if (Node3D::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_0010b028 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node3D";
        local_70 = 0;
        local_50 = 6;
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
        Node3D::_bind_methods();
        Node3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node3D";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Joint3D";
      local_70 = 0;
      local_50 = 7;
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
      if ((code *)PTR__bind_methods_0010b020 != Node3D::_bind_methods) {
        Joint3D::_bind_methods();
      }
      Joint3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Joint3D";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "SliderJoint3D";
    local_70 = 0;
    local_50 = 0xd;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00107058) */
/* WARNING: Removing unreachable block (ram,0x001071ed) */
/* WARNING: Removing unreachable block (ram,0x001071f9) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<float, SliderJoint3D::Param>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<float,SliderJoint3D::Param>::validated_call
          (MethodBindTRC<float,SliderJoint3D::Param> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010737e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_0010737e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, SliderJoint3D::Param>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,SliderJoint3D::Param>::ptrcall
          (MethodBindTRC<float,SliderJoint3D::Param> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010755c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar3;
LAB_0010755c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<SliderJoint3D::Param, float>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<SliderJoint3D::Param,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001078d1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x00107759. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001078d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<SliderJoint3D::Param, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<SliderJoint3D::Param,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00107ac1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00107947. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00107ac1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, SliderJoint3D::Param>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<float,SliderJoint3D::Param>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  float fVar13;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC88,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107c88;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00107cd0;
LAB_00107cc0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00107cd0:
        uVar6 = 4;
        goto LAB_00107c7d;
      }
      if (in_R8D == 1) goto LAB_00107cc0;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC89;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    fVar13 = (float)(*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),uVar7 & 0xffffffff)
    ;
    Variant::Variant((Variant *)local_48,fVar13);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar6 = 3;
LAB_00107c7d:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00107c88:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, SliderJoint3D::Param,
   float>(__UnexistingClass*, void (__UnexistingClass::*)(SliderJoint3D::Param, float), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,SliderJoint3D::Param,float>
               (__UnexistingClass *param_1,_func_void_Param_float *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_00108005;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0010803d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00107f65;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00108058;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0010803d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00108058:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00107f65:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_Param_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC91;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC89;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00107fef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((char)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_00108005:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<SliderJoint3D::Param, float>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<SliderJoint3D::Param,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC88,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00108196;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,SliderJoint3D::Param,float>
            (p_Var2,(_func_void_Param_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00108196:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SliderJoint3D::~SliderJoint3D() */

void __thiscall SliderJoint3D::~SliderJoint3D(SliderJoint3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, SliderJoint3D::Param>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,SliderJoint3D::Param>::~MethodBindTRC
          (MethodBindTRC<float,SliderJoint3D::Param> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<SliderJoint3D::Param, float>::~MethodBindT() */

void __thiscall
MethodBindT<SliderJoint3D::Param,float>::~MethodBindT(MethodBindT<SliderJoint3D::Param,float> *this)

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


// This is taking way too long.