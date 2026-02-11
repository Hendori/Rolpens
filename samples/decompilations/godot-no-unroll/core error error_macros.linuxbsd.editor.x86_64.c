
/* add_error_handler(ErrorHandlerList*) */

void add_error_handler(ErrorHandlerList *param_1)

{
  ErrorHandlerList *pEVar1;
  ErrorHandlerList *pEVar2;
  ErrorHandlerList *pEVar3;
  
  _global_lock();
  pEVar2 = error_handler_list;
  if ((error_handler_list != (ErrorHandlerList *)0x0) &&
     (pEVar1 = error_handler_list, pEVar2 = *(ErrorHandlerList **)(error_handler_list + 0x10),
     param_1 != error_handler_list)) {
    do {
      pEVar3 = pEVar1;
      pEVar1 = *(ErrorHandlerList **)(pEVar3 + 0x10);
      pEVar2 = error_handler_list;
      if (pEVar1 == (ErrorHandlerList *)0x0) goto LAB_00100039;
    } while (param_1 != pEVar1);
    *(undefined8 *)(pEVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
    pEVar2 = error_handler_list;
  }
LAB_00100039:
  error_handler_list = pEVar2;
  _global_unlock();
  _global_lock();
  pEVar2 = param_1;
  *(ErrorHandlerList **)(param_1 + 0x10) = error_handler_list;
  error_handler_list = pEVar2;
  _global_unlock();
  return;
}



/* remove_error_handler(ErrorHandlerList const*) */

void remove_error_handler(ErrorHandlerList *param_1)

{
  ErrorHandlerList *pEVar1;
  ErrorHandlerList *pEVar2;
  
  _global_lock();
  if (error_handler_list != (ErrorHandlerList *)0x0) {
    pEVar1 = error_handler_list;
    if (error_handler_list == param_1) {
      error_handler_list = *(ErrorHandlerList **)(error_handler_list + 0x10);
      _global_unlock();
      return;
    }
    while (pEVar2 = pEVar1, pEVar1 = *(ErrorHandlerList **)(pEVar2 + 0x10),
          pEVar1 != (ErrorHandlerList *)0x0) {
      if (param_1 == pEVar1) {
        *(undefined8 *)(pEVar2 + 0x10) = *(undefined8 *)(param_1 + 0x10);
        _global_unlock();
        return;
      }
    }
  }
  _global_unlock();
  return;
}


