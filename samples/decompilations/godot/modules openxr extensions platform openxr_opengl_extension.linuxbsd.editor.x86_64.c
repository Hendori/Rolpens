
/* OpenXROpenGLExtension::on_instance_created(XrInstance_T*) */

void OpenXROpenGLExtension::on_instance_created(XrInstance_T *param_1)

{
  int iVar1;
  
  if (OpenXRAPI::singleton == (char *)0x0) {
    _err_print_error("on_instance_created",
                     "modules/openxr/extensions/platform/openxr_opengl_extension.cpp",0x4c,
                     "Parameter \"OpenXRAPI::get_singleton()\" is null.",0,0);
    return;
  }
  iVar1 = OpenXRAPI::get_instance_proc_addr
                    (OpenXRAPI::singleton,(_func_void *)"xrGetOpenGLGraphicsRequirementsKHR");
  if (-1 < iVar1) {
    iVar1 = OpenXRAPI::get_instance_proc_addr
                      (OpenXRAPI::singleton,(_func_void *)"xrEnumerateSwapchainImages");
    if (-1 < iVar1) {
      return;
    }
    _err_print_error("on_instance_created",
                     "modules/openxr/extensions/platform/openxr_opengl_extension.cpp",0x53,
                     "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
    return;
  }
  _err_print_error("on_instance_created",
                   "modules/openxr/extensions/platform/openxr_opengl_extension.cpp",0x51,
                   "Condition \"((get_instance_proc_addr_result) < 0)\" is true.",0,0);
  return;
}



/* OpenXROpenGLExtension::get_texture(void*, int) */

undefined8 __thiscall
OpenXROpenGLExtension::get_texture(OpenXROpenGLExtension *this,void *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == (void *)0x0) {
    _err_print_error("get_texture","modules/openxr/extensions/platform/openxr_opengl_extension.cpp",
                     0x130,"Parameter \"data\" is null.",0,0);
    return 0;
  }
  lVar1 = *(long *)((long)param_1 + 0x10);
  lVar2 = (long)param_2;
  if (param_2 < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100111;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      return *(undefined8 *)(lVar1 + lVar2 * 8);
    }
    goto LAB_00100111;
  }
  lVar3 = 0;
LAB_00100111:
  _err_print_index_error
            ("get_texture","modules/openxr/extensions/platform/openxr_opengl_extension.cpp",0x132,
             lVar2,lVar3,"p_image_index","data->texture_rids.size()","",false,false);
  return 0;
}



/* OpenXROpenGLExtension::create_projection_fov(XrFovf, double, double, Projection&) */

undefined8
OpenXROpenGLExtension::create_projection_fov
          (undefined8 param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5,
          undefined8 *param_6)

