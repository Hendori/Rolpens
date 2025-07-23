/* VisualShaderNodeParticleBoxEmitter::get_input_port_count() const */

undefined8 VisualShaderNodeParticleBoxEmitter::get_input_port_count(void)

{
  return 1;
}



/* VisualShaderNodeParticleEmitter::get_output_port_type(int) const */

ulong __thiscall
VisualShaderNodeParticleEmitter::get_output_port_type
          (VisualShaderNodeParticleEmitter *this,int param_1)

{
  if (this[0x30b] == (VisualShaderNodeParticleEmitter)0x0) {
    return (ulong)(param_1 == 0) << 2;
  }
  return (ulong)(-(uint)(param_1 == 0) & 3);
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::has_output_port_preview(int) const */

undefined8 VisualShaderNodeParticleMultiplyByAxisAngle::has_output_port_preview(int param_1)

{
  return 0;
}



/* VisualShaderNodeParticleEmitter::is_mode_2d() const */

VisualShaderNodeParticleEmitter __thiscall
VisualShaderNodeParticleEmitter::is_mode_2d(VisualShaderNodeParticleEmitter *this)

{
  return this[0x30b];
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::is_show_prop_names() const */

undefined8 VisualShaderNodeParticleMultiplyByAxisAngle::is_show_prop_names(void)

{
  return 1;
}



/* VisualShaderNodeParticleConeVelocity::get_input_port_count() const */

undefined8 VisualShaderNodeParticleConeVelocity::get_input_port_count(void)

{
  return 2;
}



/* VisualShaderNodeParticleRingEmitter::get_input_port_type(int) const */

undefined8 VisualShaderNodeParticleRingEmitter::get_input_port_type(int param_1)

{
  return 0;
}



/* VisualShaderNodeParticleBoxEmitter::get_input_port_type(int) const */

int __thiscall
VisualShaderNodeParticleBoxEmitter::get_input_port_type
          (VisualShaderNodeParticleBoxEmitter *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 0) {
    iVar1 = 4 - (uint)(byte)this[0x30b];
  }
  return iVar1;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::get_input_port_count() const */

undefined8 VisualShaderNodeParticleMultiplyByAxisAngle::get_input_port_count(void)

{
  return 3;
}



/* VisualShaderNodeParticleMeshEmitter::get_output_port_count() const */

undefined8 VisualShaderNodeParticleMeshEmitter::get_output_port_count(void)

{
  return 6;
}



/* VisualShaderNodeParticleMeshEmitter::get_output_port_type(int) const */

uint __thiscall
VisualShaderNodeParticleMeshEmitter::get_output_port_type
          (VisualShaderNodeParticleMeshEmitter *this,int param_1)

{
  if (param_1 == 2) {
    return 4;
  }
  if (param_1 < 3) {
    if ((uint)param_1 < 2) {
      return 4 - (byte)this[0x30b];
    }
    return 0;
  }
  return -(uint)(param_1 - 4U < 2) & 3;
}



/* VisualShaderNodeParticleEmit::get_output_port_count() const */

undefined8 VisualShaderNodeParticleEmit::get_output_port_count(void)

{
  return 0;
}



/* VisualShaderNodeParticleAccelerator::get_output_port_name(int) const */

undefined8 VisualShaderNodeParticleAccelerator::get_output_port_name(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* VisualShaderNodeParticleMeshEmitter::is_use_all_surfaces() const */

VisualShaderNodeParticleMeshEmitter __thiscall
VisualShaderNodeParticleMeshEmitter::is_use_all_surfaces(VisualShaderNodeParticleMeshEmitter *this)

{
  return this[0x318];
}



/* VisualShaderNodeParticleMeshEmitter::get_surface_index() const */

undefined4 __thiscall
VisualShaderNodeParticleMeshEmitter::get_surface_index(VisualShaderNodeParticleMeshEmitter *this)

{
  return *(undefined4 *)(this + 0x31c);
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::get_input_port_type(int) const */

long __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::get_input_port_type
          (VisualShaderNodeParticleMultiplyByAxisAngle *this,int param_1)

{
  return (ulong)((uint)param_1 < 2) << 2;
}



/* VisualShaderNodeParticleConeVelocity::get_output_port_type(int) const */

long __thiscall
VisualShaderNodeParticleConeVelocity::get_output_port_type
          (VisualShaderNodeParticleConeVelocity *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* VisualShaderNodeParticleConeVelocity::get_input_port_type(int) const */

long __thiscall
VisualShaderNodeParticleConeVelocity::get_input_port_type
          (VisualShaderNodeParticleConeVelocity *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* VisualShaderNodeParticleRandomness::get_output_port_type(int) const */

ulong __thiscall
VisualShaderNodeParticleRandomness::get_output_port_type
          (VisualShaderNodeParticleRandomness *this,int param_1)

{
  int iVar1;
  ulong uVar2;
  
  iVar1 = *(int *)(this + 0x30c);
  if (iVar1 == 2) {
    return (ulong)(param_1 == 0) << 2;
  }
  if (iVar1 == 3) {
    uVar2 = (ulong)(-(uint)(param_1 == 0) & 5);
  }
  else {
    uVar2 = 0;
    if (iVar1 == 1) {
      return (ulong)(-(uint)(param_1 == 0) & 3);
    }
  }
  return uVar2;
}



/* VisualShaderNodeParticleRandomness::get_input_port_type(int) const */

int __thiscall
VisualShaderNodeParticleRandomness::get_input_port_type
          (VisualShaderNodeParticleRandomness *this,int param_1)

{
  int iVar1;
  
  iVar1 = 2;
  if (((param_1 != 0) && (iVar1 = 0, param_1 - 1U < 2)) && (*(int *)(this + 0x30c) - 1U < 3)) {
    iVar1 = *(int *)(this + 0x30c) + 2;
  }
  return iVar1;
}



/* VisualShaderNodeParticleRandomness::is_input_port_default(int, Shader::Mode) const */

bool VisualShaderNodeParticleRandomness::is_input_port_default(undefined8 param_1,int param_2)

{
  return param_2 == 0;
}



/* VisualShaderNodeParticleRandomness::get_op_type() const */

undefined4 __thiscall
VisualShaderNodeParticleRandomness::get_op_type(VisualShaderNodeParticleRandomness *this)

{
  return *(undefined4 *)(this + 0x30c);
}



/* VisualShaderNodeParticleAccelerator::get_input_port_type(int) const */

long __thiscall
VisualShaderNodeParticleAccelerator::get_input_port_type
          (VisualShaderNodeParticleAccelerator *this,int param_1)

{
  long lVar1;
  
  lVar1 = 4;
  if (param_1 != 0) {
    lVar1 = (ulong)(param_1 == 2) << 2;
  }
  return lVar1;
}



/* VisualShaderNodeParticleAccelerator::get_mode() const */

undefined4 __thiscall
VisualShaderNodeParticleAccelerator::get_mode(VisualShaderNodeParticleAccelerator *this)

{
  return *(undefined4 *)(this + 0x30c);
}



/* VisualShaderNodeParticleOutput::get_input_port_type(int) const */

ulong __thiscall
VisualShaderNodeParticleOutput::get_input_port_type
          (VisualShaderNodeParticleOutput *this,int param_1)

{
  int iVar1;
  
  switch(param_1) {
  case 0:
    return (ulong)((-(uint)(*(int *)(this + 0x30c) - 6U < 2) & 0xfffffffe) + 6);
  case 1:
    return (ulong)(1 < *(int *)(this + 0x30c) - 6U) << 2;
  case 2:
    return 4;
  case 3:
    return (ulong)(*(int *)(this + 0x30c) - 6U < 2) << 2;
  case 4:
    break;
  case 5:
    if (*(int *)(this + 0x30c) - 6U < 2) {
      return 7;
    }
    return (ulong)(*(int *)(this + 0x30c) == 4) << 2;
  case 6:
    return (ulong)(*(int *)(this + 0x30c) == 3) << 2;
  default:
    return 0;
  }
  iVar1 = *(int *)(this + 0x30c);
  if ((1 < iVar1 - 6U) && (iVar1 != 4)) {
    return (ulong)(iVar1 == 5) * 3 + 4;
  }
  return 0;
}



/* VisualShaderNodeParticleEmit::get_input_port_count() const */

undefined8 VisualShaderNodeParticleEmit::get_input_port_count(void)

{
  return 7;
}



/* VisualShaderNodeParticleEmit::get_input_port_type(int) const */

undefined4 __thiscall
VisualShaderNodeParticleEmit::get_input_port_type(VisualShaderNodeParticleEmit *this,int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((uint)param_1 < 6) {
    uVar1 = *(undefined4 *)(CSWTCH_2087 + (ulong)(uint)param_1 * 4);
  }
  return uVar1;
}



/* VisualShaderNodeParticleEmit::get_flags() const */

undefined4 __thiscall VisualShaderNodeParticleEmit::get_flags(VisualShaderNodeParticleEmit *this)

{
  return *(undefined4 *)(this + 0x30c);
}



/* VisualShaderNodeParticleEmit::is_input_port_default(int, Shader::Mode) const */

bool VisualShaderNodeParticleEmit::is_input_port_default(undefined8 param_1,int param_2)

{
  return param_2 - 1U < 6;
}



/* VisualShaderNodeParticleEmitter::set_mode_2d(bool) */

void __thiscall
VisualShaderNodeParticleEmitter::set_mode_2d(VisualShaderNodeParticleEmitter *this,bool param_1)

{
  if (this[0x30b] != (VisualShaderNodeParticleEmitter)param_1) {
    this[0x30b] = (VisualShaderNodeParticleEmitter)param_1;
    Resource::emit_changed();
    return;
  }
  return;
}



/* VisualShaderNodeParticleMeshEmitter::set_use_all_surfaces(bool) */

void __thiscall
VisualShaderNodeParticleMeshEmitter::set_use_all_surfaces
          (VisualShaderNodeParticleMeshEmitter *this,bool param_1)

{
  if (this[0x318] != (VisualShaderNodeParticleMeshEmitter)param_1) {
    this[0x318] = (VisualShaderNodeParticleMeshEmitter)param_1;
    Resource::emit_changed();
    return;
  }
  return;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::set_degrees_mode(bool) */

void __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::set_degrees_mode
          (VisualShaderNodeParticleMultiplyByAxisAngle *this,bool param_1)

{
  this[0x30b] = (VisualShaderNodeParticleMultiplyByAxisAngle)param_1;
  Resource::emit_changed();
  return;
}



/* VisualShaderNodeParticleEmit::set_flags(VisualShaderNodeParticleEmit::EmitFlags) */

void __thiscall
VisualShaderNodeParticleEmit::set_flags(VisualShaderNodeParticleEmit *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x30c) = param_2;
  Resource::emit_changed();
  return;
}



/* VisualShaderNodeParticleMeshEmitter::set_surface_index(int) */

void __thiscall
VisualShaderNodeParticleMeshEmitter::set_surface_index
          (VisualShaderNodeParticleMeshEmitter *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (-1 < param_1) {
    iVar1 = param_1;
  }
  if (*(long **)(this + 0x310) != (long *)0x0) {
    iVar1 = (**(code **)(**(long **)(this + 0x310) + 0x1c8))();
    if ((iVar1 < 1) || (iVar2 = (**(code **)(**(long **)(this + 0x310) + 0x1c8))(), param_1 < 0)) {
      iVar1 = 0;
      if (*(int *)(this + 0x31c) == 0) {
        return;
      }
      goto LAB_00100473;
    }
    iVar1 = iVar2 + -1;
    if (param_1 < iVar2 + -1) {
      iVar1 = param_1;
    }
  }
  if (*(int *)(this + 0x31c) == iVar1) {
    return;
  }
LAB_00100473:
  *(int *)(this + 0x31c) = iVar1;
  Resource::emit_changed();
  return;
}



/* VisualShaderNodeParticleSphereEmitter::generate_global_per_node(Shader::Mode, int) const */

String * VisualShaderNodeParticleSphereEmitter::generate_global_per_node(String *param_1)

{
  *(undefined8 *)param_1 = 0;
  String::operator+=(param_1,
                     "vec2 __get_random_point_in_circle(inout uint seed, float radius, float inner_radius) {\n"
                    );
  String::operator+=(param_1,
                     "\treturn __get_random_unit_vec2(seed) * __randf_range(seed, inner_radius, radius);\n"
                    );
  String::operator+=(param_1,"}\n\n");
  String::operator+=(param_1,
                     "vec3 __get_random_point_in_sphere(inout uint seed, float radius, float inner_radius) {\n"
                    );
  String::operator+=(param_1,
                     "\treturn __get_random_unit_vec3(seed) * __randf_range(seed, inner_radius, radius);\n"
                    );
  String::operator+=(param_1,"}\n\n");
  return param_1;
}



/* VisualShaderNodeParticleBoxEmitter::generate_global_per_node(Shader::Mode, int) const */

String * VisualShaderNodeParticleBoxEmitter::generate_global_per_node(String *param_1)

{
  *(undefined8 *)param_1 = 0;
  String::operator+=(param_1,"vec2 __get_random_point_in_box2d(inout uint seed, vec2 extents) {\n");
  String::operator+=(param_1,"\tvec2 half_extents = extents / 2.0;\n");
  String::operator+=(param_1,
                     "\treturn vec2(__randf_range(seed, -half_extents.x, half_extents.x), __randf_range(seed, -half_extents.y, half_extents.y));\n"
                    );
  String::operator+=(param_1,"}\n\n");
  String::operator+=(param_1,"vec3 __get_random_point_in_box3d(inout uint seed, vec3 extents) {\n");
  String::operator+=(param_1,"\tvec3 half_extents = extents / 2.0;\n");
  String::operator+=(param_1,
                     "\treturn vec3(__randf_range(seed, -half_extents.x, half_extents.x), __randf_range(seed, -half_extents.y, half_extents.y), __randf_range(seed, -half_extents.z, half_extents.z));\n"
                    );
  String::operator+=(param_1,"}\n\n");
  return param_1;
}



/* VisualShaderNodeParticleRingEmitter::generate_global_per_node(Shader::Mode, int) const */

String * VisualShaderNodeParticleRingEmitter::generate_global_per_node(String *param_1)

{
  *(undefined8 *)param_1 = 0;
  String::operator+=(param_1,
                     "vec2 __get_random_point_on_ring2d(inout uint seed, float radius, float inner_radius) {\n"
                    );
  String::operator+=(param_1,"\tfloat angle = __rand_from_seed(seed) * TAU;\n");
  String::operator+=(param_1,
                     "\tvec2 ring = vec2(sin(angle), cos(angle)) * __randf_range(seed, inner_radius, radius);\n"
                    );
  String::operator+=(param_1,"\treturn vec2(ring.x, ring.y);\n");
  String::operator+=(param_1,"}\n\n");
  String::operator+=(param_1,
                     "vec3 __get_random_point_on_ring3d(inout uint seed, float radius, float inner_radius, float height) {\n"
                    );
  String::operator+=(param_1,"\tfloat angle = __rand_from_seed(seed) * TAU;\n");
  String::operator+=(param_1,
                     "\tvec2 ring = vec2(sin(angle), cos(angle)) * __randf_range(seed, inner_radius, radius);\n"
                    );
  String::operator+=(param_1,
                     "\treturn vec3(ring.x, __randf_range(seed, min(0.0, height), max(0.0, height)), ring.y);\n"
                    );
  String::operator+=(param_1,"}\n\n");
  return param_1;
}



/* VisualShaderNodeParticleRandomness::generate_global_per_node(Shader::Mode, int) const */

String * VisualShaderNodeParticleRandomness::generate_global_per_node(String *param_1)

{
  *(undefined8 *)param_1 = 0;
  String::operator+=(param_1,"vec2 __randv2_range(inout uint seed, vec2 from, vec2 to) {\n");
  String::operator+=(param_1,
                     "\treturn vec2(__randf_range(seed, from.x, to.x), __randf_range(seed, from.y, to.y));\n"
                    );
  String::operator+=(param_1,"}\n\n");
  String::operator+=(param_1,"vec3 __randv3_range(inout uint seed, vec3 from, vec3 to) {\n");
  String::operator+=(param_1,
                     "\treturn vec3(__randf_range(seed, from.x, to.x), __randf_range(seed, from.y, to.y), __randf_range(seed, from.z, to.z));\n"
                    );
  String::operator+=(param_1,"}\n\n");
  String::operator+=(param_1,"vec4 __randv4_range(inout uint seed, vec4 from, vec4 to) {\n");
  String::operator+=(param_1,
                     "\treturn vec4(__randf_range(seed, from.x, to.x), __randf_range(seed, from.y, to.y), __randf_range(seed, from.z, to.z), __randf_range(seed, from.w, to.w));\n"
                    );
  String::operator+=(param_1,"}\n\n");
  return param_1;
}



/* VisualShaderNodeParticleBoxEmitter::set_mode_2d(bool) */

void __thiscall
VisualShaderNodeParticleBoxEmitter::set_mode_2d
          (VisualShaderNodeParticleBoxEmitter *this,bool param_1)

{
  code *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_74;
  undefined4 local_6c;
  int local_68 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0x30b] == (VisualShaderNodeParticleBoxEmitter)param_1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    pcVar1 = *(code **)(*(long *)this + 0x1f0);
    iVar2 = (int)local_68;
    if (param_1) {
      VisualShaderNode::get_input_port_default_value(iVar2);
      local_74 = 0;
      Variant::Variant((Variant *)local_48,(Vector2 *)&local_74);
    }
    else {
      VisualShaderNode::get_input_port_default_value(iVar2);
      local_74 = 0;
      local_6c = 0;
      Variant::Variant((Variant *)local_48,(Vector3 *)&local_74);
    }
    (*pcVar1)(this,0,local_48,local_68);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    this[0x30b] = (VisualShaderNodeParticleBoxEmitter)param_1;
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::emit_changed();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VisualShaderNodeParticleRandomness::set_op_type(VisualShaderNodeParticleRandomness::OpType) */

void __thiscall
VisualShaderNodeParticleRandomness::set_op_type
          (VisualShaderNodeParticleRandomness *this,uint param_2)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  long in_FS_OFFSET;
  code *local_90;
  undefined8 local_88;
  ulong uStack_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 4) {
    if (*(uint *)(this + 0x30c) != param_2) {
      pcVar2 = *(code **)(*(long *)this + 0x1f0);
      iVar3 = (int)local_78;
      if (param_2 == 2) {
        VisualShaderNode::get_input_port_default_value(iVar3);
        local_88 = 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        Variant::Variant((Variant *)local_58,(Vector3 *)&local_88);
        (*pcVar2)(this,1,(Variant *)local_58,local_78);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_90 = *(code **)(*(long *)this + 0x1f0);
        VisualShaderNode::get_input_port_default_value(iVar3);
        local_88 = 0;
        uStack_80 = uStack_80 & 0xffffffff00000000;
        Variant::Variant((Variant *)local_58,(Vector3 *)&local_88);
LAB_0010097f:
        (*local_90)(this,2,local_58,local_78);
        cVar1 = Variant::needs_deinit[local_58[0]];
      }
      else {
        if (param_2 == 3) {
          VisualShaderNode::get_input_port_default_value(iVar3);
          local_88 = __LC30;
          uStack_80 = _LC302;
          Variant::Variant((Variant *)local_58,(Quaternion *)&local_88);
          (*pcVar2)(this,1,(Variant *)local_58,local_78);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_90 = *(code **)(*(long *)this + 0x1f0);
          VisualShaderNode::get_input_port_default_value(iVar3);
          local_88 = __LC30;
          uStack_80 = _LC302;
          Variant::Variant((Variant *)local_58,(Quaternion *)&local_88);
          goto LAB_0010097f;
        }
        if (param_2 == 1) {
          VisualShaderNode::get_input_port_default_value(iVar3);
          local_88 = 0;
          Variant::Variant((Variant *)local_58,(Vector2 *)&local_88);
          (*pcVar2)(this,1,(Variant *)local_58,local_78);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_90 = *(code **)(*(long *)this + 0x1f0);
          VisualShaderNode::get_input_port_default_value(iVar3);
          local_88 = 0;
          Variant::Variant((Variant *)local_58,(Vector2 *)&local_88);
          goto LAB_0010097f;
        }
        VisualShaderNode::get_input_port_default_value(iVar3);
        Variant::Variant((Variant *)local_58,0.0);
        (*pcVar2)(this,1,(Variant *)local_58,local_78);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*(long *)this + 0x1f0);
        VisualShaderNode::get_input_port_default_value(iVar3);
        Variant::Variant((Variant *)local_58,0.0);
        (*pcVar2)(this,2,(Variant *)local_58,local_78);
        cVar1 = Variant::needs_deinit[local_58[0]];
      }
      if (cVar1 != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      *(uint *)(this + 0x30c) = param_2;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Resource::emit_changed();
        return;
      }
      goto LAB_00100ccd;
    }
  }
  else {
    _err_print_index_error
              ("set_op_type","scene/resources/visual_shader_particle_nodes.cpp",0x3f4,
               (long)(int)param_2,4,"int(p_op_type)","int(OP_TYPE_MAX)","",false,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100ccd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleEmit::is_generate_input_var(int) const */

undefined8 __thiscall
VisualShaderNodeParticleEmit::is_generate_input_var(VisualShaderNodeParticleEmit *this,int param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    return 1;
  }
  uVar1 = VisualShaderNode::is_input_port_connected((int)this);
  return uVar1;
}



/* VisualShaderNodeParticleAccelerator::set_mode(VisualShaderNodeParticleAccelerator::Mode) */

void __thiscall
VisualShaderNodeParticleAccelerator::set_mode
          (VisualShaderNodeParticleAccelerator *this,uint param_2)

{
  if (2 < param_2) {
    _err_print_index_error
              ("set_mode","scene/resources/visual_shader_particle_nodes.cpp",0x475,
               (long)(int)param_2,3,"int(p_mode)","int(MODE_MAX)","",false,false);
    return;
  }
  if (*(uint *)(this + 0x30c) != param_2) {
    *(uint *)(this + 0x30c) = param_2;
    Resource::emit_changed();
    return;
  }
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



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector2>::_copy_on_write(CowData<Vector2> *this)

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
  __n = lVar2 * 8;
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



/* VisualShaderNodeParticleMultiplyByAxisAngle::is_degrees_mode() const */

VisualShaderNodeParticleMultiplyByAxisAngle __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::is_degrees_mode
          (VisualShaderNodeParticleMultiplyByAxisAngle *this)

{
  return this[0x30b];
}



/* VisualShaderNodeParticleMeshEmitter::get_mesh() const */

void VisualShaderNodeParticleMeshEmitter::get_mesh(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x310) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x310);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* List<Ref<Texture>, DefaultAllocator>::push_back(Ref<Texture> const&) [clone .isra.0] */

void __thiscall
List<Ref<Texture>,DefaultAllocator>::push_back
          (List<Ref<Texture>,DefaultAllocator> *this,Ref *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  pauVar4 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
  *pauVar4 = (undefined1  [16])0x0;
  pauVar4[1] = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    *(long *)*pauVar4 = *(long *)param_1;
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *(undefined8 *)*pauVar4 = 0;
    }
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(*pauVar4 + 8) = 0;
  *(long **)(pauVar4[1] + 8) = plVar1;
  *(long *)pauVar4[1] = lVar2;
  if (lVar2 != 0) {
    *(undefined1 (**) [16])(lVar2 + 8) = pauVar4;
  }
  plVar1[1] = (long)pauVar4;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)pauVar4;
  return;
}



/* VisualShaderNodeParticleConeVelocity::get_caption() const */

VisualShaderNodeParticleConeVelocity * __thiscall
VisualShaderNodeParticleConeVelocity::get_caption(VisualShaderNodeParticleConeVelocity *this)

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



/* VisualShaderNodeParticleMultiplyByAxisAngle::get_output_port_name(int) const */

undefined8 VisualShaderNodeParticleMultiplyByAxisAngle::get_output_port_name(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRingEmitter::get_caption() const */

VisualShaderNodeParticleRingEmitter * __thiscall
VisualShaderNodeParticleRingEmitter::get_caption(VisualShaderNodeParticleRingEmitter *this)

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



/* VisualShaderNodeParticleEmit::get_caption() const */

VisualShaderNodeParticleEmit * __thiscall
VisualShaderNodeParticleEmit::get_caption(VisualShaderNodeParticleEmit *this)

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



/* VisualShaderNodeParticleRandomness::get_caption() const */

VisualShaderNodeParticleRandomness * __thiscall
VisualShaderNodeParticleRandomness::get_caption(VisualShaderNodeParticleRandomness *this)

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



/* VisualShaderNodeParticleMultiplyByAxisAngle::get_caption() const */

VisualShaderNodeParticleMultiplyByAxisAngle * __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::get_caption
          (VisualShaderNodeParticleMultiplyByAxisAngle *this)

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



/* VisualShaderNodeParticleMeshEmitter::get_caption() const */

VisualShaderNodeParticleMeshEmitter * __thiscall
VisualShaderNodeParticleMeshEmitter::get_caption(VisualShaderNodeParticleMeshEmitter *this)

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



/* VisualShaderNodeParticleRandomness::get_output_port_name(int) const */

undefined8 VisualShaderNodeParticleRandomness::get_output_port_name(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleBoxEmitter::get_caption() const */

VisualShaderNodeParticleBoxEmitter * __thiscall
VisualShaderNodeParticleBoxEmitter::get_caption(VisualShaderNodeParticleBoxEmitter *this)

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



/* VisualShaderNodeParticleAccelerator::get_caption() const */

VisualShaderNodeParticleAccelerator * __thiscall
VisualShaderNodeParticleAccelerator::get_caption(VisualShaderNodeParticleAccelerator *this)

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



/* VisualShaderNodeParticleSphereEmitter::get_caption() const */

VisualShaderNodeParticleSphereEmitter * __thiscall
VisualShaderNodeParticleSphereEmitter::get_caption(VisualShaderNodeParticleSphereEmitter *this)

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



/* VisualShaderNodeParticleEmitter::get_output_port_name(int) const */

undefined8 VisualShaderNodeParticleEmitter::get_output_port_name(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleConeVelocity::get_output_port_name(int) const */

undefined8 VisualShaderNodeParticleConeVelocity::get_output_port_name(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleBoxEmitter::get_input_port_name(int) const */

undefined8 VisualShaderNodeParticleBoxEmitter::get_input_port_name(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRandomness::get_input_port_name(int) const */

StrRange * VisualShaderNodeParticleRandomness::get_input_port_name(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  StrRange *pSVar2;
  long in_FS_OFFSET;
  
  pSVar2 = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)pSVar2 = 0;
  if ((in_EDX == 1) || (in_EDX == 2)) {
    String::parse_latin1(pSVar2);
  }
  else if (in_EDX == 0) {
    String::parse_latin1(pSVar2);
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pSVar2;
}



/* VisualShaderNodeParticleSphereEmitter::get_input_port_name(int) const */

undefined8 VisualShaderNodeParticleSphereEmitter::get_input_port_name(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  else if (in_EDX == 1) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleConeVelocity::get_input_port_name(int) const */

undefined8 VisualShaderNodeParticleConeVelocity::get_input_port_name(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  else if (in_EDX == 1) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleAccelerator::get_input_port_name(int) const */

undefined8 VisualShaderNodeParticleAccelerator::get_input_port_name(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  if (in_EDX == 0) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  else if (in_EDX == 1) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  else if (in_EDX == 2) {
    String::parse_latin1((StrRange *)CONCAT44(in_register_0000003c,param_1));
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRingEmitter::get_input_port_name(int) const */

StrRange * VisualShaderNodeParticleRingEmitter::get_input_port_name(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  StrRange *pSVar2;
  long in_FS_OFFSET;
  
  pSVar2 = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)pSVar2 = 0;
  if (in_EDX != 0) {
    if (in_EDX == 1) {
      String::parse_latin1(pSVar2);
      goto LAB_00101a48;
    }
    if (in_EDX != 2) goto LAB_00101a48;
  }
  String::parse_latin1(pSVar2);
LAB_00101a48:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pSVar2;
}



/* VisualShaderNodeParticleMeshEmitter::get_output_port_name(int) const */

StrRange * VisualShaderNodeParticleMeshEmitter::get_output_port_name(int param_1)

{
  long lVar1;
  uint in_EDX;
  undefined4 in_register_0000003c;
  StrRange *pSVar2;
  long in_FS_OFFSET;
  
  pSVar2 = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (5 < in_EDX) {
    *(undefined8 *)pSVar2 = 0;
    goto LAB_00101b20;
  }
  *(undefined8 *)pSVar2 = 0;
  switch(in_EDX) {
  case 0:
    String::parse_latin1(pSVar2);
    break;
  case 1:
    String::parse_latin1(pSVar2);
    break;
  case 2:
    goto LAB_00101ba7;
  case 3:
LAB_00101ba7:
    String::parse_latin1(pSVar2);
    break;
  case 4:
    String::parse_latin1(pSVar2);
    break;
  case 5:
    String::parse_latin1(pSVar2);
  }
LAB_00101b20:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::get_input_port_name(int) const */

StrRange * VisualShaderNodeParticleMultiplyByAxisAngle::get_input_port_name(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  StrRange *pSVar2;
  long in_FS_OFFSET;
  
  pSVar2 = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    *(undefined8 *)pSVar2 = 0;
    String::parse_latin1(pSVar2);
  }
  else if (in_EDX == 1) {
    *(undefined8 *)pSVar2 = 0;
    String::parse_latin1(pSVar2);
  }
  else if (in_EDX == 2) {
    *(undefined8 *)pSVar2 = 0;
    String::parse_latin1(pSVar2);
  }
  else {
    *(undefined8 *)pSVar2 = 0;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleEmit::get_input_port_name(int) const */

StrRange * VisualShaderNodeParticleEmit::get_input_port_name(int param_1)

{
  long lVar1;
  uint in_EDX;
  undefined4 in_register_0000003c;
  StrRange *pSVar2;
  long in_FS_OFFSET;
  
  pSVar2 = (StrRange *)CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (6 < in_EDX) {
    *(undefined8 *)pSVar2 = 0;
    goto LAB_00101d40;
  }
  *(undefined8 *)pSVar2 = 0;
  switch(in_EDX) {
  case 0:
    goto LAB_00101d87;
  case 1:
LAB_00101d87:
    String::parse_latin1(pSVar2);
    break;
  case 2:
    String::parse_latin1(pSVar2);
    break;
  case 3:
    goto LAB_00101de7;
  case 4:
LAB_00101de7:
    String::parse_latin1(pSVar2);
    break;
  case 5:
    String::parse_latin1(pSVar2);
    break;
  case 6:
    String::parse_latin1(pSVar2);
  }
LAB_00101d40:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pSVar2;
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



/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */

void __thiscall
List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar3) [16];
  
  if (*(long *)this == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
  *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(this_00 + 8) = 0;
  *(long **)(this_00 + 0x18) = plVar1;
  *(long *)(this_00 + 0x10) = lVar2;
  if (lVar2 != 0) {
    *(CowData<char32_t> **)(lVar2 + 8) = this_00;
  }
  plVar1[1] = (long)this_00;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)this_00;
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



/* VisualShaderNodeParticleEmitter::VisualShaderNodeParticleEmitter() */

void __thiscall
VisualShaderNodeParticleEmitter::VisualShaderNodeParticleEmitter
          (VisualShaderNodeParticleEmitter *this)

{
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  this[0x30b] = (VisualShaderNodeParticleEmitter)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00124d48;
  return;
}



/* VisualShaderNodeParticleSphereEmitter::VisualShaderNodeParticleSphereEmitter() */

void __thiscall
VisualShaderNodeParticleSphereEmitter::VisualShaderNodeParticleSphereEmitter
          (VisualShaderNodeParticleSphereEmitter *this)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_68 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  *(undefined ***)this = &PTR__initialize_classv_00125010;
  this[0x30b] = (VisualShaderNodeParticleSphereEmitter)0x0;
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  Variant::Variant((Variant *)local_68,_LC95);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x0,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  Variant::Variant((Variant *)local_68,0.0);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x1,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleBoxEmitter::VisualShaderNodeParticleBoxEmitter() */

void __thiscall
VisualShaderNodeParticleBoxEmitter::VisualShaderNodeParticleBoxEmitter
          (VisualShaderNodeParticleBoxEmitter *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined4 local_60;
  int local_58 [8];
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  this[0x30b] = (VisualShaderNodeParticleBoxEmitter)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001252d8;
  local_30 = (undefined1  [16])0x0;
  local_68 = _LC97;
  local_38 = 0;
  local_60 = 0x3f800000;
  Variant::Variant((Variant *)local_58,(Vector3 *)&local_68);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x0,(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_38];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_38];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRingEmitter::VisualShaderNodeParticleRingEmitter() */

void __thiscall
VisualShaderNodeParticleRingEmitter::VisualShaderNodeParticleRingEmitter
          (VisualShaderNodeParticleRingEmitter *this)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_68 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  *(undefined ***)this = &PTR__initialize_classv_001255a0;
  this[0x30b] = (VisualShaderNodeParticleRingEmitter)0x0;
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  Variant::Variant((Variant *)local_68,_LC95);
  iVar2 = (int)this;
  VisualShaderNode::set_input_port_default_value(iVar2,(Variant *)0x0,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  Variant::Variant((Variant *)local_68,0.0);
  VisualShaderNode::set_input_port_default_value(iVar2,(Variant *)0x1,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  Variant::Variant((Variant *)local_68,0.0);
  VisualShaderNode::set_input_port_default_value(iVar2,(Variant *)0x2,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::VisualShaderNodeParticleMultiplyByAxisAngle() */

void __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::VisualShaderNodeParticleMultiplyByAxisAngle
          (VisualShaderNodeParticleMultiplyByAxisAngle *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined4 local_70;
  int local_68 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  this[0x30b] = (VisualShaderNodeParticleMultiplyByAxisAngle)0x1;
  *(undefined ***)this = &PTR__initialize_classv_00125b30;
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  local_78 = 0x3f800000;
  local_70 = 0;
  Variant::Variant((Variant *)local_68,(Vector3 *)&local_78);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x1,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  Variant::Variant((Variant *)local_68,0.0);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x2,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleConeVelocity::VisualShaderNodeParticleConeVelocity() */

void __thiscall
VisualShaderNodeParticleConeVelocity::VisualShaderNodeParticleConeVelocity
          (VisualShaderNodeParticleConeVelocity *this)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined4 local_70;
  int local_68 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  local_40 = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00125df0;
  local_48 = 0;
  local_78 = 0x3f800000;
  local_70 = 0;
  Variant::Variant((Variant *)local_68,(Vector3 *)&local_78);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x0,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  Variant::Variant((Variant *)local_68,_LC106);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x1,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  this[0x308] = (VisualShaderNodeParticleConeVelocity)0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleRandomness::VisualShaderNodeParticleRandomness() */

void __thiscall
VisualShaderNodeParticleRandomness::VisualShaderNodeParticleRandomness
          (VisualShaderNodeParticleRandomness *this)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_68 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  *(undefined ***)this = &PTR__initialize_classv_001260b0;
  *(undefined4 *)(this + 0x30c) = 0;
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  Variant::Variant((Variant *)local_68,_LC107);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x1,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  Variant::Variant((Variant *)local_68,_LC108);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x2,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleAccelerator::VisualShaderNodeParticleAccelerator() */

void __thiscall
VisualShaderNodeParticleAccelerator::VisualShaderNodeParticleAccelerator
          (VisualShaderNodeParticleAccelerator *this)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined4 local_70;
  int local_68 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  local_40 = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_00126370;
  local_78 = _LC97;
  *(undefined4 *)(this + 0x30c) = 0;
  local_48 = 0;
  local_70 = 0x3f800000;
  Variant::Variant((Variant *)local_68,(Vector3 *)&local_78);
  iVar2 = (int)this;
  VisualShaderNode::set_input_port_default_value(iVar2,(Variant *)0x0,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  Variant::Variant((Variant *)local_68,0.0);
  VisualShaderNode::set_input_port_default_value(iVar2,(Variant *)0x1,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  local_40 = (undefined1  [16])0x0;
  local_78 = _LC109;
  local_48 = 0;
  local_70 = 0;
  Variant::Variant((Variant *)local_68,(Vector3 *)&local_78);
  VisualShaderNode::set_input_port_default_value(iVar2,(Variant *)0x2,(Variant *)local_68);
  if (Variant::needs_deinit[local_68[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_48];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  this[0x308] = (VisualShaderNodeParticleAccelerator)0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleOutput::VisualShaderNodeParticleOutput() */

void __thiscall
VisualShaderNodeParticleOutput::VisualShaderNodeParticleOutput(VisualShaderNodeParticleOutput *this)

{
  VisualShaderNodeOutput::VisualShaderNodeOutput((VisualShaderNodeOutput *)this);
  *(undefined ***)this = &PTR__initialize_classv_00126630;
  return;
}



/* VisualShaderNodeParticleEmit::add_flag(VisualShaderNodeParticleEmit::EmitFlags) */

void __thiscall
VisualShaderNodeParticleEmit::add_flag(VisualShaderNodeParticleEmit *this,uint param_2)

{
  *(uint *)(this + 0x30c) = *(uint *)(this + 0x30c) | param_2;
  Resource::emit_changed();
  return;
}



/* VisualShaderNodeParticleEmit::has_flag(VisualShaderNodeParticleEmit::EmitFlags) const */

bool __thiscall
VisualShaderNodeParticleEmit::has_flag(VisualShaderNodeParticleEmit *this,uint param_2)

{
  return (param_2 & *(uint *)(this + 0x30c)) != 0;
}



/* VisualShaderNodeParticleEmit::VisualShaderNodeParticleEmit() */

void __thiscall
VisualShaderNodeParticleEmit::VisualShaderNodeParticleEmit(VisualShaderNodeParticleEmit *this)

{
  char cVar1;
  long in_FS_OFFSET;
  int local_58 [8];
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  *(undefined ***)this = &PTR__initialize_classv_001268f0;
  *(undefined4 *)(this + 0x30c) = 0x1f;
  local_30 = (undefined1  [16])0x0;
  local_38 = 0;
  Variant::Variant((Variant *)local_58,true);
  VisualShaderNode::set_input_port_default_value((int)this,(Variant *)0x0,(Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_38];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_38];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::set_mesh(Ref<Mesh>) */

void __thiscall
VisualShaderNodeParticleMeshEmitter::set_mesh
          (VisualShaderNodeParticleMeshEmitter *this,long *param_2)

{
  Callable *pCVar1;
  Callable *pCVar2;
  Object *pOVar3;
  char cVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  VisualShaderNodeParticleMeshEmitter aVStack_48 [24];
  long local_30;
  
  pCVar1 = *(Callable **)(this + 0x310);
  pCVar2 = (Callable *)*param_2;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pCVar2 == pCVar1) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_00102dcb;
  }
  if (pCVar1 == (Callable *)0x0) {
    *(Callable **)(this + 0x310) = pCVar2;
    if (pCVar2 != (Callable *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') goto LAB_00102d08;
      *(undefined8 *)(this + 0x310) = 0;
    }
  }
  else {
    create_custom_callable_function_pointer<VisualShaderNodeParticleMeshEmitter>
              (aVStack_48,(char *)this,
               (_func_void *)"&VisualShaderNodeParticleMeshEmitter::_update_textures");
    Resource::disconnect_changed(pCVar1);
    Callable::~Callable((Callable *)aVStack_48);
    pOVar3 = (Object *)*param_2;
    pOVar5 = *(Object **)(this + 0x310);
    if (pOVar3 != pOVar5) {
      *(Object **)(this + 0x310) = pOVar3;
      if (pOVar3 == (Object *)0x0) {
LAB_00102da3:
        if (pOVar5 == (Object *)0x0) goto LAB_00102d48;
      }
      else {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0x310) = 0;
          goto LAB_00102da3;
        }
        if (pOVar5 == (Object *)0x0) goto LAB_00102d08;
      }
      cVar4 = RefCounted::unreference();
      if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar5), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
LAB_00102d08:
      pOVar5 = *(Object **)(this + 0x310);
    }
    if (pOVar5 != (Object *)0x0) {
      create_custom_callable_function_pointer<VisualShaderNodeParticleMeshEmitter>
                (aVStack_48,(char *)this,
                 (_func_void *)"&VisualShaderNodeParticleMeshEmitter::_update_textures");
      Resource::connect_changed((Callable *)pOVar5,(uint)aVStack_48);
      Callable::~Callable((Callable *)aVStack_48);
    }
  }
LAB_00102d48:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Resource::emit_changed();
    return;
  }
LAB_00102dcb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::VisualShaderNodeParticleMeshEmitter() */

void __thiscall
VisualShaderNodeParticleMeshEmitter::VisualShaderNodeParticleMeshEmitter
          (VisualShaderNodeParticleMeshEmitter *this)

{
  long in_FS_OFFSET;
  VisualShaderNodeParticleMeshEmitter aVStack_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNode::VisualShaderNode((VisualShaderNode *)this);
  *(undefined ***)this = &PTR__initialize_classv_00125868;
  this[0x30b] = (VisualShaderNodeParticleMeshEmitter)0x0;
  *(undefined8 *)(this + 0x310) = 0;
  this[0x318] = (VisualShaderNodeParticleMeshEmitter)0x1;
  *(undefined4 *)(this + 0x31c) = 0;
  *(undefined8 *)(this + 0x340) = 0;
  *(undefined1 (*) [16])(this + 800) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x330) = (undefined1  [16])0x0;
  create_custom_callable_function_pointer<VisualShaderNodeParticleMeshEmitter>
            (aVStack_38,(char *)this,
             (_func_void *)"&VisualShaderNodeParticleMeshEmitter::_update_textures");
  Resource::connect_changed((Callable *)this,(uint)aVStack_38);
  Callable::~Callable((Callable *)aVStack_38);
  Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)(this + 800));
  Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)(this + 0x328));
  Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)(this + 0x330));
  Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)(this + 0x338));
  Ref<ImageTexture>::instantiate<>((Ref<ImageTexture> *)(this + 0x340));
  this[0x308] = (VisualShaderNodeParticleMeshEmitter)0x0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::generate_global(Shader::Mode, VisualShader::Type, int) const
    */

String * VisualShaderNodeParticleMeshEmitter::generate_global
                   (String *param_1,int param_2,undefined8 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  cVar1 = VisualShaderNode::is_output_port_connected(param_2);
  if (cVar1 != '\0') {
    local_60 = 0;
    local_58 = ";\n";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "mesh_vx";
    local_78 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_78);
    make_unique_id(local_70,param_4,param_5,(StrRange *)&local_78);
    operator+((char *)local_68,(String *)"uniform sampler2D ");
    String::operator+((String *)&local_58,(String *)local_68);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  cVar1 = VisualShaderNode::is_output_port_connected(param_2);
  if (cVar1 != '\0') {
    local_60 = 0;
    local_58 = ";\n";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "mesh_nm";
    local_78 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_78);
    make_unique_id(local_70,param_4,param_5,(StrRange *)&local_78);
    operator+((char *)local_68,(String *)"uniform sampler2D ");
    String::operator+((String *)&local_58,(String *)local_68);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  cVar1 = VisualShaderNode::is_output_port_connected(param_2);
  if (cVar1 == '\0') {
    cVar1 = VisualShaderNode::is_output_port_connected(param_2);
    if (cVar1 == '\0') goto LAB_00102f4e;
  }
  local_60 = 0;
  local_58 = ";\n";
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "mesh_col";
  local_78 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_78);
  make_unique_id(local_70,param_4,param_5,(StrRange *)&local_78);
  operator+((char *)local_68,(String *)"uniform sampler2D ");
  String::operator+((String *)&local_58,(String *)local_68);
  String::operator+=(param_1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00102f4e:
  cVar1 = VisualShaderNode::is_output_port_connected(param_2);
  if (cVar1 != '\0') {
    local_60 = 0;
    local_58 = ";\n";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "mesh_uv";
    local_78 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_78);
    make_unique_id(local_70,param_4,param_5,(StrRange *)&local_78);
    operator+((char *)local_68,(String *)"uniform sampler2D ");
    String::operator+((String *)&local_58,(String *)local_68);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  cVar1 = VisualShaderNode::is_output_port_connected(param_2);
  if (cVar1 != '\0') {
    local_60 = 0;
    local_58 = ";\n";
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "mesh_uv2";
    local_78 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_78);
    make_unique_id(local_70,param_4,param_5,(StrRange *)&local_78);
    operator+((char *)local_68,(String *)"uniform sampler2D ");
    String::operator+((String *)&local_58,(String *)local_68);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleOutput::is_port_separator(int) const */

undefined4 __thiscall
VisualShaderNodeParticleOutput::is_port_separator(VisualShaderNodeParticleOutput *this,int param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)(this + 0x30c) - 3U < 2) {
    (**(code **)(*(long *)this + 0x1e0))(aCStack_28,this,param_1);
    pcVar2 = "Scale";
  }
  else {
    uVar1 = 0;
    if (1 < *(int *)(this + 0x30c) - 6U) goto LAB_00103480;
    (**(code **)(*(long *)this + 0x1e0))(aCStack_28,this,param_1);
    pcVar2 = "Velocity";
  }
  uVar1 = String::operator==((String *)aCStack_28,pcVar2);
  CowData<char32_t>::_unref(aCStack_28);
LAB_00103480:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::_generate_code(VisualShader::Type, int, String const*, int,
   String const&, VisualShaderNode::PortType) const */

String * VisualShaderNodeParticleMeshEmitter::_generate_code
                   (String *param_1,long param_2,undefined4 param_3,undefined4 param_4,long param_5,
                   int param_6,undefined8 param_7,int param_8)

{
  char cVar1;
  CowData *pCVar2;
  long in_FS_OFFSET;
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  cVar1 = VisualShaderNode::is_output_port_connected((int)param_2);
  if (cVar1 == '\0') goto LAB_00103624;
  if (param_8 == 3) {
    make_unique_id(local_70,param_3,param_4,param_7);
    pCVar2 = (CowData *)(param_5 + (long)param_6 * 8);
LAB_001035ad:
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
    local_58 = "\t\t%s = texelFetch(%s, ivec2(__scalar_ibuff, 0), 0).xy;\n";
    local_50 = 0x37;
  }
  else {
    if (param_8 != 4) goto LAB_00103624;
    pCVar2 = (CowData *)(param_5 + (long)param_6 * 8);
    if (*(char *)(param_2 + 0x30b) != '\0') {
      make_unique_id(local_70,param_3,param_4,param_7);
      goto LAB_001035ad;
    }
    make_unique_id(local_70,param_3,param_4,param_7);
    local_60 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,pCVar2);
    local_58 = "\t\t%s = texelFetch(%s, ivec2(__scalar_ibuff, 0), 0).xyz;\n";
    local_50 = 0x38;
  }
  local_68 = 0;
  String::parse_latin1((StrRange *)&local_68);
  vformat<String,String>
            ((CowData<char32_t> *)&local_58,(StrRange *)&local_68,(CowData<char32_t> *)&local_60,
             local_70);
  String::operator+=(param_1,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref(local_70);
LAB_00103624:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::generate_code(Shader::Mode, VisualShader::Type, int, String
   const*, String const*, bool) const */

VisualShaderNodeParticleMeshEmitter * __thiscall
VisualShaderNodeParticleMeshEmitter::generate_code
          (VisualShaderNodeParticleMeshEmitter *this,long param_2,undefined8 param_3,
          undefined4 param_4,undefined4 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::operator+=((String *)this,"\t{\n");
  local_58 = ";\n";
  local_60 = 0;
  local_50 = 2;
  String::parse_latin1((StrRange *)&local_60);
  (**(code **)(**(long **)(param_2 + 800) + 0x1c8))();
  itos((long)&local_70);
  operator+((char *)local_68,
            (String *)"\t\tint __scalar_ibuff = int(__rand_from_seed(__seed) * 65535.0) % ");
  String::operator+((String *)&local_58,(String *)local_68);
  String::operator+=((String *)this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "mesh_vx";
  local_60 = 0;
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_60);
  _generate_code((String *)&local_58,param_2,param_4,param_5,param_7,0,(StrRange *)&local_60,4);
  String::operator+=((String *)this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_60 = 0;
  local_58 = "mesh_nm";
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_60);
  _generate_code((String *)&local_58,param_2,param_4,param_5,param_7,1,(StrRange *)&local_60,4);
  String::operator+=((String *)this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  iVar2 = (int)param_2;
  cVar1 = VisualShaderNode::is_output_port_connected(iVar2);
  if (cVar1 == '\0') {
    cVar1 = VisualShaderNode::is_output_port_connected(iVar2);
    if (cVar1 == '\0') goto LAB_0010397c;
  }
  local_70 = 0;
  local_58 = "mesh_col";
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_70);
  make_unique_id(local_68,param_4,param_5,(CowData<char32_t> *)&local_70);
  local_58 = "\t\tvec4 __vec4_buff = texelFetch(%s, ivec2(__scalar_ibuff, 0), 0);\n";
  local_60 = 0;
  local_50 = 0x42;
  String::parse_latin1((StrRange *)&local_60);
  vformat<String>((String *)&local_58,(StrRange *)&local_60,local_68);
  String::operator+=((String *)this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  cVar1 = VisualShaderNode::is_output_port_connected(iVar2);
  if (cVar1 != '\0') {
    local_60 = 0;
    local_58 = " = __vec4_buff.rgb;\n";
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_60);
    operator+((char *)local_68,(String *)&_LC132);
    String::operator+((String *)&local_58,(String *)local_68);
    String::operator+=((String *)this,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  cVar1 = VisualShaderNode::is_output_port_connected(iVar2);
  if (cVar1 != '\0') {
    local_60 = 0;
    local_58 = " = __vec4_buff.a;\n";
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_60);
    operator+((char *)local_68,(String *)&_LC132);
    String::operator+((String *)&local_58,(String *)local_68);
    String::operator+=((String *)this,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
LAB_0010397c:
  local_60 = 0;
  local_58 = "mesh_uv";
  local_50 = 7;
  String::parse_latin1((StrRange *)&local_60);
  _generate_code((String *)&local_58,param_2,param_4,param_5,param_7,4,(StrRange *)&local_60,3);
  String::operator+=((String *)this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "mesh_uv2";
  local_60 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_60);
  _generate_code((String *)&local_58,param_2,param_4,param_5,param_7,5,(StrRange *)&local_60,3);
  String::operator+=((String *)this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  String::operator+=((String *)this,"\t}\n");
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleOutput::get_caption() const */

void VisualShaderNodeParticleOutput::get_caption(void)

{
  int iVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  iVar1 = *(int *)(in_RSI + 0x30c);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (4 < iVar1 - 3U) {
    local_50 = 0;
    local_40 = 0x3d;
    local_48 = "Unexpected shader_type %d for VisualShaderNodeParticleOutput.";
    String::parse_latin1((StrRange *)&local_50);
    vformat<VisualShader::Type>((CowData<char32_t> *)&local_48,(StrRange *)&local_50,iVar1);
    _err_print_error("get_caption","scene/resources/visual_shader_particle_nodes.cpp",0x49c,
                     (CowData<char32_t> *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    *(undefined8 *)in_RDI = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1(in_RDI);
    goto LAB_00103bf0;
  }
  *(undefined8 *)in_RDI = 0;
  switch(iVar1) {
  case 3:
    local_40 = 0xb;
    local_48 = "StartOutput";
    String::parse_latin1(in_RDI);
    break;
  case 4:
    local_48 = "ProcessOutput";
    goto LAB_00103c6f;
  case 5:
    local_48 = "CollideOutput";
LAB_00103c6f:
    local_40 = 0xd;
    String::parse_latin1(in_RDI);
    break;
  case 6:
    local_40 = 0x11;
    local_48 = "CustomStartOutput";
    String::parse_latin1(in_RDI);
    break;
  case 7:
    local_40 = 0x13;
    local_48 = "CustomProcessOutput";
    String::parse_latin1(in_RDI);
  }
LAB_00103bf0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleOutput::get_input_port_count() const */

undefined4 __thiscall
VisualShaderNodeParticleOutput::get_input_port_count(VisualShaderNodeParticleOutput *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  iVar2 = *(int *)(this + 0x30c);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = iVar2 - 3;
  if (uVar1 < 5) {
    uVar3 = *(undefined4 *)(CSWTCH_5362 + (ulong)uVar1 * 4);
  }
  else {
    local_40 = 0;
    local_30 = 0x3d;
    local_38 = "Unexpected shader_type %d for VisualShaderNodeParticleOutput.";
    String::parse_latin1((StrRange *)&local_40);
    vformat<VisualShader::Type>((CowData<char32_t> *)&local_38,(StrRange *)&local_40,iVar2);
    _err_print_error("get_input_port_count","scene/resources/visual_shader_particle_nodes.cpp",0x4ad
                     ,(CowData<char32_t> *)&local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    uVar3 = 0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleSphereEmitter::generate_code(Shader::Mode, VisualShader::Type, int,
   String const*, String const*, bool) const */

String * VisualShaderNodeParticleSphereEmitter::generate_code(String *param_1,long param_2)

{
  CowData *in_R9;
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> *local_110;
  CowData<char32_t> *local_108;
  CowData<char32_t> *local_100;
  char local_d9;
  String local_d8 [8];
  undefined8 local_d0;
  String local_c8 [8];
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  String local_a8 [8];
  undefined8 local_a0;
  String local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  cVar1 = *(char *)(param_2 + 0x30b);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_88 = ");\n";
  local_90 = 0;
  local_80 = 3;
  if (cVar1 == '\0') {
    String::parse_latin1((StrRange *)&local_90);
    if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_a0);
      local_d9 = '\x01';
    }
    else {
      local_a0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_R9 + 8);
      local_d9 = '\0';
    }
    local_b0 = 0;
    local_88 = ", ";
    local_80 = 2;
    String::parse_latin1((StrRange *)&local_b0);
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      cVar1 = '\x01';
      VisualShaderNode::get_input_port_default_value((int)local_78);
      Variant::operator_cast_to_String((Variant *)&local_c0);
    }
    else {
      local_c0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,in_R9);
    }
    local_88 = " = __get_random_point_in_sphere(__seed, ";
  }
  else {
    String::parse_latin1((StrRange *)&local_90);
    if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_a0);
      local_d9 = cVar1;
    }
    else {
      local_a0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_R9 + 8);
      local_d9 = '\0';
    }
    local_b0 = 0;
    local_88 = ", ";
    local_80 = 2;
    String::parse_latin1((StrRange *)&local_b0);
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_78);
      Variant::operator_cast_to_String((Variant *)&local_c0);
    }
    else {
      cVar1 = '\0';
      local_c0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,in_R9);
    }
    local_88 = " = __get_random_point_in_circle(__seed, ";
  }
  local_100 = (CowData<char32_t> *)&local_a0;
  local_108 = (CowData<char32_t> *)&local_c0;
  local_110 = (CowData<char32_t> *)&local_b0;
  local_d0 = 0;
  local_80 = 0x28;
  String::parse_latin1((StrRange *)&local_d0);
  operator+((char *)local_d8,(String *)&_LC146);
  String::operator+(local_c8,local_d8);
  String::operator+(local_b8,local_c8);
  String::operator+(local_a8,local_b8);
  String::operator+(local_98,local_a8);
  String::operator+((String *)&local_88,local_98);
  String::operator+=(param_1,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref(local_108);
  if ((cVar1 != '\0') && (Variant::needs_deinit[local_78[0]] != '\0')) {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref(local_110);
  CowData<char32_t>::_unref(local_100);
  if ((local_d9 != '\0') && (Variant::needs_deinit[local_58[0]] != '\0')) {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleBoxEmitter::generate_code(Shader::Mode, VisualShader::Type, int, String
   const*, String const*, bool) const */

String * VisualShaderNodeParticleBoxEmitter::generate_code(String *param_1,long param_2)

{
  CowData *in_R9;
  char cVar1;
  long in_FS_OFFSET;
  String local_98 [8];
  undefined8 local_90;
  String local_88 [8];
  undefined8 local_80;
  String local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  cVar1 = *(char *)(param_2 + 0x30b);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_70 = 0;
  local_68 = ");\n";
  local_60 = 3;
  if (cVar1 == '\0') {
    String::parse_latin1((StrRange *)&local_70);
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      cVar1 = '\x01';
      Variant::operator_cast_to_String((Variant *)&local_80);
    }
    else {
      local_80 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,in_R9);
    }
    local_68 = " = __get_random_point_in_box3d(__seed, ";
  }
  else {
    String::parse_latin1((StrRange *)&local_70);
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_80);
    }
    else {
      cVar1 = '\0';
      local_80 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,in_R9);
    }
    local_68 = " = __get_random_point_in_box2d(__seed, ";
  }
  local_90 = 0;
  local_60 = 0x27;
  String::parse_latin1((StrRange *)&local_90);
  operator+((char *)local_98,(String *)&_LC146);
  String::operator+(local_88,local_98);
  String::operator+(local_78,local_88);
  String::operator+((String *)&local_68,local_78);
  String::operator+=(param_1,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((cVar1 != '\0') && (Variant::needs_deinit[local_58[0]] != '\0')) {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::generate_code(Shader::Mode, VisualShader::Type, int,
   String const*, String const*, bool) const */

String * VisualShaderNodeParticleMultiplyByAxisAngle::generate_code(String *param_1,long param_2)

{
  CowData *in_R9;
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> *local_168;
  CowData<char32_t> *local_158;
  CowData<char32_t> *local_150;
  CowData<char32_t> *local_148;
  CowData<char32_t> *local_140;
  CowData<char32_t> *local_138;
  CowData<char32_t> *local_130;
  CowData<char32_t> *local_128;
  char local_109;
  String local_100 [8];
  undefined8 local_f8;
  String local_f0 [8];
  Variant local_e8 [8];
  undefined8 local_e0;
  String local_d8 [8];
  undefined8 local_d0;
  String local_c8 [8];
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  String local_a8 [8];
  undefined8 local_a0;
  String local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  cVar1 = *(char *)(param_2 + 0x30b);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_88 = ";\n";
  local_90 = 0;
  local_80 = 2;
  if (cVar1 == '\0') {
    String::parse_latin1((StrRange *)&local_90);
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      local_a0 = 0;
      local_88 = "vec3(0.0)";
      local_80 = 9;
      String::parse_latin1((StrRange *)&local_a0);
    }
    else {
      local_a0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_R9);
    }
    local_b0 = 0;
    local_88 = ") * ";
    local_80 = 4;
    String::parse_latin1((StrRange *)&local_b0);
    if ((*(long *)(in_R9 + 0x10) == 0) || (*(uint *)(*(long *)(in_R9 + 0x10) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_c0);
      local_109 = '\x01';
    }
    else {
      local_c0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,in_R9 + 0x10);
      local_109 = '\0';
    }
    local_d0 = 0;
    local_88 = ", ";
    local_80 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_78);
      Variant::operator_cast_to_String(local_e8);
      cVar1 = '\x01';
      operator+((char *)&local_e0,(String *)&_LC153);
    }
    else {
      local_e0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,in_R9 + 8);
    }
    local_f8 = 0;
    local_88 = " = __build_rotation_mat3(";
    local_80 = 0x19;
    String::parse_latin1((StrRange *)&local_f8);
    operator+((char *)local_100,(String *)&_LC146);
    String::operator+(local_f0,local_100);
    String::operator+(local_d8,local_f0);
  }
  else {
    String::parse_latin1((StrRange *)&local_90);
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      local_a0 = 0;
      local_88 = "vec3(0.0)";
      local_80 = 9;
      String::parse_latin1((StrRange *)&local_a0);
    }
    else {
      local_a0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_R9);
    }
    local_b0 = 0;
    local_88 = ")) * ";
    local_80 = 5;
    String::parse_latin1((StrRange *)&local_b0);
    if ((*(long *)(in_R9 + 0x10) == 0) || (*(uint *)(*(long *)(in_R9 + 0x10) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_c0);
      local_109 = cVar1;
    }
    else {
      local_c0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,in_R9 + 0x10);
      local_109 = '\0';
    }
    local_d0 = 0;
    local_88 = ", radians(";
    local_80 = 10;
    String::parse_latin1((StrRange *)&local_d0);
    if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_78);
      Variant::operator_cast_to_String(local_e8);
      operator+((char *)&local_e0,(String *)&_LC153);
    }
    else {
      cVar1 = '\0';
      local_e0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,in_R9 + 8);
    }
    local_f8 = 0;
    local_88 = " = __build_rotation_mat3(";
    local_80 = 0x19;
    String::parse_latin1((StrRange *)&local_f8);
    operator+((char *)local_100,(String *)&_LC146);
    String::operator+(local_f0,local_100);
    String::operator+(local_d8,local_f0);
  }
  local_128 = (CowData<char32_t> *)local_f0;
  local_130 = (CowData<char32_t> *)local_100;
  local_138 = (CowData<char32_t> *)&local_f8;
  local_140 = (CowData<char32_t> *)&local_e0;
  local_148 = (CowData<char32_t> *)&local_a0;
  local_150 = (CowData<char32_t> *)&local_c0;
  local_158 = (CowData<char32_t> *)&local_d0;
  local_168 = (CowData<char32_t> *)&local_b0;
  String::operator+(local_c8,local_d8);
  String::operator+(local_b8,local_c8);
  String::operator+(local_a8,local_b8);
  String::operator+(local_98,local_a8);
  String::operator+((String *)&local_88,local_98);
  String::operator+=(param_1,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref(local_128);
  CowData<char32_t>::_unref(local_130);
  CowData<char32_t>::_unref(local_138);
  CowData<char32_t>::_unref(local_140);
  if (cVar1 != '\0') {
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  CowData<char32_t>::_unref(local_158);
  CowData<char32_t>::_unref(local_150);
  if ((local_109 != '\0') && (Variant::needs_deinit[local_58[0]] != '\0')) {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref(local_168);
  CowData<char32_t>::_unref(local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleConeVelocity::generate_code(Shader::Mode, VisualShader::Type, int, String
   const*, String const*, bool) const */

String * VisualShaderNodeParticleConeVelocity::generate_code(String *param_1)

{
  CowData *in_R9;
  long in_FS_OFFSET;
  Variant local_88 [8];
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  String::operator+=(param_1,"\t{\n");
  local_68 = ");\n";
  local_70 = 0;
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
    VisualShaderNode::get_input_port_default_value((int)local_58);
    Variant::operator_cast_to_String((Variant *)&local_80);
    operator+((char *)local_78,(String *)"\t\tfloat __radians = radians(");
    String::operator+((String *)&local_68,(String *)local_78);
    String::operator+=(param_1,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    local_80 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,in_R9 + 8);
    operator+((char *)local_78,(String *)"\t\tfloat __radians = radians(");
    String::operator+((String *)&local_68,(String *)local_78);
    String::operator+=(param_1,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  String::operator+=(param_1,
                     "\t\tfloat __scalar_buff1 = __rand_from_seed_m1_p1(__seed) * __radians;\n");
  String::operator+=(param_1,
                     "\t\tfloat __scalar_buff2 = __rand_from_seed_m1_p1(__seed) * __radians;\n");
  local_68 = ";\n";
  local_70 = 0;
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_70);
  if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
    VisualShaderNode::get_input_port_default_value((int)local_58);
    Variant::operator_cast_to_String(local_88);
    operator+((char *)&local_80,(String *)&_LC153);
    operator+((char *)local_78,(String *)"\t\tvec3 __vec3_buff1 = ");
    String::operator+((String *)&local_68,(String *)local_78);
    String::operator+=(param_1,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    local_80 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,in_R9);
    operator+((char *)local_78,(String *)"\t\tvec3 __vec3_buff1 = ");
    String::operator+((String *)&local_68,(String *)local_78);
    String::operator+=(param_1,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref(local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  String::operator+=(param_1,
                     "\t\t__scalar_buff1 += __vec3_buff1.z != 0.0 ? atan(__vec3_buff1.x, __vec3_buff1.z) : sign(__vec3_buff1.x) * (PI / 2.0);\n"
                    );
  String::operator+=(param_1,
                     "\t\t__scalar_buff2 += __vec3_buff1.z != 0.0 ? atan(__vec3_buff1.y, abs(__vec3_buff1.z)) : (__vec3_buff1.x != 0.0 ? atan(__vec3_buff1.y, abs(__vec3_buff1.x)) : sign(__vec3_buff1.y) * (PI / 2.0));\n"
                    );
  String::operator+=(param_1,
                     "\t\t__vec3_buff1 = vec3(sin(__scalar_buff1), 0.0, cos(__scalar_buff1));\n");
  String::operator+=(param_1,
                     "\t\tvec3 __vec3_buff2 = vec3(0.0, sin(__scalar_buff2), cos(__scalar_buff2));\n"
                    );
  String::operator+=(param_1,
                     "\t\t__vec3_buff2.z = __vec3_buff2.z / max(0.0001, sqrt(abs(__vec3_buff2.z)));\n"
                    );
  local_68 = 
  " = normalize(vec3(__vec3_buff1.x * __vec3_buff2.z, __vec3_buff2.y, __vec3_buff1.z * __vec3_buff2.z));\n"
  ;
  local_70 = 0;
  local_60 = 0x66;
  String::parse_latin1((StrRange *)&local_70);
  operator+((char *)local_78,(String *)&_LC132);
  String::operator+((String *)&local_68,(String *)local_78);
  String::operator+=(param_1,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  String::operator+=(param_1,"\t}\n");
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRandomness::generate_code(Shader::Mode, VisualShader::Type, int, String
   const*, String const*, bool) const */

undefined8 VisualShaderNodeParticleRandomness::generate_code(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  CowData *in_R9;
  long in_FS_OFFSET;
  bool bVar7;
  long *in_stack_00000008;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(in_R9 + 0x10) == 0) || (*(uint *)(*(long *)(in_R9 + 0x10) + -8) < 2)) {
    VisualShaderNode::get_input_port_default_value((int)local_58);
    Variant::operator_cast_to_String((Variant *)&local_a0);
    bVar5 = true;
  }
  else {
    local_a0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_R9 + 0x10);
    bVar5 = false;
  }
  if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
    VisualShaderNode::get_input_port_default_value((int)local_78);
    Variant::operator_cast_to_String((Variant *)&local_a8);
    bVar4 = true;
  }
  else {
    local_a8 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,in_R9 + 8);
    bVar4 = false;
  }
  if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
    local_b0 = 0;
    local_88 = "__seed";
    local_80 = 6;
    String::parse_latin1((StrRange *)&local_b0);
  }
  else {
    local_b0 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,in_R9);
  }
  local_90 = 0;
  uVar2 = *(undefined8 *)
           (generate_code(Shader::Mode,VisualShader::Type,int,String_const*,String_const*,bool)::
            func + (long)*(int *)(param_2 + 0x30c) * 8);
  plVar1 = (long *)(*in_stack_00000008 + -0x10);
  if (*in_stack_00000008 != 0) {
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_0010529b;
      LOCK();
      lVar6 = *plVar1;
      bVar7 = lVar3 == lVar6;
      if (bVar7) {
        *plVar1 = lVar3 + 1;
        lVar6 = lVar3;
      }
      UNLOCK();
    } while (!bVar7);
    if (lVar6 != -1) {
      local_90 = *in_stack_00000008;
    }
  }
LAB_0010529b:
  local_88 = "\t%s = %s(%s, %s, %s);\n";
  local_98 = 0;
  local_80 = 0x16;
  String::parse_latin1((StrRange *)&local_98);
  vformat<String,char_const*,String,String,String>
            (param_1,(StrRange *)&local_98,(CowData<char32_t> *)&local_90,uVar2,
             (CowData<char32_t> *)&local_b0,(CowData<char32_t> *)&local_a8,
             (CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if ((bVar4) && (Variant::needs_deinit[local_78[0]] != '\0')) {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((bVar5) && (Variant::needs_deinit[local_58[0]] != '\0')) {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* VisualShaderNodeParticleAccelerator::generate_code(Shader::Mode, VisualShader::Type, int, String
   const*, String const*, bool) const */

String * VisualShaderNodeParticleAccelerator::generate_code(String *param_1,long param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  CowData *in_R9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_140;
  CowData<char32_t> *local_138;
  CowData<char32_t> *local_130;
  String *local_120;
  String *local_118;
  String local_f0 [8];
  undefined8 local_e8;
  String local_e0 [8];
  undefined8 local_d8;
  String local_d0 [8];
  Variant local_c8 [8];
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  String local_a8 [8];
  undefined8 local_a0;
  String local_98 [8];
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  String::operator+=(param_1,"\t{\n");
  iVar1 = *(int *)(param_2 + 0x30c);
  if (iVar1 == 1) {
    String::operator+=(param_1,"\t\tvec3 __diff = TRANSFORM[3].xyz - EMISSION_TRANSFORM[3].xyz;\n");
    String::operator+=(param_1,"\t\tvec3 __ndiff = normalize(__diff);\n\n");
    local_90 = 0;
    String::parse_latin1((String *)&local_90,") : vec3(0.0);\n");
    if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_a0);
      bVar3 = true;
    }
    else {
      local_a0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_R9 + 8);
      bVar3 = false;
    }
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0," * mix(1.0, __rand_from_seed(__seed), ");
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_78);
      Variant::operator_cast_to_String(local_c8);
      operator+((char *)&local_c0,(String *)&_LC153);
      bVar2 = true;
    }
    else {
      local_c0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,in_R9);
      bVar2 = false;
    }
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8," = length(__diff) > 0.0 ? __ndiff * ");
    operator+((char *)local_e0,(String *)&_LC132);
    String::operator+(local_d0,local_e0);
    String::operator+(local_b8,local_d0);
    String::operator+(local_a8,local_b8);
    String::operator+(local_98,local_a8);
    String::operator+((String *)&local_88,local_98);
    String::operator+=(param_1,(String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
LAB_00105a2d:
    local_130 = (CowData<char32_t> *)&local_c0;
    local_138 = (CowData<char32_t> *)&local_b0;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref(local_130);
    if ((bVar2) &&
       (CowData<char32_t>::_unref((CowData<char32_t> *)local_c8),
       Variant::needs_deinit[local_78[0]] != '\0')) {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref(local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (bVar3) {
LAB_00105a5c:
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  else {
    if (iVar1 == 2) {
      String::operator+=(param_1,"\t\tvec3 __diff = TRANSFORM[3].xyz - EMISSION_TRANSFORM[3].xyz;\n"
                        );
      String::operator+=(param_1,"\t\tvec3 __ndiff = normalize(__diff);\n\n");
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"));\n");
      if ((*(long *)(in_R9 + 0x10) == 0) || (*(uint *)(*(long *)(in_R9 + 0x10) + -8) < 2)) {
        VisualShaderNode::get_input_port_default_value((int)local_58);
        Variant::operator_cast_to_String((Variant *)local_a8);
        operator+((char *)&local_a0,(String *)&_LC153);
        operator+((char *)local_98,(String *)"\t\tvec3 __vec3_buff1 = cross(__ndiff, normalize(");
        String::operator+((String *)&local_88,local_98);
        String::operator+=(param_1,(String *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        local_a0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_R9 + 0x10);
        operator+((char *)local_98,(String *)"\t\tvec3 __vec3_buff1 = cross(__ndiff, normalize(");
        String::operator+((String *)&local_88,local_98);
        String::operator+=(param_1,(String *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      }
      local_118 = local_a8;
      local_120 = local_98;
      local_140 = (CowData<char32_t> *)&local_90;
      CowData<char32_t>::_unref(local_140);
      local_88 = ")) : vec3(0.0);\n";
      local_90 = 0;
      local_80 = 0x10;
      String::parse_latin1((StrRange *)local_140);
      if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
        VisualShaderNode::get_input_port_default_value((int)local_58);
        Variant::operator_cast_to_String((Variant *)&local_a0);
        bVar3 = true;
      }
      else {
        local_a0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_R9 + 8);
        bVar3 = false;
      }
      local_b0 = 0;
      String::parse_latin1((String *)&local_b0," * mix(1.0, __rand_from_seed(__seed), ");
      if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
        VisualShaderNode::get_input_port_default_value((int)local_78);
        Variant::operator_cast_to_String(local_c8);
        operator+((char *)&local_c0,(String *)&_LC153);
        bVar2 = true;
      }
      else {
        local_c0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,in_R9);
        bVar2 = false;
      }
      local_d8 = 0;
      String::parse_latin1
                ((String *)&local_d8," = length(__vec3_buff1) > 0.0 ? normalize(__vec3_buff1) * (");
      operator+((char *)local_e0,(String *)&_LC132);
      String::operator+(local_d0,local_e0);
      String::operator+(local_b8,local_d0);
      String::operator+(local_118,local_b8);
      String::operator+(local_120,local_118);
      String::operator+((String *)&local_88,local_120);
      String::operator+=(param_1,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      goto LAB_00105a2d;
    }
    if (iVar1 != 0) goto LAB_00105a7f;
    local_90 = 0;
    String::parse_latin1((String *)&local_90,") : vec3(0.0);\n");
    if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_a0);
      bVar3 = true;
    }
    else {
      local_a0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,in_R9 + 8);
      bVar3 = false;
    }
    local_b0 = 0;
    local_88 = " * mix(1.0, __rand_from_seed(__seed), ";
    local_80 = 0x26;
    String::parse_latin1((StrRange *)&local_b0);
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_78);
      Variant::operator_cast_to_String(local_c8);
      operator+((char *)&local_c0,(String *)&_LC153);
      bVar2 = true;
    }
    else {
      local_c0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,in_R9);
      bVar2 = false;
    }
    local_130 = (CowData<char32_t> *)&local_c0;
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"normalize(VELOCITY) * ");
    local_e8 = 0;
    String::parse_latin1((String *)&local_e8," = length(VELOCITY) > 0.0 ? ");
    operator+((char *)local_f0,(String *)&_LC132);
    String::operator+(local_e0,local_f0);
    String::operator+(local_d0,local_e0);
    String::operator+(local_b8,local_d0);
    String::operator+(local_a8,local_b8);
    String::operator+(local_98,local_a8);
    String::operator+((String *)&local_88,local_98);
    String::operator+=(param_1,(String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref(local_130);
    if ((bVar2) &&
       (CowData<char32_t>::_unref((CowData<char32_t> *)local_c8),
       Variant::needs_deinit[local_78[0]] != '\0')) {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (bVar3) goto LAB_00105a5c;
  }
  local_140 = (CowData<char32_t> *)&local_90;
  CowData<char32_t>::_unref(local_140);
LAB_00105a7f:
  String::operator+=(param_1,"\t}\n");
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* VisualShaderNodeParticleOutput::get_input_port_name(int) const */

undefined8 * VisualShaderNodeParticleOutput::get_input_port_name(int param_1)

{
  int iVar1;
  undefined4 in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  switch(in_EDX) {
  case 0:
    if (*(int *)(in_RSI + 0x30c) - 6U < 2) {
      String::parse_latin1((String *)&local_40,"custom");
    }
    else {
      String::parse_latin1((String *)&local_40,"active");
    }
    break;
  case 1:
    if (*(int *)(in_RSI + 0x30c) - 6U < 2) {
      String::parse_latin1((String *)&local_40,"custom_alpha");
    }
    else {
LAB_00106052:
      String::parse_latin1((String *)&local_40,"velocity");
    }
    break;
  case 2:
    if (*(int *)(in_RSI + 0x30c) - 6U < 2) goto LAB_00106052;
LAB_0010607e:
    String::parse_latin1((String *)&local_40,"color");
    break;
  case 3:
    if (*(int *)(in_RSI + 0x30c) - 6U < 2) goto LAB_0010607e;
LAB_001060ae:
    String::parse_latin1((String *)&local_40,"alpha");
    break;
  case 4:
    iVar1 = *(int *)(in_RSI + 0x30c);
    if (iVar1 - 6U < 2) goto LAB_001060ae;
    if (iVar1 == 4) {
LAB_00106127:
      String::parse_latin1((String *)&local_40,"scale");
    }
    else {
      if (iVar1 == 5) goto LAB_00106148;
      String::parse_latin1((String *)&local_40,"position");
    }
    break;
  case 5:
    if (*(int *)(in_RSI + 0x30c) - 6U < 2) {
LAB_00106148:
      String::parse_latin1((String *)&local_40,"transform");
    }
    else {
      if (*(int *)(in_RSI + 0x30c) != 4) goto LAB_00106127;
      String::parse_latin1((String *)&local_40,"rotation_axis");
    }
    break;
  case 6:
    if (*(int *)(in_RSI + 0x30c) != 4) {
      local_30 = 0xd;
      local_38 = "rotation_axis";
      goto LAB_00105f9a;
    }
    String::parse_latin1((String *)&local_40,"angle_in_radians");
    break;
  case 7:
    local_30 = 0x10;
    local_38 = "angle_in_radians";
LAB_00105f9a:
    String::parse_latin1((StrRange *)&local_40);
    break;
  default:
    goto switchD_00105f6f_default;
  }
  if ((local_40 == 0) || (*(uint *)(local_40 + -8) < 2)) {
switchD_00105f6f_default:
    *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  }
  else {
    String::capitalize();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (undefined8 *)CONCAT44(in_register_0000003c,param_1);
}



/* VisualShaderNodeParticleOutput::generate_code(Shader::Mode, VisualShader::Type, int, String
   const*, String const*, bool) const */

String * VisualShaderNodeParticleOutput::generate_code(String *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *in_R9;
  long in_FS_OFFSET;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  String local_a0 [8];
  String local_98 [8];
  undefined8 local_90;
  String local_88 [8];
  String local_80 [8];
  undefined8 local_78;
  String local_70 [8];
  String local_68 [8];
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_d0 = 0;
  local_58 = &_LC146;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_d0);
  lVar2 = *in_R9;
  if (*(int *)(param_2 + 0x30c) - 6U < 2) {
    if ((lVar2 != 0) && (1 < *(uint *)(lVar2 + -8))) {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,";\n");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"CUSTOM.rgb = ");
      String::operator+(local_70,(String *)&local_d0);
      String::operator+(local_68,local_70);
      String::operator+((String *)&local_58,local_68);
      String::operator+=(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    if ((in_R9[1] != 0) && (1 < *(uint *)(in_R9[1] + -8))) {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,";\n");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"CUSTOM.a = ");
      String::operator+(local_70,(String *)&local_d0);
      String::operator+(local_68,local_70);
      String::operator+((String *)&local_58,local_68);
      String::operator+=(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    if ((in_R9[2] != 0) && (1 < *(uint *)(in_R9[2] + -8))) {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,";\n");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"VELOCITY = ");
      String::operator+(local_70,(String *)&local_d0);
      String::operator+(local_68,local_70);
      String::operator+((String *)&local_58,local_68);
      String::operator+=(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    if ((in_R9[3] != 0) && (1 < *(uint *)(in_R9[3] + -8))) {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,";\n");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"COLOR.rgb = ");
      String::operator+(local_70,(String *)&local_d0);
      String::operator+(local_68,local_70);
      String::operator+((String *)&local_58,local_68);
      String::operator+=(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    if ((in_R9[4] != 0) && (1 < *(uint *)(in_R9[4] + -8))) {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,";\n");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"COLOR.a = ");
      String::operator+(local_70,(String *)&local_d0);
      String::operator+(local_68,local_70);
      String::operator+((String *)&local_58,local_68);
      String::operator+=(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    if ((in_R9[5] != 0) && (1 < *(uint *)(in_R9[5] + -8))) {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,";\n");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"TRANSFORM = ");
      String::operator+(local_70,(String *)&local_d0);
      String::operator+(local_68,local_70);
      String::operator+((String *)&local_58,local_68);
      String::operator+=(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    goto LAB_001065e0;
  }
  if ((lVar2 != 0) && (1 < *(uint *)(lVar2 + -8))) {
    local_60 = 0;
    String::parse_latin1((String *)&local_60,";\n");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"ACTIVE = ");
    String::operator+(local_70,(String *)&local_d0);
    String::operator+(local_68,local_70);
    String::operator+((String *)&local_58,local_68);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"if(ACTIVE) {\n");
    String::operator+((String *)&local_58,(String *)&local_d0);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    String::operator+=((String *)&local_d0,"\t");
  }
  if ((in_R9[1] != 0) && (1 < *(uint *)(in_R9[1] + -8))) {
    local_60 = 0;
    String::parse_latin1((String *)&local_60,";\n");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"VELOCITY = ");
    String::operator+(local_70,(String *)&local_d0);
    String::operator+(local_68,local_70);
    String::operator+((String *)&local_58,local_68);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if ((in_R9[2] != 0) && (1 < *(uint *)(in_R9[2] + -8))) {
    local_60 = 0;
    String::parse_latin1((String *)&local_60,";\n");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"COLOR.rgb = ");
    String::operator+(local_70,(String *)&local_d0);
    String::operator+(local_68,local_70);
    String::operator+((String *)&local_58,local_68);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if ((in_R9[3] == 0) || (*(uint *)(in_R9[3] + -8) < 2)) {
    iVar1 = *(int *)(param_2 + 0x30c);
    if (iVar1 == 3) goto LAB_00106e90;
LAB_001062f7:
    if (iVar1 == 5) {
      if ((in_R9[4] != 0) && (1 < *(uint *)(in_R9[4] + -8))) {
        local_60 = 0;
        String::parse_latin1((String *)&local_60,";\n");
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"TRANSFORM = ");
        String::operator+(local_70,(String *)&local_d0);
        String::operator+(local_68,local_70);
        String::operator+((String *)&local_58,local_68);
        String::operator+=(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        iVar1 = *(int *)(param_2 + 0x30c);
        goto LAB_0010709f;
      }
    }
    else if (iVar1 == 4) {
LAB_00106309:
      lVar3 = 0x20;
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8,"=");
      lVar2 = 0x30;
      lVar4 = 5;
      goto LAB_0010633b;
    }
  }
  else {
    local_60 = 0;
    String::parse_latin1((String *)&local_60,";\n");
    local_78 = 0;
    String::parse_latin1((String *)&local_78,"COLOR.a = ");
    String::operator+(local_70,(String *)&local_d0);
    String::operator+(local_68,local_70);
    String::operator+((String *)&local_58,local_68);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar1 = *(int *)(param_2 + 0x30c);
    if (iVar1 != 3) goto LAB_001062f7;
LAB_00106e90:
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"if (RESTART_POSITION) {\n");
    String::operator+((String *)&local_58,(String *)&local_d0);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((in_R9[4] == 0) || (*(uint *)(in_R9[4] + -8) < 2)) {
      local_60 = 0;
      String::parse_latin1
                ((String *)&local_60,
                 "\tTRANSFORM = mat4(vec4(1.0, 0.0, 0.0, 0.0), vec4(0.0, 1.0, 0.0, 0.0), vec4(0.0, 0.0, 1.0, 0.0), vec4(0.0, 0.0, 0.0, 1.0));\n"
                );
      String::operator+((String *)&local_58,(String *)&local_d0);
      String::operator+=(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    else {
      local_60 = 0;
      String::parse_latin1((String *)&local_60,", 1.0));\n");
      local_78 = 0;
      String::parse_latin1
                ((String *)&local_78,
                 "\tTRANSFORM = mat4(vec4(1.0, 0.0, 0.0, 0.0), vec4(0.0, 1.0, 0.0, 0.0), vec4(0.0, 0.0, 1.0, 0.0), vec4("
                );
      String::operator+(local_70,(String *)&local_d0);
      String::operator+(local_68,local_70);
      String::operator+((String *)&local_58,local_68);
      String::operator+=(param_1,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"\tif (RESTART_VELOCITY) {\n");
    String::operator+((String *)&local_58,(String *)&local_d0);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_60 = 0;
    String::parse_latin1
              ((String *)&local_60,
               "\t\tVELOCITY = (EMISSION_TRANSFORM * vec4(VELOCITY, 0.0)).xyz;\n");
    String::operator+((String *)&local_58,(String *)&local_d0);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"\t}\n");
    String::operator+((String *)&local_58,(String *)&local_d0);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"\tTRANSFORM = EMISSION_TRANSFORM * TRANSFORM;\n");
    String::operator+((String *)&local_58,(String *)&local_d0);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"}\n");
    String::operator+((String *)&local_58,(String *)&local_d0);
    String::operator+=(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    iVar1 = *(int *)(param_2 + 0x30c);
LAB_0010709f:
    if (iVar1 - 3U < 2) {
      if (iVar1 == 4) goto LAB_00106309;
      lVar3 = 0x28;
      local_c8 = 0;
      String::parse_latin1((String *)&local_c8,"*=");
      lVar2 = 0x38;
      lVar4 = 6;
LAB_0010633b:
      if ((*(long *)((long)in_R9 + lVar2) != 0) &&
         (1 < *(uint *)(*(long *)((long)in_R9 + lVar2) + -8))) {
        local_b0 = 0;
        lVar2 = in_R9[lVar4];
        if ((lVar2 == 0) || (*(uint *)(lVar2 + -8) < 2)) {
          String::parse_latin1((String *)&local_b0,"vec3(0, 1, 0)");
        }
        else {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(in_R9 + lVar4));
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,");\n");
        local_78 = 0;
        String::parse_latin1((String *)&local_78,", ");
        local_90 = 0;
        String::parse_latin1((String *)&local_90," __build_rotation_mat4(");
        local_a8 = 0;
        String::parse_latin1((String *)&local_a8,"TRANSFORM ");
        String::operator+(local_a0,(String *)&local_d0);
        String::operator+(local_98,local_a0);
        String::operator+(local_88,local_98);
        String::operator+(local_80,local_88);
        String::operator+(local_70,local_80);
        String::operator+(local_68,local_70);
        String::operator+((String *)&local_58,local_68);
        String::operator+=(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      }
      if ((*(long *)(lVar3 + (long)in_R9) != 0) &&
         (1 < *(uint *)(*(long *)(lVar3 + (long)in_R9) + -8))) {
        local_60 = 0;
        String::parse_latin1((String *)&local_60,", 0), vec4(0, 0, 0, 1));\n");
        local_78 = 0;
        String::parse_latin1((String *)&local_78,", 0, 0), vec4(0, 0, ");
        local_90 = 0;
        String::parse_latin1((String *)&local_90,", 0, 0, 0), vec4(0, ");
        local_a8 = 0;
        String::parse_latin1((String *)&local_a8," mat4(vec4(");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"TRANSFORM ");
        String::operator+(local_b8,(String *)&local_d0);
        String::operator+((String *)&local_b0,local_b8);
        String::operator+(local_a0,(String *)&local_b0);
        String::operator+(local_98,local_a0);
        String::operator+(local_88,local_98);
        String::operator+(local_80,local_88);
        String::operator+(local_70,local_80);
        String::operator+(local_68,local_70);
        String::operator+((String *)&local_58,local_68);
        String::operator+=(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    }
  }
  if ((*in_R9 != 0) && (1 < *(uint *)(*in_R9 + -8))) {
    String::operator+=(param_1,"\t}\n");
  }
LAB_001065e0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* VisualShaderNodeParticleEmitter::get_editable_properties_names() const */

VisualShaderNodeParticleEmitter * __thiscall
VisualShaderNodeParticleEmitter::get_editable_properties_names
          (VisualShaderNodeParticleEmitter *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x28) = 2;
  local_48 = "";
  local_60 = 0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_48 = "2D Mode";
  local_68 = 0;
  local_40 = 7;
  String::parse_latin1((StrRange *)&local_68);
  RTR((String *)&local_58,(String *)&local_68);
  StringName::StringName((StringName *)&local_50,"mode_2d",false);
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  ::insert((StringName *)&local_48,(String *)this,SUB81((StringName *)&local_50,0));
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::get_editable_properties_names() const */

void VisualShaderNodeParticleMeshEmitter::get_editable_properties_names(void)

{
  bool bVar1;
  long in_RSI;
  VisualShaderNodeParticleEmitter *in_RDI;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  String local_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  VisualShaderNodeParticleEmitter::get_editable_properties_names(in_RDI);
  local_58 = "";
  local_70 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = "Mesh";
  local_78 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_78);
  RTR(local_68,(String *)&local_78);
  StringName::StringName((StringName *)&local_60,"mesh",false);
  bVar1 = SUB81((StringName *)&local_60,0);
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  ::insert((StringName *)&local_58,(String *)in_RDI,bVar1);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_58 = "";
  local_70 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = "Use All Surfaces";
  local_78 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_78);
  RTR(local_68,(String *)&local_78);
  StringName::StringName((StringName *)&local_60,"use_all_surfaces",false);
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  ::insert((StringName *)&local_58,(String *)in_RDI,bVar1);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (*(char *)(in_RSI + 0x318) == '\0') {
    local_70 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = "Surface Index";
    local_78 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_78);
    RTR(local_68,(String *)&local_78);
    StringName::StringName((StringName *)&local_60,"surface_index",false);
    HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
    ::insert((StringName *)&local_58,(String *)in_RDI,bVar1);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleEmit::generate_code(Shader::Mode, VisualShader::Type, int, String const*,
   String const*, bool) const */

String * VisualShaderNodeParticleEmit::generate_code(String *param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  uint uVar3;
  long in_R9;
  String *pSVar4;
  long in_FS_OFFSET;
  bool local_239;
  CowData<char32_t> *local_238;
  CowData<char32_t> *local_1e0;
  CowData<char32_t> *local_1d8;
  CowData<char32_t> *local_1d0;
  CowData<char32_t> *local_1c8;
  CowData<char32_t> *local_1c0;
  CowData<char32_t> *local_1b8;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  long *local_128;
  long local_120;
  undefined8 local_118;
  String local_110 [8];
  String local_108 [8];
  undefined8 local_100;
  String local_f8 [8];
  String local_f0 [8];
  undefined8 local_e8;
  String local_e0 [8];
  String local_d8 [8];
  undefined8 local_d0;
  String local_c8 [8];
  String local_c0 [8];
  undefined8 local_b8;
  String local_b0 [8];
  String local_a8 [8];
  undefined8 local_a0;
  String local_98 [8];
  String local_90 [8];
  undefined8 local_88;
  String local_80 [8];
  String local_78 [8];
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)param_1 = 0;
  local_160 = 0;
  cVar2 = VisualShaderNode::is_input_port_connected((int)param_2);
  if (cVar2 == '\0') {
    VisualShaderNode::get_input_port_default_value((int)(Variant *)local_58);
    local_239 = Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (!local_239) goto LAB_001079b9;
    String::parse_latin1((String *)&local_160,"\t");
  }
  else {
    local_60 = 2;
    local_68 = "\t\t";
    String::parse_latin1((StrRange *)&local_160);
    local_239 = false;
  }
  local_238 = (CowData<char32_t> *)&local_160;
  local_158 = 0;
  if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
    local_60 = 9;
    local_68 = "TRANSFORM";
    String::parse_latin1((StrRange *)&local_158);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_158,(CowData *)(in_R9 + 8));
  }
  local_1e0 = (CowData<char32_t> *)&local_158;
  local_150 = 0;
  if ((*(long *)(in_R9 + 0x10) == 0) || (*(uint *)(*(long *)(in_R9 + 0x10) + -8) < 2)) {
    local_60 = 8;
    local_68 = "VELOCITY";
    String::parse_latin1((StrRange *)&local_150);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,(CowData *)(in_R9 + 0x10));
  }
  local_1d8 = (CowData<char32_t> *)&local_150;
  local_148 = 0;
  if ((*(long *)(in_R9 + 0x18) == 0) || (*(uint *)(*(long *)(in_R9 + 0x18) + -8) < 2)) {
    local_60 = 9;
    local_68 = "COLOR.rgb";
    String::parse_latin1((StrRange *)&local_148);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(in_R9 + 0x18));
  }
  local_1d0 = (CowData<char32_t> *)&local_148;
  local_140 = 0;
  if ((*(long *)(in_R9 + 0x20) == 0) || (*(uint *)(*(long *)(in_R9 + 0x20) + -8) < 2)) {
    local_60 = 7;
    local_68 = "COLOR.a";
    String::parse_latin1((StrRange *)&local_140);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,(CowData *)(in_R9 + 0x20));
  }
  local_1c8 = (CowData<char32_t> *)&local_140;
  local_138 = 0;
  if ((*(long *)(in_R9 + 0x28) == 0) || (*(uint *)(*(long *)(in_R9 + 0x28) + -8) < 2)) {
    local_60 = 10;
    local_68 = "CUSTOM.rgb";
    String::parse_latin1((StrRange *)&local_138);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,(CowData *)(in_R9 + 0x28));
  }
  local_1c0 = (CowData<char32_t> *)&local_138;
  local_130 = 0;
  if ((*(long *)(in_R9 + 0x30) == 0) || (*(uint *)(*(long *)(in_R9 + 0x30) + -8) < 2)) {
    local_60 = 8;
    local_68 = "CUSTOM.a";
    String::parse_latin1((StrRange *)&local_130);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)(in_R9 + 0x30));
  }
  local_1b8 = (CowData<char32_t> *)&local_130;
  uVar3 = *(uint *)(param_2 + 0x30c);
  local_128 = (long *)0x0;
  if ((uVar3 & 1) != 0) {
    local_68 = (char *)0x0;
    String::parse_latin1((String *)&local_68,"FLAG_EMIT_POSITION");
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_128,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    uVar3 = *(uint *)(param_2 + 0x30c);
  }
  if ((uVar3 & 2) != 0) {
    local_68 = (char *)0x0;
    String::parse_latin1((String *)&local_68,"FLAG_EMIT_ROT_SCALE");
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_128,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    uVar3 = *(uint *)(param_2 + 0x30c);
  }
  if ((uVar3 & 4) != 0) {
    local_68 = (char *)0x0;
    String::parse_latin1((String *)&local_68,"FLAG_EMIT_VELOCITY");
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_128,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    uVar3 = *(uint *)(param_2 + 0x30c);
  }
  if ((uVar3 & 8) != 0) {
    local_68 = (char *)0x0;
    String::parse_latin1((String *)&local_68,"FLAG_EMIT_COLOR");
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_128,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    uVar3 = *(uint *)(param_2 + 0x30c);
  }
  if ((uVar3 & 0x10) != 0) {
    local_68 = (char *)0x0;
    String::parse_latin1((String *)&local_68,"FLAG_EMIT_CUSTOM");
    List<String,DefaultAllocator>::push_back
              ((List<String,DefaultAllocator> *)&local_128,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  }
  plVar1 = local_128;
  local_120 = 0;
  if (local_128 == (long *)0x0) {
LAB_00107cf3:
    local_60 = 7;
    local_68 = "uint(0)";
    String::parse_latin1((StrRange *)&local_120);
  }
  else {
    pSVar4 = (String *)*local_128;
    if (pSVar4 == (String *)0x0) goto LAB_00107cf3;
    while( true ) {
      String::operator+=((String *)&local_120,pSVar4);
      pSVar4 = *(String **)(pSVar4 + 8);
      if (pSVar4 == (String *)0x0) break;
      if (pSVar4 != (String *)*plVar1) {
        String::operator+=((String *)&local_120,"|");
      }
    }
    if ((local_120 == 0) || (*(uint *)(local_120 + -8) < 2)) goto LAB_00107cf3;
  }
  if (local_239 == false) {
    local_70 = 0;
    String::parse_latin1((String *)&local_70,") {\n");
    operator+((char *)local_78,(String *)"\tif (");
    String::operator+((String *)&local_68,local_78);
    String::operator+=(param_1,(String *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  local_70 = 0;
  local_68 = ");\n";
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_70);
  local_88 = 0;
  local_68 = "), ";
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_88);
  local_68 = ", ";
  local_a0 = 0;
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_a0);
  local_b8 = 0;
  local_68 = "), vec4(";
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_b8);
  local_68 = ", ";
  local_d0 = 0;
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_d0);
  local_e8 = 0;
  local_68 = ", vec4(";
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_e8);
  local_68 = ", ";
  local_100 = 0;
  local_60 = 2;
  String::parse_latin1((StrRange *)&local_100);
  local_118 = 0;
  local_68 = "emit_subparticle(";
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_118);
  String::operator+(local_110,(String *)local_238);
  String::operator+(local_108,local_110);
  String::operator+(local_f8,local_108);
  String::operator+(local_f0,local_f8);
  String::operator+(local_e0,local_f0);
  String::operator+(local_d8,local_e0);
  String::operator+(local_c8,local_d8);
  String::operator+(local_c0,local_c8);
  String::operator+(local_b0,local_c0);
  String::operator+(local_a8,local_b0);
  String::operator+(local_98,local_a8);
  String::operator+(local_90,local_98);
  String::operator+(local_80,local_90);
  String::operator+(local_78,local_80);
  String::operator+((String *)&local_68,local_78);
  String::operator+=(param_1,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_239 == false) {
    String::operator+=(param_1,"\t}\n");
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_128);
  CowData<char32_t>::_unref(local_1b8);
  CowData<char32_t>::_unref(local_1c0);
  CowData<char32_t>::_unref(local_1c8);
  CowData<char32_t>::_unref(local_1d0);
  CowData<char32_t>::_unref(local_1d8);
  CowData<char32_t>::_unref(local_1e0);
