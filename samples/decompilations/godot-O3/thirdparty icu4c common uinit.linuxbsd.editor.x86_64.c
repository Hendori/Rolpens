
/* icu_76_godot::uinit_cleanup() */

undefined8 icu_76_godot::uinit_cleanup(void)

{
  LOCK();
  gICUInitOnce = 0;
  UNLOCK();
  return 1;
}



void u_init_76_godot(int *param_1)

{
  char cVar1;
  
  if (0 < *param_1) {
    return;
  }
  if (icu_76_godot::gICUInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::gICUInitOnce);
    if (cVar1 != '\0') {
      ucln_common_registerCleanup_76_godot(0x19,0x100000);
      DAT_001000a4 = *param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::gICUInitOnce);
      return;
    }
  }
  if (0 < DAT_001000a4) {
    *param_1 = DAT_001000a4;
  }
  return;
}


