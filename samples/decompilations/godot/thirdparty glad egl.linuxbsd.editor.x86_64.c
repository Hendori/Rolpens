
void glad_egl_get_proc_from_userptr(code *UNRECOVERED_JUMPTABLE,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0010000a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



void glad_egl_get_proc(long *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  
  UNRECOVERED_JUMPTABLE = (code *)param_1[1];
  if (*param_1 != 0) {
    lVar1 = dlsym(*param_1);
    if (lVar1 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0010004c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



undefined8 glad_egl_has_extension_part_0(byte *param_1,char *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  byte *pbVar3;
  
  do {
    pbVar1 = (byte *)strstr((char *)param_1,param_2);
    if (pbVar1 == (byte *)0x0) {
      return 0;
    }
    sVar2 = strlen(param_2);
    pbVar3 = pbVar1 + sVar2;
  } while (((param_1 != pbVar1) && (param_1 = pbVar3, pbVar1[-1] != 0x20)) ||
          (param_1 = pbVar3, (*pbVar3 & 0xdf) != 0));
  return 1;
}



int gladLoadEGLUserPtr(long param_1,code *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  int local_48;
  int local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  glad_eglGetDisplay = (code *)(*param_2)(param_3,"eglGetDisplay");
  glad_eglGetCurrentDisplay = (code *)(*param_2)(param_3,"eglGetCurrentDisplay");
  glad_eglQueryString = (code *)(*param_2)(param_3,"eglQueryString");
  glad_eglGetError = (code *)(*param_2)(param_3,"eglGetError");
  if ((((glad_eglGetDisplay == (code *)0x0) || (glad_eglGetCurrentDisplay == (code *)0x0)) ||
      (glad_eglGetError == (code *)0x0)) || (glad_eglQueryString == (code *)0x0)) goto LAB_00100698;
  lVar3 = param_1;
  if ((param_1 == 0) && (lVar3 = (*glad_eglGetCurrentDisplay)(0), lVar3 == 0)) {
    lVar3 = (*glad_eglGetDisplay)(0);
  }
  lVar3 = (*glad_eglQueryString)(lVar3,0x3054);
  (*glad_eglGetError)();
  if (lVar3 == 0) {
    GLAD_EGL_VERSION_1_5 = 0;
LAB_001006d4:
    GLAD_EGL_VERSION_1_1 = 0;
    iVar4 = 10000;
    GLAD_EGL_VERSION_1_2 = 0;
    GLAD_EGL_VERSION_1_3 = 0;
    GLAD_EGL_VERSION_1_4 = 0;
LAB_00100208:
    GLAD_EGL_VERSION_1_0 = 1;
    glad_eglChooseConfig = (*param_2)(param_3,"eglChooseConfig");
    glad_eglCopyBuffers = (*param_2)(param_3,"eglCopyBuffers");
    glad_eglCreateContext = (*param_2)(param_3,"eglCreateContext");
    glad_eglCreatePbufferSurface = (*param_2)(param_3,"eglCreatePbufferSurface");
    glad_eglCreatePixmapSurface = (*param_2)(param_3,"eglCreatePixmapSurface");
    glad_eglCreateWindowSurface = (*param_2)(param_3,"eglCreateWindowSurface");
    glad_eglDestroyContext = (*param_2)(param_3,"eglDestroyContext");
    glad_eglDestroySurface = (*param_2)(param_3,"eglDestroySurface");
    glad_eglGetConfigAttrib = (*param_2)(param_3,"eglGetConfigAttrib");
    glad_eglGetConfigs = (*param_2)(param_3,"eglGetConfigs");
    glad_eglGetCurrentDisplay = (code *)(*param_2)(param_3,"eglGetCurrentDisplay");
    glad_eglGetCurrentSurface = (*param_2)(param_3,"eglGetCurrentSurface");
    glad_eglGetDisplay = (code *)(*param_2)(param_3,"eglGetDisplay");
    glad_eglGetError = (code *)(*param_2)(param_3,"eglGetError");
    glad_eglGetProcAddress = (*param_2)(param_3,"eglGetProcAddress");
    glad_eglInitialize = (*param_2)(param_3,"eglInitialize");
    glad_eglMakeCurrent = (*param_2)(param_3,"eglMakeCurrent");
    glad_eglQueryContext = (*param_2)(param_3,"eglQueryContext");
    glad_eglQueryString = (code *)(*param_2)(param_3,"eglQueryString");
    glad_eglQuerySurface = (*param_2)(param_3,"eglQuerySurface");
    glad_eglSwapBuffers = (*param_2)(param_3,"eglSwapBuffers");
    glad_eglTerminate = (*param_2)(param_3,"eglTerminate");
    glad_eglWaitGL = (*param_2)(param_3,"eglWaitGL");
    glad_eglWaitNative = (*param_2)(param_3,"eglWaitNative");
LAB_001003ce:
    if (GLAD_EGL_VERSION_1_1 != 0) {
      glad_eglBindTexImage = (*param_2)(param_3,"eglBindTexImage");
      glad_eglReleaseTexImage = (*param_2)(param_3,"eglReleaseTexImage");
      glad_eglSurfaceAttrib = (*param_2)(param_3,"eglSurfaceAttrib");
      glad_eglSwapInterval = (*param_2)(param_3,"eglSwapInterval");
    }
    if (GLAD_EGL_VERSION_1_2 != 0) {
      glad_eglBindAPI = (*param_2)(param_3,"eglBindAPI");
      glad_eglCreatePbufferFromClientBuffer = (*param_2)(param_3,"eglCreatePbufferFromClientBuffer")
      ;
      glad_eglQueryAPI = (*param_2)(param_3,"eglQueryAPI");
      glad_eglReleaseThread = (*param_2)(param_3,"eglReleaseThread");
      glad_eglWaitClient = (*param_2)(param_3,"eglWaitClient");
    }
  }
  else {
    __isoc99_sscanf(lVar3,"%d.%d",&local_48,&local_44);
    if (local_48 == 1) {
      GLAD_EGL_VERSION_1_5 = (uint)(4 < local_44);
      if (-1 < local_44) {
        if (local_44 != 0) {
          GLAD_EGL_VERSION_1_1 = 1;
          if (local_44 == 1) {
            GLAD_EGL_VERSION_1_2 = 0;
            iVar4 = 0x2711;
            GLAD_EGL_VERSION_1_3 = 0;
            GLAD_EGL_VERSION_1_4 = 0;
          }
          else {
            GLAD_EGL_VERSION_1_2 = 1;
            if (local_44 == 2) {
              iVar4 = 0x2712;
              GLAD_EGL_VERSION_1_3 = 0;
              GLAD_EGL_VERSION_1_4 = 0;
            }
            else {
              GLAD_EGL_VERSION_1_3 = 1;
              if (local_44 == 3) {
                GLAD_EGL_VERSION_1_4 = 0;
                iVar4 = 0x2713;
              }
              else {
                iVar4 = local_44 + 10000;
                GLAD_EGL_VERSION_1_4 = 1;
              }
            }
          }
          goto LAB_00100208;
        }
        goto LAB_001006d4;
      }
      GLAD_EGL_VERSION_1_0 = 0;
      iVar4 = local_44 + 10000;
      GLAD_EGL_VERSION_1_1 = 0;
      GLAD_EGL_VERSION_1_2 = 0;
      GLAD_EGL_VERSION_1_3 = 0;
      GLAD_EGL_VERSION_1_4 = 0;
      GLAD_EGL_VERSION_1_5 = 0;
      if (iVar4 == 0) goto LAB_00100698;
      goto LAB_001003ce;
    }
    iVar4 = local_48 * 10000 + local_44;
    if (1 < local_48) {
      GLAD_EGL_VERSION_1_0 = 1;
      GLAD_EGL_VERSION_1_1 = 1;
      GLAD_EGL_VERSION_1_2 = 1;
      GLAD_EGL_VERSION_1_3 = 1;
      GLAD_EGL_VERSION_1_4 = 1;
      GLAD_EGL_VERSION_1_5 = 1;
      if (iVar4 == 0) goto LAB_00100698;
      goto LAB_00100208;
    }
    GLAD_EGL_VERSION_1_0 = 0;
    GLAD_EGL_VERSION_1_1 = 0;
    GLAD_EGL_VERSION_1_2 = 0;
    GLAD_EGL_VERSION_1_3 = 0;
    GLAD_EGL_VERSION_1_4 = 0;
    GLAD_EGL_VERSION_1_5 = 0;
    if (iVar4 == 0) {
LAB_00100698:
      iVar4 = 0;
      goto LAB_0010069b;
    }
  }
  if (GLAD_EGL_VERSION_1_4 != 0) {
    glad_eglGetCurrentContext = (*param_2)(param_3,"eglGetCurrentContext");
  }
  if (GLAD_EGL_VERSION_1_5 != 0) {
    glad_eglClientWaitSync = (*param_2)(param_3,"eglClientWaitSync");
    glad_eglCreateImage = (*param_2)(param_3,"eglCreateImage");
    glad_eglCreatePlatformPixmapSurface = (*param_2)(param_3,"eglCreatePlatformPixmapSurface");
    glad_eglCreatePlatformWindowSurface = (*param_2)(param_3,"eglCreatePlatformWindowSurface");
    glad_eglCreateSync = (*param_2)(param_3,"eglCreateSync");
    glad_eglDestroyImage = (*param_2)(param_3,"eglDestroyImage");
    glad_eglDestroySync = (*param_2)(param_3,"eglDestroySync");
    glad_eglGetPlatformDisplay = (*param_2)(param_3,"eglGetPlatformDisplay");
    glad_eglGetSyncAttrib = (*param_2)(param_3,"eglGetSyncAttrib");
    glad_eglWaitSync = (*param_2)(param_3,"eglWaitSync");
  }
  lVar3 = (*glad_eglQueryString)(param_1,0x3055);
  if (lVar3 == 0) {
    GLAD_EGL_ANDROID_blob_cache = 0;
    GLAD_EGL_EXT_platform_base = 0;
    GLAD_EGL_KHR_platform_wayland = 0;
    GLAD_EGL_KHR_platform_x11 = 0;
  }
  else {
    iVar1 = glad_egl_has_extension_part_0(lVar3,"EGL_ANDROID_blob_cache");
    GLAD_EGL_ANDROID_blob_cache = iVar1;
    iVar2 = glad_egl_has_extension_part_0(lVar3,"EGL_EXT_platform_base");
    GLAD_EGL_EXT_platform_base = iVar2;
    GLAD_EGL_KHR_platform_wayland = glad_egl_has_extension_part_0(lVar3,"EGL_KHR_platform_wayland");
    GLAD_EGL_KHR_platform_x11 = glad_egl_has_extension_part_0(lVar3,"EGL_KHR_platform_x11");
    if (iVar1 != 0) {
      glad_eglSetBlobCacheFuncsANDROID = (*param_2)(param_3,"eglSetBlobCacheFuncsANDROID");
      iVar2 = GLAD_EGL_EXT_platform_base;
    }
    if (iVar2 != 0) {
      glad_eglCreatePlatformPixmapSurfaceEXT =
           (*param_2)(param_3,"eglCreatePlatformPixmapSurfaceEXT");
      glad_eglCreatePlatformWindowSurfaceEXT =
           (*param_2)(param_3,"eglCreatePlatformWindowSurfaceEXT");
      glad_eglGetPlatformDisplayEXT = (*param_2)(param_3,"eglGetPlatformDisplayEXT");
    }
  }
LAB_0010069b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar4;
}



void gladLoadEGL(undefined8 param_1,undefined8 param_2)

{
  gladLoadEGLUserPtr(param_1,0x100000,param_2);
  return;
}



undefined8 gladLoaderLoadEGL(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_20;
  
  lVar2 = _egl_handle;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (_egl_handle == 0) {
    lVar2 = dlopen(NAMES_0,1);
    if ((lVar2 != 0) ||
       (lVar2 = dlopen(PTR_s_libEGL_so_00101008,1), _egl_handle = lVar2, lVar2 != 0)) {
      _egl_handle = lVar2;
      local_30 = dlsym(lVar2,"eglGetProcAddress");
      local_38 = lVar2;
      if (local_30 != 0) {
        uVar1 = gladLoadEGLUserPtr(param_1,glad_egl_get_proc,&local_38);
        if ((int)uVar1 != 0) goto LAB_00100918;
        if (_egl_handle == 0) goto LAB_00100916;
      }
      dlclose(_egl_handle);
      _egl_handle = 0;
    }
  }
  else {
    local_30 = dlsym(_egl_handle,"eglGetProcAddress");
    local_38 = lVar2;
    if (local_30 != 0) {
      uVar1 = gladLoadEGLUserPtr(param_1,glad_egl_get_proc,&local_38);
      goto LAB_00100918;
    }
  }
LAB_00100916:
  uVar1 = 0;
LAB_00100918:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



void gladLoaderUnloadEGL(void)

{
  if (_egl_handle != 0) {
    dlclose();
    _egl_handle = 0;
    return;
  }
  return;
}