LAB_001079b9:
  local_238 = (CowData<char32_t> *)&local_160;
  CowData<char32_t>::_unref(local_238);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* VisualShaderNodeParticleRingEmitter::generate_code(Shader::Mode, VisualShader::Type, int, String
   const*, String const*, bool) const */

CowData<char32_t> *
VisualShaderNodeParticleRingEmitter::generate_code(CowData<char32_t> *param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  CowData *in_R9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_160;
  CowData<char32_t> *local_158;
  CowData<char32_t> *local_140;
  char local_11b;
  String local_118 [8];
  undefined8 local_110;
  String local_108 [8];
  undefined8 local_100;
  String local_f8 [8];
  undefined8 local_f0;
  String local_e8 [8];
  undefined8 local_e0;
  String local_d8 [8];
  undefined8 local_d0;
  String local_c8 [8];
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  char *local_a8;
  undefined8 local_a0;
  int local_98 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_11b = *(char *)(param_2 + 0x30b);
  *(undefined8 *)param_1 = 0;
  local_b0 = 0;
  local_a8 = ");\n";
  local_a0 = 3;
  if (local_11b == '\0') {
    String::parse_latin1((StrRange *)&local_b0);
    if ((*(long *)(in_R9 + 0x10) == 0) || (*(uint *)(*(long *)(in_R9 + 0x10) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_c0);
      bVar2 = true;
    }
    else {
      local_c0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,in_R9 + 0x10);
      bVar2 = false;
    }
    local_158 = (CowData<char32_t> *)&local_c0;
    local_d0 = 0;
    local_a8 = ", ";
    local_a0 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_78);
      Variant::operator_cast_to_String((Variant *)&local_e0);
      bVar1 = true;
    }
    else {
      local_e0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,in_R9 + 8);
      bVar1 = false;
    }
    local_160 = (CowData<char32_t> *)&local_e0;
    local_a8 = ", ";
    local_f0 = 0;
    local_a0 = 2;
    String::parse_latin1((StrRange *)&local_f0);
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_98);
      Variant::operator_cast_to_String((Variant *)&local_100);
      bVar4 = true;
    }
    else {
      local_100 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,in_R9);
      bVar4 = false;
    }
    local_140 = (CowData<char32_t> *)&local_100;
    local_110 = 0;
    local_a8 = " = __get_random_point_on_ring3d(__seed, ";
    local_a0 = 0x28;
    String::parse_latin1((StrRange *)&local_110);
    operator+((char *)local_118,(String *)&_LC146);
    String::operator+(local_108,local_118);
    String::operator+(local_f8,local_108);
    String::operator+(local_e8,local_f8);
    String::operator+(local_d8,local_e8);
    String::operator+(local_c8,local_d8);
    String::operator+(local_b8,local_c8);
    String::operator+((String *)&local_a8,local_b8);
    if (*(char **)param_1 != local_a8) {
      CowData<char32_t>::_unref(param_1);
      pcVar5 = local_a8;
      local_a8 = (char *)0x0;
      *(char **)param_1 = pcVar5;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
    CowData<char32_t>::_unref(local_140);
    if ((bVar4) && (Variant::needs_deinit[local_98[0]] != '\0')) {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref(local_160);
    if ((bVar1) && (Variant::needs_deinit[local_78[0]] != '\0')) {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref(local_158);
    if (!bVar2) goto LAB_00108b7e;
  }
  else {
    String::parse_latin1((StrRange *)&local_b0);
    if ((*(long *)(in_R9 + 8) == 0) || (*(uint *)(*(long *)(in_R9 + 8) + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_58);
      Variant::operator_cast_to_String((Variant *)&local_c0);
      cVar3 = local_11b;
    }
    else {
      local_c0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,in_R9 + 8);
      cVar3 = '\0';
    }
    local_158 = (CowData<char32_t> *)&local_c0;
    local_d0 = 0;
    local_a8 = ", ";
    local_a0 = 2;
    String::parse_latin1((StrRange *)&local_d0);
    if ((*(long *)in_R9 == 0) || (*(uint *)(*(long *)in_R9 + -8) < 2)) {
      VisualShaderNode::get_input_port_default_value((int)local_78);
      Variant::operator_cast_to_String((Variant *)&local_e0);
    }
    else {
      local_e0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,in_R9);
      local_11b = '\0';
    }
    local_160 = (CowData<char32_t> *)&local_e0;
    local_f0 = 0;
    local_a8 = " = __get_random_point_on_ring2d(__seed, ";
    local_a0 = 0x28;
    String::parse_latin1((StrRange *)&local_f0);
    operator+((char *)local_f8,(String *)&_LC146);
    String::operator+(local_e8,local_f8);
    String::operator+(local_d8,local_e8);
    String::operator+(local_c8,local_d8);
    String::operator+(local_b8,local_c8);
    String::operator+((String *)&local_a8,local_b8);
    if (*(char **)param_1 != local_a8) {
      CowData<char32_t>::_unref(param_1);
      pcVar5 = local_a8;
      local_a8 = (char *)0x0;
      *(char **)param_1 = pcVar5;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref(local_160);
    if ((local_11b != '\0') && (Variant::needs_deinit[local_78[0]] != '\0')) {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref(local_158);
    if (cVar3 == '\0') goto LAB_00108b7e;
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00108b7e:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Resource::initialize_class() [clone .part.0] */

void Resource::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
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
    if ((code *)PTR__bind_methods_0012e008 != RefCounted::_bind_methods) {
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
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



/* Vector<Vector2>::push_back(Vector2) [clone .isra.0] */

void __thiscall Vector<Vector2>::push_back(undefined8 param_1,Vector<Vector2> *this)

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
  iVar1 = CowData<Vector2>::resize<false>((CowData<Vector2> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<Vector2>::_copy_on_write((CowData<Vector2> *)(this + 8));
        *(undefined8 *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_bind_methods() */

void VisualShaderNodeParticleMultiplyByAxisAngle::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "enabled";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_degrees_mode",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleMultiplyByAxisAngle,bool>(set_degrees_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"is_degrees_mode",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00126ca0;
  *(code **)(pMVar1 + 0x58) = is_degrees_mode;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a8 = "VisualShaderNodeParticleMultiplyByAxisAngle";
  local_b0 = 0;
  local_a0 = 0x2b;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "degrees_mode";
  local_d0 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,1);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_00109627;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00109627:
  local_e0 = (CowData<char32_t> *)&local_78;
  local_d8 = 0;
  local_a8 = "VisualShaderNodeParticleMultiplyByAxisAngle";
  local_a0 = 0x2b;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_e0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleEmitter::_bind_methods() */

void VisualShaderNodeParticleEmitter::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  char *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "enabled";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_mode_2d",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleEmitter,bool>((_func_void_bool *)0x2b1);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"is_mode_2d",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00126ca0;
  *(code **)(pMVar1 + 0x58) = is_mode_2d;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a8 = "VisualShaderNodeParticleEmitter";
  local_b0 = 0;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)&local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "mode_2d";
  local_d0 = 0;
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,1);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_00109b67;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00109b67:
  local_e0 = (CowData<char32_t> *)&local_78;
  local_d8 = 0;
  local_a8 = "VisualShaderNodeParticleEmitter";
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  CowData<char32_t>::_unref(local_e0);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleAccelerator::_bind_methods() */

void VisualShaderNodeParticleAccelerator::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88 [4];
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_68;
  local_60 = 0;
  local_68 = &_LC271;
  D_METHODP((char *)&local_98,(char ***)"set_mode",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleAccelerator,VisualShaderNodeParticleAccelerator::Mode>
                     (set_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_mode",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleAccelerator,VisualShaderNodeParticleAccelerator::Mode>
                     (get_mode);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Linear,Radial,Tangential";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x18;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "mode";
  local_d0 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (CowData<char32_t> *)&local_c0);
  local_d8 = 0;
  local_a8 = "VisualShaderNodeParticleAccelerator";
  local_a0 = 0x23;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a00b;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010a00b;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010a00b:
  StringName::StringName((StringName *)&local_d0,"MODE_LINEAR",false);
  local_98 = "MODE_LINEAR";
  local_d8 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleAccelerator::Mode";
  local_b8 = 0;
  local_90 = 0x29;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(CowData<char32_t> *)&local_c0,
             0x10006,(StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleAccelerator";
  local_b0 = 0;
  local_90 = 0x23;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"MODE_RADIAL",false);
  local_98 = "MODE_RADIAL";
  local_d8 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleAccelerator::Mode";
  local_b8 = 0;
  local_90 = 0x29;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(CowData<char32_t> *)&local_c0,
             0x10006,(StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleAccelerator";
  local_b0 = 0;
  local_90 = 0x23;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"MODE_TANGENTIAL",false);
  local_98 = "MODE_TANGENTIAL";
  local_d8 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleAccelerator::Mode";
  local_b8 = 0;
  local_90 = 0x29;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(CowData<char32_t> *)&local_c0,
             0x10006,(StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleAccelerator";
  local_b0 = 0;
  local_90 = 0x23;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"MODE_MAX",false);
  local_98 = "MODE_MAX";
  local_d8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleAccelerator::Mode";
  local_b8 = 0;
  local_90 = 0x29;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_b0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  local_c0 = 0;
  local_c8 = 0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_c8,0,(CowData<char32_t> *)&local_c0,
             0x10006,(StringName *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleAccelerator";
  local_b0 = 0;
  local_90 = 0x23;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,3,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRandomness::_bind_methods() */

void VisualShaderNodeParticleRandomness::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88 [4];
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC278;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_op_type",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleRandomness,VisualShaderNodeParticleRandomness::OpType>
                     (set_op_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_op_type",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleRandomness,VisualShaderNodeParticleRandomness::OpType>
                     (get_op_type);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Scalar,Vector2,Vector3,Vector4";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x1e;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "op_type";
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,2,(StrRange *)&local_c8,6,
             (details *)&local_c0);
  local_d8 = 0;
  local_a8 = "VisualShaderNodeParticleRandomness";
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa51;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010aa51;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010aa51:
  StringName::StringName((StringName *)&local_d0,"OP_TYPE_SCALAR",false);
  local_98 = "OP_TYPE_SCALAR";
  local_d8 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleRandomness::OpType";
  local_b8 = 0;
  local_90 = 0x2a;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_b0 = 0;
  local_a8 = (char *)0x0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StringName *)&local_a8,0,(CowData<char32_t> *)&local_b0,
             0x10006,(StrRange *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleRandomness";
  local_b0 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,0,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"OP_TYPE_VECTOR_2D",false);
  local_98 = "OP_TYPE_VECTOR_2D";
  local_d8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleRandomness::OpType";
  local_b8 = 0;
  local_90 = 0x2a;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_b0 = 0;
  local_a8 = (char *)0x0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StringName *)&local_a8,0,(CowData<char32_t> *)&local_b0,
             0x10006,(StrRange *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleRandomness";
  local_b0 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"OP_TYPE_VECTOR_3D",false);
  local_98 = "OP_TYPE_VECTOR_3D";
  local_d8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleRandomness::OpType";
  local_b8 = 0;
  local_90 = 0x2a;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_b0 = 0;
  local_a8 = (char *)0x0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StringName *)&local_a8,0,(CowData<char32_t> *)&local_b0,
             0x10006,(StrRange *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleRandomness";
  local_b0 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"OP_TYPE_VECTOR_4D",false);
  local_98 = "OP_TYPE_VECTOR_4D";
  local_b8 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<VisualShaderNodeParticleRandomness::OpType,void>::get_class_info
            ((GetTypeInfo<VisualShaderNodeParticleRandomness::OpType,void> *)&local_98);
  local_b0 = local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleRandomness";
  local_c0 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,3,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"OP_TYPE_MAX",false);
  local_98 = "OP_TYPE_MAX";
  local_d8 = 0;
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleRandomness::OpType";
  local_b8 = 0;
  local_90 = 0x2a;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_b0 = 0;
  local_a8 = (char *)0x0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StringName *)&local_a8,0,(CowData<char32_t> *)&local_b0,
             0x10006,(StrRange *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleRandomness";
  local_b0 = 0;
  local_90 = 0x22;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,4,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleEmit::_bind_methods() */

void VisualShaderNodeParticleEmit::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long local_88 [4];
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = &local_68;
  local_60 = 0;
  local_68 = "flags";
  D_METHODP((char *)&local_98,(char ***)"set_flags",(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleEmit,VisualShaderNodeParticleEmit::EmitFlags>
                     (set_flags);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_flags",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleEmit,VisualShaderNodeParticleEmit::EmitFlags>
                     (get_flags);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref((CowData<StringName> *)local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Position,RotScale,Velocity,Color,Custom";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x27;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "flags";
  local_d0 = 0;
  local_90 = 5;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,6,(StrRange *)&local_c8,6,
             (details *)&local_c0);
  local_d8 = 0;
  local_a8 = "VisualShaderNodeParticleEmit";
  local_a0 = 0x1c;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b59e;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010b59e;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010b59e:
  StringName::StringName((StringName *)&local_d0,"EMIT_FLAG_POSITION",false);
  local_98 = "EMIT_FLAG_POSITION";
  local_d8 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleEmit::EmitFlags";
  local_b8 = 0;
  local_90 = 0x27;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_b0 = 0;
  local_a8 = (char *)0x0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StringName *)&local_a8,0,(CowData<char32_t> *)&local_b0,
             0x10006,(StrRange *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleEmit";
  local_b0 = 0;
  local_90 = 0x1c;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,1,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"EMIT_FLAG_ROT_SCALE",false);
  local_98 = "EMIT_FLAG_ROT_SCALE";
  local_d8 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleEmit::EmitFlags";
  local_b8 = 0;
  local_90 = 0x27;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_b0 = 0;
  local_a8 = (char *)0x0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StringName *)&local_a8,0,(CowData<char32_t> *)&local_b0,
             0x10006,(StrRange *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleEmit";
  local_b0 = 0;
  local_90 = 0x1c;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,2,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"EMIT_FLAG_VELOCITY",false);
  local_98 = "EMIT_FLAG_VELOCITY";
  local_b8 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<VisualShaderNodeParticleEmit::EmitFlags,void>::get_class_info
            ((GetTypeInfo<VisualShaderNodeParticleEmit::EmitFlags,void> *)&local_98);
  local_b0 = local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleEmit";
  local_c0 = 0;
  local_90 = 0x1c;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,4,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"EMIT_FLAG_COLOR",false);
  local_98 = "EMIT_FLAG_COLOR";
  local_d8 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleEmit::EmitFlags";
  local_b8 = 0;
  local_90 = 0x27;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_b0 = 0;
  local_a8 = (char *)0x0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StringName *)&local_a8,0,(CowData<char32_t> *)&local_b0,
             0x10006,(StrRange *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleEmit";
  local_b0 = 0;
  local_90 = 0x1c;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,8,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"EMIT_FLAG_CUSTOM",false);
  local_98 = "EMIT_FLAG_CUSTOM";
  local_d8 = 0;
  local_90 = 0x10;
  String::parse_latin1((StrRange *)&local_d8);
  local_98 = "VisualShaderNodeParticleEmit::EmitFlags";
  local_b8 = 0;
  local_90 = 0x27;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_b0 = 0;
  local_a8 = (char *)0x0;
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StringName *)&local_a8,0,(CowData<char32_t> *)&local_b0,
             0x10006,(StrRange *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_a8 = (char *)local_88[0];
  local_88[0] = 0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "VisualShaderNodeParticleEmit";
  local_b0 = 0;
  local_90 = 0x1c;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_a8,(StringName *)&local_d0,0x10,false);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::_bind_methods() */