{
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  OpenXRUtil::XrMatrix4x4f_CreateProjectionFov
            (param_1,param_2,(float)param_3,(float)param_4,&local_58,1);
  *param_6 = local_58;
  param_6[1] = uStack_50;
  param_6[2] = local_48;
  param_6[3] = uStack_40;
  param_6[4] = local_38;
  param_6[5] = uStack_30;
  param_6[6] = local_28;
  param_6[7] = uStack_20;
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<long>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<long>::_copy_on_write(CowData<long> *this)

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



/* CowData<RID>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<RID>::_copy_on_write(CowData<RID> *this)

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



/* OpenXROpenGLExtension::get_swapchain_format_name(long) const */

long OpenXROpenGLExtension::get_swapchain_format_name(long param_1)

{
  long *plVar1;
  long lVar2;
  long in_RDX;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RDX < 0x8c44) {
    if (0x8c39 < in_RDX) {
      switch(in_RDX) {
      case 0x8c3a:
        *(undefined8 *)param_1 = 0;
        local_38 = "GL_R11F_G11F_B10F";
        local_30 = 0x11;
        String::parse_latin1((StrRange *)param_1);
        goto LAB_001006f8;
      case 0x8c40:
        *(undefined8 *)param_1 = 0;
        local_38 = "GL_SRGB";
        goto LAB_00100847;
      case 0x8c41:
        *(undefined8 *)param_1 = 0;
        local_38 = "GL_SRGB8";
        goto LAB_001007a0;
      case 0x8c42:
        *(undefined8 *)param_1 = 0;
        local_38 = "GL_SRGB_ALPHA";
        goto LAB_00100917;
      case 0x8c43:
        *(undefined8 *)param_1 = 0;
        local_38 = "GL_SRGB8_ALPHA8";
LAB_0010076f:
        local_30 = 0xf;
        String::parse_latin1((StrRange *)param_1);
        goto LAB_001006f8;
      }
      goto switchD_0010052f_caseD_8c3b;
    }
    if (0x805b < in_RDX) {
      if (in_RDX == 0x8815) {
        *(undefined8 *)param_1 = 0;
        local_38 = "GL_RGB32F";
      }
      else {
        if (in_RDX < 0x8816) {
          if (in_RDX == 0x81a7) {
            *(undefined8 *)param_1 = 0;
            local_38 = "GL_DEPTH_COMPONENT32";
          }
          else {
            if (0x81a7 < in_RDX) {
              if (in_RDX == 0x8814) {
                *(undefined8 *)param_1 = 0;
                local_38 = "GL_RGBA32F";
                goto LAB_00100628;
              }
              goto switchD_0010052f_caseD_8c3b;
            }
            if (in_RDX == 0x81a5) {
              *(undefined8 *)param_1 = 0;
              local_38 = "GL_DEPTH_COMPONENT16";
            }
            else {
              if (in_RDX != 0x81a6) goto switchD_0010052f_caseD_8c3b;
              *(undefined8 *)param_1 = 0;
              local_38 = "GL_DEPTH_COMPONENT24";
            }
          }
LAB_001005ca:
          local_30 = 0x14;
          String::parse_latin1((StrRange *)param_1);
          goto LAB_001006f8;
        }
        if (in_RDX != 0x881b) {
          if (in_RDX == 0x88f0) {
            *(undefined8 *)param_1 = 0;
            local_38 = "GL_DEPTH24_STENCIL8";
            local_30 = 0x13;
            String::parse_latin1((StrRange *)param_1);
            goto LAB_001006f8;
          }
          if (in_RDX != 0x881a) goto switchD_0010052f_caseD_8c3b;
          *(undefined8 *)param_1 = 0;
          local_38 = "GL_RGBA16F";
          goto LAB_00100628;
        }
        *(undefined8 *)param_1 = 0;
        local_38 = "GL_RGB16F";
      }
      goto LAB_00100820;
    }
    if (in_RDX < 0x804f) goto switchD_0010052f_caseD_8c3b;
    if (0xb < in_RDX - 0x8050U) {
      *(undefined8 *)param_1 = 0;
      local_38 = "GL_RGB4";
      goto LAB_00100847;
    }
    *(undefined8 *)param_1 = 0;
    switch(in_RDX) {
    case 0x8050:
      local_38 = "GL_RGB5";
      goto LAB_00100847;
    case 0x8051:
      local_38 = "GL_RGB8";
LAB_00100847:
      local_30 = 7;
      String::parse_latin1((StrRange *)param_1);
      goto LAB_001006f8;
    case 0x8052:
      local_38 = "GL_RGB10";
      break;
    case 0x8053:
      local_38 = "GL_RGB12";
      break;
    case 0x8054:
      local_38 = "GL_RGB16";
      break;
    case 0x8055:
      local_38 = "GL_RGBA2";
      break;
    case 0x8056:
      local_38 = "GL_RGBA4";
      break;
    case 0x8057:
      local_38 = "GL_RGB5_A1";
      goto LAB_00100628;
    case 0x8058:
      local_38 = "GL_RGBA8";
      break;
    case 0x8059:
      local_38 = "GL_RGB10_A2";
      goto LAB_001008a7;
    case 0x805a:
      local_38 = "GL_RGBA12";
      goto LAB_00100820;
    case 0x805b:
      local_38 = "GL_RGBA16";
      goto LAB_00100820;
    }
LAB_001007a0:
    local_30 = 8;
    String::parse_latin1((StrRange *)param_1);
    goto LAB_001006f8;
  }
  if (0x8d8f < in_RDX) {
    if (0x8f9b < in_RDX) {
      if (in_RDX == 0x906f) {
        *(undefined8 *)param_1 = 0;
        local_38 = "GL_RGB10_A2UI";
        goto LAB_00100917;
      }
      goto switchD_0010052f_caseD_8c3b;
    }
    if (in_RDX < 0x8f94) goto switchD_0010052f_caseD_8c3b;
    if (6 < in_RDX - 0x8f95U) {
      *(undefined8 *)param_1 = 0;
      local_38 = "GL_R8_SNORM";
      goto LAB_001008a7;
    }
    *(undefined8 *)param_1 = 0;
    switch(in_RDX) {
    case 0x8f95:
      local_38 = "GL_RG8_SNORM";
      break;
    case 0x8f96:
      local_38 = "GL_RGB8_SNORM";
      goto LAB_00100917;
    case 0x8f97:
      local_38 = "GL_RGBA8_SNORM";
      goto LAB_00100747;
    case 0x8f98:
      local_38 = "GL_R16_SNORM";
      break;
    case 0x8f99:
      local_38 = "GL_RG16_SNORM";
LAB_00100917:
      local_30 = 0xd;
      String::parse_latin1((StrRange *)param_1);
      goto LAB_001006f8;
    case 0x8f9a:
      local_38 = "GL_RGB16_SNORM";
LAB_00100747:
      local_30 = 0xe;
      String::parse_latin1((StrRange *)param_1);
      goto LAB_001006f8;
    case 0x8f9b:
      local_38 = "GL_RGBA16_SNORM";
      goto LAB_0010076f;
    }
    local_30 = 0xc;
    String::parse_latin1((StrRange *)param_1);
    goto LAB_001006f8;
  }
  if (in_RDX < 0x8d70) {
    if (in_RDX == 0x8cac) {
      *(undefined8 *)param_1 = 0;
      local_38 = "GL_DEPTH_COMPONENT32F";
      local_30 = 0x15;
      String::parse_latin1((StrRange *)param_1);
      goto LAB_001006f8;
    }
    if (in_RDX == 0x8cad) {
      *(undefined8 *)param_1 = 0;
      local_38 = "GL_DEPTH32F_STENCIL8";
      goto LAB_001005ca;
    }
switchD_0010052f_caseD_8c3b:
    String::num_int64((long)&local_40,(int)in_RDX,true);
    local_38 = "Swapchain format 0x";
    local_48 = 0;
    local_30 = 0x13;
    String::parse_latin1((StrRange *)&local_48);
    String::operator+((String *)param_1,(String *)&local_48);
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
    goto LAB_001006f8;
  }
  switch(in_RDX) {
  case 0x8d70:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGBA32UI";
    goto LAB_001008a7;
  case 0x8d71:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGB32UI";
    break;
  default:
    goto switchD_0010052f_caseD_8c3b;
  case 0x8d76:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGBA16UI";
LAB_001008a7:
    local_30 = 0xb;
    String::parse_latin1((StrRange *)param_1);
    goto LAB_001006f8;
  case 0x8d77:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGB16UI";
    break;
  case 0x8d7c:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGBA8UI";
    break;
  case 0x8d7d:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGB8UI";
    goto LAB_00100820;
  case 0x8d82:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGBA32I";
    break;
  case 0x8d83:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGB32I";
    goto LAB_00100820;
  case 0x8d88:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGBA16I";
    break;
  case 0x8d89:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGB16I";
    goto LAB_00100820;
  case 0x8d8e:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGBA8I";
LAB_00100820:
    local_30 = 9;
    String::parse_latin1((StrRange *)param_1);
    goto LAB_001006f8;
  case 0x8d8f:
    *(undefined8 *)param_1 = 0;
    local_38 = "GL_RGB8I";
    goto LAB_001007a0;
  }
LAB_00100628:
  local_30 = 10;
  String::parse_latin1((StrRange *)param_1);
LAB_001006f8:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* OpenXROpenGLExtension::get_requested_extensions() */

OpenXROpenGLExtension * __thiscall
OpenXROpenGLExtension::get_requested_extensions(OpenXROpenGLExtension *this)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x28) = 2;
  *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
  local_38 = "XR_KHR_opengl_enable";
  local_40 = 0;
  local_30 = 0x14;
  String::parse_latin1((StrRange *)&local_40);
  puVar3 = (undefined8 *)
           HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
           ::operator[]((HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
                         *)this,(String *)&local_40);
  lVar2 = local_40;
  *puVar3 = 0;
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



