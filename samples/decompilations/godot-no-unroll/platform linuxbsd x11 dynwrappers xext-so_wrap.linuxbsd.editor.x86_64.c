
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_xext(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libXext.so.6",1);
  if (lVar1 != 0) {
    dlerror();
    XShapeQueryExtension_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeQueryExtension");
    if (param_1 == 0) {
      XShapeQueryVersion_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeQueryVersion");
      XShapeCombineRegion_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineRegion");
      XShapeCombineRectangles_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineRectangles");
      XShapeCombineMask_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineMask");
      XShapeCombineShape_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineShape");
      XShapeOffsetShape_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeOffsetShape");
      XShapeQueryExtents_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeQueryExtents");
      XShapeSelectInput_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeSelectInput");
      XShapeInputSelected_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeInputSelected");
      XShapeGetRectangles_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeGetRectangles");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeQueryVersion_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeQueryVersion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeQueryVersion_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeQueryVersion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeCombineRegion_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineRegion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeCombineRegion_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineRegion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeCombineRectangles_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineRectangles");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeCombineRectangles_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineRectangles");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeCombineMask_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineMask");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeCombineMask_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineMask");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeCombineShape_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineShape");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeCombineShape_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeCombineShape");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeOffsetShape_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeOffsetShape");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeOffsetShape_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeOffsetShape");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeQueryExtents_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeQueryExtents");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeQueryExtents_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeQueryExtents");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeSelectInput_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeSelectInput");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeSelectInput_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeSelectInput");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeInputSelected_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeInputSelected");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeInputSelected_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeInputSelected");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XShapeGetRectangles_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeGetRectangles");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XShapeGetRectangles_dylibloader_wrapper_xext = dlsym(lVar1,"XShapeGetRectangles");
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