void VisualShaderNodeParticleMeshEmitter::_bind_methods(void)

{
  MethodBind *pMVar1;
  uint uVar2;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  CowData<StringName> local_88 [32];
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "mesh";
  uVar2 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_mesh",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleMeshEmitter,Ref<Mesh>>(set_mesh);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_mesh",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleMeshEmitter,Ref<Mesh>>(get_mesh);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "enabled";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_use_all_surfaces",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleMeshEmitter,bool>(set_use_all_surfaces);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"is_use_all_surfaces",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar1);
  *(undefined ***)pMVar1 = &PTR__gen_argument_type_00126ca0;
  *(code **)(pMVar1 + 0x58) = is_use_all_surfaces;
  *(undefined8 *)(pMVar1 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar1,0));
  MethodBind::_set_const(SUB81(pMVar1,0));
  MethodBind::_generate_argument_types((int)pMVar1);
  *(undefined4 *)(pMVar1 + 0x34) = 0;
  local_a8 = "VisualShaderNodeParticleMeshEmitter";
  local_b0 = 0;
  local_a0 = 0x23;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar1 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "surface_index";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_surface_index",uVar2);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleMeshEmitter,int>(set_surface_index);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_surface_index",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar1 = create_method_bind<VisualShaderNodeParticleMeshEmitter,int>(get_surface_index);
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_88);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Mesh";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "mesh";
  local_90 = 4;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,0x18,(StrRange *)&local_d0,0x11,(StrRange *)&local_c8,6,
             &local_c0);
  local_a8 = "VisualShaderNodeParticleMeshEmitter";
  local_d8 = 0;
  local_a0 = 0x23;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c427;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c427;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010c427:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "use_all_surfaces";
  local_d0 = 0;
  local_90 = 0x10;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,1,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VisualShaderNodeParticleMeshEmitter";
  local_d8 = 0;
  local_a0 = 0x23;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c5a0;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c5a0;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010c5a0:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = "surface_index";
  local_d0 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,2,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VisualShaderNodeParticleMeshEmitter";
  local_d8 = 0;
  local_a0 = 0x23;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c719;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c719;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010c719:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<StringName>::push_back(StringName) [clone .isra.0] */

