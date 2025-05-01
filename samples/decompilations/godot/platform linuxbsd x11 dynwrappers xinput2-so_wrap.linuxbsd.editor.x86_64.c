
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_xinput2(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libXi.so.6",1);
  if (lVar1 != 0) {
    dlerror();
    XIQueryPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIQueryPointer");
    if (param_1 == 0) {
      XIWarpPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIWarpPointer");
      XIDefineCursor_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIDefineCursor");
      XIUndefineCursor_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUndefineCursor");
      XIChangeHierarchy_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIChangeHierarchy");
      XISetClientPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XISetClientPointer");
      XIGetClientPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetClientPointer");
      XISelectEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XISelectEvents");
      XIGetSelectedEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetSelectedEvents");
      XIQueryVersion_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIQueryVersion");
      XIQueryDevice_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIQueryDevice");
      XISetFocus_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XISetFocus");
      XIGetFocus_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetFocus");
      XIGrabDevice_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabDevice");
      XIUngrabDevice_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabDevice");
      XIAllowEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIAllowEvents");
      XIAllowTouchEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIAllowTouchEvents");
      XIGrabButton_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabButton");
      XIGrabKeycode_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabKeycode");
      XIGrabEnter_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabEnter");
      XIGrabFocusIn_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabFocusIn");
      XIGrabTouchBegin_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabTouchBegin");
      XIUngrabButton_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabButton");
      XIUngrabKeycode_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabKeycode");
      XIUngrabEnter_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabEnter");
      XIUngrabFocusIn_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabFocusIn");
      XIUngrabTouchBegin_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabTouchBegin");
      XIListProperties_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIListProperties");
      XIChangeProperty_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIChangeProperty");
      XIDeleteProperty_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIDeleteProperty");
      XIGetProperty_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetProperty");
      XIBarrierReleasePointers_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIBarrierReleasePointers")
      ;
      XIBarrierReleasePointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIBarrierReleasePointer");
      XIFreeDeviceInfo_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIFreeDeviceInfo");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIWarpPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIWarpPointer");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIWarpPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIWarpPointer");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIDefineCursor_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIDefineCursor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIDefineCursor_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIDefineCursor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIUndefineCursor_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUndefineCursor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIUndefineCursor_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUndefineCursor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIChangeHierarchy_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIChangeHierarchy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIChangeHierarchy_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIChangeHierarchy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XISetClientPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XISetClientPointer");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XISetClientPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XISetClientPointer");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGetClientPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetClientPointer");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGetClientPointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetClientPointer");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XISelectEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XISelectEvents");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XISelectEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XISelectEvents");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGetSelectedEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetSelectedEvents");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGetSelectedEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetSelectedEvents");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIQueryVersion_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIQueryVersion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIQueryVersion_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIQueryVersion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIQueryDevice_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIQueryDevice");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIQueryDevice_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIQueryDevice");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XISetFocus_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XISetFocus");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XISetFocus_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XISetFocus");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGetFocus_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetFocus");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGetFocus_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetFocus");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGrabDevice_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabDevice");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGrabDevice_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabDevice");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIUngrabDevice_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabDevice");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIUngrabDevice_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabDevice");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIAllowEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIAllowEvents");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIAllowEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIAllowEvents");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIAllowTouchEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIAllowTouchEvents");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIAllowTouchEvents_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIAllowTouchEvents");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGrabButton_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabButton");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGrabButton_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabButton");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGrabKeycode_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabKeycode");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGrabKeycode_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabKeycode");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGrabEnter_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabEnter");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGrabEnter_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabEnter");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGrabFocusIn_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabFocusIn");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGrabFocusIn_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabFocusIn");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGrabTouchBegin_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabTouchBegin");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGrabTouchBegin_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGrabTouchBegin");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIUngrabButton_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabButton");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIUngrabButton_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabButton");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIUngrabKeycode_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabKeycode");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIUngrabKeycode_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabKeycode");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIUngrabEnter_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabEnter");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIUngrabEnter_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabEnter");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIUngrabFocusIn_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabFocusIn");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIUngrabFocusIn_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabFocusIn");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIUngrabTouchBegin_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabTouchBegin");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIUngrabTouchBegin_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIUngrabTouchBegin");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIListProperties_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIListProperties");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIListProperties_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIListProperties");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIChangeProperty_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIChangeProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIChangeProperty_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIChangeProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIDeleteProperty_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIDeleteProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIDeleteProperty_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIDeleteProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIGetProperty_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetProperty");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIGetProperty_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIGetProperty");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIBarrierReleasePointers_dylibloader_wrapper_xinput2 =
             dlsym(lVar1,"XIBarrierReleasePointers");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIBarrierReleasePointers_dylibloader_wrapper_xinput2 =
             dlsym(lVar1,"XIBarrierReleasePointers");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIBarrierReleasePointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIBarrierReleasePointer")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIBarrierReleasePointer_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIBarrierReleasePointer")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XIFreeDeviceInfo_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIFreeDeviceInfo");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XIFreeDeviceInfo_dylibloader_wrapper_xinput2 = dlsym(lVar1,"XIFreeDeviceInfo");
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


