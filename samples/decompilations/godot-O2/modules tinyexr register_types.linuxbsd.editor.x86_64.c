
/* initialize_tinyexr_module(ModuleInitializationLevel) */

void initialize_tinyexr_module(int param_1)

{
  char cVar1;
  ImageLoaderTinyEXR *this;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 2) goto LAB_00100021;
  this = (ImageLoaderTinyEXR *)operator_new(0x180,"");
  ImageLoaderTinyEXR::ImageLoaderTinyEXR(this);
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  pOVar2 = image_loader_tinyexr;
  if (cVar1 == '\0') {
    if (image_loader_tinyexr != (Object *)0x0) {
      image_loader_tinyexr = (Object *)0x0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        this = (ImageLoaderTinyEXR *)0x0;
        cVar1 = predelete_handler(pOVar2);
        if (cVar1 != '\0') goto LAB_001001f2;
      }
      goto LAB_0010009b;
    }
LAB_001000d9:
    local_28 = (Object *)0x0;
  }
  else {
    pOVar3 = image_loader_tinyexr;
    if (this != (ImageLoaderTinyEXR *)image_loader_tinyexr) {
      image_loader_tinyexr = (Object *)this;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        image_loader_tinyexr = (Object *)0x0;
      }
      pOVar3 = (Object *)this;
      if (((pOVar2 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
LAB_001001f2:
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
        pOVar3 = (Object *)this;
        if (this == (ImageLoaderTinyEXR *)0x0) goto LAB_0010009b;
      }
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
LAB_0010009b:
    local_28 = (Object *)0x0;
    if (((image_loader_tinyexr != (Object *)0x0) &&
        (pOVar2 = (Object *)
                  __dynamic_cast(image_loader_tinyexr,&Object::typeinfo,&ImageFormatLoader::typeinfo
                                 ,0), pOVar2 != (Object *)0x0)) &&
       (local_28 = pOVar2, cVar1 = RefCounted::reference(), cVar1 == '\0')) goto LAB_001000d9;
  }
  ImageLoader::add_image_format_loader(&local_28);
  if (((local_28 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar2 = local_28, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_28), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  Image::save_exr_func = save_exr;
  Image::save_exr_buffer_func = save_exr_buffer;
LAB_00100021:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* uninitialize_tinyexr_module(ModuleInitializationLevel) */

void uninitialize_tinyexr_module(int param_1)

{
  char cVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  Object *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 2) {
    local_18 = (Object *)0x0;
    if (image_loader_tinyexr != (Object *)0x0) {
      pOVar2 = (Object *)
               __dynamic_cast(image_loader_tinyexr,&Object::typeinfo,&ImageFormatLoader::typeinfo,0)
      ;
      if (pOVar2 != (Object *)0x0) {
        local_18 = pOVar2;
        cVar1 = RefCounted::reference();
        if (cVar1 == '\0') {
          local_18 = (Object *)0x0;
        }
      }
    }
    ImageLoader::remove_image_format_loader(&local_18);
    if (local_18 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      pOVar2 = local_18;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(local_18);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    if (image_loader_tinyexr != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      pOVar2 = image_loader_tinyexr;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(image_loader_tinyexr);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    image_loader_tinyexr = (Object *)0x0;
    Image::save_exr_func = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<ImageLoaderTinyEXR>::~Ref() */

void __thiscall Ref<ImageLoaderTinyEXR>::~Ref(Ref<ImageLoaderTinyEXR> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        return;
      }
    }
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<ImageLoaderTinyEXR>::~Ref() */

void __thiscall Ref<ImageLoaderTinyEXR>::~Ref(Ref<ImageLoaderTinyEXR> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