void __thiscall Vector<StringName>::push_back(Vector<StringName> *this,StringName *param_2)

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
  iVar1 = CowData<StringName>::resize<false>((CowData<StringName> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 8));
        StringName::operator=((StringName *)(*(long *)(this + 8) + lVar3 * 8),param_2);
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



/* VisualShaderNodeParticleEmit::get_editable_properties() const */

VisualShaderNodeParticleEmit * __thiscall
VisualShaderNodeParticleEmit::get_editable_properties(VisualShaderNodeParticleEmit *this)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)&local_28,"flags",false);
  Vector<StringName>::push_back((Vector<StringName> *)this,&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleAccelerator::get_editable_properties() const */

VisualShaderNodeParticleAccelerator * __thiscall
VisualShaderNodeParticleAccelerator::get_editable_properties
          (VisualShaderNodeParticleAccelerator *this)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)&local_28,"mode",false);
  Vector<StringName>::push_back((Vector<StringName> *)this,&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRandomness::get_editable_properties() const */

VisualShaderNodeParticleRandomness * __thiscall
VisualShaderNodeParticleRandomness::get_editable_properties
          (VisualShaderNodeParticleRandomness *this)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)&local_28,"op_type",false);
  Vector<StringName>::push_back((Vector<StringName> *)this,&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::get_editable_properties() const */

VisualShaderNodeParticleMultiplyByAxisAngle * __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::get_editable_properties
          (VisualShaderNodeParticleMultiplyByAxisAngle *this)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)&local_28,"degrees_mode",false);
  Vector<StringName>::push_back((Vector<StringName> *)this,&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleEmitter::get_editable_properties() const */

VisualShaderNodeParticleEmitter * __thiscall
VisualShaderNodeParticleEmitter::get_editable_properties(VisualShaderNodeParticleEmitter *this)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)&local_28,"mode_2d",false);
  Vector<StringName>::push_back((Vector<StringName> *)this,&local_28);
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::get_editable_properties() const */

