
/* XRFaceTracker::get_blend_shape(XRFaceTracker::BlendShapeEntry) const */

undefined4 __thiscall XRFaceTracker::get_blend_shape(XRFaceTracker *this,uint param_2)

{
  if (param_2 < 0x8f) {
    return *(undefined4 *)(this + (long)(int)param_2 * 4 + 0x1e8);
  }
  _err_print_index_error
            ("get_blend_shape","servers/xr/xr_face_tracker.cpp",0xc4,(ulong)param_2,0x8f,
             "p_blend_shape","FT_MAX","",false,false);
  return 0;
}



/* XRFaceTracker::set_blend_shape(XRFaceTracker::BlendShapeEntry, float) */

void __thiscall XRFaceTracker::set_blend_shape(undefined4 param_1,XRFaceTracker *this,uint param_3)

{
  if (param_3 < 0x8f) {
    *(undefined4 *)(this + (long)(int)param_3 * 4 + 0x1e8) = param_1;
    return;
  }
  _err_print_index_error
            ("set_blend_shape","servers/xr/xr_face_tracker.cpp",0xcc,(ulong)param_3,0x8f,
             "p_blend_shape","FT_MAX","",false,false);
  return;
}



/* XRFaceTracker::set_tracker_type(XRServer::TrackerType) */

void __thiscall XRFaceTracker::set_tracker_type(undefined8 param_1,int param_2)

{
  if (param_2 == 0x40) {
    return;
  }
  _err_print_error("set_tracker_type","servers/xr/xr_face_tracker.cpp",0xbf,
                   "Condition \"p_type != XRServer::TRACKER_FACE\" is true.",
                   "XRFaceTracker must be of type TRACKER_FACE.",0,0);
  return;
}



/* XRFaceTracker::set_blend_shapes(Vector<float> const&) */

void __thiscall XRFaceTracker::set_blend_shapes(XRFaceTracker *this,Vector *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if ((puVar2 != (undefined8 *)0x0) && (puVar2[-1] == 0x8f)) {
    *(undefined8 *)(this + 0x1e8) = *puVar2;
    *(undefined8 *)(this + 0x41c) = *(undefined8 *)((long)puVar2 + 0x234);
    puVar2 = (undefined8 *)
             ((long)puVar2 -
             (long)(this + (0x1e8 - (long)((ulong)(this + 0x1f0) & 0xfffffffffffffff8))));
    puVar3 = (undefined8 *)((ulong)(this + 0x1f0) & 0xfffffffffffffff8);
    for (uVar1 = (ulong)((int)(this + (0x1e8 - (long)((ulong)(this + 0x1f0) & 0xfffffffffffffff8)))
                         + 0x23cU >> 3); uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return;
  }
  _err_print_error("set_blend_shapes","servers/xr/xr_face_tracker.cpp",0xde,
                   "Condition \"p_blend_shapes.size() != FT_MAX\" is true.",0,0);
  return;
}



/* CowData<float>::_ref(CowData<float> const&) [clone .part.0] */

void __thiscall CowData<float>::_ref(CowData<float> *this,CowData *param_1)

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



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

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



/* XRFaceTracker::XRFaceTracker() */

void __thiscall XRFaceTracker::XRFaceTracker(XRFaceTracker *this)

{
  long lVar1;
  XRFaceTracker *pXVar2;
  byte bVar3;
  
  bVar3 = 0;
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(code **)this = String::parse_latin1;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 400) = 1;
  *(undefined4 *)(this + 0x1a8) = 0x80;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x1b0),"Unknown",false);
  *(undefined ***)this = &PTR__initialize_classv_00110c38;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1d0) = 1;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  pXVar2 = this + 0x1e8;
  for (lVar1 = 0x47; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)pXVar2 = 0;
    pXVar2 = pXVar2 + (ulong)bVar3 * -0x10 + 8;
  }
  *(undefined4 *)pXVar2 = 0;
  *(undefined4 *)(this + 0x1a8) = 0x40;
  return;
}



/* XRFaceTracker::_bind_methods() */

