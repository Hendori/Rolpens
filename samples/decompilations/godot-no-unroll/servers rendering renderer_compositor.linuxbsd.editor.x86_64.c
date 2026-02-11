
/* RendererCompositor::is_xr_enabled() const */

RendererCompositor __thiscall RendererCompositor::is_xr_enabled(RendererCompositor *this)

{
  return this[8];
}



/* RendererCompositor::create() */

void RendererCompositor::create(void)

{
                    /* WARNING: Could not recover jumptable at 0x00100014. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*_create_func)();
  return;
}



/* RendererCompositor::RendererCompositor() */

void __thiscall RendererCompositor::RendererCompositor(RendererCompositor *this)

{
  RendererCompositor RVar1;
  int iVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  bVar3 = singleton == (RendererCompositor *)0x0;
  *(undefined2 *)(this + 8) = 0;
  *(undefined ***)this = &PTR___cxa_pure_virtual_00100298;
  if (bVar3) {
    singleton = this;
    iVar2 = XRServer::get_xr_mode();
    if (iVar2 == 0) {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_50,"xr/shaders/enabled",false);
      ProjectSettings::get_setting_with_override((StringName *)local_48);
      RVar1 = (RendererCompositor)Variant::operator_cast_to_bool((Variant *)local_48);
      this[8] = RVar1;
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
    }
    else {
      iVar2 = XRServer::get_xr_mode();
      this[8] = (RendererCompositor)(iVar2 == 2);
    }
  }
  else {
    _err_print_error("RendererCompositor","servers/rendering/renderer_compositor.cpp",0x32,
                     "Condition \"singleton != nullptr\" is true.",
                     "A RendererCompositor singleton already exists.",0,0);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RendererCompositor::~RendererCompositor() */

void __thiscall RendererCompositor::~RendererCompositor(RendererCompositor *this)

{
  singleton = 0;
  return;
}



/* RendererCompositor::~RendererCompositor() */

void __thiscall RendererCompositor::~RendererCompositor(RendererCompositor *this)

{
  singleton = 0;
  operator_delete(this,0x10);
  return;
}