void VisualShaderNodeParticleMeshEmitter::get_editable_properties(void)

{
  long in_RSI;
  long in_RDI;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(in_RDI + 8) = 0;
  StringName::StringName((StringName *)&local_28,"mode_2d",false);
  Vector<StringName>::push_back();
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_28,"mesh",false);
  Vector<StringName>::push_back();
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_28,"use_all_surfaces",false);
  Vector<StringName>::push_back();
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (*(char *)(in_RSI + 0x318) == '\0') {
    StringName::StringName((StringName *)&local_28,"surface_index",false);
    Vector<StringName>::push_back();
    if ((StringName::configured != '\0') && (local_28 != 0)) {
      StringName::unref();
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::_update_texture(Vector<Vector2> const&, Ref<ImageTexture>&)
    */

void __thiscall
VisualShaderNodeParticleMeshEmitter::_update_texture
          (VisualShaderNodeParticleMeshEmitter *this,Vector *param_1,Ref *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  Image *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (Image *)0x0;
  Ref<Image>::instantiate<>((Ref<Image> *)&local_50);
  if ((*(long *)(param_1 + 8) == 0) || (lVar5 = *(long *)(*(long *)(param_1 + 8) + -8), lVar5 == 0))
  {
    lVar5 = 1;
  }
  Image::initialize_data(local_50,lVar5,1,0,10);
  uVar1 = _LC302;
  lVar5 = *(long *)(param_1 + 8);
  for (lVar4 = 0; (lVar5 != 0 && (lVar4 < *(long *)(lVar5 + -8))); lVar4 = lVar4 + 1) {
    local_48 = *(undefined8 *)(lVar5 + lVar4 * 8);
    local_40 = uVar1;
    Image::set_pixel((int)local_50,(int)lVar4,(Color *)0x0);
    lVar5 = *(long *)(param_1 + 8);
  }
  iVar3 = (**(code **)(**(long **)param_2 + 0x1c8))();
  if (((*(long *)(param_1 + 8) == 0) || ((long)iVar3 != *(long *)(*(long *)(param_1 + 8) + -8))) ||
     ((long)iVar3 == 0)) {
    ImageTexture::set_image(*(Ref **)param_2);
  }
  else {
    ImageTexture::update(*(Ref **)param_2);
  }
  if ((local_50 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    memdelete<Image>(local_50);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleMeshEmitter::_update_texture(Vector<Vector3> const&, Ref<ImageTexture>&)
    */

void __thiscall
VisualShaderNodeParticleMeshEmitter::_update_texture
          (VisualShaderNodeParticleMeshEmitter *this,Vector *param_1,Ref *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  Image *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (Image *)0x0;
  Ref<Image>::instantiate<>((Ref<Image> *)&local_50);
  if ((*(long *)(param_1 + 8) == 0) || (lVar5 = *(long *)(*(long *)(param_1 + 8) + -8), lVar5 == 0))
  {
    lVar5 = 1;
  }
  Image::initialize_data(local_50,lVar5,1,0,10);
  lVar5 = *(long *)(param_1 + 8);
  for (lVar4 = 0; (lVar5 != 0 && (lVar4 < *(long *)(lVar5 + -8))); lVar4 = lVar4 + 1) {
    puVar1 = (undefined8 *)(lVar5 + lVar4 * 0xc);
    local_48 = *puVar1;
    local_40 = *(undefined4 *)(puVar1 + 1);
    local_3c = _LC302._4_4_;
    Image::set_pixel((int)local_50,(int)lVar4,(Color *)0x0);
    lVar5 = *(long *)(param_1 + 8);
  }
  iVar3 = (**(code **)(**(long **)param_2 + 0x1c8))();
  if (((*(long *)(param_1 + 8) == 0) || ((long)iVar3 != *(long *)(*(long *)(param_1 + 8) + -8))) ||
     ((long)iVar3 == 0)) {
    ImageTexture::set_image(*(Ref **)param_2);
  }
  else {
    ImageTexture::update(*(Ref **)param_2);
  }
  if ((local_50 != (Image *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
    memdelete<Image>(local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::_update_texture(Vector<Color> const&, Ref<ImageTexture>&) */

void __thiscall
VisualShaderNodeParticleMeshEmitter::_update_texture
          (VisualShaderNodeParticleMeshEmitter *this,Vector *param_1,Ref *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  Image *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (Image *)0x0;
  Ref<Image>::instantiate<>((Ref<Image> *)&local_38);
  if ((*(long *)(param_1 + 8) == 0) || (lVar4 = *(long *)(*(long *)(param_1 + 8) + -8), lVar4 == 0))
  {
    lVar4 = 1;
  }
  Image::initialize_data(local_38,lVar4,1,0,5);
  lVar4 = *(long *)(param_1 + 8);
  for (lVar3 = 0; (lVar4 != 0 && (lVar3 < *(long *)(lVar4 + -8))); lVar3 = lVar3 + 1) {
    Image::set_pixel((int)local_38,(int)lVar3,(Color *)0x0);
    lVar4 = *(long *)(param_1 + 8);
  }
  iVar2 = (**(code **)(**(long **)param_2 + 0x1c8))();
  if (((*(long *)(param_1 + 8) == 0) || ((long)iVar2 != *(long *)(*(long *)(param_1 + 8) + -8))) ||
     ((long)iVar2 == 0)) {
    ImageTexture::set_image(*(Ref **)param_2);
  }
  else {
    ImageTexture::update(*(Ref **)param_2);
  }
  if ((local_38 != (Image *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) {
    memdelete<Image>(local_38);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<VisualShader::DefaultTextureParam>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<VisualShader::DefaultTextureParam>::_copy_on_write
          (CowData<VisualShader::DefaultTextureParam> *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  char cVar5;
  undefined8 *puVar6;
  StringName *pSVar7;
  undefined1 (*pauVar8) [16];
  StringName *this_00;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar9 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar9 = lVar1 * 0x10 - 1;
    uVar9 = uVar9 | uVar9 >> 1;
    uVar9 = uVar9 | uVar9 >> 2;
    uVar9 = uVar9 | uVar9 >> 4;
    uVar9 = uVar9 | uVar9 >> 8;
    uVar9 = uVar9 | uVar9 >> 0x10;
    uVar9 = (uVar9 | uVar9 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar9,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar10 = 0;
  *puVar6 = 1;
  puVar6[1] = lVar1;
  this_00 = (StringName *)(puVar6 + 2);
  if (lVar1 != 0) {
    do {
      pSVar7 = (StringName *)(lVar10 * 0x10 + *(long *)this);
      StringName::StringName(this_00,pSVar7);
      plVar11 = *(long **)(pSVar7 + 8);
      *(undefined8 *)(this_00 + 8) = 0;
      if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
        pauVar8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this_00 + 8) = pauVar8;
        *(undefined4 *)pauVar8[1] = 0;
        *pauVar8 = (undefined1  [16])0x0;
        do {
          while( true ) {
            pauVar8 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
            *pauVar8 = (undefined1  [16])0x0;
            pauVar8[1] = (undefined1  [16])0x0;
            if (*plVar11 != 0) {
              *(long *)*pauVar8 = *plVar11;
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                *(undefined8 *)*pauVar8 = 0;
              }
            }
            plVar2 = *(long **)(this_00 + 8);
            lVar3 = plVar2[1];
            *(undefined8 *)(*pauVar8 + 8) = 0;
            *(long **)(pauVar8[1] + 8) = plVar2;
            *(long *)pauVar8[1] = lVar3;
            if (lVar3 != 0) {
              *(undefined1 (**) [16])(lVar3 + 8) = pauVar8;
            }
            plVar2[1] = (long)pauVar8;
            if (*plVar2 != 0) break;
            plVar11 = (long *)plVar11[1];
            *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
            *plVar2 = (long)pauVar8;
            if (plVar11 == (long *)0x0) goto LAB_0010d1ce;
          }
          plVar11 = (long *)plVar11[1];
          *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
        } while (plVar11 != (long *)0x0);
      }
LAB_0010d1ce:
      lVar10 = lVar10 + 1;
      this_00 = this_00 + 0x10;
    } while (lVar1 != lVar10);
  }
  _unref(this);
  *(StringName **)this = (StringName *)(puVar6 + 2);
  return;
}



/* Vector<VisualShader::DefaultTextureParam>::push_back(VisualShader::DefaultTextureParam) [clone
   .isra.0] */

void __thiscall
Vector<VisualShader::DefaultTextureParam>::push_back
          (Vector<VisualShader::DefaultTextureParam> *this,StringName *param_2)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  undefined1 (*pauVar4) [16];
  long *plVar5;
  long lVar6;
  long lVar7;
  StringName *this_00;
  long *plVar8;
  
  if (*(long *)(this + 8) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar3 = CowData<VisualShader::DefaultTextureParam>::resize<false>
                    ((CowData<VisualShader::DefaultTextureParam> *)(this + 8),lVar6);
  if (iVar3 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar7 = -1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 8) + -8);
    lVar7 = lVar6 + -1;
    if (-1 < lVar7) {
      CowData<VisualShader::DefaultTextureParam>::_copy_on_write
                ((CowData<VisualShader::DefaultTextureParam> *)(this + 8));
      this_00 = (StringName *)(lVar7 * 0x10 + *(long *)(this + 8));
      StringName::operator=(this_00,param_2);
      plVar8 = *(long **)(this_00 + 8);
      if (plVar8 != (long *)0x0) {
        do {
          plVar5 = (long *)*plVar8;
          if (plVar5 == (long *)0x0) goto LAB_0010d350;
          if ((long *)plVar5[3] == plVar8) {
            lVar6 = plVar5[1];
            lVar7 = plVar5[2];
            *plVar8 = lVar6;
            if (plVar5 == (long *)plVar8[1]) {
              plVar8[1] = lVar7;
            }
            if (lVar7 != 0) {
              *(long *)(lVar7 + 8) = lVar6;
              lVar6 = plVar5[1];
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x10) = lVar7;
            }
            if ((*plVar5 != 0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) {
              pOVar1 = (Object *)*plVar5;
              cVar2 = predelete_handler(pOVar1);
              if (cVar2 != '\0') {
                (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
                Memory::free_static(pOVar1,false);
              }
            }
            Memory::free_static(plVar5,false);
            *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar8 = *(long **)(this_00 + 8);
        } while ((int)plVar8[2] != 0);
        Memory::free_static(plVar8,false);
        *(undefined8 *)(this_00 + 8) = 0;
      }
      plVar8 = (long *)0x0;
LAB_0010d350:
      if (*(long **)(param_2 + 8) == (long *)0x0) {
        return;
      }
      plVar5 = (long *)**(long **)(param_2 + 8);
      if (plVar5 == (long *)0x0) {
        return;
      }
      if (plVar8 == (long *)0x0) {
        pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this_00 + 8) = pauVar4;
        *(undefined4 *)pauVar4[1] = 0;
        *pauVar4 = (undefined1  [16])0x0;
      }
      do {
        while( true ) {
          pauVar4 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
          *pauVar4 = (undefined1  [16])0x0;
          pauVar4[1] = (undefined1  [16])0x0;
          if (*plVar5 != 0) {
            *(long *)*pauVar4 = *plVar5;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              *(undefined8 *)*pauVar4 = 0;
            }
          }
          plVar8 = *(long **)(this_00 + 8);
          lVar6 = plVar8[1];
          *(undefined8 *)(*pauVar4 + 8) = 0;
          *(long **)(pauVar4[1] + 8) = plVar8;
          *(long *)pauVar4[1] = lVar6;
          if (lVar6 != 0) {
            *(undefined1 (**) [16])(lVar6 + 8) = pauVar4;
          }
          plVar8[1] = (long)pauVar4;
          if (*plVar8 != 0) break;
          plVar5 = (long *)plVar5[1];
          *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
          *plVar8 = (long)pauVar4;
          if (plVar5 == (long *)0x0) {
            return;
          }
        }
        plVar5 = (long *)plVar5[1];
        *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
      } while (plVar5 != (long *)0x0);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false);
  return;
}



/* VisualShaderNodeParticleMeshEmitter::get_default_texture_parameters(VisualShader::Type, int)
   const */

Vector<VisualShader::DefaultTextureParam> *
VisualShaderNodeParticleMeshEmitter::get_default_texture_parameters
          (Vector<VisualShader::DefaultTextureParam> *param_1,long param_2,undefined4 param_3,
          undefined4 param_4)

{
  long lVar1;
  char cVar2;
  Object *pOVar3;
  undefined1 (*pauVar4) [16];
  Ref *pRVar5;
  int iVar6;
  long *plVar7;
  long in_FS_OFFSET;
  undefined8 local_78;
  CowData<char32_t> local_70 [8];
  undefined1 local_68 [16];
  Object *local_58;
  undefined1 (*local_50 [2]) [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 8) = 0;
  iVar6 = (int)param_2;
  cVar2 = VisualShaderNode::is_output_port_connected(iVar6);
  if (cVar2 != '\0') {
    local_78 = 0;
    local_68 = (undefined1  [16])0x0;
    String::parse_latin1((String *)&local_78,"mesh_vx");
    make_unique_id(local_70,param_3,param_4,(String *)&local_78);
    StringName::StringName((StringName *)&local_58,(String *)local_70,false);
    if ((Object *)local_68._0_8_ == local_58) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68._0_8_ = local_58;
    }
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_58 = (Object *)0x0;
    if ((*(long *)(param_2 + 800) == 0) ||
       (pOVar3 = (Object *)
                 __dynamic_cast(*(long *)(param_2 + 800),&Object::typeinfo,&Texture::typeinfo,0),
       pOVar3 == (Object *)0x0)) {
LAB_0010de09:
      List<Ref<Texture>,DefaultAllocator>::push_back
                ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
    }
    else {
      local_58 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_58 = (Object *)0x0;
        goto LAB_0010de09;
      }
      List<Ref<Texture>,DefaultAllocator>::push_back
                ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    StringName::StringName((StringName *)&local_58,(StringName *)local_68);
    local_50[0] = (undefined1 (*) [16])0x0;
    if (((long *)local_68._8_8_ != (long *)0x0) &&
       (pRVar5 = *(Ref **)local_68._8_8_, pRVar5 != (Ref *)0x0)) {
      do {
        List<Ref<Texture>,DefaultAllocator>::push_back
                  ((List<Ref<Texture>,DefaultAllocator> *)local_50,pRVar5);
        pRVar5 = *(Ref **)(pRVar5 + 8);
      } while (pRVar5 != (Ref *)0x0);
    }
    Vector<VisualShader::DefaultTextureParam>::push_back(param_1,(StringName *)&local_58);
    VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)&local_58);
    VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)local_68);
  }
  cVar2 = VisualShaderNode::is_output_port_connected(iVar6);
  if (cVar2 != '\0') {
    local_78 = 0;
    local_68 = (undefined1  [16])0x0;
    String::parse_latin1((String *)&local_78,"mesh_nm");
    make_unique_id(local_70,param_3,param_4,(String *)&local_78);
    StringName::StringName((StringName *)&local_58,(String *)local_70,false);
    if ((Object *)local_68._0_8_ == local_58) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68._0_8_ = local_58;
    }
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_58 = (Object *)0x0;
    if ((*(long *)(param_2 + 0x328) == 0) ||
       (pOVar3 = (Object *)
                 __dynamic_cast(*(long *)(param_2 + 0x328),&Object::typeinfo,&Texture::typeinfo,0),
       pOVar3 == (Object *)0x0)) {
LAB_0010de69:
      List<Ref<Texture>,DefaultAllocator>::push_back
                ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
    }
    else {
      local_58 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_58 = (Object *)0x0;
        goto LAB_0010de69;
      }
      List<Ref<Texture>,DefaultAllocator>::push_back
                ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    StringName::StringName((StringName *)&local_58,(StringName *)local_68);
    local_50[0] = (undefined1 (*) [16])0x0;
    if (((long *)local_68._8_8_ != (long *)0x0) &&
       (pRVar5 = *(Ref **)local_68._8_8_, pRVar5 != (Ref *)0x0)) {
      do {
        List<Ref<Texture>,DefaultAllocator>::push_back
                  ((List<Ref<Texture>,DefaultAllocator> *)local_50,pRVar5);
        pRVar5 = *(Ref **)(pRVar5 + 8);
      } while (pRVar5 != (Ref *)0x0);
    }
    Vector<VisualShader::DefaultTextureParam>::push_back(param_1,(StringName *)&local_58);
    VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)&local_58);
    VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)local_68);
  }
  cVar2 = VisualShaderNode::is_output_port_connected(iVar6);
  if ((cVar2 != '\0') || (cVar2 = VisualShaderNode::is_output_port_connected(iVar6), cVar2 != '\0'))
  {
    local_78 = 0;
    local_68 = (undefined1  [16])0x0;
    local_50[0] = (undefined1 (*) [16])0x8;
    local_58 = (Object *)0x110ac3;
    String::parse_latin1((StrRange *)&local_78);
    make_unique_id(local_70,param_3,param_4,(StrRange *)&local_78);
    StringName::StringName((StringName *)&local_58,(String *)local_70,false);
    if ((Object *)local_68._0_8_ == local_58) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68._0_8_ = local_58;
    }
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_58 = (Object *)0x0;
    if ((*(long *)(param_2 + 0x330) == 0) ||
       (pOVar3 = (Object *)
                 __dynamic_cast(*(long *)(param_2 + 0x330),&Object::typeinfo,&Texture::typeinfo,0),
       pOVar3 == (Object *)0x0)) {
LAB_0010d6ae:
      List<Ref<Texture>,DefaultAllocator>::push_back
                ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
    }
    else {
      local_58 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_58 = (Object *)0x0;
        goto LAB_0010d6ae;
      }
      List<Ref<Texture>,DefaultAllocator>::push_back
                ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    StringName::StringName((StringName *)&local_58,(StringName *)local_68);
    local_50[0] = (undefined1 (*) [16])0x0;
    if (((long *)local_68._8_8_ != (long *)0x0) &&
       (plVar7 = *(long **)local_68._8_8_, plVar7 != (long *)0x0)) {
      local_50[0] = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)local_50[0][1] = 0;
      *local_50[0] = (undefined1  [16])0x0;
      do {
        while( true ) {
          pauVar4 = (undefined1 (*) [16])operator_new(0x20,DefaultAllocator::alloc);
          *pauVar4 = (undefined1  [16])0x0;
          pauVar4[1] = (undefined1  [16])0x0;
          if (*plVar7 != 0) {
            *(long *)*pauVar4 = *plVar7;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
              *(undefined8 *)*pauVar4 = 0;
            }
          }
          lVar1 = *(long *)(*local_50[0] + 8);
          *(undefined8 *)(*pauVar4 + 8) = 0;
          *(undefined1 (**) [16])(pauVar4[1] + 8) = local_50[0];
          *(long *)pauVar4[1] = lVar1;
          if (lVar1 != 0) {
            *(undefined1 (**) [16])(lVar1 + 8) = pauVar4;
          }
          lVar1 = *(long *)*local_50[0];
          *(undefined1 (**) [16])(*local_50[0] + 8) = pauVar4;
          if (lVar1 != 0) break;
          plVar7 = (long *)plVar7[1];
          *(int *)local_50[0][1] = *(int *)local_50[0][1] + 1;
          *(undefined1 (**) [16])*local_50[0] = pauVar4;
          if (plVar7 == (long *)0x0) goto LAB_0010d7a0;
        }
        plVar7 = (long *)plVar7[1];
        *(int *)local_50[0][1] = *(int *)local_50[0][1] + 1;
      } while (plVar7 != (long *)0x0);
    }
LAB_0010d7a0:
    Vector<VisualShader::DefaultTextureParam>::push_back(param_1,(StringName *)&local_58);
    VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)&local_58);
    VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)local_68);
  }
  cVar2 = VisualShaderNode::is_output_port_connected(iVar6);
  if (cVar2 != '\0') {
    local_78 = 0;
    local_68 = (undefined1  [16])0x0;
    String::parse_latin1((String *)&local_78,"mesh_uv");
    make_unique_id(local_70,param_3,param_4,(String *)&local_78);
    StringName::StringName((StringName *)&local_58,(String *)local_70,false);
    if ((Object *)local_68._0_8_ == local_58) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68._0_8_ = local_58;
    }
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    local_58 = (Object *)0x0;
    if ((*(long *)(param_2 + 0x338) == 0) ||
       (pOVar3 = (Object *)
                 __dynamic_cast(*(long *)(param_2 + 0x338),&Object::typeinfo,&Texture::typeinfo,0),
       pOVar3 == (Object *)0x0)) {
LAB_0010de29:
      List<Ref<Texture>,DefaultAllocator>::push_back
                ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
    }
    else {
      local_58 = pOVar3;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        local_58 = (Object *)0x0;
        goto LAB_0010de29;
      }
      List<Ref<Texture>,DefaultAllocator>::push_back
                ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
      cVar2 = RefCounted::unreference();
      if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    StringName::StringName((StringName *)&local_58,(StringName *)local_68);
    local_50[0] = (undefined1 (*) [16])0x0;
    if (((long *)local_68._8_8_ != (long *)0x0) &&
       (pRVar5 = *(Ref **)local_68._8_8_, pRVar5 != (Ref *)0x0)) {
      do {
        List<Ref<Texture>,DefaultAllocator>::push_back
                  ((List<Ref<Texture>,DefaultAllocator> *)local_50,pRVar5);
        pRVar5 = *(Ref **)(pRVar5 + 8);
      } while (pRVar5 != (Ref *)0x0);
    }
    Vector<VisualShader::DefaultTextureParam>::push_back(param_1,(StringName *)&local_58);
    VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)&local_58);
    VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)local_68);
  }
  cVar2 = VisualShaderNode::is_output_port_connected(iVar6);
  if (cVar2 == '\0') goto LAB_0010d7e6;
  local_78 = 0;
  local_68 = (undefined1  [16])0x0;
  String::parse_latin1((String *)&local_78,"mesh_uv2");
  make_unique_id(local_70,param_3,param_4,(String *)&local_78);
  StringName::StringName((StringName *)&local_58,(String *)local_70,false);
  if ((Object *)local_68._0_8_ == local_58) {
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    local_68._0_8_ = local_58;
  }
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  local_58 = (Object *)0x0;
  if ((*(long *)(param_2 + 0x340) == 0) ||
     (pOVar3 = (Object *)
               __dynamic_cast(*(long *)(param_2 + 0x340),&Object::typeinfo,&Texture::typeinfo,0),
     pOVar3 == (Object *)0x0)) {
LAB_0010de49:
    List<Ref<Texture>,DefaultAllocator>::push_back
              ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
  }
  else {
    local_58 = pOVar3;
    cVar2 = RefCounted::reference();
    if (cVar2 == '\0') {
      local_58 = (Object *)0x0;
      goto LAB_0010de49;
    }
    List<Ref<Texture>,DefaultAllocator>::push_back
              ((List<Ref<Texture>,DefaultAllocator> *)(local_68 + 8),(Ref *)&local_58);
    cVar2 = RefCounted::unreference();
    if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar3), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  StringName::StringName((StringName *)&local_58,(StringName *)local_68);
  local_50[0] = (undefined1 (*) [16])0x0;
  if (((long *)local_68._8_8_ != (long *)0x0) &&
     (pRVar5 = *(Ref **)local_68._8_8_, pRVar5 != (Ref *)0x0)) {
    do {
      List<Ref<Texture>,DefaultAllocator>::push_back
                ((List<Ref<Texture>,DefaultAllocator> *)local_50,pRVar5);
      pRVar5 = *(Ref **)(pRVar5 + 8);
    } while (pRVar5 != (Ref *)0x0);
  }
  Vector<VisualShader::DefaultTextureParam>::push_back(param_1,(StringName *)&local_58);
  VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)&local_58);
  VisualShader::DefaultTextureParam::~DefaultTextureParam((DefaultTextureParam *)local_68);
LAB_0010d7e6:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* Vector<Color>::push_back(Color) [clone .isra.0] */

