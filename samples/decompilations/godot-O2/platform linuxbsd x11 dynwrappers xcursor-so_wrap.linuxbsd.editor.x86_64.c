
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 initialize_xcursor(int param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = dlopen("libXcursor.so.1",1);
  if (lVar1 != 0) {
    dlerror();
    XcursorImageCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageCreate");
    if (param_1 == 0) {
      XcursorImageDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageDestroy");
      XcursorImagesCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesCreate");
      XcursorImagesDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesDestroy");
      XcursorImagesSetName_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesSetName");
      XcursorCursorsCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCursorsCreate");
      XcursorCursorsDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCursorsDestroy");
      XcursorAnimateCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorAnimateCreate");
      XcursorAnimateDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorAnimateDestroy");
      XcursorAnimateNext_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorAnimateNext");
      XcursorCommentCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentCreate");
      XcursorCommentDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentDestroy");
      XcursorCommentsCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentsCreate");
      XcursorCommentsDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentsDestroy");
      XcursorXcFileLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileLoadImage");
      XcursorXcFileLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileLoadImages");
      XcursorXcFileLoadAllImages_dylibloader_wrapper_xcursor =
           dlsym(lVar1,"XcursorXcFileLoadAllImages");
      XcursorXcFileLoad_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileLoad");
      XcursorXcFileSave_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileSave");
      XcursorFileLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoadImage");
      XcursorFileLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoadImages");
      XcursorFileLoadAllImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoadAllImages")
      ;
      XcursorFileLoad_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoad");
      XcursorFileSaveImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileSaveImages");
      XcursorFileSave_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileSave");
      XcursorFilenameLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFilenameLoadImage")
      ;
      XcursorFilenameLoadImages_dylibloader_wrapper_xcursor =
           dlsym(lVar1,"XcursorFilenameLoadImages");
      XcursorFilenameLoadAllImages_dylibloader_wrapper_xcursor =
           dlsym(lVar1,"XcursorFilenameLoadAllImages");
      XcursorFilenameLoad_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFilenameLoad");
      XcursorFilenameSaveImages_dylibloader_wrapper_xcursor =
           dlsym(lVar1,"XcursorFilenameSaveImages");
      XcursorFilenameSave_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFilenameSave");
      XcursorLibraryLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryLoadImage");
      XcursorLibraryLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryLoadImages")
      ;
      XcursorLibraryPath_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryPath");
      XcursorLibraryShape_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryShape");
      XcursorImageLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageLoadCursor");
      XcursorImagesLoadCursors_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesLoadCursors")
      ;
      XcursorImagesLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesLoadCursor");
      XcursorFilenameLoadCursor_dylibloader_wrapper_xcursor =
           dlsym(lVar1,"XcursorFilenameLoadCursor");
      XcursorFilenameLoadCursors_dylibloader_wrapper_xcursor =
           dlsym(lVar1,"XcursorFilenameLoadCursors");
      XcursorLibraryLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryLoadCursor")
      ;
      XcursorLibraryLoadCursors_dylibloader_wrapper_xcursor =
           dlsym(lVar1,"XcursorLibraryLoadCursors");
      XcursorShapeLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadImage");
      XcursorShapeLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadImages");
      XcursorShapeLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadCursor");
      XcursorShapeLoadCursors_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadCursors");
      XcursorTryShapeCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorTryShapeCursor");
      XcursorNoticeCreateBitmap_dylibloader_wrapper_xcursor =
           dlsym(lVar1,"XcursorNoticeCreateBitmap");
      XcursorNoticePutBitmap_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorNoticePutBitmap");
      XcursorTryShapeBitmapCursor_dylibloader_wrapper_xcursor =
           dlsym(lVar1,"XcursorTryShapeBitmapCursor");
      XcursorImageHash_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageHash");
      XcursorSupportsARGB_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSupportsARGB");
      XcursorSupportsAnim_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSupportsAnim");
      XcursorSetDefaultSize_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSetDefaultSize");
      XcursorGetDefaultSize_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorGetDefaultSize");
      XcursorSetTheme_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSetTheme");
      XcursorGetTheme_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorGetTheme");
      XcursorGetThemeCore_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorGetThemeCore");
      XcursorSetThemeCore_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSetThemeCore");
    }
    else {
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorImageDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorImageDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorImagesCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorImagesCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorImagesDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorImagesDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorImagesSetName_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesSetName");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorImagesSetName_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesSetName");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorCursorsCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCursorsCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorCursorsCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCursorsCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorCursorsDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCursorsDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorCursorsDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCursorsDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorAnimateCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorAnimateCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorAnimateCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorAnimateCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorAnimateDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorAnimateDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorAnimateDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorAnimateDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorAnimateNext_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorAnimateNext");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorAnimateNext_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorAnimateNext");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorCommentCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorCommentCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorCommentDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorCommentDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorCommentsCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentsCreate");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorCommentsCreate_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentsCreate");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorCommentsDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentsDestroy");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorCommentsDestroy_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorCommentsDestroy");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorXcFileLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileLoadImage");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorXcFileLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileLoadImage");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorXcFileLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileLoadImages")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorXcFileLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileLoadImages")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorXcFileLoadAllImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorXcFileLoadAllImages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorXcFileLoadAllImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorXcFileLoadAllImages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorXcFileLoad_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileLoad");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorXcFileLoad_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileLoad");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorXcFileSave_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileSave");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorXcFileSave_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorXcFileSave");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFileLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoadImage");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFileLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoadImage");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFileLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoadImages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFileLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoadImages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFileLoadAllImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFileLoadAllImages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFileLoadAllImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFileLoadAllImages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFileLoad_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoad");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFileLoad_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileLoad");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFileSaveImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileSaveImages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFileSaveImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileSaveImages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFileSave_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileSave");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFileSave_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFileSave");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFilenameLoadImage_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadImage");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFilenameLoadImage_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadImage");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFilenameLoadImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadImages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFilenameLoadImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadImages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFilenameLoadAllImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadAllImages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFilenameLoadAllImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadAllImages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFilenameLoad_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFilenameLoad");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFilenameLoad_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFilenameLoad");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFilenameSaveImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameSaveImages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFilenameSaveImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameSaveImages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFilenameSave_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFilenameSave");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFilenameSave_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorFilenameSave");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorLibraryLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryLoadImage")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorLibraryLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryLoadImage")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorLibraryLoadImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorLibraryLoadImages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorLibraryLoadImages_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorLibraryLoadImages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorLibraryPath_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryPath");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorLibraryPath_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryPath");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorLibraryShape_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryShape");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorLibraryShape_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorLibraryShape");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorImageLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageLoadCursor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorImageLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageLoadCursor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorImagesLoadCursors_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorImagesLoadCursors");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorImagesLoadCursors_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorImagesLoadCursors");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorImagesLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesLoadCursor")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorImagesLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImagesLoadCursor")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFilenameLoadCursor_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadCursor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFilenameLoadCursor_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadCursor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorFilenameLoadCursors_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadCursors");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorFilenameLoadCursors_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorFilenameLoadCursors");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorLibraryLoadCursor_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorLibraryLoadCursor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorLibraryLoadCursor_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorLibraryLoadCursor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorLibraryLoadCursors_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorLibraryLoadCursors");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorLibraryLoadCursors_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorLibraryLoadCursors");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorShapeLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadImage");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorShapeLoadImage_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadImage");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorShapeLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadImages");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorShapeLoadImages_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadImages");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorShapeLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadCursor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorShapeLoadCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadCursor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorShapeLoadCursors_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadCursors")
        ;
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorShapeLoadCursors_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorShapeLoadCursors")
        ;
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorTryShapeCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorTryShapeCursor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorTryShapeCursor_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorTryShapeCursor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorNoticeCreateBitmap_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorNoticeCreateBitmap");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorNoticeCreateBitmap_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorNoticeCreateBitmap");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorNoticePutBitmap_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorNoticePutBitmap");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorNoticePutBitmap_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorNoticePutBitmap");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorTryShapeBitmapCursor_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorTryShapeBitmapCursor");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorTryShapeBitmapCursor_dylibloader_wrapper_xcursor =
             dlsym(lVar1,"XcursorTryShapeBitmapCursor");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorImageHash_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageHash");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorImageHash_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorImageHash");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorSupportsARGB_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSupportsARGB");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorSupportsARGB_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSupportsARGB");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorSupportsAnim_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSupportsAnim");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorSupportsAnim_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSupportsAnim");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorSetDefaultSize_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSetDefaultSize");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorSetDefaultSize_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSetDefaultSize");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorGetDefaultSize_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorGetDefaultSize");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorGetDefaultSize_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorGetDefaultSize");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorSetTheme_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSetTheme");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorSetTheme_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSetTheme");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorGetTheme_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorGetTheme");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorGetTheme_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorGetTheme");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorGetThemeCore_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorGetThemeCore");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorGetThemeCore_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorGetThemeCore");
      }
      lVar2 = dlerror();
      if (lVar2 == 0) {
        XcursorSetThemeCore_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSetThemeCore");
      }
      else {
        __fprintf_chk(_stderr,2,&_LC1,lVar2);
        XcursorSetThemeCore_dylibloader_wrapper_xcursor = dlsym(lVar1,"XcursorSetThemeCore");
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