/* OpenXROpenGLExtension::check_graphics_api_support(unsigned long) */

undefined4 __thiscall
OpenXROpenGLExtension::check_graphics_api_support(OpenXROpenGLExtension *this,ulong param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_70;
  undefined4 local_68 [2];
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (OpenXRAPI::singleton == 0) {
    _err_print_error("check_graphics_api_support",
                     "modules/openxr/extensions/platform/openxr_opengl_extension.cpp",0x57,
                     "Parameter \"OpenXRAPI::get_singleton()\" is null.",0,0);
  }
  else {
    local_68[0] = 0x3b9b23dd;
    local_60 = 0;
    if (*(code **)(this + 8) == (code *)0x0) {
      uVar3 = 0xfffffff4;
    }
    else {
      uVar3 = (**(code **)(this + 8))
                        (*(undefined8 *)(OpenXRAPI::singleton + 0xd0),
                         *(undefined8 *)(OpenXRAPI::singleton + 0xd8),local_68);
    }
    lVar2 = OpenXRAPI::singleton;
    Array::Array((Array *)&local_70);
    uVar3 = OpenXRAPI::xr_result
                      (lVar2,uVar3,"Failed to get OpenGL graphics requirements!",(Array *)&local_70)
    ;
    Array::~Array((Array *)&local_70);
    if ((char)uVar3 != '\0') {
      if (local_58 <= param_1) {
        if (local_50 < param_1) {
          Variant::Variant((Variant *)local_48,
                           "OpenXR: Requested OpenGL version exceeds the maximum version this runtime has been tested on and is known to support."
                          );
          stringify_variants((Variant *)&local_70);
          __print_line((String *)&local_70);
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
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
          }
          OpenXRUtil::make_xr_version_string((ulong)&local_70);
          Variant::Variant((Variant *)local_48,"- desired_version ");
          print_line<String>((Variant *)local_48);
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
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
          OpenXRUtil::make_xr_version_string((ulong)&local_70);
          Variant::Variant((Variant *)local_48,"- minApiVersionSupported ");
          print_line<String>((Variant *)local_48);
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
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
          OpenXRUtil::make_xr_version_string((ulong)&local_70);
          Variant::Variant((Variant *)local_48,"- maxApiVersionSupported ");
          print_line<String>((Variant *)local_48);
          if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
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
        }
        goto LAB_00100d76;
      }
      Variant::Variant((Variant *)local_48,
                       "OpenXR: Requested OpenGL version does not meet the minimum version this runtime supports."
                      );
      stringify_variants((Variant *)&local_70);
      __print_line((String *)&local_70);
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
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      OpenXRUtil::make_xr_version_string((ulong)&local_70);
      Variant::Variant((Variant *)local_48,"- desired_version ");
      print_line<String>((Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
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
      OpenXRUtil::make_xr_version_string((ulong)&local_70);
      Variant::Variant((Variant *)local_48,"- minApiVersionSupported ");
      print_line<String>((Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
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
      OpenXRUtil::make_xr_version_string((ulong)&local_70);
      Variant::Variant((Variant *)local_48,"- maxApiVersionSupported ");
      print_line<String>((Variant *)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          uVar3 = 0;
          local_70 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
          goto LAB_00100d76;
        }
      }
    }
  }
  uVar3 = 0;
LAB_00100d76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* OpenXROpenGLExtension::set_session_create_and_get_next_pointer(void*) */

undefined1 * __thiscall
OpenXROpenGLExtension::set_session_create_and_get_next_pointer
          (OpenXROpenGLExtension *this,void *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_44 = 0;
  (*_glad_glGetIntegerv)(0x821b,&local_48);
  (*_glad_glGetIntegerv)(0x821c,&local_44);
  cVar3 = check_graphics_api_support
                    (this,((long)local_44 & 0xffffU) << 0x20 | (long)local_48 << 0x30);
  if (cVar3 == '\0') {
    Variant::Variant((Variant *)local_38,"OpenXR: Trying to initialize with OpenGL anyway...");
    stringify_variants((Variant *)&local_40);
    __print_line((String *)&local_40);
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
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  plVar1 = DisplayServer::singleton;
  graphics_binding_gl._0_4_ = 0x3b9b23d9;
  graphics_binding_gl._8_8_ = param_1;
  uVar4 = (**(code **)(*DisplayServer::singleton + 0x4c8))(DisplayServer::singleton,0,0);
  uVar5 = (**(code **)(*plVar1 + 0x4c8))(plVar1,3,0);
  graphics_binding_gl._40_8_ = (**(code **)(*plVar1 + 0x4c8))(plVar1,1,0);
  graphics_binding_gl._16_8_ = uVar4;
  graphics_binding_gl._48_8_ = uVar5;
  graphics_binding_gl._24_4_ = 0;
  graphics_binding_gl._32_8_ = 0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return graphics_binding_gl;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OpenXROpenGLExtension::cleanup_swapchain_graphics_data(void**) */

void __thiscall
OpenXROpenGLExtension::cleanup_swapchain_graphics_data(OpenXROpenGLExtension *this,void **param_1)

{
  CowData<RID> *this_00;
  void *pvVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  if (*param_1 == (void *)0x0) {
    return;
  }
  plVar2 = (long *)GLES3::TextureStorage::get_singleton();
  if (plVar2 == (long *)0x0) {
    _err_print_error("cleanup_swapchain_graphics_data",
                     "modules/openxr/extensions/platform/openxr_opengl_extension.cpp",0x13c,
                     "Parameter \"texture_storage\" is null.",0,0);
    return;
  }
  pvVar1 = *param_1;
  this_00 = (CowData<RID> *)((long)pvVar1 + 0x10);
  CowData<RID>::_copy_on_write(this_00);
  lVar3 = *(long *)((long)pvVar1 + 0x10);
  CowData<RID>::_copy_on_write(this_00);
  lVar4 = *(long *)((long)pvVar1 + 0x10);
  if (lVar4 != 0) {
    lVar4 = lVar4 + *(long *)(lVar4 + -8) * 8;
  }
  for (; lVar3 != lVar4; lVar3 = lVar3 + 8) {
    (**(code **)(*plVar2 + 0x50))(plVar2);
  }
  CowData<RID>::resize<false>(this_00,0);
  if (*(long *)((long)pvVar1 + 0x10) != 0) {
    LOCK();
    plVar2 = (long *)(*(long *)((long)pvVar1 + 0x10) + -0x10);
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      lVar4 = *(long *)((long)pvVar1 + 0x10);
      *(undefined8 *)((long)pvVar1 + 0x10) = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  Memory::free_static(pvVar1,false);
  *param_1 = (void *)0x0;
  return;
}



/* OpenXROpenGLExtension::get_swapchain_image_data(XrSwapchain_T*, long, unsigned int, unsigned int,
   unsigned int, unsigned int, void**) */

undefined8 __thiscall
OpenXROpenGLExtension::get_swapchain_image_data
          (OpenXROpenGLExtension *this,XrSwapchain_T *param_1,long param_2,uint param_3,uint param_4
          ,uint param_5,uint param_6,void **param_7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  void *pvVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long in_FS_OFFSET;
  bool bVar14;
  undefined4 *local_88;
  uint local_6c;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)GLES3::TextureStorage::get_singleton();
  if (plVar4 == (long *)0x0) {
    _err_print_error("get_swapchain_image_data",
                     "modules/openxr/extensions/platform/openxr_opengl_extension.cpp",0xe2,
                     "Parameter \"texture_storage\" is null.",0,0);
  }
  else {
    if (*(code **)(this + 0x10) == (code *)0x0) {
      iVar2 = -0xc;
    }
    else {
      iVar2 = (**(code **)(this + 0x10))(param_1,0,&local_6c,0);
      uVar1 = local_6c;
      if (-1 < iVar2) {
        if (local_6c == 0) {
          local_88 = (undefined4 *)0x0;
          uVar3 = 0;
        }
        else {
          uVar3 = local_6c - 1 | local_6c - 1 >> 1;
          uVar3 = uVar3 | uVar3 >> 2;
          uVar3 = uVar3 | uVar3 >> 4;
          uVar3 = uVar3 | uVar3 >> 8;
          local_88 = (undefined4 *)
                     Memory::realloc_static
                               ((void *)0x0,(ulong)((uVar3 | uVar3 >> 0x10) + 1) * 0x18,false);
          if (local_88 == (undefined4 *)0x0) {
            _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          puVar8 = local_88;
          do {
            *puVar8 = 0x3b9b23dc;
            puVar9 = puVar8 + 6;
            *(undefined8 *)(puVar8 + 2) = 0;
            puVar8[4] = 0;
            puVar8 = puVar9;
            uVar3 = local_6c;
          } while (local_88 + (ulong)uVar1 * 6 != puVar9);
        }
        if (*(code **)(this + 0x10) == (code *)0x0) {
          iVar2 = -0xc;
LAB_00101738:
          OpenXRAPI::get_error_string(&local_68,OpenXRAPI::singleton,iVar2);
          Variant::Variant((Variant *)local_58,"OpenXR: Failed to get swapchaim images [");
          print_line<String,char_const*>((Variant *)local_58,&local_68,&_LC91);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          lVar11 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar4 = (long *)(local_68 + -0x10);
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
          }
          uVar7 = 0;
        }
        else {
          iVar2 = (**(code **)(this + 0x10))(param_1,uVar3,&local_6c);
          if (iVar2 < 0) goto LAB_00101738;
          pvVar5 = operator_new(0x18,"");
          *(undefined8 *)((long)pvVar5 + 0x10) = 0;
          *param_7 = pvVar5;
          *(bool *)pvVar5 = 1 < param_6;
          local_60 = 0;
          if (local_6c != 0) {
            pcVar6 = *(code **)(*plVar4 + 0x80);
            if (uVar1 == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = (ulong)uVar1;
              uVar10 = 0;
              puVar8 = local_88 + 4;
              do {
                lVar11 = local_60;
                uVar7 = (*pcVar6)(plVar4,param_6 != 1,5,*puVar8,param_3,param_4,1,param_6,0);
                if (lVar11 == 0) {
                  lVar11 = 1;
                }
                else {
                  lVar11 = *(long *)(lVar11 + -8) + 1;
                }
                iVar2 = CowData<RID>::resize<false>((CowData<RID> *)&local_60,lVar11);
                if (iVar2 == 0) {
                  if (local_60 == 0) {
                    lVar13 = -1;
                    lVar11 = 0;
                  }
                  else {
                    lVar11 = *(long *)(local_60 + -8);
                    lVar13 = lVar11 + -1;
                    if (-1 < lVar13) {
                      CowData<RID>::_copy_on_write((CowData<RID> *)&local_60);
                      *(undefined8 *)(local_60 + lVar13 * 8) = uVar7;
                      goto LAB_001015e0;
                    }
                  }
                  _err_print_index_error
                            ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar11,"p_index",
                             "size()","",false,false);
                }
                else {
                  _err_print_error("push_back","./core/templates/vector.h",0x142,
                                   "Condition \"err\" is true. Returning: true",0,0);
                }
LAB_001015e0:
                uVar10 = uVar10 + 1;
                if (local_6c <= uVar10) {
                  lVar11 = *(long *)((long)pvVar5 + 0x10);
                  if (lVar11 == local_60) goto LAB_0010193b;
                  if (lVar11 == 0) goto LAB_0010190c;
                  goto LAB_001018f3;
                }
                puVar8 = puVar8 + 6;
                pcVar6 = *(code **)(*plVar4 + 0x80);
              } while (uVar10 != uVar12);
            }
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,uVar12,uVar12,"p_index",
                       "count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar6 = (code *)invalidInstructionException();
            (*pcVar6)();
          }
          lVar11 = *(long *)((long)pvVar5 + 0x10);
          if (lVar11 != 0) {
LAB_001018f3:
            LOCK();
            plVar4 = (long *)(lVar11 + -0x10);
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
              lVar11 = *(long *)((long)pvVar5 + 0x10);
              *(undefined8 *)((long)pvVar5 + 0x10) = 0;
              Memory::free_static((void *)(lVar11 + -0x10),false);
            }
            else {
              *(undefined8 *)((long)pvVar5 + 0x10) = 0;
            }
LAB_0010190c:
            plVar4 = (long *)(local_60 + -0x10);
            if (local_60 != 0) {
              do {
                lVar11 = *plVar4;
                if (lVar11 == 0) goto LAB_0010193b;
                LOCK();
                lVar13 = *plVar4;
                bVar14 = lVar11 == lVar13;
                if (bVar14) {
                  *plVar4 = lVar11 + 1;
                  lVar13 = lVar11;
                }
                UNLOCK();
              } while (!bVar14);
              if (lVar13 != -1) {
                *(long *)((long)pvVar5 + 0x10) = local_60;
              }
LAB_0010193b:
              if (local_60 != 0) {
                LOCK();
                plVar4 = (long *)(local_60 + -0x10);
                *plVar4 = *plVar4 + -1;
                UNLOCK();
                if (*plVar4 == 0) {
                  Memory::free_static((void *)(local_60 + -0x10),false);
                }
              }
            }
          }
          uVar7 = 1;
        }
        if (local_88 != (undefined4 *)0x0) {
          Memory::free_static(local_88,false);
        }
        goto LAB_0010170a;
      }
    }
    OpenXRAPI::get_error_string(&local_68,OpenXRAPI::singleton,iVar2);
    Variant::Variant((Variant *)local_58,"OpenXR: Failed to get swapchaim image count [");
    print_line<String,char_const*>((Variant *)local_58,&local_68,&_LC91);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar11 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar4 = (long *)(local_68 + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
  }
  uVar7 = 0;
LAB_0010170a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}



/* Vector<long>::push_back(long) [clone .isra.0] */

void __thiscall Vector<long>::push_back(Vector<long> *this,long param_1)

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
  iVar1 = CowData<long>::resize<false>((CowData<long> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<long>::_copy_on_write((CowData<long> *)(this + 8));
        *(long *)(*(long *)(this + 8) + lVar3 * 8) = param_1;
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



/* OpenXROpenGLExtension::get_usable_depth_formats(Vector<long>&) */

void __thiscall
OpenXROpenGLExtension::get_usable_depth_formats(OpenXROpenGLExtension *this,Vector *param_1)

{
  Vector<long>::push_back((Vector<long> *)param_1,0x8cac);
  Vector<long>::push_back((Vector<long> *)param_1,0x88f0);
  Vector<long>::push_back((Vector<long> *)param_1,0x8cad);
  Vector<long>::push_back((Vector<long> *)param_1,0x81a6);
  return;
}



/* OpenXROpenGLExtension::get_usable_swapchain_formats(Vector<long>&) */

void __thiscall
OpenXROpenGLExtension::get_usable_swapchain_formats(OpenXROpenGLExtension *this,Vector *param_1)

{
  Vector<long>::push_back((Vector<long> *)param_1,0x8c43);
  Vector<long>::push_back((Vector<long> *)param_1,0x8058);
  return;
}



/* OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_system_properties_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_instance_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer(void*) */

void * __thiscall
OpenXRExtensionWrapper::set_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,void *param_1)

{
  return param_1;
}



/* OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_hand_joint_locations_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer(int, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_projection_views_and_get_next_pointer
          (OpenXRExtensionWrapper *this,int param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::get_suggested_tracker_names() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_suggested_tracker_names(OpenXRExtensionWrapper *this)

{
  *(undefined8 *)(this + 8) = 0;
  return this;
}



/* OpenXRExtensionWrapper::on_register_metadata() */

void OpenXRExtensionWrapper::on_register_metadata(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_before_instance_created() */

void OpenXRExtensionWrapper::on_before_instance_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_instance_destroyed() */

void OpenXRExtensionWrapper::on_instance_destroyed(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_session_created(XrSession_T*) */

void OpenXRExtensionWrapper::on_session_created(XrSession_T *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::on_session_destroyed() */

void OpenXRExtensionWrapper::on_session_destroyed(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_process() */

void OpenXRExtensionWrapper::on_process(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_pre_render() */

void OpenXRExtensionWrapper::on_pre_render(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_main_swapchains_created() */

void OpenXRExtensionWrapper::on_main_swapchains_created(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_pre_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_pre_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_post_draw_viewport(RID) */

void OpenXRExtensionWrapper::on_post_draw_viewport(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_idle() */

void OpenXRExtensionWrapper::on_state_idle(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_ready() */

void OpenXRExtensionWrapper::on_state_ready(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_synchronized() */

void OpenXRExtensionWrapper::on_state_synchronized(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_visible() */

void OpenXRExtensionWrapper::on_state_visible(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_focused() */

void OpenXRExtensionWrapper::on_state_focused(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_stopping() */

void OpenXRExtensionWrapper::on_state_stopping(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_loss_pending() */

void OpenXRExtensionWrapper::on_state_loss_pending(void)

{
  return;
}



/* OpenXRExtensionWrapper::on_state_exiting() */

void OpenXRExtensionWrapper::on_state_exiting(void)

{
  return;
}



/* OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer(XrCompositionLayerBaseHeader
   const*, Dictionary const&, void*) */

void OpenXRExtensionWrapper::set_viewport_composition_layer_and_get_next_pointer
               (XrCompositionLayerBaseHeader *param_1,Dictionary *param_2,void *param_3)

{
  return;
}



/* OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed(XrCompositionLayerBaseHeader
   const*) */

void OpenXRExtensionWrapper::on_viewport_composition_layer_destroyed
               (XrCompositionLayerBaseHeader *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List<PropertyInfo,
   DefaultAllocator>*) */

void OpenXRExtensionWrapper::get_viewport_composition_layer_extension_properties(List *param_1)

{
  return;
}



/* OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer(Dictionary
   const&, void*) */

void * __thiscall
OpenXRExtensionWrapper::set_android_surface_swapchain_create_info_and_get_next_pointer
          (OpenXRExtensionWrapper *this,Dictionary *param_1,void *param_2)

{
  return param_2;
}



/* OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer const&) */

undefined8 OpenXRExtensionWrapper::on_event_polled(XrEventDataBuffer *param_1)

{
  return 0;
}



/* OpenXROpenGLExtension::~OpenXROpenGLExtension() */

void __thiscall OpenXROpenGLExtension::~OpenXROpenGLExtension(OpenXROpenGLExtension *this)

{
  return;
}



/* OpenXROpenGLExtension::~OpenXROpenGLExtension() */

void __thiscall OpenXROpenGLExtension::~OpenXROpenGLExtension(OpenXROpenGLExtension *this)

{
  operator_delete(this,0x18);
  return;
}



/* OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults() */

OpenXRExtensionWrapper * __thiscall
OpenXRExtensionWrapper::get_viewport_composition_layer_extension_property_defaults
          (OpenXRExtensionWrapper *this)

{
  Dictionary::Dictionary((Dictionary *)this);
  return this;
}



/* CowData<long>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<long>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RID>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
/* HashMap<String, bool*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, bool*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
::operator[](HashMap<String,bool*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,bool*>>>
             *this,String *param_1)

{
  long *plVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  undefined8 *puVar42;
  void *pvVar43;
  ulong uVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint *puVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  undefined1 (*pauVar57) [16];
  long in_FS_OFFSET;
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_00102ed8:
    uVar39 = (ulong)uVar55;
    uVar44 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar44,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar43 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar43;
    if (uVar55 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar43 + uVar48)) && (pvVar43 < (void *)((long)pvVar2 + uVar44))
         ) {
        uVar44 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar44 * 4) = 0;
          *(undefined8 *)((long)pvVar43 + uVar44 * 8) = 0;
          uVar44 = uVar44 + 1;
        } while (uVar39 != uVar44);
        goto LAB_00102d6a;
      }
      memset(pvVar2,0,uVar44);
      memset(pvVar43,0,uVar48);
      iVar45 = *(int *)(this + 0x2c);
LAB_00102d6e:
      if (iVar45 != 0) {
LAB_00102d76:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar52 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar52 != 0) {
          uVar38 = uVar52;
        }
        uVar54 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar46 = SUB168(auVar16 * auVar32,8);
        uVar52 = *(uint *)(lVar53 + lVar46 * 4);
        uVar51 = SUB164(auVar16 * auVar32,8);
        if (uVar52 != 0) {
          do {
            if (uVar38 == uVar52) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
                *(undefined8 *)(pauVar41[1] + 8) = 0;
                goto LAB_00102c1b;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar51 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar46 = SUB168(auVar17 * auVar33,8);
            uVar52 = *(uint *)(lVar53 + lVar46 * 4);
            uVar51 = SUB164(auVar17 * auVar33,8);
          } while ((uVar52 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar52 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar54 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar55;
      goto LAB_00102854;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar43 == (void *)0x0) goto LAB_00102854;
    if (iVar45 != 0) goto LAB_00102d76;
LAB_0010287a:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00102c1b;
    }
    uVar39 = (ulong)(uVar55 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    if (uVar55 + 1 < 2) {
      uVar39 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar55;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar43 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar44 = uVar48 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar44);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar55 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar55 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar51 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar44 = CONCAT44(0,uVar38);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar55 * lVar53;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar44;
          lVar46 = SUB168(auVar4 * auVar20,8);
          puVar50 = (uint *)(lVar3 + lVar46 * 4);
          iVar45 = SUB164(auVar4 * auVar20,8);
          uVar52 = *puVar50;
          uVar40 = *(undefined8 *)((long)pvVar43 + uVar39 * 8);
          while (uVar52 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar52 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar45) - SUB164(auVar5 * auVar21,8)) * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            uVar54 = SUB164(auVar6 * auVar22,8);
            uVar49 = uVar40;
            if (uVar54 < uVar51) {
              *puVar50 = uVar55;
              puVar42 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar42;
              *puVar42 = uVar40;
              uVar55 = uVar52;
              uVar51 = uVar54;
            }
            uVar51 = uVar51 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            lVar46 = SUB168(auVar7 * auVar23,8);
            puVar50 = (uint *)(lVar3 + lVar46 * 4);
            iVar45 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar49;
            uVar52 = *puVar50;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar50 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar43,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar45 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar55);
    if (iVar45 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar53 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar53 + lVar46 * 4);
      uVar52 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar52 * 8);
              goto LAB_00102c1b;
            }
            lVar53 = *(long *)(this + 0x10);
          }
          uVar51 = uVar51 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar52 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar46 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar53 + lVar46 * 4);
          uVar52 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar52 + uVar55) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar51 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_00102ed8;
LAB_00102d6a:
      iVar45 = *(int *)(this + 0x2c);
      goto LAB_00102d6e;
    }
LAB_00102854:
    if ((float)uVar39 * __LC66 < (float)(iVar45 + 1)) goto LAB_0010287a;
  }
  local_58[0] = 0;
  if (*(long *)param_1 == 0) {
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
LAB_00102eab:
    *(undefined8 *)(pauVar41[1] + 8) = 0;
LAB_00102b03:
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 != (undefined8 *)0x0) goto LAB_00102b10;
LAB_00102d45:
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
    lVar3 = local_58[0];
    local_58[1] = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 == 0) goto LAB_00102eab;
    CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)local_58);
    *(undefined8 *)(pauVar41[1] + 8) = 0;
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00102b03;
    Memory::free_static((void *)(local_58[0] + -0x10),false);
    puVar42 = *(undefined8 **)(this + 0x20);
    if (puVar42 == (undefined8 *)0x0) goto LAB_00102d45;
LAB_00102b10:
    *puVar42 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar42;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar37 != 0) {
    uVar55 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar55 * lVar53;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar47 = SUB168(auVar8 * auVar24,8);
  lVar46 = *(long *)(this + 8);
  puVar50 = (uint *)(lVar3 + lVar47 * 4);
  iVar45 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar50;
  pauVar57 = pauVar41;
  if (uVar38 != 0) {
    uVar52 = 0;
    pauVar56 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar45) - SUB164(auVar9 * auVar25,8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26,8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
        *puVar50 = uVar55;
        puVar42 = (undefined8 *)(lVar46 + lVar47 * 8);
        pauVar57 = (undefined1 (*) [16])*puVar42;
        *puVar42 = pauVar56;
        uVar52 = uVar51;
        uVar55 = uVar38;
      }
      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27,8);
      puVar50 = (uint *)(lVar3 + lVar47 * 4);
      iVar45 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar57;
  *puVar50 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00102c1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* String stringify_variants<String>(Variant const&, String) */

String * stringify_variants<String>(String *param_1,undefined8 param_2,String *param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,param_3);
  stringify_variants((Variant *)&local_70);
  local_68 = &_LC74;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+(param_1,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void print_line<String>(Variant const&, String) */

void print_line<String>(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_0010321f;
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
      local_20 = *param_2;
    }
  }
LAB_0010321f:
  stringify_variants<String>((String *)&local_18,param_1,&local_20);
  __print_line((String *)&local_18);
  lVar2 = local_18;
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_18 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_20;
  if (local_20 != 0) {
    LOCK();
    plVar1 = (long *)(local_20 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_20 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<RID>::_realloc(long) */

undefined8 __thiscall CowData<RID>::_realloc(CowData<RID> *this,long param_1)

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
/* Error CowData<RID>::resize<false>(long) */

undefined8 __thiscall CowData<RID>::resize<false>(CowData<RID> *this,long param_1)

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
LAB_00103630:
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
  if (lVar7 == 0) goto LAB_00103630;
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
LAB_0010359c:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar3 = puVar9[-1];
    if (param_1 <= lVar3) goto LAB_00103531;
  }
  else {
    if (lVar8 != 0) {
      uVar6 = _realloc(this,lVar7);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_0010359c;
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
LAB_00103531:
  puVar9[-1] = param_1;
  return 0;
}



/* String stringify_variants<char const*>(Variant const&, char const*) */

Variant * stringify_variants<char_const*>(Variant *param_1,char *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  char *in_RDX;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  stringify_variants((Variant *)&local_70);
  local_68 = &_LC74;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+((String *)param_1,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void print_line<String, char const*>(Variant const&, String, char const*) */

void print_line<String,char_const*>(undefined8 param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  bool bVar5;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_90 = 0;
  if (*param_2 != 0) {
    plVar1 = (long *)(*param_2 + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001038de;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar2 == lVar4;
      if (bVar5) {
        *plVar1 = lVar2 + 1;
        lVar4 = lVar2;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_90 = *param_2;
    }
  }
LAB_001038de:
  Variant::Variant((Variant *)local_58,(String *)&local_90);
  stringify_variants<char_const*>((Variant *)&local_70,(char *)local_58);
  local_68 = &_LC74;
  local_78 = 0;
  local_60 = 1;
  String::parse_latin1((StrRange *)&local_78);
  Variant::operator_cast_to_String((Variant *)&local_80);
  String::operator+((String *)&local_68,(String *)&local_80);
  String::operator+((String *)&local_88,(String *)&local_68);
  puVar3 = local_68;
  if (local_68 != (undefined *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = (undefined *)0x0;
      Memory::free_static(puVar3 + -0x10,false);
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
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
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  __print_line((String *)&local_88);
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<long>::_realloc(long) */

undefined8 __thiscall CowData<long>::_realloc(CowData<long> *this,long param_1)

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
/* Error CowData<long>::resize<false>(long) */

undefined8 __thiscall CowData<long>::resize<false>(CowData<long> *this,long param_1)

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
    lVar3 = lVar9 * 8;
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
LAB_00103d90:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_00103d90;
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
        goto LAB_00103ca1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00103ca1:
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



/* WARNING: Control flow encountered bad instruction data */
/* OpenXROpenGLExtension::~OpenXROpenGLExtension() */

void __thiscall OpenXROpenGLExtension::~OpenXROpenGLExtension(OpenXROpenGLExtension *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


