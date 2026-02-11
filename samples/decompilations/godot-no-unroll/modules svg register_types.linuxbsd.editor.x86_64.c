
/* initialize_svg_module(ModuleInitializationLevel) */

void initialize_svg_module(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  ImageLoaderSVG *this;
  Object *pOVar3;
  Object *pOVar4;
  long in_FS_OFFSET;
  Object *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((int)param_1 != 2) || (iVar2 = tvg::Initializer::init(param_1,1), iVar2 != 0))
  goto LAB_00100021;
  this = (ImageLoaderSVG *)operator_new(0x180,"");
  ImageLoaderSVG::ImageLoaderSVG(this);
  postinitialize_handler((Object *)this);
  cVar1 = RefCounted::init_ref();
  pOVar3 = image_loader_svg;
  if (cVar1 == '\0') {
    if (image_loader_svg != (Object *)0x0) {
      image_loader_svg = (Object *)0x0;
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        this = (ImageLoaderSVG *)0x0;
        cVar1 = predelete_handler(pOVar3);
        if (cVar1 != '\0') goto LAB_001001e2;
      }
      goto LAB_001000a9;
    }
LAB_001000e7:
    local_28 = (Object *)0x0;
  }
  else {
    pOVar4 = image_loader_svg;
    if (this != (ImageLoaderSVG *)image_loader_svg) {
      image_loader_svg = (Object *)this;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        image_loader_svg = (Object *)0x0;
      }
      pOVar4 = (Object *)this;
      if (((pOVar3 != (Object *)0x0) && (cVar1 = RefCounted::unreference(), cVar1 != '\0')) &&
         (cVar1 = predelete_handler(pOVar3), cVar1 != '\0')) {
LAB_001001e2:
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
        pOVar4 = (Object *)this;
        if (this == (ImageLoaderSVG *)0x0) goto LAB_001000a9;
      }
    }
    cVar1 = RefCounted::unreference();
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
LAB_001000a9:
    local_28 = (Object *)0x0;
    if (((image_loader_svg != (Object *)0x0) &&
        (pOVar3 = (Object *)
                  __dynamic_cast(image_loader_svg,&Object::typeinfo,&ImageFormatLoader::typeinfo,0),
        pOVar3 != (Object *)0x0)) &&
       (local_28 = pOVar3, cVar1 = RefCounted::reference(), cVar1 == '\0')) goto LAB_001000e7;
  }
  ImageLoader::add_image_format_loader(&local_28);
  if (((local_28 != (Object *)0x0) &&
      (cVar1 = RefCounted::unreference(), pOVar3 = local_28, cVar1 != '\0')) &&
     (cVar1 = predelete_handler(local_28), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
LAB_00100021:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* uninitialize_svg_module(ModuleInitializationLevel) */

void uninitialize_svg_module(int param_1)

{
  char cVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  Object *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == 2) && (image_loader_svg != (Object *)0x0)) {
    local_18 = (Object *)0x0;
    pOVar2 = (Object *)
             __dynamic_cast(image_loader_svg,&Object::typeinfo,&ImageFormatLoader::typeinfo,0);
    if (pOVar2 != (Object *)0x0) {
      local_18 = pOVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_18 = (Object *)0x0;
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
    if (image_loader_svg != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      pOVar2 = image_loader_svg;
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(image_loader_svg);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
    }
    image_loader_svg = (Object *)0x0;
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      tvg::Initializer::term(2);
      return;
    }
  }
  else if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<ImageLoaderSVG>::~Ref() */

void __thiscall Ref<ImageLoaderSVG>::~Ref(Ref<ImageLoaderSVG> *this)

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
/* Ref<ImageLoaderSVG>::~Ref() */

void __thiscall Ref<ImageLoaderSVG>::~Ref(Ref<ImageLoaderSVG> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


