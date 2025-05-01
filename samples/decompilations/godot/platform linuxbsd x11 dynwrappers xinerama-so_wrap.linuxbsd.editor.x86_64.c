
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_xinerama(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libXinerama.so.1",1);
  if (lVar1 != 0) {
    dlerror();
    XineramaQueryExtension_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaQueryExtension");
    if (param_1 == 0) {
      XineramaQueryVersion_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaQueryVersion");
      XineramaIsActive_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaIsActive");
      XineramaQueryScreens_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaQueryScreens");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XineramaQueryVersion_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaQueryVersion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XineramaQueryVersion_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaQueryVersion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XineramaIsActive_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaIsActive");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XineramaIsActive_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaIsActive");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XineramaQueryScreens_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaQueryScreens");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XineramaQueryScreens_dylibloader_wrapper_xinerama = dlsym(lVar1,"XineramaQueryScreens");
      }
      lVar1 = dlerror();
      if (lVar1 != 0) {
        __fprintf_chk(_stderr,2,&_LC1,lVar1);
      }
    }
    return 0;
  }
  if (param_1 != 0) {
    uVar3 = dlerror();
    __fprintf_chk(_stderr,2,&_LC1,uVar3);
  }
  return 1;
}