void XRFaceTracker::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  char *local_c8;
  long local_c0;
  char *local_b8;
  long local_b0;
  long *local_a8;
  int local_a0;
  long local_98;
  undefined4 local_90;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar4 = PTR__LC27_00110f88;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_c8,"FT_EYE_LOOK_OUT_RIGHT",false);
  local_b8 = "FT_EYE_LOOK_OUT_RIGHT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_LOOK_IN_RIGHT",false);
  local_b8 = "FT_EYE_LOOK_IN_RIGHT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,1,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_LOOK_UP_RIGHT",false);
  local_b8 = "FT_EYE_LOOK_UP_RIGHT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,2,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_LOOK_DOWN_RIGHT",false);
  local_b8 = "FT_EYE_LOOK_DOWN_RIGHT";
  local_d8 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,3,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_LOOK_OUT_LEFT",false);
  local_b8 = "FT_EYE_LOOK_OUT_LEFT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,4,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_LOOK_IN_LEFT",false);
  local_b8 = "FT_EYE_LOOK_IN_LEFT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,5,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_LOOK_UP_LEFT",false);
  local_b8 = "FT_EYE_LOOK_UP_LEFT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,6,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_LOOK_DOWN_LEFT",false);
  local_b8 = "FT_EYE_LOOK_DOWN_LEFT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,7,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_CLOSED_RIGHT",false);
  local_b8 = "FT_EYE_CLOSED_RIGHT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,8,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_CLOSED_LEFT",false);
  local_b8 = "FT_EYE_CLOSED_LEFT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,9,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_SQUINT_RIGHT",false);
  local_b8 = "FT_EYE_SQUINT_RIGHT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,10,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_SQUINT_LEFT",false);
  local_b8 = "FT_EYE_SQUINT_LEFT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0xb,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_WIDE_RIGHT",false);
  local_b8 = "FT_EYE_WIDE_RIGHT";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0xc,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_WIDE_LEFT",false);
  local_b8 = "FT_EYE_WIDE_LEFT";
  local_d8 = 0;
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0xd,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_DILATION_RIGHT",false);
  local_b8 = "FT_EYE_DILATION_RIGHT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0xe,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_DILATION_LEFT",false);
  local_b8 = "FT_EYE_DILATION_LEFT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0xf,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_CONSTRICT_RIGHT",false);
  local_b8 = "FT_EYE_CONSTRICT_RIGHT";
  local_d8 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x10,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_CONSTRICT_LEFT",false);
  local_b8 = "FT_EYE_CONSTRICT_LEFT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x11,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_PINCH_RIGHT",false);
  local_b8 = "FT_BROW_PINCH_RIGHT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x12,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_PINCH_LEFT",false);
  local_b8 = "FT_BROW_PINCH_LEFT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x13,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_LOWERER_RIGHT",false);
  local_b8 = "FT_BROW_LOWERER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x14,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_LOWERER_LEFT",false);
  local_b8 = "FT_BROW_LOWERER_LEFT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x15,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_INNER_UP_RIGHT",false);
  local_b8 = "FT_BROW_INNER_UP_RIGHT";
  local_d8 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x16,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_INNER_UP_LEFT",false);
  local_b8 = "FT_BROW_INNER_UP_LEFT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x17,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_OUTER_UP_RIGHT",false);
  local_b8 = "FT_BROW_OUTER_UP_RIGHT";
  local_d8 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x18,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_OUTER_UP_LEFT",false);
  local_b8 = "FT_BROW_OUTER_UP_LEFT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x19,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NOSE_SNEER_RIGHT",false);
  local_b8 = "FT_NOSE_SNEER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x1a,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NOSE_SNEER_LEFT",false);
  local_b8 = "FT_NOSE_SNEER_LEFT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x1b,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NASAL_DILATION_RIGHT",false);
  local_b8 = "FT_NASAL_DILATION_RIGHT";
  local_d8 = 0;
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x1c,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NASAL_DILATION_LEFT",false);
  local_b8 = "FT_NASAL_DILATION_LEFT";
  local_d8 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x1d,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NASAL_CONSTRICT_RIGHT",false);
  local_b8 = "FT_NASAL_CONSTRICT_RIGHT";
  local_d8 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x1e,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NASAL_CONSTRICT_LEFT",false);
  local_b8 = "FT_NASAL_CONSTRICT_LEFT";
  local_d8 = 0;
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x1f,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_CHEEK_SQUINT_RIGHT",false);
  local_b8 = "FT_CHEEK_SQUINT_RIGHT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x20,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_CHEEK_SQUINT_LEFT",false);
  local_b8 = "FT_CHEEK_SQUINT_LEFT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x21,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_CHEEK_PUFF_RIGHT",false);
  local_b8 = "FT_CHEEK_PUFF_RIGHT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x22,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_CHEEK_PUFF_LEFT",false);
  local_b8 = "FT_CHEEK_PUFF_LEFT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x23,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_CHEEK_SUCK_RIGHT",false);
  local_b8 = "FT_CHEEK_SUCK_RIGHT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x24,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_CHEEK_SUCK_LEFT",false);
  local_b8 = "FT_CHEEK_SUCK_LEFT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x25,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_JAW_OPEN",false);
  local_b8 = "FT_JAW_OPEN";
  local_d8 = 0;
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x26,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_CLOSED",false);
  local_b8 = "FT_MOUTH_CLOSED";
  local_d8 = 0;
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x27,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_JAW_RIGHT",false);
  local_b8 = "FT_JAW_RIGHT";
  local_d8 = 0;
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x28,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_JAW_LEFT",false);
  local_b8 = "FT_JAW_LEFT";
  local_d8 = 0;
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x29,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_JAW_FORWARD",false);
  local_b8 = "FT_JAW_FORWARD";
  local_d8 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x2a,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_JAW_BACKWARD",false);
  local_b8 = "FT_JAW_BACKWARD";
  local_d8 = 0;
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x2b,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_JAW_CLENCH",false);
  local_b8 = "FT_JAW_CLENCH";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x2c,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_JAW_MANDIBLE_RAISE",false);
  local_b8 = "FT_JAW_MANDIBLE_RAISE";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x2d,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_SUCK_UPPER_RIGHT",false);
  local_b8 = "FT_LIP_SUCK_UPPER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x2e,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_SUCK_UPPER_LEFT",false);
  local_b8 = "FT_LIP_SUCK_UPPER_LEFT";
  local_d8 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x2f,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_SUCK_LOWER_RIGHT",false);
  local_b8 = "FT_LIP_SUCK_LOWER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x30,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_SUCK_LOWER_LEFT",false);
  local_b8 = "FT_LIP_SUCK_LOWER_LEFT";
  local_d8 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x31,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_SUCK_CORNER_RIGHT",false);
  local_b8 = "FT_LIP_SUCK_CORNER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x32,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_SUCK_CORNER_LEFT",false);
  local_b8 = "FT_LIP_SUCK_CORNER_LEFT";
  local_d8 = 0;
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x33,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_FUNNEL_UPPER_RIGHT",false);
  local_b8 = "FT_LIP_FUNNEL_UPPER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x19;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x34,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_FUNNEL_UPPER_LEFT",false);
  local_b8 = "FT_LIP_FUNNEL_UPPER_LEFT";
  local_d8 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x35,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_FUNNEL_LOWER_RIGHT",false);
  local_b8 = "FT_LIP_FUNNEL_LOWER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x19;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x36,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_FUNNEL_LOWER_LEFT",false);
  local_b8 = "FT_LIP_FUNNEL_LOWER_LEFT";
  local_d8 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x37,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_PUCKER_UPPER_RIGHT",false);
  local_b8 = "FT_LIP_PUCKER_UPPER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x19;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x38,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_PUCKER_UPPER_LEFT",false);
  local_b8 = "FT_LIP_PUCKER_UPPER_LEFT";
  local_d8 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x39,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_PUCKER_LOWER_RIGHT",false);
  local_b8 = "FT_LIP_PUCKER_LOWER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x19;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x3a,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_PUCKER_LOWER_LEFT",false);
  local_b8 = "FT_LIP_PUCKER_LOWER_LEFT";
  local_d8 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x3b,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_UPPER_UP_RIGHT",false);
  local_b8 = "FT_MOUTH_UPPER_UP_RIGHT";
  local_d8 = 0;
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x3c,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_UPPER_UP_LEFT",false);
  local_b8 = "FT_MOUTH_UPPER_UP_LEFT";
  local_d8 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x3d,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_LOWER_DOWN_RIGHT",false);
  local_b8 = "FT_MOUTH_LOWER_DOWN_RIGHT";
  local_d8 = 0;
  local_b0 = 0x19;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x3e,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_LOWER_DOWN_LEFT",false);
  local_b8 = "FT_MOUTH_LOWER_DOWN_LEFT";
  local_d8 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x3f,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_UPPER_DEEPEN_RIGHT",false);
  local_b8 = "FT_MOUTH_UPPER_DEEPEN_RIGHT";
  local_d8 = 0;
  local_b0 = 0x1b;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x40,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_UPPER_DEEPEN_LEFT",false);
  local_b8 = "FT_MOUTH_UPPER_DEEPEN_LEFT";
  local_d8 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x41,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_UPPER_RIGHT",false);
  local_b8 = "FT_MOUTH_UPPER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x42,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_UPPER_LEFT",false);
  local_b8 = "FT_MOUTH_UPPER_LEFT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x43,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_LOWER_RIGHT",false);
  local_b8 = "FT_MOUTH_LOWER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x44,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_LOWER_LEFT",false);
  local_b8 = "FT_MOUTH_LOWER_LEFT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x45,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_CORNER_PULL_RIGHT",false);
  local_b8 = "FT_MOUTH_CORNER_PULL_RIGHT";
  local_d8 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x46,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_CORNER_PULL_LEFT",false);
  local_b8 = "FT_MOUTH_CORNER_PULL_LEFT";
  local_d8 = 0;
  local_b0 = 0x19;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x47,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_CORNER_SLANT_RIGHT",false);
  local_b8 = "FT_MOUTH_CORNER_SLANT_RIGHT";
  local_d8 = 0;
  local_b0 = 0x1b;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x48,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_CORNER_SLANT_LEFT",false);
  local_b8 = "FT_MOUTH_CORNER_SLANT_LEFT";
  local_d8 = 0;
  local_b0 = 0x1a;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x49,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_FROWN_RIGHT",false);
  local_b8 = "FT_MOUTH_FROWN_RIGHT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x4a,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_FROWN_LEFT",false);
  local_b8 = "FT_MOUTH_FROWN_LEFT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x4b,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_STRETCH_RIGHT",false);
  local_b8 = "FT_MOUTH_STRETCH_RIGHT";
  local_d8 = 0;
  local_b0 = 0x16;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x4c,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_STRETCH_LEFT",false);
  local_b8 = "FT_MOUTH_STRETCH_LEFT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x4d,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_DIMPLE_RIGHT",false);
  local_b8 = "FT_MOUTH_DIMPLE_RIGHT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x4e,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_DIMPLE_LEFT",false);
  local_b8 = "FT_MOUTH_DIMPLE_LEFT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x4f,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_RAISER_UPPER",false);
  local_b8 = "FT_MOUTH_RAISER_UPPER";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x50,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_RAISER_LOWER",false);
  local_b8 = "FT_MOUTH_RAISER_LOWER";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x51,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_PRESS_RIGHT",false);
  local_b8 = "FT_MOUTH_PRESS_RIGHT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x52,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_PRESS_LEFT",false);
  local_b8 = "FT_MOUTH_PRESS_LEFT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x53,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_TIGHTENER_RIGHT",false);
  local_b8 = "FT_MOUTH_TIGHTENER_RIGHT";
  local_d8 = 0;
  local_b0 = 0x18;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x54,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_TIGHTENER_LEFT",false);
  local_b8 = "FT_MOUTH_TIGHTENER_LEFT";
  local_d8 = 0;
  local_b0 = 0x17;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x55,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_OUT",false);
  local_b8 = "FT_TONGUE_OUT";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x56,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_UP",false);
  local_b8 = "FT_TONGUE_UP";
  local_d8 = 0;
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x57,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_DOWN",false);
  local_b8 = "FT_TONGUE_DOWN";
  local_d8 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x58,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_RIGHT",false);
  local_b8 = "FT_TONGUE_RIGHT";
  local_d8 = 0;
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x59,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_LEFT",false);
  local_b8 = "FT_TONGUE_LEFT";
  local_d8 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x5a,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_ROLL",false);
  local_b8 = "FT_TONGUE_ROLL";
  local_d8 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x5b,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_BLEND_DOWN",false);
  local_b8 = "FT_TONGUE_BLEND_DOWN";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x5c,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_CURL_UP",false);
  local_b8 = "FT_TONGUE_CURL_UP";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x5d,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_SQUISH",false);
  local_b8 = "FT_TONGUE_SQUISH";
  local_d8 = 0;
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x5e,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_FLAT",false);
  local_b8 = "FT_TONGUE_FLAT";
  local_d8 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x5f,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_TWIST_RIGHT",false);
  local_b8 = "FT_TONGUE_TWIST_RIGHT";
  local_d8 = 0;
  local_b0 = 0x15;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x60,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_TONGUE_TWIST_LEFT",false);
  local_b8 = "FT_TONGUE_TWIST_LEFT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x61,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_SOFT_PALATE_CLOSE",false);
  local_b8 = "FT_SOFT_PALATE_CLOSE";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x62,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_THROAT_SWALLOW",false);
  local_b8 = "FT_THROAT_SWALLOW";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,99,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NECK_FLEX_RIGHT",false);
  local_b8 = "FT_NECK_FLEX_RIGHT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,100,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NECK_FLEX_LEFT",false);
  local_b8 = "FT_NECK_FLEX_LEFT";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x65,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_CLOSED",false);
  local_b8 = "FT_EYE_CLOSED";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x66,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_WIDE",false);
  local_b8 = "FT_EYE_WIDE";
  local_d8 = 0;
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x67,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_SQUINT",false);
  local_b8 = "FT_EYE_SQUINT";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x68,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_DILATION",false);
  local_b8 = "FT_EYE_DILATION";
  local_d8 = 0;
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x69,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_EYE_CONSTRICT",false);
  local_b8 = "FT_EYE_CONSTRICT";
  local_d8 = 0;
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x6a,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_DOWN_RIGHT",false);
  local_b8 = "FT_BROW_DOWN_RIGHT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x6b,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_DOWN_LEFT",false);
  local_b8 = "FT_BROW_DOWN_LEFT";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x6c,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_DOWN",false);
  local_b8 = "FT_BROW_DOWN";
  local_d8 = 0;
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x6d,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_UP_RIGHT",false);
  local_b8 = "FT_BROW_UP_RIGHT";
  local_d8 = 0;
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x6e,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_UP_LEFT",false);
  local_b8 = "FT_BROW_UP_LEFT";
  local_d8 = 0;
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x6f,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_BROW_UP",false);
  local_b8 = "FT_BROW_UP";
  local_d8 = 0;
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x70,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NOSE_SNEER",false);
  local_b8 = "FT_NOSE_SNEER";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x71,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NASAL_DILATION",false);
  local_b8 = "FT_NASAL_DILATION";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x72,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  lVar2 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_NASAL_CONSTRICT",false);
  local_b8 = "FT_NASAL_CONSTRICT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x73,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_CHEEK_PUFF",false);
  local_b8 = "FT_CHEEK_PUFF";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x74,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_CHEEK_SUCK",false);
  local_b8 = "FT_CHEEK_SUCK";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x75,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_CHEEK_SQUINT",false);
  local_b8 = "FT_CHEEK_SQUINT";
  local_d8 = 0;
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x76,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_SUCK_UPPER",false);
  local_b8 = "FT_LIP_SUCK_UPPER";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x77,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_SUCK_LOWER",false);
  local_b8 = "FT_LIP_SUCK_LOWER";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x78,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_SUCK",false);
  local_b8 = "FT_LIP_SUCK";
  local_d8 = 0;
  local_b0 = 0xb;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x79,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_FUNNEL_UPPER",false);
  local_b8 = "FT_LIP_FUNNEL_UPPER";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x7a,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_FUNNEL_LOWER",false);
  local_b8 = "FT_LIP_FUNNEL_LOWER";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x7b,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_FUNNEL",false);
  local_b8 = "FT_LIP_FUNNEL";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x7c,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_PUCKER_UPPER",false);
  local_b8 = "FT_LIP_PUCKER_UPPER";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x7d,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_PUCKER_LOWER",false);
  local_b8 = "FT_LIP_PUCKER_LOWER";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x7e,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_LIP_PUCKER",false);
  local_b8 = "FT_LIP_PUCKER";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x7f,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_UPPER_UP",false);
  local_b8 = "FT_MOUTH_UPPER_UP";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x80,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_LOWER_DOWN",false);
  local_b8 = "FT_MOUTH_LOWER_DOWN";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x81,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_OPEN",false);
  local_b8 = "FT_MOUTH_OPEN";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x82,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_RIGHT",false);
  local_b8 = "FT_MOUTH_RIGHT";
  local_d8 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x83,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_LEFT",false);
  local_b8 = "FT_MOUTH_LEFT";
  local_d8 = 0;
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x84,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_SMILE_RIGHT",false);
  local_b8 = "FT_MOUTH_SMILE_RIGHT";
  local_d8 = 0;
  local_b0 = 0x14;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x85,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_SMILE_LEFT",false);
  local_b8 = "FT_MOUTH_SMILE_LEFT";
  local_d8 = 0;
  local_b0 = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x86,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_SMILE",false);
  local_b8 = "FT_MOUTH_SMILE";
  local_d8 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x87,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_SAD_RIGHT",false);
  local_b8 = "FT_MOUTH_SAD_RIGHT";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x88,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_SAD_LEFT",false);
  local_b8 = "FT_MOUTH_SAD_LEFT";
  local_d8 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x89,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_SAD",false);
  local_b8 = "FT_MOUTH_SAD";
  local_d8 = 0;
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x8a,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_STRETCH",false);
  local_b8 = "FT_MOUTH_STRETCH";
  local_d8 = 0;
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x8b,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_DIMPLE",false);
  local_b8 = "FT_MOUTH_DIMPLE";
  local_d8 = 0;
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x8c,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_TIGHTENER",false);
  local_b8 = "FT_MOUTH_TIGHTENER";
  local_d8 = 0;
  local_b0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x8d,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MOUTH_PRESS",false);
  local_b8 = "FT_MOUTH_PRESS";
  local_d8 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x8e,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_c8,"FT_MAX",false);
  local_b8 = "FT_MAX";
  local_d8 = 0;
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_d8);
  __constant_get_enum_name<XRFaceTracker::BlendShapeEntry>((StringName *)&local_d0);
  local_e0 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_e0);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_b8,(StringName *)&local_d0,(StringName *)&local_c8,0x8f,false);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = "blend_shape";
  local_58 = &local_88;
  local_80 = 0;
  uVar6 = (uint)(Variant *)&local_58;
  D_METHODP((char *)&local_b8,(char ***)"get_blend_shape",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<XRFaceTracker,float,XRFaceTracker::BlendShapeEntry>(get_blend_shape);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = 0;
  local_78 = puVar4;
  pcStack_70 = "weight";
  auStack_50._0_8_ = &pcStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_b8,(char ***)"set_blend_shape",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<XRFaceTracker,XRFaceTracker::BlendShapeEntry,float>(set_blend_shape);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"get_blend_shapes",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<XRFaceTracker,Vector<float>>(get_blend_shapes);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "weights";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_b8,(char ***)"set_blend_shapes",uVar6);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar5 = create_method_bind<XRFaceTracker,Vector<float>const&>(set_blend_shapes);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_a8;
  if (local_a8 != (long *)0x0) {
    LOCK();
    plVar7 = local_a8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_a8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_a8[-1];
      lVar8 = 0;
      local_a8 = (long *)0x0;
      plVar7 = plVar1;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_d0,true);
  _scs_create((char *)&local_d8,true);
  local_e0 = 0;
  local_b8 = "";
  local_e8 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_e8);
  local_f0 = 0;
  local_b8 = "blend_shapes";
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_f0);
  local_b8 = (char *)CONCAT44(local_b8._4_4_,0x20);
  local_b0 = 0;
  if (local_f0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_f0);
  }
  local_a8 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0;
  if (local_e8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_e8);
    local_90 = 6;
    if (local_a0 == 0x11) {
      StringName::StringName((StringName *)&local_c8,(String *)&local_98,false);
      if (local_a8 == (long *)local_c8) {
        if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_a8 = (long *)local_c8;
      }
      goto LAB_00109a1b;
    }
  }
  local_90 = 6;
  StringName::operator=((StringName *)&local_a8,(StringName *)&local_e0);