void Vector<Color>::push_back(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(param_3 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_3 + 8) + -8) + 1;
  }
  iVar1 = CowData<Color>::resize<false>((CowData<Color> *)(param_3 + 8),lVar4);
  if (iVar1 == 0) {
    if (*(long *)(param_3 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_3 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<Color>::_copy_on_write((CowData<Color> *)(param_3 + 8));
        puVar2 = (undefined8 *)(lVar3 * 0x10 + *(long *)(param_3 + 8));
        *puVar2 = param_1;
        puVar2[1] = param_2;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* VisualShaderNodeParticleMeshEmitter::_update_textures() */

void __thiscall
VisualShaderNodeParticleMeshEmitter::_update_textures(VisualShaderNodeParticleMeshEmitter *this)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  Variant *pVVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined1 auVar11 [16];
  Vector *local_108;
  Vector *local_100;
  Vector *local_f0;
  Vector *local_e8;
  Vector *local_e0;
  Array local_d8 [8];
  Variant local_d0 [8];
  Vector local_c8 [8];
  long local_c0;
  Vector local_b8 [8];
  long local_b0;
  Vector local_a8 [8];
  long local_a0;
  Vector<Vector2> local_98 [8];
  long local_90;
  Vector<Vector2> local_88 [8];
  long local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long **)(this + 0x310) != (long *)0x0) {
    local_c0 = 0;
    local_b0 = 0;
    local_a0 = 0;
    local_90 = 0;
    local_80 = 0;
    iVar2 = (**(code **)(**(long **)(this + 0x310) + 0x1c8))();
    if (this[0x318] == (VisualShaderNodeParticleMeshEmitter)0x0) {
      if ((*(int *)(this + 0x31c) < 0) || (iVar2 <= *(int *)(this + 0x31c))) goto LAB_0010e448;
      (**(code **)(**(long **)(this + 0x310) + 0x1e0))(local_d8);
      iVar2 = Array::size();
      if (iVar2 < 1) {
LAB_0010e65f:
        lVar7 = 0;
      }
      else {
        iVar10 = 0;
        iVar3 = (int)local_d8;
        Array::operator[](iVar3);
        Variant::operator_cast_to_Array(local_d0);
        while( true ) {
          local_108 = local_c8;
          iVar5 = Array::size();
          iVar8 = (int)local_d0;
          if (iVar5 <= iVar10) break;
          iVar10 = iVar10 + 1;
          pVVar6 = (Variant *)Array::operator[](iVar8);
          auVar11 = Variant::operator_cast_to_Vector3(pVVar6);
          local_58 = auVar11._0_8_;
          local_50 = auVar11._8_4_;
          Vector<Vector3>::push_back(local_58,auVar11._8_8_ & 0xffffffff,local_108);
        }
        Array::~Array((Array *)local_d0);
        if (iVar2 == 1) goto LAB_0010e65f;
        iVar10 = 0;
        Array::operator[](iVar3);
        Variant::operator_cast_to_Array(local_d0);
        while( true ) {
          local_f0 = local_b8;
          iVar5 = Array::size();
          if (iVar5 <= iVar10) break;
          iVar10 = iVar10 + 1;
          pVVar6 = (Variant *)Array::operator[](iVar8);
          auVar11 = Variant::operator_cast_to_Vector3(pVVar6);
          local_4c = auVar11._0_8_;
          local_44 = auVar11._8_4_;
          Vector<Vector3>::push_back(local_4c,auVar11._8_8_ & 0xffffffff,local_f0);
        }
        Array::~Array((Array *)local_d0);
        if (iVar2 < 4) goto LAB_0010e65f;
        Array::operator[](iVar3);
        Variant::operator_cast_to_Array(local_d0);
        for (iVar10 = 0; iVar5 = Array::size(), iVar10 < iVar5; iVar10 = iVar10 + 1) {
          pVVar6 = (Variant *)Array::operator[](iVar8);
          Variant::operator_cast_to_Color(pVVar6);
          Vector<Color>::push_back(local_a8);
        }
        Array::~Array((Array *)local_d0);
        if (iVar2 == 4) goto LAB_0010e65f;
        Array::operator[](iVar3);
        Variant::operator_cast_to_Array(local_d0);
        for (iVar10 = 0; iVar5 = Array::size(), iVar10 < iVar5; iVar10 = iVar10 + 1) {
          pVVar6 = (Variant *)Array::operator[](iVar8);
          Variant::operator_cast_to_Vector2(pVVar6);
          Vector<Vector2>::push_back(local_98);
        }
        Array::~Array((Array *)local_d0);
        if (iVar2 == 5) goto LAB_0010e65f;
        iVar2 = 0;
        Array::operator[](iVar3);
        Variant::operator_cast_to_Array(local_d0);
        while( true ) {
          local_e0 = (Vector *)local_88;
          iVar10 = Array::size();
          if (iVar10 <= iVar2) break;
          iVar2 = iVar2 + 1;
          pVVar6 = (Variant *)Array::operator[](iVar8);
          Variant::operator_cast_to_Vector2(pVVar6);
          Vector<Vector2>::push_back((Vector<Vector2> *)local_e0);
        }
        Array::~Array((Array *)local_d0);
        lVar7 = local_80;
      }
      Array::~Array(local_d8);
LAB_0010e578:
      local_e8 = (Vector *)local_98;
      local_100 = local_a8;
      local_e0 = (Vector *)local_88;
      local_f0 = local_b8;
      local_108 = local_c8;
      _update_texture(this,local_108,(Ref *)(this + 800));
      _update_texture(this,local_f0,(Ref *)(this + 0x328));
      _update_texture(this,local_100,(Ref *)(this + 0x330));
      _update_texture(this,local_e8,(Ref *)(this + 0x338));
      _update_texture(this,local_e0,(Ref *)(this + 0x340));
      if (lVar7 != 0) {
        LOCK();
        plVar1 = (long *)(lVar7 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          Memory::free_static((void *)(local_80 + -0x10),false);
        }
      }
    }
    else {
      if (0 < iVar2) {
        iVar10 = 0;
        do {
          (**(code **)(**(long **)(this + 0x310) + 0x1e0))(local_d8,*(long **)(this + 0x310),iVar10)
          ;
          iVar3 = Array::size();
          if (0 < iVar3) {
            iVar5 = 0;
            iVar8 = (int)local_d8;
            Array::operator[](iVar8);
            Variant::operator_cast_to_Array(local_d0);
            while( true ) {
              iVar4 = Array::size();
              iVar9 = (int)local_d0;
              if (iVar4 <= iVar5) break;
              iVar5 = iVar5 + 1;
              pVVar6 = (Variant *)Array::operator[](iVar9);
              auVar11 = Variant::operator_cast_to_Vector3(pVVar6);
              local_70 = auVar11._0_8_;
              local_68 = auVar11._8_4_;
              Vector<Vector3>::push_back(local_70,auVar11._8_8_ & 0xffffffff,local_c8);
            }
            Array::~Array((Array *)local_d0);
            if (iVar3 != 1) {
              Array::operator[](iVar8);
              Variant::operator_cast_to_Array(local_d0);
              for (iVar5 = 0; iVar4 = Array::size(), iVar5 < iVar4; iVar5 = iVar5 + 1) {
                pVVar6 = (Variant *)Array::operator[](iVar9);
                auVar11 = Variant::operator_cast_to_Vector3(pVVar6);
                local_64 = auVar11._0_8_;
                local_5c = auVar11._8_4_;
                Vector<Vector3>::push_back(local_64,auVar11._8_8_ & 0xffffffff,local_b8);
              }
              Array::~Array((Array *)local_d0);
              if (3 < iVar3) {
                Array::operator[](iVar8);
                Variant::operator_cast_to_Array(local_d0);
                for (iVar5 = 0; iVar4 = Array::size(), iVar5 < iVar4; iVar5 = iVar5 + 1) {
                  pVVar6 = (Variant *)Array::operator[](iVar9);
                  Variant::operator_cast_to_Color(pVVar6);
                  Vector<Color>::push_back(local_a8);
                }
                Array::~Array((Array *)local_d0);
                if (iVar3 != 4) {
                  Array::operator[](iVar8);
                  Variant::operator_cast_to_Array(local_d0);
                  for (iVar5 = 0; iVar4 = Array::size(), iVar5 < iVar4; iVar5 = iVar5 + 1) {
                    pVVar6 = (Variant *)Array::operator[](iVar9);
                    Variant::operator_cast_to_Vector2(pVVar6);
                    Vector<Vector2>::push_back(local_98);
                  }
                  Array::~Array((Array *)local_d0);
                  if (iVar3 != 5) {
                    Array::operator[](iVar8);
                    Variant::operator_cast_to_Array(local_d0);
                    for (iVar3 = 0; iVar5 = Array::size(), iVar3 < iVar5; iVar3 = iVar3 + 1) {
                      pVVar6 = (Variant *)Array::operator[](iVar9);
                      Variant::operator_cast_to_Vector2(pVVar6);
                      Vector<Vector2>::push_back(local_88);
                    }
                    Array::~Array((Array *)local_d0);
                  }
                }
              }
            }
          }
          iVar10 = iVar10 + 1;
          Array::~Array(local_d8);
          lVar7 = local_80;
        } while (iVar2 != iVar10);
        goto LAB_0010e578;
      }
LAB_0010e448:
      _update_texture(this,local_c8,(Ref *)(this + 800));
      _update_texture(this,local_b8,(Ref *)(this + 0x328));
      _update_texture(this,local_a8,(Ref *)(this + 0x330));
      _update_texture(this,(Vector *)local_98,(Ref *)(this + 0x338));
      _update_texture(this,(Vector *)local_88,(Ref *)(this + 0x340));
    }
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_90 + -0x10),false);
      }
    }
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_a0 + -0x10),false);
      }
    }
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_b0 + -0x10),false);
      }
    }
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static((void *)(local_c0 + -0x10),false);
          return;
        }
        goto LAB_0010e8b9;
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010e8b9:
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



/* VisualShaderNodeOutput::get_category() const */

undefined8 VisualShaderNodeOutput::get_category(void)

{
  return 1;
}



/* VisualShaderNodeParticleEmitter::is_class_ptr(void*) const */

uint __thiscall
VisualShaderNodeParticleEmitter::is_class_ptr(VisualShaderNodeParticleEmitter *this,void *param_1)

{
  return (uint)CONCAT71(0x1271,(undefined4 *)param_1 ==
                               &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleEmitter::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleEmitter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleEmitter::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleEmitter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleEmitter::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleEmitter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleEmitter::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleEmitter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleEmitter::_property_get_revertv(StringName const&, Variant&) const */

undefined8
VisualShaderNodeParticleEmitter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleEmitter::_notificationv(int, bool) */

void VisualShaderNodeParticleEmitter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleEmitter::get_category() const */

undefined8 VisualShaderNodeParticleEmitter::get_category(void)

{
  return 0xb;
}



/* VisualShaderNodeParticleSphereEmitter::is_class_ptr(void*) const */

uint VisualShaderNodeParticleSphereEmitter::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNodeParticleEmitter::get_class_ptr_static()::
                                          ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleSphereEmitter::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleSphereEmitter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleSphereEmitter::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleSphereEmitter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleSphereEmitter::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleSphereEmitter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleSphereEmitter::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleSphereEmitter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleSphereEmitter::_property_get_revertv(StringName const&, Variant&) const
    */

undefined8
VisualShaderNodeParticleSphereEmitter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleSphereEmitter::_notificationv(int, bool) */

void VisualShaderNodeParticleSphereEmitter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleBoxEmitter::is_class_ptr(void*) const */

uint VisualShaderNodeParticleBoxEmitter::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNodeParticleEmitter::get_class_ptr_static()::
                                          ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleBoxEmitter::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleBoxEmitter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleBoxEmitter::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleBoxEmitter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleBoxEmitter::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleBoxEmitter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleBoxEmitter::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleBoxEmitter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleBoxEmitter::_property_get_revertv(StringName const&, Variant&) const */

undefined8
VisualShaderNodeParticleBoxEmitter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleBoxEmitter::_notificationv(int, bool) */

void VisualShaderNodeParticleBoxEmitter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleRingEmitter::is_class_ptr(void*) const */

uint VisualShaderNodeParticleRingEmitter::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNodeParticleEmitter::get_class_ptr_static()::
                                          ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleRingEmitter::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleRingEmitter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleRingEmitter::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleRingEmitter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleRingEmitter::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleRingEmitter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleRingEmitter::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleRingEmitter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleRingEmitter::_property_get_revertv(StringName const&, Variant&) const */

undefined8
VisualShaderNodeParticleRingEmitter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleRingEmitter::_notificationv(int, bool) */

void VisualShaderNodeParticleRingEmitter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleMeshEmitter::is_class_ptr(void*) const */

uint VisualShaderNodeParticleMeshEmitter::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNodeParticleEmitter::get_class_ptr_static()::
                                          ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleMeshEmitter::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleMeshEmitter::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleMeshEmitter::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleMeshEmitter::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleMeshEmitter::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleMeshEmitter::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleMeshEmitter::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleMeshEmitter::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleMeshEmitter::_property_get_revertv(StringName const&, Variant&) const */

undefined8
VisualShaderNodeParticleMeshEmitter::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleMeshEmitter::_notificationv(int, bool) */

void VisualShaderNodeParticleMeshEmitter::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::is_class_ptr(void*) const */

uint __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::is_class_ptr
          (VisualShaderNodeParticleMultiplyByAxisAngle *this,void *param_1)

{
  return (uint)CONCAT71(0x1271,(undefined4 *)param_1 ==
                               &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleMultiplyByAxisAngle::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleMultiplyByAxisAngle::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleMultiplyByAxisAngle::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleMultiplyByAxisAngle::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_property_get_revertv(StringName const&, Variant&)
   const */

undefined8
VisualShaderNodeParticleMultiplyByAxisAngle::_property_get_revertv
          (StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_notificationv(int, bool) */

void VisualShaderNodeParticleMultiplyByAxisAngle::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::get_category() const */

undefined8 VisualShaderNodeParticleMultiplyByAxisAngle::get_category(void)

{
  return 0xb;
}



/* VisualShaderNodeParticleConeVelocity::is_class_ptr(void*) const */

uint __thiscall
VisualShaderNodeParticleConeVelocity::is_class_ptr
          (VisualShaderNodeParticleConeVelocity *this,void *param_1)

{
  return (uint)CONCAT71(0x1271,(undefined4 *)param_1 ==
                               &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleConeVelocity::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleConeVelocity::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleConeVelocity::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleConeVelocity::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleConeVelocity::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleConeVelocity::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleConeVelocity::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleConeVelocity::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleConeVelocity::_property_get_revertv(StringName const&, Variant&) const */

undefined8
VisualShaderNodeParticleConeVelocity::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleConeVelocity::_notificationv(int, bool) */

void VisualShaderNodeParticleConeVelocity::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleConeVelocity::get_category() const */

undefined8 VisualShaderNodeParticleConeVelocity::get_category(void)

{
  return 0xb;
}



/* VisualShaderNodeParticleRandomness::is_class_ptr(void*) const */

uint __thiscall
VisualShaderNodeParticleRandomness::is_class_ptr
          (VisualShaderNodeParticleRandomness *this,void *param_1)

{
  return (uint)CONCAT71(0x1271,(undefined4 *)param_1 ==
                               &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleRandomness::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleRandomness::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleRandomness::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleRandomness::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleRandomness::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleRandomness::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleRandomness::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleRandomness::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleRandomness::_property_get_revertv(StringName const&, Variant&) const */

undefined8
VisualShaderNodeParticleRandomness::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleRandomness::_notificationv(int, bool) */

void VisualShaderNodeParticleRandomness::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleRandomness::get_category() const */

undefined8 VisualShaderNodeParticleRandomness::get_category(void)

{
  return 0xb;
}



/* VisualShaderNodeParticleAccelerator::is_class_ptr(void*) const */

uint __thiscall
VisualShaderNodeParticleAccelerator::is_class_ptr
          (VisualShaderNodeParticleAccelerator *this,void *param_1)

{
  return (uint)CONCAT71(0x1271,(undefined4 *)param_1 ==
                               &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleAccelerator::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleAccelerator::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleAccelerator::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleAccelerator::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleAccelerator::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleAccelerator::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleAccelerator::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleAccelerator::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleAccelerator::_property_get_revertv(StringName const&, Variant&) const */

undefined8
VisualShaderNodeParticleAccelerator::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleAccelerator::_notificationv(int, bool) */

void VisualShaderNodeParticleAccelerator::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleAccelerator::get_category() const */

undefined8 VisualShaderNodeParticleAccelerator::get_category(void)

{
  return 0xb;
}



/* VisualShaderNodeParticleOutput::is_class_ptr(void*) const */

uint VisualShaderNodeParticleOutput::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNodeOutput::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1270,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,in_RSI == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,in_RSI == &RefCounted::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleOutput::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleOutput::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleOutput::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleOutput::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleOutput::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleOutput::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleOutput::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleOutput::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleOutput::_property_get_revertv(StringName const&, Variant&) const */

undefined8
VisualShaderNodeParticleOutput::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleOutput::_notificationv(int, bool) */

void VisualShaderNodeParticleOutput::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleEmit::is_class_ptr(void*) const */

uint __thiscall
VisualShaderNodeParticleEmit::is_class_ptr(VisualShaderNodeParticleEmit *this,void *param_1)

{
  return (uint)CONCAT71(0x1271,(undefined4 *)param_1 ==
                               &VisualShaderNode::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1270,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1271,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1272,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VisualShaderNodeParticleEmit::_getv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleEmit::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleEmit::_setv(StringName const&, Variant const&) */

undefined8 VisualShaderNodeParticleEmit::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleEmit::_validate_propertyv(PropertyInfo&) const */

void VisualShaderNodeParticleEmit::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* VisualShaderNodeParticleEmit::_property_can_revertv(StringName const&) const */

undefined8 VisualShaderNodeParticleEmit::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* VisualShaderNodeParticleEmit::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VisualShaderNodeParticleEmit::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VisualShaderNodeParticleEmit::_notificationv(int, bool) */

void VisualShaderNodeParticleEmit::_notificationv(int param_1,bool param_2)

{
  return;
}



/* VisualShaderNodeParticleEmit::get_category() const */

undefined8 VisualShaderNodeParticleEmit::get_category(void)

{
  return 0xb;
}



/* VisualShaderNodeParticleOutput::get_input_port_type(int) const [clone .cold] */

undefined8 VisualShaderNodeParticleOutput::get_input_port_type(int param_1)

{
  return 0;
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



/* CowData<Vector2>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector2>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<VisualShader::DefaultTextureParam>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<VisualShader::DefaultTextureParam>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void> *this)

{
  return;
}



/* MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::get_argument_meta(int) const */

undefined8 MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::_gen_argument_type
          (MethodBindT<VisualShaderNodeParticleEmit::EmitFlags> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::get_argument_meta(int) const */

undefined8 MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::_gen_argument_type
          (MethodBindT<VisualShaderNodeParticleAccelerator::Mode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::get_argument_meta(int) const */

undefined8 MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::_gen_argument_type(int) const */

undefined8
MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::get_argument_meta(int) const */

undefined8 MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<VisualShaderNodeParticleRandomness::OpType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<VisualShaderNodeParticleRandomness::OpType>::_gen_argument_type
          (MethodBindT<VisualShaderNodeParticleRandomness::OpType> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<VisualShaderNodeParticleRandomness::OpType>::get_argument_meta(int) const */

undefined8 MethodBindT<VisualShaderNodeParticleRandomness::OpType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTRC<Ref<Mesh>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<Mesh>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<Mesh>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<Mesh>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<Mesh> >::_gen_argument_type(int) const */

byte __thiscall MethodBindT<Ref<Mesh>>::_gen_argument_type(MethodBindT<Ref<Mesh>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<Mesh> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<Mesh>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter, void>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void>::get_argument_count
          (CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void> *this,bool *param_1
          )

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126c40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126c40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126ca0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126ca0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Ref<Mesh> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Mesh>>::~MethodBindT(MethodBindT<Ref<Mesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126d00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<Mesh> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Mesh>>::~MethodBindT(MethodBindT<Ref<Mesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126d00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<Mesh>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Mesh>>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126d60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<Mesh>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Mesh>>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126d60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126dc0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126dc0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126e20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126e20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<VisualShaderNodeParticleRandomness::OpType>::~MethodBindT() */

void __thiscall
MethodBindT<VisualShaderNodeParticleRandomness::OpType>::~MethodBindT
          (MethodBindT<VisualShaderNodeParticleRandomness::OpType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126e80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<VisualShaderNodeParticleRandomness::OpType>::~MethodBindT() */

void __thiscall
MethodBindT<VisualShaderNodeParticleRandomness::OpType>::~MethodBindT
          (MethodBindT<VisualShaderNodeParticleRandomness::OpType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126e80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::~MethodBindTRC
          (MethodBindTRC<VisualShaderNodeParticleRandomness::OpType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126ee0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::~MethodBindTRC
          (MethodBindTRC<VisualShaderNodeParticleRandomness::OpType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126ee0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindT() */

void __thiscall
MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindT
          (MethodBindT<VisualShaderNodeParticleAccelerator::Mode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126f40;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindT() */

void __thiscall
MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindT
          (MethodBindT<VisualShaderNodeParticleAccelerator::Mode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126f40;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindTRC
          (MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126fa0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindTRC
          (MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00126fa0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindT() */

void __thiscall
MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindT
          (MethodBindT<VisualShaderNodeParticleEmit::EmitFlags> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00127000;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindT() */

void __thiscall
MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindT
          (MethodBindT<VisualShaderNodeParticleEmit::EmitFlags> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00127000;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindTRC
          (MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00127060;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindTRC
          (MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00127060;
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



/* VisualShaderNodeParticleEmit::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleEmit::_get_class_namev(void)

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
LAB_00111203:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111203;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleEmit");
      goto LAB_0011126e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VisualShaderNodeParticleEmit");
LAB_0011126e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void>::get_object
          (CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011139d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011139d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011139d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
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



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleAccelerator::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleAccelerator::_get_class_namev(void)

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
LAB_00111543:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111543;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleAccelerator");
      goto LAB_001115ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "VisualShaderNodeParticleAccelerator");
LAB_001115ae:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleRingEmitter::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleRingEmitter::_get_class_namev(void)

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
LAB_00111643:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111643;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleRingEmitter");
      goto LAB_001116ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "VisualShaderNodeParticleRingEmitter");
LAB_001116ae:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleSphereEmitter::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleSphereEmitter::_get_class_namev(void)

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
LAB_00111743:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111743;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleSphereEmitter");
      goto LAB_001117ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "VisualShaderNodeParticleSphereEmitter");
LAB_001117ae:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleEmitter::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleEmitter::_get_class_namev(void)

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
LAB_00111843:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111843;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleEmitter");
      goto LAB_001118ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VisualShaderNodeParticleEmitter"
            );
LAB_001118ae:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleMeshEmitter::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleMeshEmitter::_get_class_namev(void)

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
LAB_00111943:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111943;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleMeshEmitter");
      goto LAB_001119ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "VisualShaderNodeParticleMeshEmitter");
LAB_001119ae:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleMultiplyByAxisAngle::_get_class_namev(void)

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
LAB_00111a53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111a53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleMultiplyByAxisAngle");
      goto LAB_00111abe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "VisualShaderNodeParticleMultiplyByAxisAngle");
LAB_00111abe:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleConeVelocity::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleConeVelocity::_get_class_namev(void)

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
LAB_00111b53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111b53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleConeVelocity");
      goto LAB_00111bbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "VisualShaderNodeParticleConeVelocity");
LAB_00111bbe:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleRandomness::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleRandomness::_get_class_namev(void)

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
LAB_00111c53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111c53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleRandomness");
      goto LAB_00111cbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "VisualShaderNodeParticleRandomness");
LAB_00111cbe:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleOutput::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleOutput::_get_class_namev(void)

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
LAB_00111d53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111d53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleOutput");
      goto LAB_00111dbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VisualShaderNodeParticleOutput")
  ;
LAB_00111dbe:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleBoxEmitter::_get_class_namev() const */

undefined8 * VisualShaderNodeParticleBoxEmitter::_get_class_namev(void)

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
LAB_00111e53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00111e53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "VisualShaderNodeParticleBoxEmitter");
      goto LAB_00111ebe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "VisualShaderNodeParticleBoxEmitter");
LAB_00111ebe:
  return &_get_class_namev()::_class_name_static;
}



/* VisualShaderNodeParticleEmitter::get_class() const */

void VisualShaderNodeParticleEmitter::get_class(void)

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



/* VisualShaderNodeParticleAccelerator::get_class() const */

void VisualShaderNodeParticleAccelerator::get_class(void)

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



/* VisualShaderNodeParticleSphereEmitter::get_class() const */

void VisualShaderNodeParticleSphereEmitter::get_class(void)

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



/* VisualShaderNodeParticleRandomness::get_class() const */

void VisualShaderNodeParticleRandomness::get_class(void)

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



/* VisualShaderNodeParticleEmit::get_class() const */

void VisualShaderNodeParticleEmit::get_class(void)

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



/* VisualShaderNodeParticleBoxEmitter::get_class() const */

void VisualShaderNodeParticleBoxEmitter::get_class(void)

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



/* VisualShaderNodeParticleRingEmitter::get_class() const */

void VisualShaderNodeParticleRingEmitter::get_class(void)

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



/* VisualShaderNodeParticleConeVelocity::get_class() const */

void VisualShaderNodeParticleConeVelocity::get_class(void)

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



/* VisualShaderNodeParticleMultiplyByAxisAngle::get_class() const */

void VisualShaderNodeParticleMultiplyByAxisAngle::get_class(void)

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



/* VisualShaderNodeParticleOutput::get_class() const */

void VisualShaderNodeParticleOutput::get_class(void)

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



/* VisualShaderNodeParticleMeshEmitter::get_class() const */

void VisualShaderNodeParticleMeshEmitter::get_class(void)

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
            if (lVar3 == 0) goto LAB_00112a7f;
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
LAB_00112a7f:
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
    if (cVar6 != '\0') goto LAB_00112b33;
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
      if (cVar6 != '\0') goto LAB_00112b33;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_00112b33:
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
            if (lVar4 == 0) goto LAB_00112cef;
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
LAB_00112cef:
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
    if (cVar5 != '\0') goto LAB_00112da3;
  }
  cVar5 = String::operator==(param_1,"Resource");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00112da3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* VisualShaderNode::is_class(String const&) const */

undefined8 __thiscall VisualShaderNode::is_class(VisualShaderNode *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00112edf;
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
LAB_00112edf:
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
    if (cVar5 != '\0') goto LAB_00112f93;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNode");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Resource::is_class((Resource *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00112f93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleEmit::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleEmit::is_class(VisualShaderNodeParticleEmit *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011305f;
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
LAB_0011305f:
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
    if (cVar5 != '\0') goto LAB_00113113;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleEmit");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNode::is_class((VisualShaderNode *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113113:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleAccelerator::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleAccelerator::is_class
          (VisualShaderNodeParticleAccelerator *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001131df;
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
LAB_001131df:
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
    if (cVar5 != '\0') goto LAB_00113293;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleAccelerator");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNode::is_class((VisualShaderNode *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113293:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRandomness::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleRandomness::is_class
          (VisualShaderNodeParticleRandomness *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011335f;
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
LAB_0011335f:
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
    if (cVar5 != '\0') goto LAB_00113413;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleRandomness");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNode::is_class((VisualShaderNode *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113413:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleConeVelocity::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleConeVelocity::is_class
          (VisualShaderNodeParticleConeVelocity *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001134df;
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
LAB_001134df:
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
    if (cVar5 != '\0') goto LAB_00113593;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleConeVelocity");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNode::is_class((VisualShaderNode *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113593:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::is_class
          (VisualShaderNodeParticleMultiplyByAxisAngle *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011365f;
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
LAB_0011365f:
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
    if (cVar5 != '\0') goto LAB_00113713;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleMultiplyByAxisAngle");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNode::is_class((VisualShaderNode *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113713:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleEmitter::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleEmitter::is_class(VisualShaderNodeParticleEmitter *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001137df;
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
LAB_001137df:
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
    if (cVar5 != '\0') goto LAB_00113893;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleEmitter");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNode::is_class((VisualShaderNode *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113893:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleMeshEmitter::is_class
          (VisualShaderNodeParticleMeshEmitter *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0011395f;
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
LAB_0011395f:
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
    if (cVar5 != '\0') goto LAB_00113a13;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleMeshEmitter");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNodeParticleEmitter::is_class
                        ((VisualShaderNodeParticleEmitter *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113a13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRingEmitter::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleRingEmitter::is_class
          (VisualShaderNodeParticleRingEmitter *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00113adf;
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
LAB_00113adf:
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
    if (cVar5 != '\0') goto LAB_00113b93;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleRingEmitter");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNodeParticleEmitter::is_class
                        ((VisualShaderNodeParticleEmitter *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113b93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleBoxEmitter::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleBoxEmitter::is_class
          (VisualShaderNodeParticleBoxEmitter *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00113c5f;
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
LAB_00113c5f:
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
    if (cVar5 != '\0') goto LAB_00113d13;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleBoxEmitter");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNodeParticleEmitter::is_class
                        ((VisualShaderNodeParticleEmitter *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113d13:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleSphereEmitter::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleSphereEmitter::is_class
          (VisualShaderNodeParticleSphereEmitter *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00113ddf;
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
LAB_00113ddf:
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
    if (cVar5 != '\0') goto LAB_00113e93;
  }
  cVar5 = String::operator==(param_1,"VisualShaderNodeParticleSphereEmitter");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = VisualShaderNodeParticleEmitter::is_class
                        ((VisualShaderNodeParticleEmitter *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00113e93:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleOutput::is_class(String const&) const */

undefined8 __thiscall
VisualShaderNodeParticleOutput::is_class(VisualShaderNodeParticleOutput *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_00113f7f;
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
LAB_00113f7f:
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
    if (cVar6 != '\0') goto LAB_00114033;
  }
  cVar6 = String::operator==(param_1,"VisualShaderNodeParticleOutput");
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
      if (cVar6 != '\0') goto LAB_00114033;
    }
    cVar6 = String::operator==(param_1,"VisualShaderNodeOutput");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = VisualShaderNode::is_class((VisualShaderNode *)this,param_1);
        return uVar8;
      }
      goto LAB_00114178;
    }
  }
LAB_00114033:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00114178:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNode::~VisualShaderNode() */

void __thiscall VisualShaderNode::~VisualShaderNode(VisualShaderNode *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(code **)this = RefCounted::unreference;
  pvVar3 = *(void **)(this + 0x2e0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x304) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x300) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x304) = 0;
        *(undefined1 (*) [16])(this + 0x2f0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2e8) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x2e8) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x2e0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0x304) = 0;
        *(undefined1 (*) [16])(this + 0x2f0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00114259;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x2e8),false);
  }
LAB_00114259:
  pvVar3 = *(void **)(this + 0x2b0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x2d4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2d0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x2d4) = 0;
        *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x2b8) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x2b8) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x2b0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0x2d4) = 0;
        *(undefined1 (*) [16])(this + 0x2c0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001142f9;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x2b8),false);
  }
LAB_001142f9:
  pvVar3 = *(void **)(this + 0x280);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x2a4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x2a0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x2a4) = 0;
        *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x288) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x288) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x280);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x2a4) = 0;
        *(undefined1 (*) [16])(this + 0x290) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00114397;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x288),false);
  }
LAB_00114397:
  pvVar3 = *(void **)(this + 0x250);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x274) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x270) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 600) + lVar2) != 0) {
            *(int *)(*(long *)(this + 600) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x250);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x274) = 0;
        *(undefined1 (*) [16])(this + 0x260) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011442f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 600),false);
  }
LAB_0011442f:
  Resource::~Resource((Resource *)this);
  return;
}



/* VisualShaderNodeParticleEmit::~VisualShaderNodeParticleEmit() */

void __thiscall
VisualShaderNodeParticleEmit::~VisualShaderNodeParticleEmit(VisualShaderNodeParticleEmit *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001268f0;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleEmit::~VisualShaderNodeParticleEmit() */

void __thiscall
VisualShaderNodeParticleEmit::~VisualShaderNodeParticleEmit(VisualShaderNodeParticleEmit *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001268f0;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x310);
  return;
}



/* VisualShaderNodeParticleOutput::~VisualShaderNodeParticleOutput() */

void __thiscall
VisualShaderNodeParticleOutput::~VisualShaderNodeParticleOutput
          (VisualShaderNodeParticleOutput *this)

{
  *(code **)this = predelete_handler;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleOutput::~VisualShaderNodeParticleOutput() */

void __thiscall
VisualShaderNodeParticleOutput::~VisualShaderNodeParticleOutput
          (VisualShaderNodeParticleOutput *this)

{
  *(code **)this = predelete_handler;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x318);
  return;
}



/* VisualShaderNodeParticleAccelerator::~VisualShaderNodeParticleAccelerator() */

void __thiscall
VisualShaderNodeParticleAccelerator::~VisualShaderNodeParticleAccelerator
          (VisualShaderNodeParticleAccelerator *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00126370;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleAccelerator::~VisualShaderNodeParticleAccelerator() */

void __thiscall
VisualShaderNodeParticleAccelerator::~VisualShaderNodeParticleAccelerator
          (VisualShaderNodeParticleAccelerator *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00126370;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x310);
  return;
}



/* VisualShaderNodeParticleRandomness::~VisualShaderNodeParticleRandomness() */

void __thiscall
VisualShaderNodeParticleRandomness::~VisualShaderNodeParticleRandomness
          (VisualShaderNodeParticleRandomness *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001260b0;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleRandomness::~VisualShaderNodeParticleRandomness() */

void __thiscall
VisualShaderNodeParticleRandomness::~VisualShaderNodeParticleRandomness
          (VisualShaderNodeParticleRandomness *this)

{
  *(undefined ***)this = &PTR__initialize_classv_001260b0;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x310);
  return;
}



/* VisualShaderNodeParticleConeVelocity::~VisualShaderNodeParticleConeVelocity() */

void __thiscall
VisualShaderNodeParticleConeVelocity::~VisualShaderNodeParticleConeVelocity
          (VisualShaderNodeParticleConeVelocity *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00125df0;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleConeVelocity::~VisualShaderNodeParticleConeVelocity() */

void __thiscall
VisualShaderNodeParticleConeVelocity::~VisualShaderNodeParticleConeVelocity
          (VisualShaderNodeParticleConeVelocity *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00125df0;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x310);
  return;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::~VisualShaderNodeParticleMultiplyByAxisAngle() */

void __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::~VisualShaderNodeParticleMultiplyByAxisAngle
          (VisualShaderNodeParticleMultiplyByAxisAngle *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00125b30;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::~VisualShaderNodeParticleMultiplyByAxisAngle() */

void __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::~VisualShaderNodeParticleMultiplyByAxisAngle
          (VisualShaderNodeParticleMultiplyByAxisAngle *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00125b30;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x310);
  return;
}



/* VisualShaderNodeParticleRingEmitter::~VisualShaderNodeParticleRingEmitter() */

void __thiscall
VisualShaderNodeParticleRingEmitter::~VisualShaderNodeParticleRingEmitter
          (VisualShaderNodeParticleRingEmitter *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124d48;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleRingEmitter::~VisualShaderNodeParticleRingEmitter() */

void __thiscall
VisualShaderNodeParticleRingEmitter::~VisualShaderNodeParticleRingEmitter
          (VisualShaderNodeParticleRingEmitter *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124d48;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x310);
  return;
}



/* VisualShaderNodeParticleBoxEmitter::~VisualShaderNodeParticleBoxEmitter() */

void __thiscall
VisualShaderNodeParticleBoxEmitter::~VisualShaderNodeParticleBoxEmitter
          (VisualShaderNodeParticleBoxEmitter *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124d48;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleBoxEmitter::~VisualShaderNodeParticleBoxEmitter() */

void __thiscall
VisualShaderNodeParticleBoxEmitter::~VisualShaderNodeParticleBoxEmitter
          (VisualShaderNodeParticleBoxEmitter *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124d48;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x310);
  return;
}



/* VisualShaderNodeParticleSphereEmitter::~VisualShaderNodeParticleSphereEmitter() */

void __thiscall
VisualShaderNodeParticleSphereEmitter::~VisualShaderNodeParticleSphereEmitter
          (VisualShaderNodeParticleSphereEmitter *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124d48;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleSphereEmitter::~VisualShaderNodeParticleSphereEmitter() */

void __thiscall
VisualShaderNodeParticleSphereEmitter::~VisualShaderNodeParticleSphereEmitter
          (VisualShaderNodeParticleSphereEmitter *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00124d48;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x310);
  return;
}



/* VisualShaderNodeParticleMeshEmitter::~VisualShaderNodeParticleMeshEmitter() */

void __thiscall
VisualShaderNodeParticleMeshEmitter::~VisualShaderNodeParticleMeshEmitter
          (VisualShaderNodeParticleMeshEmitter *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00125868;
  if (*(long *)(this + 0x340) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x340);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x338) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x338);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x330) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x330);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x328) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x328);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 800) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 800);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x310) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x310);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00124d48;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  return;
}



/* VisualShaderNodeParticleMeshEmitter::~VisualShaderNodeParticleMeshEmitter() */

void __thiscall
VisualShaderNodeParticleMeshEmitter::~VisualShaderNodeParticleMeshEmitter
          (VisualShaderNodeParticleMeshEmitter *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00125868;
  if (*(long *)(this + 0x340) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x340);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x338) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x338);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x330) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x330);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x328) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x328);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 800) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 800);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x310) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x310);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_00124d48;
  VisualShaderNode::~VisualShaderNode((VisualShaderNode *)this);
  operator_delete(this,0x348);
  return;
}



