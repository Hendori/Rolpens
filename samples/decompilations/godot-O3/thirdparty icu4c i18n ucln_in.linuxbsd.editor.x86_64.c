
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* i18n_cleanup() */

undefined8 i18n_cleanup(void)

{
  undefined8 *puVar1;
  
  puVar1 = &gCleanupFunctions;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((NoteGnuProperty_4 *)puVar1 != &NoteGnuProperty_4_001001c0);
  return 1;
}



void ucln_i18n_registerCleanup_76_godot(uint param_1,undefined8 param_2)

{
  umtx_lock_76_godot(0);
  ucln_registerCleanup_76_godot(7,0x100000);
  if (param_1 < 0x24) {
    (&gCleanupFunctions)[(int)param_1] = param_2;
  }
  umtx_unlock_76_godot(0);
  return;
}


