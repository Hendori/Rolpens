
void uhash_deleteHashtable_76_godot(UMemory *param_1,void *param_2)

{
  if (param_1 != (UMemory *)0x0) {
    if (*(long *)param_1 != 0) {
      uhash_close_76_godot();
    }
    icu_76_godot::UMemory::operator_delete(param_1,param_2);
    return;
  }
  return;
}