/* VisualShaderNode::~VisualShaderNode() */

void __thiscall VisualShaderNode::~VisualShaderNode(VisualShaderNode *this)

{
  ~VisualShaderNode(this);
  operator_delete(this,0x310);
  return;
}



/* VisualShader::DefaultTextureParam::~DefaultTextureParam() */

void __thiscall VisualShader::DefaultTextureParam::~DefaultTextureParam(DefaultTextureParam *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 8);
  if (plVar6 != (long *)0x0) {
    do {
      plVar1 = (long *)*plVar6;
      if (plVar1 == (long *)0x0) {
        if ((int)plVar6[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00114d85;
        }
        break;
      }
      if ((long *)plVar1[3] == plVar6) {
        lVar5 = plVar1[1];
        lVar2 = plVar1[2];
        *plVar6 = lVar5;
        if (plVar1 == (long *)plVar6[1]) {
          plVar6[1] = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar5;
          lVar5 = plVar1[1];
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar2;
        }
        if (*plVar1 != 0) {
          cVar4 = RefCounted::unreference();
          if (cVar4 != '\0') {
            pOVar3 = (Object *)*plVar1;
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
              Memory::free_static(pOVar3,false);
            }
          }
        }
        Memory::free_static(plVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 8);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
  }
LAB_00114d85:
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
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



/* Callable
   create_custom_callable_function_pointer<VisualShaderNodeParticleMeshEmitter>(VisualShaderNodeParticleMeshEmitter*,
   char const*, void (VisualShaderNodeParticleMeshEmitter::*)()) */

VisualShaderNodeParticleMeshEmitter *
create_custom_callable_function_pointer<VisualShaderNodeParticleMeshEmitter>
          (VisualShaderNodeParticleMeshEmitter *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC27;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00126bb0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* void Ref<ImageTexture>::instantiate<>() */

void __thiscall Ref<ImageTexture>::instantiate<>(Ref<ImageTexture> *this)

{
  char cVar1;
  ImageTexture *this_00;
  Object *pOVar2;
  Object *pOVar3;
  
  this_00 = (ImageTexture *)operator_new(0x318,"");
  ImageTexture::ImageTexture(this_00);
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
    this_00 = (ImageTexture *)0x0;
    cVar1 = predelete_handler(pOVar3);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar3 = *(Object **)this;
    pOVar2 = pOVar3;
    if (this_00 == (ImageTexture *)pOVar3) goto LAB_00114fe5;
    *(ImageTexture **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar2 = (Object *)this_00;
    if (((pOVar3 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar3), cVar1 == '\0')) goto LAB_00114fe5;
  }
  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
  Memory::free_static(pOVar3,false);
  pOVar2 = (Object *)this_00;
  if (this_00 == (ImageTexture *)0x0) {
    return;
  }
LAB_00114fe5:
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



/* WARNING: Removing unreachable block (ram,0x00115290) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00115548) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x001158d0) */
/* String vformat<String, char const*, String, String, String>(String const&, String const, char
   const* const, String const, String const, String const) */

undefined8 *
vformat<String,char_const*,String,String,String>
          (undefined8 *param_1,bool *param_2,String *param_3,char *param_4,String *param_5,
          String *param_6,String *param_7)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  int iVar4;
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
  Variant::Variant(local_c0,param_4);
  iVar4 = 0;
  Variant::Variant(local_a8,param_5);
  Variant::Variant(local_90,param_6);
  Variant::Variant(local_78,param_7);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_128);
  iVar3 = (int)local_128;
  Array::resize(iVar3);
  pVVar2 = local_d8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 5);
  String::sprintf((Array *)local_120,param_2);
  *param_1 = local_120[0];
  local_120[0] = 0;
  pVVar2 = local_48;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
  Array::~Array(local_128);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_d8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00115b88) */
/* String vformat<VisualShader::Type>(String const&, VisualShader::Type const) */

undefined8 * vformat<VisualShader::Type>(undefined8 *param_1,bool *param_2,int param_3)

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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::insert(StringName const&, String
   const&, bool) */

StringName *
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::insert(StringName *param_1,String *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  void *__s;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  long *plVar29;
  uint uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  void *__s_00;
  long lVar34;
  void *pvVar35;
  CowData *in_RCX;
  int iVar36;
  undefined7 in_register_00000011;
  StringName *pSVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  undefined8 uVar42;
  char in_R8B;
  uint uVar43;
  uint uVar44;
  ulong uVar45;
  uint uVar46;
  long *plVar47;
  long in_FS_OFFSET;
  long *local_b0;
  long local_58;
  long local_50 [2];
  long local_40;
  
  pSVar37 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar30 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar41 = (ulong)uVar30;
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    pvVar35 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = pvVar35;
    if (uVar30 != 0) {
      pvVar4 = *(void **)(param_2 + 0x10);
      if ((pvVar4 < (void *)((long)pvVar35 + uVar45)) && (pvVar35 < (void *)((long)pvVar4 + uVar32))
         ) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar32 * 4) = 0;
          *(undefined8 *)((long)pvVar35 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar41 != uVar32);
      }
      else {
        memset(pvVar4,0,uVar32);
        memset(pvVar35,0,uVar45);
      }
      goto LAB_00115e65;
    }
    iVar36 = *(int *)(param_2 + 0x2c);
    if (pvVar35 == (void *)0x0) goto LAB_00115f7f;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_00115e71;
LAB_00115fa5:
    uVar30 = *(uint *)(param_2 + 0x28);
    if (uVar30 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_b0 = (long *)0x0;
      goto LAB_0011635c;
    }
    uVar32 = (ulong)(uVar30 + 1);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    uVar3 = *(uint *)(hash_table_size_primes + (ulong)uVar30 * 4);
    if (uVar30 + 1 < 2) {
      uVar32 = 2;
    }
    uVar30 = *(uint *)(hash_table_size_primes + uVar32 * 4);
    uVar41 = (ulong)uVar30;
    *(int *)(param_2 + 0x28) = (int)uVar32;
    pvVar35 = *(void **)(param_2 + 8);
    uVar32 = uVar41 * 4;
    uVar45 = uVar41 * 8;
    pvVar4 = *(void **)(param_2 + 0x10);
    uVar33 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar33;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar30 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar41);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar3 != 0) {
      uVar32 = 0;
      do {
        uVar30 = *(uint *)((long)pvVar4 + uVar32 * 4);
        if (uVar30 != 0) {
          lVar34 = *(long *)(param_2 + 0x10);
          uVar43 = 0;
          uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar31);
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar30 * lVar38;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar45;
          lVar39 = SUB168(auVar9 * auVar21,8);
          puVar1 = (uint *)(lVar34 + lVar39 * 4);
          iVar36 = SUB164(auVar9 * auVar21,8);
          uVar44 = *puVar1;
          uVar33 = *(undefined8 *)((long)pvVar35 + uVar32 * 8);
          while (uVar44 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar44 * lVar38;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar31 + iVar36) - SUB164(auVar10 * auVar22,8)) * lVar38;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar45;
            uVar46 = SUB164(auVar11 * auVar23,8);
            uVar42 = uVar33;
            if (uVar46 < uVar43) {
              *puVar1 = uVar30;
              puVar2 = (undefined8 *)((long)__s_00 + lVar39 * 8);
              uVar42 = *puVar2;
              *puVar2 = uVar33;
              uVar30 = uVar44;
              uVar43 = uVar46;
            }
            uVar43 = uVar43 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar36 + 1) * lVar38;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar45;
            lVar39 = SUB168(auVar12 * auVar24,8);
            puVar1 = (uint *)(lVar34 + lVar39 * 4);
            iVar36 = SUB164(auVar12 * auVar24,8);
            uVar33 = uVar42;
            uVar44 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar39 * 8) = uVar33;
          *puVar1 = uVar30;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar32 = uVar32 + 1;
      } while (uVar3 != uVar32);
      Memory::free_static(pvVar35,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
LAB_00115e65:
    iVar36 = *(int *)(param_2 + 0x2c);
    if (iVar36 != 0) {
LAB_00115e71:
      uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar3);
      lVar34 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar37 == 0) {
        uVar31 = StringName::get_empty_hash();
      }
      else {
        uVar31 = *(uint *)(*(long *)pSVar37 + 0x20);
      }
      if (uVar31 == 0) {
        uVar31 = 1;
      }
      uVar46 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar31 * lVar34;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar32;
      lVar38 = SUB168(auVar5 * auVar17,8);
      uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
      uVar43 = SUB164(auVar5 * auVar17,8);
      if (uVar44 != 0) {
        do {
          if ((uVar31 == uVar44) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar38 * 8) + 0x10) == *(long *)pSVar37))
          {
            local_b0 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            if (local_b0[3] != *(long *)in_RCX) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(local_b0 + 3),in_RCX);
              local_b0 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar43 * 8);
            }
            goto LAB_0011635c;
          }
          uVar46 = uVar46 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar43 + 1) * lVar34;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar32;
          lVar38 = SUB168(auVar6 * auVar18,8);
          uVar44 = *(uint *)(*(long *)(param_2 + 0x10) + lVar38 * 4);
          uVar43 = SUB164(auVar6 * auVar18,8);
        } while ((uVar44 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar44 * lVar34, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar3 + uVar43) - SUB164(auVar7 * auVar19,8)) * lVar34,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar32, uVar46 <= SUB164(auVar8 * auVar20,8)));
      }
      iVar36 = *(int *)(param_2 + 0x2c);
    }
LAB_00115f7f:
    if ((float)uVar30 * __LC208 < (float)(iVar36 + 1)) goto LAB_00115fa5;
  }
  StringName::StringName((StringName *)&local_58,pSVar37);
  local_50[0] = 0;
  if (*(long *)in_RCX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,in_RCX);
  }
  local_b0 = (long *)operator_new(0x20,"");
  *local_b0 = 0;
  local_b0[1] = 0;
  StringName::StringName((StringName *)(local_b0 + 2),(StringName *)&local_58);
  local_b0[3] = 0;
  if (local_50[0] != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_b0 + 3),(CowData *)local_50);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_b0;
    *(long **)(param_2 + 0x20) = local_b0;
LAB_00116277:
    lVar34 = *(long *)pSVar37;
    if (lVar34 != 0) goto LAB_00116283;
LAB_001163c0:
    uVar30 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar2 = local_b0;
      local_b0[1] = (long)puVar2;
      *(long **)(param_2 + 0x20) = local_b0;
      goto LAB_00116277;
    }
    lVar34 = *(long *)(param_2 + 0x18);
    *(long **)(lVar34 + 8) = local_b0;
    *local_b0 = lVar34;
    lVar34 = *(long *)pSVar37;
    *(long **)(param_2 + 0x18) = local_b0;
    if (lVar34 == 0) goto LAB_001163c0;
LAB_00116283:
    uVar30 = *(uint *)(lVar34 + 0x20);
  }
  lVar34 = *(long *)(param_2 + 0x10);
  if (uVar30 == 0) {
    uVar30 = 1;
  }
  uVar32 = (ulong)uVar30;
  uVar44 = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar3);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar32 * lVar38;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar45;
  lVar40 = SUB168(auVar13 * auVar25,8);
  lVar39 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar34 + lVar40 * 4);
  iVar36 = SUB164(auVar13 * auVar25,8);
  uVar31 = *puVar1;
  plVar29 = local_b0;
  while (uVar31 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar31 * lVar38;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar3 + iVar36) - SUB164(auVar14 * auVar26,8)) * lVar38;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar45;
    uVar30 = SUB164(auVar15 * auVar27,8);
    plVar47 = plVar29;
    if (uVar30 < uVar44) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar31;
      puVar2 = (undefined8 *)(lVar39 + lVar40 * 8);
      plVar47 = (long *)*puVar2;
      *puVar2 = plVar29;
      uVar44 = uVar30;
    }
    uVar30 = (uint)uVar32;
    uVar44 = uVar44 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar36 + 1) * lVar38;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar45;
    lVar40 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar34 + lVar40 * 4);
    iVar36 = SUB164(auVar16 * auVar28,8);
    plVar29 = plVar47;
    uVar31 = *puVar1;
  }
  *(long **)(lVar39 + lVar40 * 8) = plVar29;
  *puVar1 = uVar30;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011635c:
  *(long **)param_1 = local_b0;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
  String::split(local_58,SUB81(param_1,0),0x116522);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC120;
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
        goto LAB_001165da;
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
  local_48 = &_LC120;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_001165da:
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



/* GetTypeInfo<VisualShaderNodeParticleRandomness::OpType, void>::get_class_info() */

GetTypeInfo<VisualShaderNodeParticleRandomness::OpType,void> * __thiscall
GetTypeInfo<VisualShaderNodeParticleRandomness::OpType,void>::get_class_info
          (GetTypeInfo<VisualShaderNodeParticleRandomness::OpType,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "VisualShaderNodeParticleRandomness::OpType";
  local_40 = 0x2a;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<VisualShaderNodeParticleEmit::EmitFlags, void>::get_class_info() */

GetTypeInfo<VisualShaderNodeParticleEmit::EmitFlags,void> * __thiscall
GetTypeInfo<VisualShaderNodeParticleEmit::EmitFlags,void>::get_class_info
          (GetTypeInfo<VisualShaderNodeParticleEmit::EmitFlags,void> *this)

{
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "VisualShaderNodeParticleEmit::EmitFlags";
  local_40 = 0x27;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter, void>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void>::call
          (CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00116cbf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00116cbf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00116c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00116d81;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00116cbf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC252,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00116d81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC27;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,2,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC27;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
      }
      goto LAB_00117035;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
LAB_00117035:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<Mesh>>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC223;
  local_40 = 4;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 0x18;
  puVar1[6] = 0x11;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] != 0x11) {
      StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
      goto LAB_00117188;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
  if (*(undefined **)(puVar1 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(undefined **)(puVar1 + 4) = local_48;
  }
LAB_00117188:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC27;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
  *puVar3 = 1;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
      }
      goto LAB_00117325;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
LAB_00117325:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_68;
  details local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "VisualShaderNodeParticleRandomness::OpType";
  local_58 = 0;
  local_40 = 0x2a;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_60,(String *)&local_58);
  StringName::StringName((StringName *)&local_68,(String *)local_60,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = (char *)0x0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_68;
  details local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = "VisualShaderNodeParticleEmit::EmitFlags";
  local_58 = 0;
  local_40 = 0x27;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_60,(String *)&local_58);
  StringName::StringName((StringName *)&local_68,(String *)local_60,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_50 = 0;
  local_48 = (char *)0x0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  details local_50 [8];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "VisualShaderNodeParticleAccelerator::Mode";
  local_40 = 0x29;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name(local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)local_50,false);
  *puVar1 = 2;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  puVar1[10] = 0x10006;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  local_60 = 0;
  local_68 = 0;
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<Mesh>>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC223;
    local_60 = 4;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,0x18,(CowData<char32_t> *)&local_80,0x11,
               (StrRange *)&local_78,6,&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC27;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleConeVelocity::_initialize_classv() */

void VisualShaderNodeParticleConeVelocity::_initialize_classv(void)

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
    if (VisualShaderNode::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNode";
      local_60 = 0;
      local_40 = 0x10;
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
      if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
        VisualShaderNode::_bind_methods();
      }
      VisualShaderNode::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNode";
    local_58 = 0;
    local_40 = 0x10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleConeVelocity";
    local_60 = 0;
    local_40 = 0x24;
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



/* VisualShaderNodeParticleOutput::_initialize_classv() */

