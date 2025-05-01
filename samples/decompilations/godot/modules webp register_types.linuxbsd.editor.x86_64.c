
/* initialize_webp_module(ModuleInitializationLevel) */

void initialize_webp_module(int param_1)

{
  char cVar1;
  ImageLoaderWebP *this;
  Object *pOVar2;
  ResourceSaverWebP *this_00;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 2) goto LAB_00100023;
  this = (ImageLoaderWebP *)operator_new(0x180,"");
  ImageLoaderWebP::ImageLoaderWebP(this);
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  pOVar2 = image_loader_webp;
  if (cVar1 == '\0') {
    if (image_loader_webp != (Object *)0x0) {
      image_loader_webp = (Object *)0x0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        this = (ImageLoaderWebP *)0x0;
        cVar1 = predelete_handler(pOVar2);
        if (cVar1 != '\0') goto LAB_00100362;
      }
      goto LAB_001000a6;
    }
LAB_001000e4:
    local_38 = (Object *)0x0;
  }
  else {
    pOVar3 = image_loader_webp;
    if (this != (ImageLoaderWebP *)image_loader_webp) {
      image_loader_webp = (Object *)this;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        image_loader_webp = (Object *)0x0;
      }
      pOVar3 = (Object *)this;
      if (((pOVar2 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
LAB_00100362:
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
        pOVar3 = (Object *)this;
        if (this == (ImageLoaderWebP *)0x0) goto LAB_001000a6;
      }
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
LAB_001000a6:
    local_38 = (Object *)0x0;
    if (((image_loader_webp != (Object *)0x0) &&
        (pOVar2 = (Object *)
                  __dynamic_cast(image_loader_webp,&Object::typeinfo,&ImageFormatLoader::typeinfo,0)
        , pOVar2 != (Object *)0x0)) &&
       (local_38 = pOVar2, cVar1 = RefCounted::reference(), cVar1 == '\0')) goto LAB_001000e4;
  }
  ImageLoader::add_image_format_loader(&local_38);
  if (((local_38 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar2 = local_38, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_38), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  this_00 = (ResourceSaverWebP *)operator_new(0x1f8,"");
  ResourceSaverWebP::ResourceSaverWebP(this_00);
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  pOVar2 = (Object *)resource_saver_webp;
  if (cVar1 == '\0') {
    if (resource_saver_webp != (ResourceSaverWebP *)0x0) {
      resource_saver_webp = (ResourceSaverWebP *)0x0;
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      goto LAB_0010016b;
    }
LAB_001001a2:
    local_38 = (Object *)0x0;
  }
  else {
    pOVar3 = (Object *)resource_saver_webp;
    if (this_00 != resource_saver_webp) {
      resource_saver_webp = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        resource_saver_webp = (ResourceSaverWebP *)0x0;
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
LAB_0010016b:
    local_38 = (Object *)0x0;
    if (((resource_saver_webp != (ResourceSaverWebP *)0x0) &&
        (pOVar2 = (Object *)
                  __dynamic_cast(resource_saver_webp,&Object::typeinfo,
                                 &ResourceFormatSaver::typeinfo,0), pOVar2 != (Object *)0x0)) &&
       (local_38 = pOVar2, cVar1 = RefCounted::reference(), cVar1 == '\0')) goto LAB_001001a2;
  }
  ResourceSaver::add_resource_format_saver(&local_38);
  if (((local_38 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar2 = local_38, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_38), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
LAB_00100023:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* uninitialize_webp_module(ModuleInitializationLevel) */

void uninitialize_webp_module(int param_1)

{
  char cVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 2) {
    local_28 = (Object *)0x0;
    if (image_loader_webp != (Object *)0x0) {
      pOVar2 = (Object *)
               __dynamic_cast(image_loader_webp,&Object::typeinfo,&ImageFormatLoader::typeinfo,0);
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
    if (image_loader_webp != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      pOVar2 = image_loader_webp;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(image_loader_webp);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    local_28 = (Object *)0x0;
    image_loader_webp = (Object *)0x0;
    if (resource_saver_webp != (Object *)0x0) {
      pOVar2 = (Object *)
               __dynamic_cast(resource_saver_webp,&Object::typeinfo,&ResourceFormatSaver::typeinfo,0
                             );
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
    if (resource_saver_webp != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      pOVar2 = resource_saver_webp;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(resource_saver_webp);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    resource_saver_webp = (Object *)0x0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<ResourceSaverWebP>::~Ref() */

void __thiscall Ref<ResourceSaverWebP>::~Ref(Ref<ResourceSaverWebP> *this)

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



/* Ref<ImageLoaderWebP>::~Ref() */

void __thiscall Ref<ImageLoaderWebP>::~Ref(Ref<ImageLoaderWebP> *this)

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
/* Ref<ImageLoaderWebP>::~Ref() */

void __thiscall Ref<ImageLoaderWebP>::~Ref(Ref<ImageLoaderWebP> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* Ref<ResourceSaverWebP>::~Ref() */

void __thiscall Ref<ResourceSaverWebP>::~Ref(Ref<ResourceSaverWebP> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


