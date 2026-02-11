
void glad_glx_get_proc_from_userptr(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0010000a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



undefined8 glad_glx_has_extension(undefined8 param_1,undefined8 param_2,char *param_3)

{
  byte *__haystack;
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  
  if (glad_glXQueryExtensionsString == (code *)0x0) {
    return 0;
  }
  __haystack = (byte *)(*glad_glXQueryExtensionsString)();
  if (__haystack != (byte *)0x0) {
    while (pbVar1 = (byte *)strstr((char *)__haystack,param_3), pbVar1 != (byte *)0x0) {
      sVar2 = strlen(param_3);
      pbVar3 = pbVar1 + sVar2;
      if (((__haystack == pbVar1) || (__haystack = pbVar3, pbVar1[-1] == 0x20)) &&
         (__haystack = pbVar3, (*pbVar3 & 0xdf) == 0)) {
        return 1;
      }
    }
  }
  return 0;
}



void glad_glx_get_proc(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0010009a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



int gladLoadGLXUserPtr(long param_1,undefined4 param_2,code *param_3,undefined8 param_4)

{
  int iVar1;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  iVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  glad_glXQueryVersion = (code *)(*param_3)(param_4,"glXQueryVersion");
  if (glad_glXQueryVersion == (code *)0x0) goto LAB_001005b0;
  local_48 = 0;
  local_44 = 0;
  if (param_1 == 0) {
    iVar1 = GLAD_GLX_VERSION_1_0;
    if (GLAD_GLX_VERSION_1_0 != 0) {
      iVar1 = 0;
      goto LAB_00100167;
    }
LAB_001002a6:
    if (GLAD_GLX_VERSION_1_1 != 0) {
      glad_glXGetClientString = (*param_3)(param_4,"glXGetClientString");
      glad_glXQueryExtensionsString = (*param_3)(param_4,"glXQueryExtensionsString");
      glad_glXQueryServerString = (*param_3)(param_4,"glXQueryServerString");
    }
  }
  else {
    (*glad_glXQueryVersion)(param_1,&local_48,&local_44);
    if (local_48 == 1) {
      if (local_44 < 0) {
        GLAD_GLX_VERSION_1_0 = 0;
        GLAD_GLX_VERSION_1_1 = 0;
        GLAD_GLX_VERSION_1_2 = 0;
        GLAD_GLX_VERSION_1_3 = 0;
        GLAD_GLX_VERSION_1_4 = 0;
        iVar1 = local_44 + 10000;
        goto LAB_001002a6;
      }
      GLAD_GLX_VERSION_1_0 = 1;
      if (local_44 == 0) {
        GLAD_GLX_VERSION_1_1 = 0;
        GLAD_GLX_VERSION_1_2 = 0;
        GLAD_GLX_VERSION_1_3 = 0;
        GLAD_GLX_VERSION_1_4 = 0;
        iVar1 = 10000;
      }
      else {
        GLAD_GLX_VERSION_1_1 = 1;
        if (local_44 == 1) {
          GLAD_GLX_VERSION_1_2 = 0;
          iVar1 = 0x2711;
          GLAD_GLX_VERSION_1_3 = 0;
          GLAD_GLX_VERSION_1_4 = 0;
        }
        else {
          GLAD_GLX_VERSION_1_2 = 1;
          if (local_44 == 2) {
            GLAD_GLX_VERSION_1_3 = 0;
            iVar1 = 0x2712;
            GLAD_GLX_VERSION_1_4 = 0;
          }
          else {
            GLAD_GLX_VERSION_1_3 = 1;
            GLAD_GLX_VERSION_1_4 = (uint)(3 < local_44);
            iVar1 = local_44 + 10000;
          }
        }
      }
LAB_00100167:
      glad_glXChooseVisual = (*param_3)(param_4,"glXChooseVisual");
      glad_glXCopyContext = (*param_3)(param_4,"glXCopyContext");
      glad_glXCreateContext = (*param_3)(param_4,"glXCreateContext");
      glad_glXCreateGLXPixmap = (*param_3)(param_4,"glXCreateGLXPixmap");
      glad_glXDestroyContext = (*param_3)(param_4,"glXDestroyContext");
      glad_glXDestroyGLXPixmap = (*param_3)(param_4,"glXDestroyGLXPixmap");
      glad_glXGetConfig = (*param_3)(param_4,"glXGetConfig");
      glad_glXGetCurrentContext = (*param_3)(param_4,"glXGetCurrentContext");
      glad_glXGetCurrentDrawable = (*param_3)(param_4,"glXGetCurrentDrawable");
      glad_glXIsDirect = (*param_3)(param_4,"glXIsDirect");
      glad_glXMakeCurrent = (*param_3)(param_4,"glXMakeCurrent");
      glad_glXQueryExtension = (*param_3)(param_4,"glXQueryExtension");
      glad_glXQueryVersion = (code *)(*param_3)(param_4,"glXQueryVersion");
      glad_glXSwapBuffers = (*param_3)(param_4,"glXSwapBuffers");
      glad_glXUseXFont = (*param_3)(param_4,"glXUseXFont");
      glad_glXWaitGL = (*param_3)(param_4,"glXWaitGL");
      glad_glXWaitX = (*param_3)(param_4,"glXWaitX");
      goto LAB_001002a6;
    }
    if (1 < local_48) {
      GLAD_GLX_VERSION_1_0 = 1;
      GLAD_GLX_VERSION_1_1 = 1;
      GLAD_GLX_VERSION_1_2 = 1;
      GLAD_GLX_VERSION_1_3 = 1;
      iVar1 = local_44 + local_48 * 10000;
      GLAD_GLX_VERSION_1_4 = 1;
      goto LAB_00100167;
    }
    GLAD_GLX_VERSION_1_0 = 0;
    GLAD_GLX_VERSION_1_1 = 0;
    GLAD_GLX_VERSION_1_2 = 0;
    GLAD_GLX_VERSION_1_3 = 0;
    iVar1 = local_44 + local_48 * 10000;
    GLAD_GLX_VERSION_1_4 = 0;
  }
  if (GLAD_GLX_VERSION_1_2 != 0) {
    glad_glXGetCurrentDisplay = (*param_3)(param_4,"glXGetCurrentDisplay");
  }
  if (GLAD_GLX_VERSION_1_3 != 0) {
    glad_glXChooseFBConfig = (*param_3)(param_4,"glXChooseFBConfig");
    glad_glXCreateNewContext = (*param_3)(param_4,"glXCreateNewContext");
    glad_glXCreatePbuffer = (*param_3)(param_4,"glXCreatePbuffer");
    glad_glXCreatePixmap = (*param_3)(param_4,"glXCreatePixmap");
    glad_glXCreateWindow = (*param_3)(param_4,"glXCreateWindow");
    glad_glXDestroyPbuffer = (*param_3)(param_4,"glXDestroyPbuffer");
    glad_glXDestroyPixmap = (*param_3)(param_4,"glXDestroyPixmap");
    glad_glXDestroyWindow = (*param_3)(param_4,"glXDestroyWindow");
    glad_glXGetCurrentReadDrawable = (*param_3)(param_4,"glXGetCurrentReadDrawable");
    glad_glXGetFBConfigAttrib = (*param_3)(param_4,"glXGetFBConfigAttrib");
    glad_glXGetFBConfigs = (*param_3)(param_4,"glXGetFBConfigs");
    glad_glXGetSelectedEvent = (*param_3)(param_4,"glXGetSelectedEvent");
    glad_glXGetVisualFromFBConfig = (*param_3)(param_4,"glXGetVisualFromFBConfig");
    glad_glXMakeContextCurrent = (*param_3)(param_4,"glXMakeContextCurrent");
    glad_glXQueryContext = (*param_3)(param_4,"glXQueryContext");
    glad_glXQueryDrawable = (*param_3)(param_4,"glXQueryDrawable");
    glad_glXSelectEvent = (*param_3)(param_4,"glXSelectEvent");
  }
  if (GLAD_GLX_VERSION_1_4 != 0) {
    glad_glXGetProcAddress = (*param_3)(param_4,"glXGetProcAddress");
  }
  GLAD_GLX_ARB_create_context = glad_glx_has_extension(param_1,param_2,"GLX_ARB_create_context");
  GLAD_GLX_ARB_create_context_profile =
       glad_glx_has_extension(param_1,param_2,"GLX_ARB_create_context_profile");
  GLAD_GLX_ARB_get_proc_address = glad_glx_has_extension(param_1,param_2,"GLX_ARB_get_proc_address")
  ;
  GLAD_GLX_EXT_swap_control = glad_glx_has_extension(param_1,param_2,"GLX_EXT_swap_control");
  GLAD_GLX_MESA_swap_control = glad_glx_has_extension(param_1,param_2,"GLX_MESA_swap_control");
  GLAD_GLX_SGI_swap_control = glad_glx_has_extension(param_1,param_2,"GLX_SGI_swap_control");
  if (GLAD_GLX_ARB_create_context != 0) {
    glad_glXCreateContextAttribsARB = (*param_3)(param_4,"glXCreateContextAttribsARB");
  }
  if (GLAD_GLX_ARB_get_proc_address != 0) {
    glad_glXGetProcAddressARB = (*param_3)(param_4,"glXGetProcAddressARB");
  }
  if (GLAD_GLX_EXT_swap_control != 0) {
    glad_glXSwapIntervalEXT = (*param_3)(param_4,"glXSwapIntervalEXT");
  }
  if (GLAD_GLX_MESA_swap_control != 0) {
    glad_glXGetSwapIntervalMESA = (*param_3)(param_4,"glXGetSwapIntervalMESA");
    glad_glXSwapIntervalMESA = (*param_3)(param_4,"glXSwapIntervalMESA");
  }
  if (GLAD_GLX_SGI_swap_control != 0) {
    glad_glXSwapIntervalSGI = (*param_3)(param_4,"glXSwapIntervalSGI");
  }
LAB_001005b0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void gladLoadGLX(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  gladLoadGLXUserPtr(param_1,param_2,0x100000,param_3);
  return;
}



undefined8 gladLoaderLoadGLX(undefined8 param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (_glx_handle == 0) {
    lVar1 = dlopen(NAMES_0,1);
    if ((lVar1 != 0) || (lVar1 = dlopen(PTR_s_libGL_so_00100e38,1), _glx_handle = lVar1, lVar1 != 0)
       ) {
      _glx_handle = lVar1;
      lVar1 = dlsym(lVar1,"glXGetProcAddressARB");
      if (lVar1 != 0) {
        uVar2 = gladLoadGLXUserPtr(param_1,param_2,glad_glx_get_proc,lVar1);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (_glx_handle == 0) {
          return 0;
        }
      }
      dlclose(_glx_handle);
      _glx_handle = 0;
    }
  }
  else {
    lVar1 = dlsym(_glx_handle,"glXGetProcAddressARB");
    if (lVar1 != 0) {
      uVar2 = gladLoadGLXUserPtr(param_1,param_2,glad_glx_get_proc,lVar1);
      return uVar2;
    }
  }
  return 0;
}



void gladLoaderUnloadGLX(void)

{
  if (_glx_handle != 0) {
    dlclose();
    _glx_handle = 0;
    return;
  }
  return;
}


