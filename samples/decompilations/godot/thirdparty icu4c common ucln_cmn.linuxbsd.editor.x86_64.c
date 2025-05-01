
void ucln_cleanupOne_76_godot(int param_1)

{
  if ((code *)(&gLibCleanupFunctions)[param_1] != (code *)0x0) {
    (*(code *)(&gLibCleanupFunctions)[param_1])();
    (&gLibCleanupFunctions)[param_1] = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ucln_common_registerCleanup_76_godot(uint param_1,undefined8 param_2)

{
  if (param_1 == 0x1c) {
    _DAT_00100260 = param_2;
    return;
  }
  if (0x1c < param_1) {
    return;
  }
  umtx_lock_76_godot(0);
  (&gCommonCleanupFunctions)[(int)param_1] = param_2;
  umtx_unlock_76_godot(0);
  return;
}



void ucln_registerCleanup_76_godot(uint param_1,undefined8 param_2)

{
  if (param_1 < 8) {
    (&gLibCleanupFunctions)[(int)param_1] = param_2;
  }
  return;
}



undefined8 ucln_lib_cleanup_76_godot(void)

{
  undefined8 *puVar1;
  
  puVar1 = &gLibCleanupFunctions;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 != &gCommonCleanupFunctions);
  puVar1 = &gCommonCleanupFunctions;
  do {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  } while ((NoteGnuProperty_4 *)puVar1 != &NoteGnuProperty_4_00100268);
  return 1;
}



void u_cleanup_76_godot(void)

{
  umtx_lock_76_godot(0);
  umtx_unlock_76_godot(0);
  ucln_lib_cleanup_76_godot();
  cmemory_cleanup_76_godot();
  utrace_cleanup_76_godot();
  return;
}


