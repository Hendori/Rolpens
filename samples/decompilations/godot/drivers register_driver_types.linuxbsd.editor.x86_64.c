
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* register_core_driver_types() */

void register_core_driver_types(void)

{
  char cVar1;
  ImageLoaderPNG *this;
  Object *pOVar2;
  ResourceSaverPNG *this_00;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this = (ImageLoaderPNG *)operator_new(0x180,"");
  ImageLoaderPNG::ImageLoaderPNG(this);
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  pOVar2 = image_loader_png;
  if (cVar1 == '\0') {
    if (image_loader_png != (Object *)0x0) {
      image_loader_png = (Object *)0x0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        this = (ImageLoaderPNG *)0x0;
        cVar1 = predelete_handler(pOVar2);
        if (cVar1 != '\0') {
LAB_00100382:
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
          pOVar3 = (Object *)this;
          if (this != (ImageLoaderPNG *)0x0) goto LAB_00100206;
        }
      }
      goto LAB_00100080;
    }
LAB_001002e0:
    local_38 = (Object *)0x0;
  }
  else {
    pOVar3 = image_loader_png;
    if (this != (ImageLoaderPNG *)image_loader_png) {
      image_loader_png = (Object *)this;
      cVar1 = RefCounted::reference();
      pOVar3 = (Object *)this;
      if (cVar1 == '\0') {
        image_loader_png = (Object *)0x0;
        if (pOVar2 != (Object *)0x0) {
          cVar1 = RefCounted::unreference();
joined_r0x00100303:
          if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0'))
          goto LAB_00100382;
        }
      }
      else if (pOVar2 != (Object *)0x0) {
        cVar1 = RefCounted::unreference();
        goto joined_r0x00100303;
      }
    }
LAB_00100206:
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
LAB_00100080:
    local_38 = (Object *)0x0;
    if (((image_loader_png != (Object *)0x0) &&
        (pOVar2 = (Object *)
                  __dynamic_cast(image_loader_png,&Object::typeinfo,&ImageFormatLoader::typeinfo,0),
        pOVar2 != (Object *)0x0)) &&
       (local_38 = pOVar2, cVar1 = RefCounted::reference(), cVar1 == '\0')) goto LAB_001002e0;
  }
  ImageLoader::add_image_format_loader(&local_38);
  if (((local_38 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar2 = local_38, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_38), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  this_00 = (ResourceSaverPNG *)operator_new(0x1f8,"");
  ResourceSaverPNG::ResourceSaverPNG(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  pOVar2 = resource_saver_png;
  if (cVar1 == '\0') {
    if (resource_saver_png != (Object *)0x0) {
      resource_saver_png = (Object *)0x0;
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      goto LAB_00100145;
    }
  }
  else {
    pOVar3 = resource_saver_png;
    if (this_00 != (ResourceSaverPNG *)resource_saver_png) {
      resource_saver_png = (Object *)this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        resource_saver_png = (Object *)0x0;
      }
      pOVar3 = (Object *)this_00;
      if (((pOVar2 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
LAB_00100145:
    local_38 = (Object *)0x0;
    if (((resource_saver_png == (Object *)0x0) ||
        (pOVar2 = (Object *)
                  __dynamic_cast(resource_saver_png,&Object::typeinfo,&ResourceFormatSaver::typeinfo
                                 ,0), pOVar2 == (Object *)0x0)) ||
       (local_38 = pOVar2, cVar1 = RefCounted::reference(), cVar1 != '\0')) goto LAB_00100180;
  }
  local_38 = (Object *)0x0;
LAB_00100180:
  ResourceSaver::add_resource_format_saver(&local_38);
  if (((local_38 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar2 = local_38, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_38), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unregister_core_driver_types() */

void unregister_core_driver_types(void)

{
  char cVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = (Object *)0x0;
  if (image_loader_png != (Object *)0x0) {
    pOVar2 = (Object *)
             __dynamic_cast(image_loader_png,&Object::typeinfo,&ImageFormatLoader::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      local_28 = pOVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_28 = (Object *)0x0;
      }
    }
  }
  ImageLoader::remove_image_format_loader(&local_28);
  if (local_28 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    pOVar2 = local_28;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (image_loader_png != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    pOVar2 = image_loader_png;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(image_loader_png);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  local_28 = (Object *)0x0;
  image_loader_png = (Object *)0x0;
  if (resource_saver_png != (Object *)0x0) {
    pOVar2 = (Object *)
             __dynamic_cast(resource_saver_png,&Object::typeinfo,&ResourceFormatSaver::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      local_28 = pOVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_28 = (Object *)0x0;
      }
    }
  }
  ResourceSaver::remove_resource_format_saver(&local_28);
  if (local_28 != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    pOVar2 = local_28;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_28);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  if (resource_saver_png != (Object *)0x0) {
    cVar1 = RefCounted::unreference();
    pOVar2 = resource_saver_png;
    if (cVar1 != '\0') {
      cVar1 = predelete_handler(resource_saver_png);
      if (cVar1 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
  resource_saver_png = (Object *)0x0;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* register_driver_types() */

void register_driver_types(void)

{
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unregister_driver_types() */

void unregister_driver_types(void)

{
  return;
}



/* Ref<ResourceSaverPNG>::~Ref() */

void __thiscall Ref<ResourceSaverPNG>::~Ref(Ref<ResourceSaverPNG> *this)

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



/* Ref<ImageLoaderPNG>::~Ref() */

void __thiscall Ref<ImageLoaderPNG>::~Ref(Ref<ImageLoaderPNG> *this)

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
/* Ref<ImageLoaderPNG>::~Ref() */

void __thiscall Ref<ImageLoaderPNG>::~Ref(Ref<ImageLoaderPNG> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<ResourceSaverPNG>::~Ref() */

void __thiscall Ref<ResourceSaverPNG>::~Ref(Ref<ResourceSaverPNG> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