void VisualShaderNodeParticleOutput::_initialize_classv(void)

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
    if (VisualShaderNodeOutput::initialize_class()::initialized == '\0') {
      if (VisualShaderNode::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_58 = 0;
        local_40 = 8;
        local_48 = "Resource";
        String::parse_latin1((StrRange *)&local_58);
        StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
        local_48 = "VisualShaderNode";
        local_60 = 0;
        local_40 = 0x10;
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
        if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
          VisualShaderNode::_bind_methods();
        }
        VisualShaderNode::initialize_class()::initialized = '\x01';
      }
      local_48 = "VisualShaderNode";
      local_58 = 0;
      local_40 = 0x10;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNodeOutput";
      local_60 = 0;
      local_40 = 0x16;
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
      VisualShaderNodeOutput::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNodeOutput";
    local_58 = 0;
    local_40 = 0x16;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleOutput";
    local_60 = 0;
    local_40 = 0x1e;
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
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
  if (local_90 == 0) {
LAB_0011819d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011819d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001181bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001181bf:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
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
      goto LAB_001184f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001184f1:
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



/* VisualShaderNode::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VisualShaderNode::_get_property_listv(VisualShaderNode *this,List *param_1,bool param_2)

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
  local_78 = "VisualShaderNode";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNode";
  local_98 = 0;
  local_70 = 0x10;
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
      goto LAB_001187a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001187a1:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNode",false);
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



/* VisualShaderNodeParticleEmit::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
VisualShaderNodeParticleEmit::_get_property_listv
          (VisualShaderNodeParticleEmit *this,List *param_1,bool param_2)

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
    VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleEmit";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleEmit";
  local_98 = 0;
  local_70 = 0x1c;
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
      goto LAB_00118a51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00118a51:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleEmit",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeOutput::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VisualShaderNodeOutput::_get_property_listv(VisualShaderNodeOutput *this,List *param_1,bool param_2)

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
    VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeOutput";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeOutput";
  local_98 = 0;
  local_70 = 0x16;
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
      goto LAB_00118d01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00118d01:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeOutput",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleOutput::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
VisualShaderNodeParticleOutput::_get_property_listv
          (VisualShaderNodeParticleOutput *this,List *param_1,bool param_2)

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
    VisualShaderNodeOutput::_get_property_listv((VisualShaderNodeOutput *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleOutput";
  local_70 = 0x1e;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleOutput";
  local_98 = 0;
  local_70 = 0x1e;
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
      goto LAB_00118fb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00118fb1:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleOutput",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNodeOutput::_get_property_listv((VisualShaderNodeOutput *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleAccelerator::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
VisualShaderNodeParticleAccelerator::_get_property_listv
          (VisualShaderNodeParticleAccelerator *this,List *param_1,bool param_2)

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
    VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleAccelerator";
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleAccelerator";
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
  if (local_90 == 0) {
LAB_0011928d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011928d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001192af;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001192af:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleAccelerator",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleConeVelocity::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
VisualShaderNodeParticleConeVelocity::_get_property_listv
          (VisualShaderNodeParticleConeVelocity *this,List *param_1,bool param_2)

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
    VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleConeVelocity";
  local_70 = 0x24;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleConeVelocity";
  local_98 = 0;
  local_70 = 0x24;
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
      goto LAB_00119641;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00119641:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleConeVelocity",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_get_property_listv(List<PropertyInfo,
   DefaultAllocator>*, bool) const */

void __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::_get_property_listv
          (VisualShaderNodeParticleMultiplyByAxisAngle *this,List *param_1,bool param_2)

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
    VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleMultiplyByAxisAngle";
  local_70 = 0x2b;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleMultiplyByAxisAngle";
  local_98 = 0;
  local_70 = 0x2b;
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
      goto LAB_001198f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001198f1:
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
  StringName::StringName
            ((StringName *)&local_78,"VisualShaderNodeParticleMultiplyByAxisAngle",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleEmitter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */

void __thiscall
VisualShaderNodeParticleEmitter::_get_property_listv
          (VisualShaderNodeParticleEmitter *this,List *param_1,bool param_2)

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
    VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleEmitter";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleEmitter";
  local_98 = 0;
  local_70 = 0x1f;
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
      goto LAB_00119ba1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00119ba1:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleEmitter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRingEmitter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
VisualShaderNodeParticleRingEmitter::_get_property_listv
          (VisualShaderNodeParticleRingEmitter *this,List *param_1,bool param_2)

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
    VisualShaderNodeParticleEmitter::_get_property_listv
              ((VisualShaderNodeParticleEmitter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleRingEmitter";
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleRingEmitter";
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
  if (local_90 == 0) {
LAB_00119e7d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00119e7d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00119e9f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00119e9f:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleRingEmitter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNodeParticleEmitter::_get_property_listv
                ((VisualShaderNodeParticleEmitter *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleBoxEmitter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
VisualShaderNodeParticleBoxEmitter::_get_property_listv
          (VisualShaderNodeParticleBoxEmitter *this,List *param_1,bool param_2)

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
    VisualShaderNodeParticleEmitter::_get_property_listv
              ((VisualShaderNodeParticleEmitter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleBoxEmitter";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleBoxEmitter";
  local_98 = 0;
  local_70 = 0x22;
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
      goto LAB_0011a231;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a231:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleBoxEmitter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNodeParticleEmitter::_get_property_listv
                ((VisualShaderNodeParticleEmitter *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleSphereEmitter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
VisualShaderNodeParticleSphereEmitter::_get_property_listv
          (VisualShaderNodeParticleSphereEmitter *this,List *param_1,bool param_2)

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
    VisualShaderNodeParticleEmitter::_get_property_listv
              ((VisualShaderNodeParticleEmitter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleSphereEmitter";
  local_70 = 0x25;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleSphereEmitter";
  local_98 = 0;
  local_70 = 0x25;
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
      goto LAB_0011a4e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011a4e1:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleSphereEmitter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNodeParticleEmitter::_get_property_listv
                ((VisualShaderNodeParticleEmitter *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleRandomness::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
VisualShaderNodeParticleRandomness::_get_property_listv
          (VisualShaderNodeParticleRandomness *this,List *param_1,bool param_2)

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
    VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleRandomness";
  local_70 = 0x22;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleRandomness";
  local_98 = 0;
  local_70 = 0x22;
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
LAB_0011a7bd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011a7bd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011a7df;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011a7df:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleRandomness",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNode::_get_property_listv((VisualShaderNode *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VisualShaderNodeParticleMeshEmitter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
VisualShaderNodeParticleMeshEmitter::_get_property_listv
          (VisualShaderNodeParticleMeshEmitter *this,List *param_1,bool param_2)

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
    VisualShaderNodeParticleEmitter::_get_property_listv
              ((VisualShaderNodeParticleEmitter *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VisualShaderNodeParticleMeshEmitter";
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VisualShaderNodeParticleMeshEmitter";
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
      goto LAB_0011ab71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011ab71:
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
  StringName::StringName((StringName *)&local_78,"VisualShaderNodeParticleMeshEmitter",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VisualShaderNodeParticleEmitter::_get_property_listv
                ((VisualShaderNodeParticleEmitter *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  long local_a0;
  details local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70 = 0x27;
    local_78 = "VisualShaderNodeParticleEmit::EmitFlags";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name(local_98,(String *)&local_90);
    StringName::StringName((StringName *)&local_a0,(String *)local_98,false);
    local_88 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_88,0x10006,(StringName *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *puVar2 = local_78._0_4_;
    if (*(long *)(puVar2 + 2) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_60;
    if (*(long *)(puVar2 + 8) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  details local_88 [8];
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70 = 0x29;
    local_78 = "VisualShaderNodeParticleAccelerator::Mode";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name(local_88,(String *)&local_90);
    StringName::StringName((StringName *)&local_80,(String *)local_88,false);
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
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *puVar2 = local_78._0_4_;
    if (*(long *)(puVar2 + 2) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_60;
    if (*(long *)(puVar2 + 8) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VisualShaderNodeParticleRandomness::OpType>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<VisualShaderNodeParticleRandomness::OpType>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  long local_a0;
  details local_98 [8];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  long local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_90 = 0;
    local_70 = 0x2a;
    local_78 = "VisualShaderNodeParticleRandomness::OpType";
    String::parse_latin1((StrRange *)&local_90);
    godot::details::enum_qualified_name_to_class_info_name(local_98,(String *)&local_90);
    StringName::StringName((StringName *)&local_a0,(String *)local_98,false);
    local_88 = 0;
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,2,(CowData<char32_t> *)&local_80,0,
               (CowData<char32_t> *)&local_88,0x10006,(StringName *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    *puVar2 = local_78._0_4_;
    if (*(long *)(puVar2 + 2) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_60;
    if (*(long *)(puVar2 + 8) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_50;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<VisualShaderNodeParticleEmitter, bool>(void
   (VisualShaderNodeParticleEmitter::*)(bool)) */

MethodBind * create_method_bind<VisualShaderNodeParticleEmitter,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126c40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleEmitter";
  local_30 = 0x1f;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleMeshEmitter, Ref<Mesh> >(void
   (VisualShaderNodeParticleMeshEmitter::*)(Ref<Mesh>)) */

MethodBind *
create_method_bind<VisualShaderNodeParticleMeshEmitter,Ref<Mesh>>(_func_void_Ref *param_1)

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
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126d00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleMeshEmitter";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleMeshEmitter, Ref<Mesh>>(Ref<Mesh>
   (VisualShaderNodeParticleMeshEmitter::*)() const) */

MethodBind * create_method_bind<VisualShaderNodeParticleMeshEmitter,Ref<Mesh>>(_func_Ref *param_1)

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
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126d60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleMeshEmitter";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleMeshEmitter, bool>(void
   (VisualShaderNodeParticleMeshEmitter::*)(bool)) */

MethodBind * create_method_bind<VisualShaderNodeParticleMeshEmitter,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126c40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleMeshEmitter";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleMeshEmitter, int>(void
   (VisualShaderNodeParticleMeshEmitter::*)(int)) */

MethodBind * create_method_bind<VisualShaderNodeParticleMeshEmitter,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126dc0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleMeshEmitter";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleMeshEmitter, int>(int
   (VisualShaderNodeParticleMeshEmitter::*)() const) */

MethodBind * create_method_bind<VisualShaderNodeParticleMeshEmitter,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126e20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleMeshEmitter";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleMultiplyByAxisAngle, bool>(void
   (VisualShaderNodeParticleMultiplyByAxisAngle::*)(bool)) */

MethodBind *
create_method_bind<VisualShaderNodeParticleMultiplyByAxisAngle,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126c40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleMultiplyByAxisAngle";
  local_30 = 0x2b;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleRandomness,
   VisualShaderNodeParticleRandomness::OpType>(void
   (VisualShaderNodeParticleRandomness::*)(VisualShaderNodeParticleRandomness::OpType)) */

MethodBind *
create_method_bind<VisualShaderNodeParticleRandomness,VisualShaderNodeParticleRandomness::OpType>
          (_func_void_OpType *param_1)

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
  *(_func_void_OpType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126e80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleRandomness";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleRandomness,
   VisualShaderNodeParticleRandomness::OpType>(VisualShaderNodeParticleRandomness::OpType
   (VisualShaderNodeParticleRandomness::*)() const) */

MethodBind *
create_method_bind<VisualShaderNodeParticleRandomness,VisualShaderNodeParticleRandomness::OpType>
          (_func_OpType *param_1)

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
  *(_func_OpType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126ee0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleRandomness";
  local_30 = 0x22;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleAccelerator,
   VisualShaderNodeParticleAccelerator::Mode>(void
   (VisualShaderNodeParticleAccelerator::*)(VisualShaderNodeParticleAccelerator::Mode)) */

MethodBind *
create_method_bind<VisualShaderNodeParticleAccelerator,VisualShaderNodeParticleAccelerator::Mode>
          (_func_void_Mode *param_1)

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
  *(_func_void_Mode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126f40;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleAccelerator";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleAccelerator,
   VisualShaderNodeParticleAccelerator::Mode>(VisualShaderNodeParticleAccelerator::Mode
   (VisualShaderNodeParticleAccelerator::*)() const) */

MethodBind *
create_method_bind<VisualShaderNodeParticleAccelerator,VisualShaderNodeParticleAccelerator::Mode>
          (_func_Mode *param_1)

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
  *(_func_Mode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00126fa0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleAccelerator";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleEmit,
   VisualShaderNodeParticleEmit::EmitFlags>(void
   (VisualShaderNodeParticleEmit::*)(VisualShaderNodeParticleEmit::EmitFlags)) */

MethodBind *
create_method_bind<VisualShaderNodeParticleEmit,VisualShaderNodeParticleEmit::EmitFlags>
          (_func_void_EmitFlags *param_1)

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
  *(_func_void_EmitFlags **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00127000;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleEmit";
  local_30 = 0x1c;
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



/* MethodBind* create_method_bind<VisualShaderNodeParticleEmit,
   VisualShaderNodeParticleEmit::EmitFlags>(VisualShaderNodeParticleEmit::EmitFlags
   (VisualShaderNodeParticleEmit::*)() const) */

MethodBind *
create_method_bind<VisualShaderNodeParticleEmit,VisualShaderNodeParticleEmit::EmitFlags>
          (_func_EmitFlags *param_1)

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
  *(_func_EmitFlags **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00127060;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "VisualShaderNodeParticleEmit";
  local_30 = 0x1c;
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



/* CowData<Vector2>::_realloc(long) */

undefined8 __thiscall CowData<Vector2>::_realloc(CowData<Vector2> *this,long param_1)

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
/* Error CowData<Vector2>::resize<false>(long) */

undefined8 __thiscall CowData<Vector2>::resize<false>(CowData<Vector2> *this,long param_1)

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
    lVar3 = lVar8 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011c4e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 >> 1 | uVar4;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar7 = uVar4 + 1;
  if (lVar7 == 0) goto LAB_0011c4e0;
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
LAB_0011c44c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0011c3e1;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011c44c;
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
  memset(puVar9 + lVar3,0,(param_1 - lVar3) * 8);
LAB_0011c3e1:
  puVar9[-1] = param_1;
  return 0;
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
LAB_0011c810:
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
  if (lVar7 == 0) goto LAB_0011c810;
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
LAB_0011c77c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_0011c70b;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0011c77c;
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
LAB_0011c70b:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* VisualShaderNodeParticleMultiplyByAxisAngle::_initialize_classv() */

void VisualShaderNodeParticleMultiplyByAxisAngle::_initialize_classv(void)

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
    if (VisualShaderNode::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNode";
      local_60 = 0;
      local_40 = 0x10;
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
      if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
        VisualShaderNode::_bind_methods();
      }
      VisualShaderNode::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNode";
    local_58 = 0;
    local_40 = 0x10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleMultiplyByAxisAngle";
    local_60 = 0;
    local_40 = 0x2b;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleEmitter::_initialize_classv() */

void VisualShaderNodeParticleEmitter::_initialize_classv(void)

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
    if (VisualShaderNode::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNode";
      local_60 = 0;
      local_40 = 0x10;
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
      if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
        VisualShaderNode::_bind_methods();
      }
      VisualShaderNode::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNode";
    local_58 = 0;
    local_40 = 0x10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleEmitter";
    local_60 = 0;
    local_40 = 0x1f;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleRingEmitter::_initialize_classv() */

void VisualShaderNodeParticleRingEmitter::_initialize_classv(void)

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
    if (VisualShaderNodeParticleEmitter::initialize_class()::initialized == '\0') {
      if (VisualShaderNode::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_58 = 0;
        local_40 = 8;
        local_48 = "Resource";
        String::parse_latin1((StrRange *)&local_58);
        StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
        local_48 = "VisualShaderNode";
        local_60 = 0;
        local_40 = 0x10;
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
        if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
          VisualShaderNode::_bind_methods();
        }
        VisualShaderNode::initialize_class()::initialized = '\x01';
      }
      local_48 = "VisualShaderNode";
      local_58 = 0;
      local_40 = 0x10;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNodeParticleEmitter";
      local_60 = 0;
      local_40 = 0x1f;
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
      VisualShaderNodeParticleEmitter::_bind_methods();
      VisualShaderNodeParticleEmitter::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNodeParticleEmitter";
    local_58 = 0;
    local_40 = 0x1f;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleRingEmitter";
    local_60 = 0;
    local_40 = 0x23;
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



/* VisualShaderNodeParticleBoxEmitter::_initialize_classv() */

void VisualShaderNodeParticleBoxEmitter::_initialize_classv(void)

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
    if (VisualShaderNodeParticleEmitter::initialize_class()::initialized == '\0') {
      if (VisualShaderNode::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_58 = 0;
        local_40 = 8;
        local_48 = "Resource";
        String::parse_latin1((StrRange *)&local_58);
        StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
        local_48 = "VisualShaderNode";
        local_60 = 0;
        local_40 = 0x10;
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
        if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
          VisualShaderNode::_bind_methods();
        }
        VisualShaderNode::initialize_class()::initialized = '\x01';
      }
      local_48 = "VisualShaderNode";
      local_58 = 0;
      local_40 = 0x10;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNodeParticleEmitter";
      local_60 = 0;
      local_40 = 0x1f;
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
      VisualShaderNodeParticleEmitter::_bind_methods();
      VisualShaderNodeParticleEmitter::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNodeParticleEmitter";
    local_58 = 0;
    local_40 = 0x1f;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleBoxEmitter";
    local_60 = 0;
    local_40 = 0x22;
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



/* VisualShaderNodeParticleSphereEmitter::_initialize_classv() */

void VisualShaderNodeParticleSphereEmitter::_initialize_classv(void)

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
    if (VisualShaderNodeParticleEmitter::initialize_class()::initialized == '\0') {
      if (VisualShaderNode::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_58 = 0;
        local_40 = 8;
        local_48 = "Resource";
        String::parse_latin1((StrRange *)&local_58);
        StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
        local_48 = "VisualShaderNode";
        local_60 = 0;
        local_40 = 0x10;
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
        if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
          VisualShaderNode::_bind_methods();
        }
        VisualShaderNode::initialize_class()::initialized = '\x01';
      }
      local_48 = "VisualShaderNode";
      local_58 = 0;
      local_40 = 0x10;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNodeParticleEmitter";
      local_60 = 0;
      local_40 = 0x1f;
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
      VisualShaderNodeParticleEmitter::_bind_methods();
      VisualShaderNodeParticleEmitter::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNodeParticleEmitter";
    local_58 = 0;
    local_40 = 0x1f;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleSphereEmitter";
    local_60 = 0;
    local_40 = 0x25;
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



/* VisualShaderNodeParticleAccelerator::_initialize_classv() */

void VisualShaderNodeParticleAccelerator::_initialize_classv(void)

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
    if (VisualShaderNode::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNode";
      local_60 = 0;
      local_40 = 0x10;
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
      if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
        VisualShaderNode::_bind_methods();
      }
      VisualShaderNode::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNode";
    local_58 = 0;
    local_40 = 0x10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleAccelerator";
    local_60 = 0;
    local_40 = 0x23;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleRandomness::_initialize_classv() */

void VisualShaderNodeParticleRandomness::_initialize_classv(void)

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
    if (VisualShaderNode::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNode";
      local_60 = 0;
      local_40 = 0x10;
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
      if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
        VisualShaderNode::_bind_methods();
      }
      VisualShaderNode::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNode";
    local_58 = 0;
    local_40 = 0x10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleRandomness";
    local_60 = 0;
    local_40 = 0x22;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleEmit::_initialize_classv() */

void VisualShaderNodeParticleEmit::_initialize_classv(void)

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
    if (VisualShaderNode::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        Resource::initialize_class();
      }
      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNode";
      local_60 = 0;
      local_40 = 0x10;
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
      if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
        VisualShaderNode::_bind_methods();
      }
      VisualShaderNode::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNode";
    local_58 = 0;
    local_40 = 0x10;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleEmit";
    local_60 = 0;
    local_40 = 0x1c;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VisualShaderNodeParticleMeshEmitter::_initialize_classv() */

void VisualShaderNodeParticleMeshEmitter::_initialize_classv(void)

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
    if (VisualShaderNodeParticleEmitter::initialize_class()::initialized == '\0') {
      if (VisualShaderNode::initialize_class()::initialized == '\0') {
        if (Resource::initialize_class()::initialized == '\0') {
          Resource::initialize_class();
        }
        local_58 = 0;
        local_40 = 8;
        local_48 = "Resource";
        String::parse_latin1((StrRange *)&local_58);
        StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
        local_48 = "VisualShaderNode";
        local_60 = 0;
        local_40 = 0x10;
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
        if ((code *)PTR__bind_methods_0012e010 != Resource::_bind_methods) {
          VisualShaderNode::_bind_methods();
        }
        VisualShaderNode::initialize_class()::initialized = '\x01';
      }
      local_48 = "VisualShaderNode";
      local_58 = 0;
      local_40 = 0x10;
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "VisualShaderNodeParticleEmitter";
      local_60 = 0;
      local_40 = 0x1f;
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
      VisualShaderNodeParticleEmitter::_bind_methods();
      VisualShaderNodeParticleEmitter::initialize_class()::initialized = '\x01';
    }
    local_48 = "VisualShaderNodeParticleEmitter";
    local_58 = 0;
    local_40 = 0x1f;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "VisualShaderNodeParticleMeshEmitter";
    local_60 = 0;
    local_40 = 0x23;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<StringName>::_realloc(long) */

undefined8 __thiscall CowData<StringName>::_realloc(CowData<StringName> *this,long param_1)

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
/* Error CowData<StringName>::resize<false>(long) */

undefined8 __thiscall CowData<StringName>::resize<false>(CowData<StringName> *this,long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  
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
    lVar5 = 0;
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
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0011e3e0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar8 = uVar6 + 1;
  if (lVar8 == 0) goto LAB_0011e3e0;
  if (param_1 <= lVar4) {
    lVar4 = *(long *)this;
    uVar6 = param_1;
    while (lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar6) {
LAB_0011e2ba:
        if (lVar8 != lVar5) {
          uVar2 = _realloc(this,lVar8);
          if ((int)uVar2 != 0) {
            return uVar2;
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
      while ((StringName::configured == '\0' || (*(long *)(lVar4 + uVar6 * 8) == 0))) {
        uVar6 = uVar6 + 1;
        if (*(ulong *)(lVar4 + -8) <= uVar6) goto LAB_0011e2ba;
      }
      StringName::unref();
      uVar6 = uVar6 + 1;
      lVar4 = *(long *)this;
    }
    goto LAB_0011e287;
  }
  if (lVar8 == lVar5) {
LAB_0011e35b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0011e287:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0011e33b;
  }
  else {
    if (lVar4 != 0) {
      uVar2 = _realloc(this,lVar8);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      goto LAB_0011e35b;
    }
    puVar3 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar3 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar3 + 2;
    *puVar3 = 1;
    puVar3[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0011e33b:
  puVar7[-1] = param_1;
  return 0;
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
      if (pIVar1 == (Image *)0x0) goto LAB_0011e5b8;
      cVar2 = RefCounted::unreference();
    }
    else {
      if (pIVar1 == (Image *)0x0) goto LAB_0011e5b8;
      cVar2 = RefCounted::unreference();
    }
    if (cVar2 != '\0') {
      memdelete<Image>(pIVar1);
    }
  }
LAB_0011e5b8:
  cVar2 = RefCounted::unreference();
  if (cVar2 == '\0') {
    return;
  }
  memdelete<Image>(pIVar5);
  return;
}



/* CowData<VisualShader::DefaultTextureParam>::_unref() */

void __thiscall
CowData<VisualShader::DefaultTextureParam>::_unref(CowData<VisualShader::DefaultTextureParam> *this)

{
  long *plVar1;
  DefaultTextureParam *pDVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  DefaultTextureParam *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pDVar2 = *(DefaultTextureParam **)this;
    if (pDVar2 != (DefaultTextureParam *)0x0) {
      lVar3 = *(long *)(pDVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pDVar2;
        do {
          lVar5 = lVar5 + 1;
          VisualShader::DefaultTextureParam::~DefaultTextureParam(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pDVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<VisualShader::DefaultTextureParam>::_realloc(long) */

undefined8 __thiscall
CowData<VisualShader::DefaultTextureParam>::_realloc
          (CowData<VisualShader::DefaultTextureParam> *this,long param_1)

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
/* Error CowData<VisualShader::DefaultTextureParam>::resize<false>(long) */

undefined8 __thiscall
CowData<VisualShader::DefaultTextureParam>::resize<false>
          (CowData<VisualShader::DefaultTextureParam> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 (*pauVar12) [16];
  
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
    lVar10 = 0;
    lVar7 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar10 * 0x10;
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
LAB_0011e9a0:
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
  lVar11 = uVar8 + 1;
  if (lVar11 == 0) goto LAB_0011e9a0;
  uVar9 = param_1;
  if (param_1 <= lVar10) {
    while (lVar10 = *(long *)this, lVar10 != 0) {
      if (*(ulong *)(lVar10 + -8) <= uVar9) {
        if (lVar11 != lVar7) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar10 = *(long *)this;
          if (lVar10 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar10 + -8) = param_1;
        return 0;
      }
      VisualShader::DefaultTextureParam::~DefaultTextureParam
                ((DefaultTextureParam *)(lVar10 + uVar9 * 0x10));
      uVar9 = uVar9 + 1;
    }
    goto LAB_0011e9f6;
  }
  if (lVar11 == lVar7) {
LAB_0011e913:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0011e9f6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar10 = puVar6[-1];
    if (param_1 <= lVar10) goto LAB_0011e880;
  }
  else {
    if (lVar10 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011e913;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar10 = 0;
  }
  pauVar12 = (undefined1 (*) [16])(puVar6 + param_1 * 2);
  pauVar4 = (undefined1 (*) [16])(puVar6 + lVar10 * 2);
  pauVar3 = pauVar4;
  if (((int)pauVar12 - (int)pauVar4 & 0x10U) != 0) {
    *pauVar4 = (undefined1  [16])0x0;
    pauVar3 = pauVar4 + 1;
    if (pauVar4 + 1 == pauVar12) goto LAB_0011e880;
  }
  do {
    *pauVar3 = (undefined1  [16])0x0;
    pauVar4 = pauVar3 + 2;
    pauVar3[1] = (undefined1  [16])0x0;
    pauVar3 = pauVar4;
  } while (pauVar4 != pauVar12);
LAB_0011e880:
  puVar6[-1] = param_1;
  return 0;
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
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  
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
    lVar12 = 0;
    lVar4 = 0;
  }
  else {
    lVar12 = *(long *)(lVar4 + -8);
    if (param_1 == lVar12) {
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
    lVar4 = lVar12 * 0x10;
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
LAB_0011ece0:
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
  if (lVar11 == 0) goto LAB_0011ece0;
  if (param_1 <= lVar12) {
    if ((lVar11 != lVar4) && (uVar9 = _realloc(this,lVar11), (int)uVar9 != 0)) {
      return uVar9;
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
LAB_0011ec4c:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar4 = puVar10[-1];
    if (param_1 <= lVar4) goto LAB_0011ebe0;
  }
  else {
    if (lVar12 != 0) {
      uVar9 = _realloc(this,lVar11);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      goto LAB_0011ec4c;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar5 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar4 = 0;
  }
  uVar3 = _LC302;
  uVar9 = __LC30;
  puVar7 = puVar10 + lVar4 * 2;
  puVar6 = puVar7;
  if (((param_1 - lVar4) * 0x10 & 0x10U) != 0) {
    *puVar7 = __LC30;
    puVar7[1] = uVar3;
    puVar6 = puVar7 + 2;
    if (puVar7 + (param_1 - lVar4) * 2 == puVar7 + 2) goto LAB_0011ebe0;
  }
  do {
    *puVar6 = uVar9;
    puVar6[1] = uVar3;
    puVar8 = puVar6 + 4;
    puVar6[2] = uVar9;
    puVar6[3] = uVar3;
    puVar6 = puVar8;
  } while (puVar7 + (param_1 - lVar4) * 2 != puVar8);
LAB_0011ebe0:
  puVar10[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0011ee78) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011f1f0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011f1f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::validated_call
          (MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0011f494;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011f494:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::ptrcall
          (MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0011f653;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011f653:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_0011f991;
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
                    /* WARNING: Could not recover jumptable at 0x0011f81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011f991:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::ptrcall(Object*, void const**, void*) const
    */

void MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
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
      goto LAB_0011fb71;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0011f9fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011fb71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fc40;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0011fc40:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::validated_call
          (MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0011fe54;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011fe54:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::ptrcall
          (MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00120003;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00120003:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00120341;
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
                    /* WARNING: Could not recover jumptable at 0x001201cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00120341:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
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
      goto LAB_00120521;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001203ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00120521:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001205f0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_001205f0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::validated_call
          (MethodBindTRC<VisualShaderNodeParticleRandomness::OpType> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00120804;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00120804:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::ptrcall
          (MethodBindTRC<VisualShaderNodeParticleRandomness::OpType> *this,Object *param_1,
          void **param_2,void *param_3)

{
  uint uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001209b3;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(ulong *)param_3 = (ulong)uVar1;
LAB_001209b3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VisualShaderNodeParticleRandomness::OpType>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<VisualShaderNodeParticleRandomness::OpType>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00120cf1;
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
                    /* WARNING: Could not recover jumptable at 0x00120b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00120cf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<VisualShaderNodeParticleRandomness::OpType>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<VisualShaderNodeParticleRandomness::OpType>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
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
      goto LAB_00120ed1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120d5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00120ed1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00120fa0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00120fa0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001211b4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_001211b4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00121363;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00121363:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_001216a1;
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
                    /* WARNING: Could not recover jumptable at 0x0012152c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001216a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
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
      goto LAB_00121881;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0012170b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00121881:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00121950;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_00121950:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00121b62;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_00121b62:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_00121d11;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_00121d11:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
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
      goto LAB_00122051;
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
                    /* WARNING: Could not recover jumptable at 0x00121edd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00122051:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
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
      goto LAB_00122239;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001220c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00122239:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<Mesh>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11f048;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00122350;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
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
LAB_00122350:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<Mesh>>::ptrcall
          (MethodBindTRC<Ref<Mesh>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11f048;
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001225d6;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_001225d6;
    *(undefined8 *)param_3 = 0;
    goto LAB_00122619;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_00122619;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_00122619:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001225d6;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_001225d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<Mesh>>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x11f048;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001228d8;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_00122896:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_00122896;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_001228d8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<Mesh>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11f048;
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
      goto LAB_00122b9c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_00122b78:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_00122b78;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_00122b9c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<Mesh> >::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Ref<Mesh>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x11f048;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00122f80;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_00122f75:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_00122f80;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_00122fd0;
LAB_00122fc0:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00122fd0:
      uVar7 = 4;
      goto LAB_00122f75;
    }
    if (in_R8D == 1) goto LAB_00122fc0;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC311;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_001230ed:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Mesh::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_001230ed;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_00122f80:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Mesh>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<Mesh>>::validated_call
          (MethodBindTRC<Ref<Mesh>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x11f048;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
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
      goto LAB_00123296;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_00123296:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   VisualShaderNodeParticleEmit::EmitFlags>(__UnexistingClass*, void
   (__UnexistingClass::*)(VisualShaderNodeParticleEmit::EmitFlags), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,VisualShaderNodeParticleEmit::EmitFlags>
               (__UnexistingClass *param_1,_func_void_EmitFlags *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0012353d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001235a0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001235a0:
      uVar6 = 4;
LAB_0012353d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_001234bb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001234bb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_EmitFlags **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC312;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00123516. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::call
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
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00123606;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,VisualShaderNodeParticleEmit::EmitFlags>
            (p_Var2,(_func_void_EmitFlags *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00123606:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   VisualShaderNodeParticleAccelerator::Mode>(__UnexistingClass*, void
   (__UnexistingClass::*)(VisualShaderNodeParticleAccelerator::Mode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,VisualShaderNodeParticleAccelerator::Mode>
               (__UnexistingClass *param_1,_func_void_Mode *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_001238cd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00123930;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00123930:
      uVar6 = 4;
LAB_001238cd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0012384b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012384b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_Mode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC312;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x001238a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::call
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
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00123996;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,VisualShaderNodeParticleAccelerator::Mode>
            (p_Var2,(_func_void_Mode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00123996:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass,
   VisualShaderNodeParticleRandomness::OpType>(__UnexistingClass*, void
   (__UnexistingClass::*)(VisualShaderNodeParticleRandomness::OpType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,VisualShaderNodeParticleRandomness::OpType>
               (__UnexistingClass *param_1,_func_void_OpType *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00123c5d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00123cc0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00123cc0:
      uVar6 = 4;
LAB_00123c5d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00123bdb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00123bdb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_OpType **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC312;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00123c36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<VisualShaderNodeParticleRandomness::OpType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<VisualShaderNodeParticleRandomness::OpType>::call
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
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00123d26;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,VisualShaderNodeParticleRandomness::OpType>
            (p_Var2,(_func_void_OpType *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00123d26:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_00123fed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00124050;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00124050:
      uVar6 = 4;
LAB_00123fed:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_00123f6b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00123f6b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC312;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00123fc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001240b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001240b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0012437d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001243e0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001243e0:
      uVar6 = 4;
LAB_0012437d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_001242fb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001242fb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC313;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x00124357. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC252,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00124446;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00124446:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShader::DefaultTextureParam::~DefaultTextureParam() */

void __thiscall VisualShader::DefaultTextureParam::~DefaultTextureParam(DefaultTextureParam *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleMeshEmitter::~VisualShaderNodeParticleMeshEmitter() */

void __thiscall
VisualShaderNodeParticleMeshEmitter::~VisualShaderNodeParticleMeshEmitter
          (VisualShaderNodeParticleMeshEmitter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleSphereEmitter::~VisualShaderNodeParticleSphereEmitter() */

void __thiscall
VisualShaderNodeParticleSphereEmitter::~VisualShaderNodeParticleSphereEmitter
          (VisualShaderNodeParticleSphereEmitter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleBoxEmitter::~VisualShaderNodeParticleBoxEmitter() */

void __thiscall
VisualShaderNodeParticleBoxEmitter::~VisualShaderNodeParticleBoxEmitter
          (VisualShaderNodeParticleBoxEmitter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleRingEmitter::~VisualShaderNodeParticleRingEmitter() */

void __thiscall
VisualShaderNodeParticleRingEmitter::~VisualShaderNodeParticleRingEmitter
          (VisualShaderNodeParticleRingEmitter *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleMultiplyByAxisAngle::~VisualShaderNodeParticleMultiplyByAxisAngle() */

void __thiscall
VisualShaderNodeParticleMultiplyByAxisAngle::~VisualShaderNodeParticleMultiplyByAxisAngle
          (VisualShaderNodeParticleMultiplyByAxisAngle *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleConeVelocity::~VisualShaderNodeParticleConeVelocity() */

void __thiscall
VisualShaderNodeParticleConeVelocity::~VisualShaderNodeParticleConeVelocity
          (VisualShaderNodeParticleConeVelocity *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleRandomness::~VisualShaderNodeParticleRandomness() */

void __thiscall
VisualShaderNodeParticleRandomness::~VisualShaderNodeParticleRandomness
          (VisualShaderNodeParticleRandomness *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleAccelerator::~VisualShaderNodeParticleAccelerator() */

void __thiscall
VisualShaderNodeParticleAccelerator::~VisualShaderNodeParticleAccelerator
          (VisualShaderNodeParticleAccelerator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleOutput::~VisualShaderNodeParticleOutput() */

void __thiscall
VisualShaderNodeParticleOutput::~VisualShaderNodeParticleOutput
          (VisualShaderNodeParticleOutput *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNodeParticleEmit::~VisualShaderNodeParticleEmit() */

void __thiscall
VisualShaderNodeParticleEmit::~VisualShaderNodeParticleEmit(VisualShaderNodeParticleEmit *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VisualShaderNode::~VisualShaderNode() */

void __thiscall VisualShaderNode::~VisualShaderNode(VisualShaderNode *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindTRC
          (MethodBindTRC<VisualShaderNodeParticleEmit::EmitFlags> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindT() */

void __thiscall
MethodBindT<VisualShaderNodeParticleEmit::EmitFlags>::~MethodBindT
          (MethodBindT<VisualShaderNodeParticleEmit::EmitFlags> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindTRC
          (MethodBindTRC<VisualShaderNodeParticleAccelerator::Mode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindT() */

void __thiscall
MethodBindT<VisualShaderNodeParticleAccelerator::Mode>::~MethodBindT
          (MethodBindT<VisualShaderNodeParticleAccelerator::Mode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<VisualShaderNodeParticleRandomness::OpType>::~MethodBindTRC
          (MethodBindTRC<VisualShaderNodeParticleRandomness::OpType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<VisualShaderNodeParticleRandomness::OpType>::~MethodBindT() */

void __thiscall
MethodBindT<VisualShaderNodeParticleRandomness::OpType>::~MethodBindT
          (MethodBindT<VisualShaderNodeParticleRandomness::OpType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Mesh>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<Mesh>>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<Mesh> >::~MethodBindT() */

void __thiscall MethodBindT<Ref<Mesh>>::~MethodBindT(MethodBindT<Ref<Mesh>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,
   void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<VisualShaderNodeParticleMeshEmitter,void> *this)

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



