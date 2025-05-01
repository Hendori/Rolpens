
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_xrender(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libXrender.so.1",1);
  if (lVar1 != 0) {
    dlerror();
    XRenderQueryExtension_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryExtension");
    if (param_1 == 0) {
      XRenderQueryVersion_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryVersion");
      XRenderQueryFormats_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryFormats");
      XRenderQuerySubpixelOrder_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderQuerySubpixelOrder");
      XRenderSetSubpixelOrder_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderSetSubpixelOrder");
      XRenderFindVisualFormat_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFindVisualFormat");
      XRenderFindFormat_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFindFormat");
      XRenderFindStandardFormat_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderFindStandardFormat");
      XRenderQueryPictIndexValues_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderQueryPictIndexValues");
      XRenderCreatePicture_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreatePicture");
      XRenderChangePicture_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderChangePicture");
      XRenderSetPictureClipRectangles_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderSetPictureClipRectangles");
      XRenderSetPictureClipRegion_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderSetPictureClipRegion");
      XRenderSetPictureTransform_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderSetPictureTransform");
      XRenderFreePicture_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFreePicture");
      XRenderComposite_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderComposite");
      XRenderCreateGlyphSet_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateGlyphSet");
      XRenderReferenceGlyphSet_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderReferenceGlyphSet")
      ;
      XRenderFreeGlyphSet_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFreeGlyphSet");
      XRenderAddGlyphs_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderAddGlyphs");
      XRenderFreeGlyphs_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFreeGlyphs");
      XRenderCompositeString8_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeString8");
      XRenderCompositeString16_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeString16")
      ;
      XRenderCompositeString32_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeString32")
      ;
      XRenderCompositeText8_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeText8");
      XRenderCompositeText16_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeText16");
      XRenderCompositeText32_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeText32");
      XRenderFillRectangle_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFillRectangle");
      XRenderFillRectangles_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFillRectangles");
      XRenderCompositeTrapezoids_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderCompositeTrapezoids");
      XRenderCompositeTriangles_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderCompositeTriangles");
      XRenderCompositeTriStrip_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeTriStrip")
      ;
      XRenderCompositeTriFan_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeTriFan");
      XRenderCompositeDoublePoly_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderCompositeDoublePoly");
      XRenderParseColor_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderParseColor");
      XRenderCreateCursor_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateCursor");
      XRenderQueryFilters_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryFilters");
      XRenderSetPictureFilter_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderSetPictureFilter");
      XRenderCreateAnimCursor_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateAnimCursor");
      XRenderAddTraps_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderAddTraps");
      XRenderCreateSolidFill_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateSolidFill");
      XRenderCreateLinearGradient_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderCreateLinearGradient");
      XRenderCreateRadialGradient_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderCreateRadialGradient");
      XRenderCreateConicalGradient_dylibloader_wrapper_xrender =
           dlsym(lVar1,"XRenderCreateConicalGradient");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderQueryVersion_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryVersion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderQueryVersion_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryVersion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderQueryFormats_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryFormats");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderQueryFormats_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryFormats");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderQuerySubpixelOrder_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderQuerySubpixelOrder");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderQuerySubpixelOrder_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderQuerySubpixelOrder");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderSetSubpixelOrder_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderSetSubpixelOrder")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderSetSubpixelOrder_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderSetSubpixelOrder")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderFindVisualFormat_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFindVisualFormat")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderFindVisualFormat_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFindVisualFormat")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderFindFormat_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFindFormat");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderFindFormat_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFindFormat");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderFindStandardFormat_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderFindStandardFormat");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderFindStandardFormat_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderFindStandardFormat");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderQueryPictIndexValues_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderQueryPictIndexValues");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderQueryPictIndexValues_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderQueryPictIndexValues");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCreatePicture_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreatePicture");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCreatePicture_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreatePicture");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderChangePicture_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderChangePicture");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderChangePicture_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderChangePicture");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderSetPictureClipRectangles_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderSetPictureClipRectangles");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderSetPictureClipRectangles_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderSetPictureClipRectangles");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderSetPictureClipRegion_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderSetPictureClipRegion");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderSetPictureClipRegion_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderSetPictureClipRegion");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderSetPictureTransform_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderSetPictureTransform");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderSetPictureTransform_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderSetPictureTransform");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderFreePicture_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFreePicture");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderFreePicture_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFreePicture");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderComposite_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderComposite");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderComposite_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderComposite");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCreateGlyphSet_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateGlyphSet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCreateGlyphSet_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateGlyphSet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderReferenceGlyphSet_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderReferenceGlyphSet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderReferenceGlyphSet_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderReferenceGlyphSet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderFreeGlyphSet_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFreeGlyphSet");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderFreeGlyphSet_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFreeGlyphSet");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderAddGlyphs_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderAddGlyphs");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderAddGlyphs_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderAddGlyphs");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderFreeGlyphs_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFreeGlyphs");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderFreeGlyphs_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFreeGlyphs");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeString8_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeString8")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeString8_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeString8")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeString16_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeString16");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeString16_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeString16");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeString32_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeString32");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeString32_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeString32");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeText8_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeText8");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeText8_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeText8");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeText16_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeText16");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeText16_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeText16");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeText32_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeText32");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeText32_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeText32");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderFillRectangle_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFillRectangle");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderFillRectangle_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFillRectangle");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderFillRectangles_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFillRectangles");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderFillRectangles_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderFillRectangles");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeTrapezoids_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeTrapezoids");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeTrapezoids_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeTrapezoids");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeTriangles_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeTriangles");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeTriangles_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeTriangles");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeTriStrip_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeTriStrip");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeTriStrip_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeTriStrip");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeTriFan_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeTriFan");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeTriFan_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCompositeTriFan");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCompositeDoublePoly_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeDoublePoly");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCompositeDoublePoly_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCompositeDoublePoly");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderParseColor_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderParseColor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderParseColor_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderParseColor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCreateCursor_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateCursor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCreateCursor_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateCursor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderQueryFilters_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryFilters");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderQueryFilters_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderQueryFilters");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderSetPictureFilter_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderSetPictureFilter")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderSetPictureFilter_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderSetPictureFilter")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCreateAnimCursor_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateAnimCursor")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCreateAnimCursor_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateAnimCursor")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderAddTraps_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderAddTraps");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderAddTraps_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderAddTraps");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCreateSolidFill_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateSolidFill");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCreateSolidFill_dylibloader_wrapper_xrender = dlsym(lVar1,"XRenderCreateSolidFill");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCreateLinearGradient_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCreateLinearGradient");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCreateLinearGradient_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCreateLinearGradient");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCreateRadialGradient_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCreateRadialGradient");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCreateRadialGradient_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCreateRadialGradient");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XRenderCreateConicalGradient_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCreateConicalGradient");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XRenderCreateConicalGradient_dylibloader_wrapper_xrender =
             dlsym(lVar1,"XRenderCreateConicalGradient");
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