LAB_00109a1b:
  local_f8 = 0;
  local_c8 = "XRFaceTracker";
  local_c0 = 0xd;
  String::parse_latin1((StrRange *)&local_f8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_f8,false);
  ClassDB::add_property
            ((StringName *)&local_c8,(PropertyInfo *)&local_b8,(StringName *)&local_d8,
             (StringName *)&local_d0,-1);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
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
  if ((StringName::configured != '\0') && (local_a8 != (long *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    plVar1 = (long *)(local_b0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_b0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  if ((((StringName::configured != '\0') &&
       ((local_e0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_d8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_d0 != 0)
     ) {
    StringName::unref();
  }
  local_c0 = 0;
  Variant::Variant((Variant *)&local_58,(Vector *)&local_c8);
  StringName::StringName((StringName *)&local_d0,"blend_shapes",false);
  local_d8 = 0;
  local_b8 = "XRFaceTracker";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_d8,false);
  ClassDB::set_property_default_value
            ((StringName *)&local_b8,(StringName *)&local_d0,(Variant *)&local_58);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* XRFaceTracker::get_blend_shapes() const */

void XRFaceTracker::get_blend_shapes(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long in_RSI;
  undefined8 *puVar4;
  long in_RDI;
  byte bVar5;
  
  bVar5 = 0;
  *(undefined8 *)(in_RDI + 8) = 0;
  CowData<float>::_copy_on_write((CowData<float> *)(in_RDI + 8));
  puVar1 = (undefined8 *)Memory::alloc_static(0x410,false);
  if (puVar1 == (undefined8 *)0x0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",0,
                     0);
  }
  else {
    *puVar1 = 1;
    *(undefined8 **)(in_RDI + 8) = puVar1 + 2;
    puVar1[1] = 0x8f;
  }
  CowData<float>::_copy_on_write((CowData<float> *)(in_RDI + 8));
  puVar1 = *(undefined8 **)(in_RDI + 8);
  *puVar1 = *(undefined8 *)(in_RSI + 0x1e8);
  *(undefined8 *)((long)puVar1 + 0x234) = *(undefined8 *)(in_RSI + 0x41c);
  lVar2 = (long)puVar1 - (long)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((in_RSI + 0x1e8) - lVar2);
  puVar1 = (undefined8 *)((ulong)(puVar1 + 1) & 0xfffffffffffffff8);
  for (uVar3 = (ulong)((int)lVar2 + 0x23cU >> 3); uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + (ulong)bVar5 * -2 + 1;
    puVar1 = puVar1 + (ulong)bVar5 * -2 + 1;
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
  return (uint)CONCAT71(0x110f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* XRFaceTracker::is_class_ptr(void*) const */

uint __thiscall XRFaceTracker::is_class_ptr(XRFaceTracker *this,void *param_1)

{
  return (uint)CONCAT71(0x110f,(undefined4 *)param_1 == &XRTracker::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110f,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110f,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110f,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* XRFaceTracker::_getv(StringName const&, Variant&) const */

undefined8 XRFaceTracker::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRFaceTracker::_setv(StringName const&, Variant const&) */

undefined8 XRFaceTracker::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRFaceTracker::_validate_propertyv(PropertyInfo&) const */

void XRFaceTracker::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* XRFaceTracker::_property_can_revertv(StringName const&) const */

undefined8 XRFaceTracker::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* XRFaceTracker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 XRFaceTracker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRFaceTracker::_notificationv(int, bool) */

void XRFaceTracker::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindT<Vector<float> const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<Vector<float>const&>::_gen_argument_type
          (MethodBindT<Vector<float>const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 5;
}



/* MethodBindT<Vector<float> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector<float>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector<float>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector<float>>::_gen_argument_type(int param_1)

{
  return 0x20;
}



/* MethodBindTRC<Vector<float>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector<float>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<XRFaceTracker::BlendShapeEntry, float>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<XRFaceTracker::BlendShapeEntry,float>::_gen_argument_type
          (MethodBindT<XRFaceTracker::BlendShapeEntry,float> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 3 - (uint)(param_1 == 0);
  if (1 < (uint)param_1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* MethodBindT<XRFaceTracker::BlendShapeEntry, float>::get_argument_meta(int) const */

char __thiscall
MethodBindT<XRFaceTracker::BlendShapeEntry,float>::get_argument_meta
          (MethodBindT<XRFaceTracker::BlendShapeEntry,float> *this,int param_1)

{
  return (param_1 == 1) * '\t';
}



/* MethodBindTRC<float, XRFaceTracker::BlendShapeEntry>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<float,XRFaceTracker::BlendShapeEntry>::_gen_argument_type
          (MethodBindTRC<float,XRFaceTracker::BlendShapeEntry> *this,int param_1)

{
  return 3 - (uint)(param_1 == 0);
}



/* MethodBindTRC<float, XRFaceTracker::BlendShapeEntry>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<float,XRFaceTracker::BlendShapeEntry>::get_argument_meta
          (MethodBindTRC<float,XRFaceTracker::BlendShapeEntry> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindTRC<float, XRFaceTracker::BlendShapeEntry>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,XRFaceTracker::BlendShapeEntry>::~MethodBindTRC
          (MethodBindTRC<float,XRFaceTracker::BlendShapeEntry> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110da0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, XRFaceTracker::BlendShapeEntry>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,XRFaceTracker::BlendShapeEntry>::~MethodBindTRC
          (MethodBindTRC<float,XRFaceTracker::BlendShapeEntry> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110da0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<XRFaceTracker::BlendShapeEntry, float>::~MethodBindT() */

void __thiscall
MethodBindT<XRFaceTracker::BlendShapeEntry,float>::~MethodBindT
          (MethodBindT<XRFaceTracker::BlendShapeEntry,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110e00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<XRFaceTracker::BlendShapeEntry, float>::~MethodBindT() */

void __thiscall
MethodBindT<XRFaceTracker::BlendShapeEntry,float>::~MethodBindT
          (MethodBindT<XRFaceTracker::BlendShapeEntry,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110e00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector<float>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<float>>::~MethodBindTRC(MethodBindTRC<Vector<float>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110e60;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector<float>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<float>>::~MethodBindTRC(MethodBindTRC<Vector<float>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110e60;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110ec0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110ec0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110ad8;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110ad8;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
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
LAB_0010b1f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b1f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010b25e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010b25e:
  return &_get_class_namev()::_class_name_static;
}



/* XRFaceTracker::_get_class_namev() const */

undefined8 * XRFaceTracker::_get_class_namev(void)

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
LAB_0010b2e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b2e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"XRFaceTracker");
      goto LAB_0010b34e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"XRFaceTracker");
LAB_0010b34e:
  return &_get_class_namev()::_class_name_static;
}



/* XRFaceTracker::~XRFaceTracker() */

void __thiscall XRFaceTracker::~XRFaceTracker(XRFaceTracker *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = String::parse_latin1;
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x1b0) != 0)) {
    StringName::unref();
  }
  *(undefined ***)this = &PTR__initialize_classv_00110ad8;
  Object::~Object((Object *)this);
  return;
}



/* XRFaceTracker::~XRFaceTracker() */

void __thiscall XRFaceTracker::~XRFaceTracker(XRFaceTracker *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = String::parse_latin1;
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x1b0) != 0)) {
    StringName::unref();
  }
  *(undefined ***)this = &PTR__initialize_classv_00110ad8;
  Object::~Object((Object *)this);
  operator_delete(this,0x428);
  return;
}



/* XRFaceTracker::get_class() const */

void XRFaceTracker::get_class(void)

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
            if (lVar5 == 0) goto LAB_0010b6bf;
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
LAB_0010b6bf:
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
    if (cVar6 != '\0') goto LAB_0010b773;
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
              if (lVar5 == 0) goto LAB_0010b823;
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
LAB_0010b823:
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
      if (cVar6 != '\0') goto LAB_0010b773;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_0010b773:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRFaceTracker::is_class(String const&) const */

undefined8 __thiscall XRFaceTracker::is_class(XRFaceTracker *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010b94f;
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
LAB_0010b94f:
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
    if (cVar6 != '\0') goto LAB_0010ba03;
  }
  cVar6 = String::operator==(param_1,"XRFaceTracker");
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
              if (lVar5 == 0) goto LAB_0010bac3;
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
LAB_0010bac3:
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
      if (cVar6 != '\0') goto LAB_0010ba03;
    }
    cVar6 = String::operator==(param_1,"XRTracker");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010bb6c;
    }
  }
LAB_0010ba03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010bb6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector<float>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC4;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x20;
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
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x0010bcbc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010bcbc:
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* XRFaceTracker::_bind_methods() [clone .cold] */

void XRFaceTracker::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_0010c038:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c038;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x0010c056;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x0010c056:
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



/* MethodBindT<Vector<float> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Vector<float>const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar8 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar8 = 0;
  puVar8[6] = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  puVar8[10] = 6;
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010c307;
  local_68 = 0;
  local_58 = &_LC4;
  local_70 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_50._8_8_;
  local_50 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x20);
  local_40 = 0;
  local_38 = 0;
  local_50 = (undefined1  [16])0x0;
  if (local_70 == 0) {
LAB_0010c3f8:
    local_30 = 6;
    StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
    local_30 = 6;
    if (local_40 != 0x11) goto LAB_0010c3f8;
    StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
    if (local_50._8_8_ == local_60) {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_50._8_8_ = local_60;
    }
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
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  *puVar8 = local_58._0_4_;
  lVar2 = *(long *)(puVar8 + 2);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(puVar8 + 2) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(puVar8 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar8 + 4) = uVar6;
  }
  lVar7 = local_38;
  puVar8[6] = local_40;
  lVar2 = *(long *)(puVar8 + 8);
  if (lVar2 == local_38) {
    puVar8[10] = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(puVar8 + 8) = local_38;
    puVar8[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_50._8_8_;
      local_50 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_0010c307:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10c5d8);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC21;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar8 = 0;
      lVar7 = -2;
    }
    else {
      lVar8 = local_50[-1];
      lVar7 = lVar8 + -2;
      if (-1 < lVar7) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar7));
        String::operator+((String *)this,(String *)&local_48);
        puVar5 = local_48;
        lVar8 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar5 + -0x10,false);
            lVar8 = local_60;
          }
        }
        goto joined_r0x0010c68a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC21;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x0010c68a:
  local_60 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar6 = local_50 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar8 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar8 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* XRTracker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall XRTracker::_get_property_listv(XRTracker *this,List *param_1,bool param_2)

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
  local_78 = "XRTracker";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRTracker";
  local_98 = 0;
  local_70 = 9;
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
LAB_0010c9e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c9e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ca05;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ca05:
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
  StringName::StringName((StringName *)&local_78,"XRTracker",false);
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



/* XRFaceTracker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall XRFaceTracker::_get_property_listv(XRFaceTracker *this,List *param_1,bool param_2)

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
    XRTracker::_get_property_listv((XRTracker *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "XRFaceTracker";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRFaceTracker";
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
LAB_0010ce38:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ce38;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ce55;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ce55:
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
  StringName::StringName((StringName *)&local_78,"XRFaceTracker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      XRTracker::_get_property_listv((XRTracker *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<XRFaceTracker::BlendShapeEntry, void>::get_class_info() */

GetTypeInfo<XRFaceTracker::BlendShapeEntry,void> * __thiscall
GetTypeInfo<XRFaceTracker::BlendShapeEntry,void>::get_class_info
          (GetTypeInfo<XRFaceTracker::BlendShapeEntry,void> *this)

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
  local_58 = 0;
  local_48 = "XRFaceTracker::BlendShapeEntry";
  local_40 = 0x1e;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, XRFaceTracker::BlendShapeEntry>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<float,XRFaceTracker::BlendShapeEntry>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_90 = (undefined1  [16])0x0;
    GetTypeInfo<XRFaceTracker::BlendShapeEntry,void>::get_class_info
              ((GetTypeInfo<XRFaceTracker::BlendShapeEntry,void> *)&local_68);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    uVar4 = local_90._0_8_;
    if (local_90._0_8_ != local_60) {
      if (local_90._0_8_ != 0) {
        LOCK();
        plVar1 = (long *)(local_90._0_8_ + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          auVar2._8_8_ = 0;
          auVar2._0_8_ = local_90._8_8_;
          local_90 = auVar2 << 0x40;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      lVar3 = local_58;
      local_58 = 0;
      local_90._8_8_ = lVar3;
    }
    lVar5 = local_48;
    lVar3 = local_78;
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 == local_48) {
      local_70 = local_40;
      if (local_78 != 0) {
        LOCK();
        plVar1 = (long *)(local_78 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
    else {
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
      local_78 = local_48;
      local_70 = local_40;
    }
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
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
    *puVar6 = (undefined4)local_98;
    *(undefined8 *)(puVar6 + 2) = local_90._0_8_;
    *(undefined8 *)(puVar6 + 4) = local_90._8_8_;
    puVar6[6] = (undefined4)local_80;
    *(long *)(puVar6 + 8) = local_78;
    puVar6[10] = local_70;
    goto LAB_0010d4ab;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC4;
  String::parse_latin1((StrRange *)&local_a0);
  *puVar6 = 3;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar6[10] = 6;
LAB_0010d4d7:
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_98);
    lVar3 = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)&local_a0);
    puVar6[10] = 6;
    if (puVar6[6] != 0x11) goto LAB_0010d4d7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar6 + 8),false);
    if (*(undefined **)(puVar6 + 4) == local_68) {
      lVar3 = local_a0;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_a0;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar6 + 4) = local_68;
      lVar3 = local_a0;
    }
  }
  local_a0 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0010d4ab:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRFaceTracker::BlendShapeEntry, float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<XRFaceTracker::BlendShapeEntry,float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  undefined *local_58;
  undefined1 local_50 [16];
  int local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar8 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar8 = 0;
  puVar8[6] = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  puVar8[10] = 6;
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<XRFaceTracker::BlendShapeEntry,void>::get_class_info
              ((GetTypeInfo<XRFaceTracker::BlendShapeEntry,void> *)&local_58);
  }
  else {
    if (in_EDX != 1) goto LAB_0010d5e0;
    local_68 = 0;
    local_58 = &_LC4;
    local_70 = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_50._8_8_;
    local_50 = auVar4 << 0x40;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,3);
    local_40 = 0;
    local_38 = 0;
    local_50 = (undefined1  [16])0x0;
    if (local_70 == 0) {
LAB_0010d7e8:
      local_30 = 6;
      StringName::operator=((StringName *)(local_50 + 8),(StringName *)&local_68);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,(CowData *)&local_70);
      local_30 = 6;
      if (local_40 != 0x11) goto LAB_0010d7e8;
      StringName::StringName((StringName *)&local_60,(String *)&local_38,false);
      if (local_50._8_8_ == local_60) {
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_50._8_8_ = local_60;
      }
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
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
  }
  *puVar8 = local_58._0_4_;
  lVar2 = *(long *)(puVar8 + 2);
  if (lVar2 != local_50._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 2);
        *(undefined8 *)(puVar8 + 2) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(puVar8 + 2) = local_50._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_50._8_8_;
    local_50 = auVar5 << 0x40;
  }
  if (*(long *)(puVar8 + 4) != local_50._8_8_) {
    StringName::unref();
    uVar6 = local_50._8_8_;
    local_50._8_8_ = 0;
    *(undefined8 *)(puVar8 + 4) = uVar6;
  }
  lVar7 = local_38;
  puVar8[6] = local_40;
  lVar2 = *(long *)(puVar8 + 8);
  if (lVar2 == local_38) {
    puVar8[10] = local_30;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(puVar8 + 8);
        *(undefined8 *)(puVar8 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(puVar8 + 8) = local_38;
    puVar8[10] = local_30;
  }
  if ((StringName::configured != '\0') && (local_50._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_50._0_8_;
  if (local_50._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_50._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_50._8_8_;
      local_50 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
LAB_0010d5e0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
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



/* MethodBind* create_method_bind<XRFaceTracker, float, XRFaceTracker::BlendShapeEntry>(float
   (XRFaceTracker::*)(XRFaceTracker::BlendShapeEntry) const) */

MethodBind *
create_method_bind<XRFaceTracker,float,XRFaceTracker::BlendShapeEntry>
          (_func_float_BlendShapeEntry *param_1)

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
  *(_func_float_BlendShapeEntry **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110da0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRFaceTracker";
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



/* MethodBind* create_method_bind<XRFaceTracker, XRFaceTracker::BlendShapeEntry, float>(void
   (XRFaceTracker::*)(XRFaceTracker::BlendShapeEntry, float)) */

MethodBind *
create_method_bind<XRFaceTracker,XRFaceTracker::BlendShapeEntry,float>
          (_func_void_BlendShapeEntry_float *param_1)

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
  *(_func_void_BlendShapeEntry_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110e00;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "XRFaceTracker";
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



/* MethodBind* create_method_bind<XRFaceTracker, Vector<float>>(Vector<float> (XRFaceTracker::*)()
   const) */

MethodBind * create_method_bind<XRFaceTracker,Vector<float>>(_func_Vector *param_1)

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
  *(_func_Vector **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110e60;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "XRFaceTracker";
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



/* MethodBind* create_method_bind<XRFaceTracker, Vector<float> const&>(void
   (XRFaceTracker::*)(Vector<float> const&)) */

MethodBind * create_method_bind<XRFaceTracker,Vector<float>const&>(_func_void_Vector_ptr *param_1)

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
  *(_func_void_Vector_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110ec0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRFaceTracker";
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



/* XRFaceTracker::_initialize_classv() */

void XRFaceTracker::_initialize_classv(void)

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
  if (initialize_class()::initialized == '\0') {
    if (XRTracker::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00113010 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "XRTracker";
      local_70 = 0;
      local_50 = 9;
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
      if ((code *)PTR__bind_methods_00113008 != RefCounted::_bind_methods) {
        XRTracker::_bind_methods();
      }
      XRTracker::initialize_class()::initialized = '\x01';
    }
    local_58 = "XRTracker";
    local_68 = 0;
    local_50 = 9;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "XRFaceTracker";
    local_70 = 0;
    local_50 = 0xd;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* WARNING: Removing unreachable block (ram,0x0010e3d8) */
/* WARNING: Removing unreachable block (ram,0x0010e508) */
/* WARNING: Removing unreachable block (ram,0x0010e6d0) */
/* WARNING: Removing unreachable block (ram,0x0010e514) */
/* WARNING: Removing unreachable block (ram,0x0010e51e) */
/* WARNING: Removing unreachable block (ram,0x0010e6b0) */
/* WARNING: Removing unreachable block (ram,0x0010e52a) */
/* WARNING: Removing unreachable block (ram,0x0010e534) */
/* WARNING: Removing unreachable block (ram,0x0010e690) */
/* WARNING: Removing unreachable block (ram,0x0010e540) */
/* WARNING: Removing unreachable block (ram,0x0010e54a) */
/* WARNING: Removing unreachable block (ram,0x0010e670) */
/* WARNING: Removing unreachable block (ram,0x0010e556) */
/* WARNING: Removing unreachable block (ram,0x0010e560) */
/* WARNING: Removing unreachable block (ram,0x0010e650) */
/* WARNING: Removing unreachable block (ram,0x0010e56c) */
/* WARNING: Removing unreachable block (ram,0x0010e576) */
/* WARNING: Removing unreachable block (ram,0x0010e630) */
/* WARNING: Removing unreachable block (ram,0x0010e582) */
/* WARNING: Removing unreachable block (ram,0x0010e58c) */
/* WARNING: Removing unreachable block (ram,0x0010e610) */
/* WARNING: Removing unreachable block (ram,0x0010e594) */
/* WARNING: Removing unreachable block (ram,0x0010e5aa) */
/* WARNING: Removing unreachable block (ram,0x0010e5b6) */
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



/* MethodBindT<Vector<float> const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector<float>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0010e9f5;
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
                    /* WARNING: Could not recover jumptable at 0x0010e83d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(long *)(*(long *)param_3 + 8) + 0x10);
    return;
  }
LAB_0010e9f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector<float>const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0010ec25;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010ea65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0010ec25:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<float>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
  long local_68;
  long local_60;
  char *local_58;
  long local_50;
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
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC190,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010edc0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      (*(code *)pVVar4)((Vector *)&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_50;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010edc0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<float>>::validated_call
          (MethodBindTRC<Vector<float>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10e6f8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f07b;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<float>::_ref((CowData<float> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  lVar2 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar5 = (long *)(local_40[0] + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_0010f07b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<float>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<float>>::ptrcall
          (MethodBindTRC<Vector<float>> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10e6f8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f2b7;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<float>::_ref((CowData<float> *)((long)param_3 + 8),(CowData *)local_40);
  }
  lVar2 = local_40[0];
  if (local_40[0] != 0) {
    LOCK();
    plVar5 = (long *)(local_40[0] + -0x10);
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      local_40[0] = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
LAB_0010f2b7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRFaceTracker::BlendShapeEntry, float>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<XRFaceTracker::BlendShapeEntry,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0010f685;
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
    auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar5._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x0010f4c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar5._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010f685:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRFaceTracker::BlendShapeEntry, float>::ptrcall(Object*, void const**, void*) const
    */

void MethodBindT<XRFaceTracker::BlendShapeEntry,float>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
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
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
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
      goto LAB_0010f8ad;
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
                    /* WARNING: Load size is inaccurate */
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x0010f6f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010f8ad:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, XRFaceTracker::BlendShapeEntry>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<float,XRFaceTracker::BlendShapeEntry>::validated_call
          (MethodBindTRC<float,XRFaceTracker::BlendShapeEntry> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f90e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar5;
LAB_0010f90e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, XRFaceTracker::BlendShapeEntry>::ptrcall(Object*, void const**, void*) const
    */

void __thiscall
MethodBindTRC<float,XRFaceTracker::BlendShapeEntry>::ptrcall
          (MethodBindTRC<float,XRFaceTracker::BlendShapeEntry> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
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
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fb2c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar5;
LAB_0010fb2c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector<float> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Vector<float>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  long local_40;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_48 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC190,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0);
      pcVar5 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar10 = (long *)(local_48 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar10 = (long *)(local_50 + -0x10);
        *plVar10 = *plVar10 + -1;
        UNLOCK();
        if (*plVar10 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010fec0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ff10;
LAB_0010ff00:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ff10:
        uVar7 = 4;
        goto LAB_0010feb5;
      }
      if (in_R8D == 1) goto LAB_0010ff00;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,0x20);
    uVar4 = _LC192;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Vector((Variant *)&local_48);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1));
    lVar2 = local_40;
    if (local_40 != 0) {
      LOCK();
      plVar10 = (long *)(local_40 + -0x10);
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
        local_40 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  else {
    uVar7 = 3;
LAB_0010feb5:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0010fec0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, XRFaceTracker::BlendShapeEntry>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<float,XRFaceTracker::BlendShapeEntry>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  float fVar14;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC190,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110278;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001102c0;
LAB_001102b0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001102c0:
        uVar7 = 4;
        goto LAB_0011026d;
      }
      if (in_R8D == 1) goto LAB_001102b0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC194;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar12);
    fVar14 = (float)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar8 & 0xffffffff)
    ;
    Variant::Variant((Variant *)local_48,fVar14);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_0011026d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00110278:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, XRFaceTracker::BlendShapeEntry,
   float>(__UnexistingClass*, void (__UnexistingClass::*)(XRFaceTracker::BlendShapeEntry, float),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,XRFaceTracker::BlendShapeEntry,float>
               (__UnexistingClass *param_1,_func_void_BlendShapeEntry_float *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

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
    goto LAB_00110635;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_0011066d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00110595;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00110688;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011066d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00110688:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00110595:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_BlendShapeEntry_float **)
                   (param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC195;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC194;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011061f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((char)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_00110635:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<XRFaceTracker::BlendShapeEntry, float>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<XRFaceTracker::BlendShapeEntry,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC190,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00110726;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,XRFaceTracker::BlendShapeEntry,float>
            (p_Var4,(_func_void_BlendShapeEntry_float *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00110726:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* XRFaceTracker::~XRFaceTracker() */

void __thiscall XRFaceTracker::~XRFaceTracker(XRFaceTracker *this)

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
/* MethodBindT<Vector<float> const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector<float>const&>::~MethodBindT(MethodBindT<Vector<float>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<float>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<float>>::~MethodBindTRC(MethodBindTRC<Vector<float>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<XRFaceTracker::BlendShapeEntry, float>::~MethodBindT() */

void __thiscall
MethodBindT<XRFaceTracker::BlendShapeEntry,float>::~MethodBindT
          (MethodBindT<XRFaceTracker::BlendShapeEntry,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, XRFaceTracker::BlendShapeEntry>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,XRFaceTracker::BlendShapeEntry>::~MethodBindTRC
          (MethodBindTRC<float,XRFaceTracker::BlendShapeEntry> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


